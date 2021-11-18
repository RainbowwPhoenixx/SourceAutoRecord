#pragma once

#include "Command.hpp"
#include "Hud.hpp"
#include "Variable.hpp"

class PortalPlacementHud : public Hud {
public:
    PortalPlacementHud();
    bool ShouldDraw() override;
	void Paint(int slot) override;
	bool GetCurrentSize(int &xSize, int &ySize) override;
};

extern PortalPlacementHud portalplacementHud;

extern Variable sar_portalplacement;
extern Variable sar_portalplacement_x;
extern Variable sar_portalplacement_y;
extern Variable sar_portalplacement_font;
