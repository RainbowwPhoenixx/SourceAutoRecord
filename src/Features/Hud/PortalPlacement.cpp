#include "PortalPlacement.hpp"

#include "Command.hpp"
#include "Variable.hpp"
#include "Event.hpp"
#include "Features/Session.hpp"
#include "Modules/Client.hpp"
#include "Modules/Console.hpp"
#include "Modules/Engine.hpp"
#include "Modules/Server.hpp"
#include "Modules/Scheme.hpp"
#include "Modules/Surface.hpp"
#include "Features/Hud/Hud.hpp" 
#include "Features/EntityList.hpp"

#include <string>

PortalPlacementHud portalplacementHud;

Variable sar_portalplacement("sar_portalplacement", "0", 0, "Enables or disables the portals placement display.\n");
Variable sar_portalplacement_x("sar_portalplacement_x", "5", "x pos of portal placement hud.\n", 0);
Variable sar_portalplacement_y("sar_portalplacement_y", "5", "y pos of portal placement hud.\n", 0);
Variable sar_portalplacement_font("sar_portalplacement_font", "0", 0, "Change font of portal placement hud.\n");

bool g_hasPortalGun;
bool g_canPlaceBlue;
bool g_canPlaceOrange;
TracePortalPlacementInfo_t g_bluePlacementInfo;
TracePortalPlacementInfo_t g_orangePlacementInfo;

PortalPlacementHud::PortalPlacementHud()
	: Hud(HudType_InGame, true) {
}
bool PortalPlacementHud::ShouldDraw() {
	bool shouldDraw = sv_cheats.GetBool() && sar_portalplacement.GetBool() && Hud::ShouldDraw();
	return shouldDraw;
}
void PortalPlacementHud::Paint(int slot) {
    auto font = scheme->GetDefaultFont() + sar_portalplacement_font.GetInt();

	int cX = PositionFromString(sar_portalplacement_x.GetString(), true);
	int cY = PositionFromString(sar_portalplacement_y.GetString(), false);
	int charHeight = surface->GetFontHeight(font);
    int padding = 5;

    auto white =  Color(255,255,255,255);
    auto gray =   Color(150,150,150,255);
    auto blue =   Color(111,184,255,255);
    auto orange = Color(255,184, 86,255);

    surface->DrawTxt(font, cX, cY, white, "Portal placement HUD");
    cY += charHeight + padding;

    if (!g_hasPortalGun) {
        surface->DrawTxt(font, cX, cY, gray, "No portal gun");
        return;
    }

    auto drawPlacementInfo = [&](Color portalColor, TracePortalPlacementInfo_t info, const char *name) {
        int x = cX + 15; // indented x
        std::string result;
        switch (info.ePlacementResult) {
        // Success
        case PORTAL_PLACEMENT_SUCCESS:     result = "Success";             break;
        case PORTAL_PLACEMENT_USED_HELPER: result = "Success with helper"; break;
        case PORTAL_PLACEMENT_BUMPED:      result = "Success with bump";   break;
        
        // Fail
        case PORTAL_PLACEMENT_CANT_FIT:               result = "Can't fit";                break;
        case PORTAL_PLACEMENT_CLEANSER:               result = "Fizzler";                  break;
        case PORTAL_PLACEMENT_OVERLAP_LINKED:         result = "Overlaps existing portal"; break;
        case PORTAL_PLACEMENT_OVERLAP_PARTNER_PORTAL: result = "Overlaps partner portal";  break;
        case PORTAL_PLACEMENT_INVALID_VOLUME:         result = "Invalid volume";           break;
        case PORTAL_PLACEMENT_INVALID_SURFACE:        result = "Invalid surface";          break;
        case PORTAL_PLACEMENT_PASSTHROUGH_SURFACE:    result = "Passthrough surface";      break;
        default: result = "Unknown result"; break;
        }

        auto color = info.ePlacementResult<=2 ? portalColor : gray;
        // auto color = canPlace ? portalColor : gray;
        // result = canPlace ? "yes" : "no";

        surface->DrawTxt(font, cX, cY, color, "%s: %s", name, result.c_str());
        cY += charHeight + padding;
    };

    drawPlacementInfo(blue, g_bluePlacementInfo, "Blue");
    drawPlacementInfo(orange, g_orangePlacementInfo, "Orange");
}
bool PortalPlacementHud::GetCurrentSize(int &xSize, int &ySize) {
    return false;
}

// sv_cheats 1; sar_portalplacement 1; sar_portalplacement_x 500

ON_EVENT(PRE_TICK) {
    // update portal placement info
    // Not coop because I cba
	if (sv_cheats.GetBool() && !engine->IsCoop() && sar_portalplacement.GetBool()) {
		void *player = server->GetPlayer(GET_SLOT() + 1);

		if (player == nullptr || (int)player == -1)
			return;

		Vector camPos = server->GetAbsOrigin(player) + server->GetViewOffset(player);
		QAngle angle = engine->GetAngles(GET_SLOT());

		float X = DEG2RAD(angle.x), Y = DEG2RAD(angle.y);
		auto cosX = std::cos(X), cosY = std::cos(Y);
		auto sinX = std::sin(X), sinY = std::sin(Y);

		Vector dir(cosY * cosX, sinY * cosX, -sinX);

		// Get all the stuffs
		auto m_hActiveWeapon = *(CBaseHandle *)((uintptr_t)player + Offsets::m_hActiveWeapon);
		uintptr_t portalgun = (uintptr_t)entityList->LookupEntity(m_hActiveWeapon);
        g_hasPortalGun = portalgun != NULL;
		if (!g_hasPortalGun)
			return;

		uint8_t linkage = *(unsigned char *)(portalgun + Offsets::m_iPortalLinkageGroupID);

		auto m_hPrimaryPortal = *(CBaseHandle *)(portalgun + Offsets::m_hPrimaryPortal);
		auto m_hSecondaryPortal = *(CBaseHandle *)(portalgun + Offsets::m_hSecondaryPortal);
		auto bluePortal = (uintptr_t)entityList->LookupEntity(m_hPrimaryPortal);
		auto orangePortal = (uintptr_t)entityList->LookupEntity(m_hSecondaryPortal);
		bool createBlue = bluePortal == NULL;
		bool createOrange = orangePortal == NULL;

		if (createBlue) {
			// spawn the portal
			bluePortal = (uintptr_t)server->CreateEntityByName(nullptr,  "prop_portal");
			*(uint8_t *)(bluePortal + Offsets::m_iLinkageGroupID) = linkage;
			*(bool *)(bluePortal + Offsets::m_bIsPortal2) = 0;
			server->DispatchSpawn(nullptr, (void*)bluePortal);
		}
		if (createOrange) {
			// spawn the portal
			orangePortal = (uintptr_t)server->CreateEntityByName(nullptr, "prop_portal");
			*(uint8_t *)(orangePortal + Offsets::m_iLinkageGroupID) = linkage;
			*(bool *)(orangePortal + Offsets::m_bIsPortal2) = 1;
			server->DispatchSpawn(nullptr, (void*)orangePortal);
		}

		// Check blue
		g_canPlaceBlue = server->TraceFirePortal(portalgun, camPos, dir, 0, 2, g_bluePlacementInfo);
		// Check Orange
		g_canPlaceOrange = server->TraceFirePortal(portalgun, camPos, dir, 1, 2, g_orangePlacementInfo);

		if (createBlue)
			server->KillEntity((void*)bluePortal);
		if (createOrange)
			server->KillEntity((void*)orangePortal);
    }
}
