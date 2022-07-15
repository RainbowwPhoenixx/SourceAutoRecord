
// CCvar
OFFSET_DEFAULT(RegisterConCommand, 9, 9)
OFFSET_DEFAULT(UnregisterConCommand, 10, 10)
OFFSET_DEFAULT(FindCommandBase, 13, 13)
OFFSET_DEFAULT(InstallGlobalChangeCallback, 19, 19)
OFFSET_DEFAULT(RemoveGlobalChangeCallback, 20, 20)
OFFSET_DEFAULT(m_pConCommandList, 48, 48)
OFFSET_DEFAULT(m_DisplayFuncs, 24, 24)

// ConCommandBase
OFFSET_DEFAULT(IsCommand, 1, 2)

// CEngineClient
OFFSET_DEFAULT(GetScreenSize, 5, 5)
OFFSET_DEFAULT(ClientCmd, 7, 7)
OFFSET_DEFAULT(GetLocalPlayer, 12, 12)
OFFSET_DEFAULT(GetGameDirectory, 35, 35)
OFFSET_DEFAULT(GetViewAngles, 18, 18)
OFFSET_DEFAULT(SetViewAngles, 19, 19)
OFFSET_DEFAULT(GetMaxClients, 20, 20)
OFFSET_EMPTY(ServerCmdKeyValues)
OFFSET_DEFAULT(GetSaveDirName, 124, 124)
OFFSET_DEFAULT(ExecuteClientCmd, 104, 104)
OFFSET_DEFAULT(GetActiveSplitScreenPlayerSlot, 127, 127)
OFFSET_DEFAULT(GetSteamAPIContext, 177, 178)
OFFSET_DEFAULT(IsPaused, 86, 86)
OFFSET_DEFAULT(DebugDrawPhysCollide, 75, 75)
OFFSET_DEFAULT(Con_IsVisible, 11, 11)
OFFSET_DEFAULT(GetLevelNameShort, 53, 53)
OFFSET_DEFAULT(GetLightForPoint, 1, 1)

// CHLClient
OFFSET_DEFAULT(GetAllClasses, 8, 8)
OFFSET_DEFAULT(HudProcessInput, 10, 10)
OFFSET_DEFAULT(IN_ActivateMouse, 15, 15)
OFFSET_DEFAULT(IN_DeactivateMouse, 16, 16)
OFFSET_DEFAULT(SteamControllerMove, 58, 58)
OFFSET_DEFAULT(JoyStickApplyMovement, 64, 64)
OFFSET_DEFAULT(LevelInitPreEntity, 5, 5)

// ClientModeShared
OFFSET_DEFAULT(CreateMove, 24, 25)
OFFSET_DEFAULT(OverrideView, 18, 19)

// ConVar
OFFSET_DEFAULT(Dtor, 9, 0)
OFFSET_DEFAULT(InternalSetValue, 12, 19)
OFFSET_DEFAULT(InternalSetFloatValue, 13, 20)
OFFSET_DEFAULT(InternalSetIntValue, 14, 21)
OFFSET_DEFAULT(Create, 27, 25)

// CMatSystemSurface
OFFSET_DEFAULT(DrawSetColor, 14, 13)
OFFSET_DEFAULT(DrawFilledRect, 15, 15)
OFFSET_DEFAULT(DrawColoredCircle, 159, 159)
OFFSET_DEFAULT(DrawLine, 18, 18)
OFFSET_DEFAULT(DrawSetTextFont, 22, 22)
OFFSET_DEFAULT(DrawSetTextColor, 23, 24)
OFFSET_DEFAULT(GetFontTall, 72, 72)
OFFSET_DEFAULT(PaintTraverseEx, 117, 117)
OFFSET_DEFAULT(DrawColoredText, 160, 160)
OFFSET_DEFAULT(DrawTextLen, 163, 163)
OFFSET_DEFAULT(GetKernedCharWidth, 147, 147)
OFFSET_DEFAULT(GetFontName, 132, 132)
OFFSET_DEFAULT(FontManager, 8, 16)
OFFSET_DEFAULT(DrawSetTextureFile, 35, 35)
OFFSET_DEFAULT(DrawSetTextureRGBA, 36, 36)
OFFSET_DEFAULT(DrawSetTexture, 37, 37)
OFFSET_DEFAULT(DrawGetTextureSize, 38, 38)
OFFSET_DEFAULT(DrawTexturedRect, 39, 39)
OFFSET_DEFAULT(IsTextureIDValid, 40, 40)
OFFSET_DEFAULT(CreateNewTextureID, 41, 41)

// CInputSystem
OFFSET_DEFAULT(StringToButtonCode, 31, 31)
OFFSET_DEFAULT(SleepUntilInput, 33, 33)
OFFSET_DEFAULT(IsButtonDown, 14, 14)
OFFSET_DEFAULT(GetCursorPosition, 45, 45)
OFFSET_DEFAULT(SetCursorPosition, 38, 38)

// CInput
OFFSET_DEFAULT(GetButtonBits, 2, 2)
OFFSET_DEFAULT(ActivateMouse, 27, 27)
OFFSET_DEFAULT(DeactivateMouse, 28, 28)
OFFSET_DEFAULT(DecodeUserCmdFromBuffer, 7, 7)

// CGameMovement
OFFSET_DEFAULT(PlayerMove, 17, 16)
OFFSET_DEFAULT(AirAccelerate, 24, 23)
OFFSET_DEFAULT(AirMove, 25, 24)
OFFSET_DEFAULT(FinishGravity, 34, 35)
OFFSET_DEFAULT(CheckJumpButton, 36, 37)
OFFSET_DEFAULT(FullTossMove, -1, 38)
OFFSET_DEFAULT(mv, 8, 8)
OFFSET_DEFAULT(player, 4, 4)
OFFSET_DEFAULT(ProcessMovement, 1, 2)
OFFSET_DEFAULT(GetPlayerViewOffset, 8, 9)

// CDemoRecorder
OFFSET_DEFAULT(GetRecordingTick, 1, 1)
OFFSET_DEFAULT(SetSignonState, 3, 3)
OFFSET_DEFAULT(StartRecording, 2, 2)
OFFSET_DEFAULT(StopRecording, 7, 7)
OFFSET_DEFAULT(RecordCustomData, 14, 14)
OFFSET_DEFAULT(RecordCommand, 8, 8)
OFFSET_DEFAULT(m_szDemoBaseName, 1344, 1344)
OFFSET_DEFAULT(m_bRecording, 1606, 1606)
OFFSET_DEFAULT(m_nDemoNumber, 1608, 1608)

// CDemoPlayer
OFFSET_DEFAULT(GetPlaybackTick, 3, 4)
OFFSET_DEFAULT(StartPlayback, 5, 6)
OFFSET_DEFAULT(StopPlayback, 16, 17)
OFFSET_DEFAULT(IsPlayingBack, 6, 7)
OFFSET_DEFAULT(IsPlaybackPaused, 7, 8)
OFFSET_DEFAULT(IsSkipping, 9, 10)
OFFSET_DEFAULT(SkipToTick, 13, 14)
OFFSET_DEFAULT(m_szFileName, 4, 4)

// CClientState
OFFSET_DEFAULT(ProcessTick, 1, 12)
OFFSET_DEFAULT(Disconnect, 16, 37)
OFFSET_DEFAULT(viewangles, 19040, 19012)

// C_BaseEntity
OFFSET_DEFAULT(C_m_vecAbsOrigin, 156, 136)
OFFSET_DEFAULT(C_m_angAbsRotation, 192, 172)
OFFSET_EMPTY(C_m_vecVelocity)
OFFSET_EMPTY(C_m_vecViewOffset)

// CBaseEntity
OFFSET_DEFAULT(S_m_vecAbsVelocity, 364, 372)
OFFSET_DEFAULT(S_m_vecAbsOrigin, 460, 468)
OFFSET_DEFAULT(S_m_angAbsRotation, 472, 480)
OFFSET_EMPTY(S_m_vecVelocity)
OFFSET_DEFAULT(m_iEFlags, 200, 208)
OFFSET_EMPTY(m_flMaxspeed)
OFFSET_DEFAULT(m_flGravity, 772, 792)
OFFSET_DEFAULT(m_takedamage, 554, 574)
OFFSET_EMPTY(S_m_vecViewOffset)
OFFSET_DEFAULT(IsPlayer, 85, 86)
OFFSET_DEFAULT(AcceptInput, 40, 41)
OFFSET_EMPTY(S_m_Collision)

// CBasePlayer
OFFSET_EMPTY(m_fFlags)
OFFSET_DEFAULT(m_MoveType, 218, 226)
OFFSET_EMPTY(m_nWaterLevel)
OFFSET_EMPTY(S_m_bDucked)
OFFSET_EMPTY(m_flFriction)
OFFSET_DEFAULT(m_pSurfaceData, 3868, 4116)
OFFSET_DEFAULT(m_pShadowStand, 3160, 3184)
OFFSET_DEFAULT(m_pShadowCrouch, 3164, 3188)
OFFSET_EMPTY(S_m_hGroundEntity)
OFFSET_EMPTY(C_m_hGroundEntity)
OFFSET_EMPTY(m_iBonusChallenge)
OFFSET_DEFAULT(m_surfaceFriction, 4096, 4120)
OFFSET_EMPTY(m_nTickBase)
OFFSET_EMPTY(m_InAirState)
OFFSET_EMPTY(C_m_bDucked)
OFFSET_EMPTY(C_m_bDucking)
OFFSET_EMPTY(C_m_bInDuckJump)
OFFSET_EMPTY(C_m_nDuckTimeMsecs)
OFFSET_EMPTY(C_m_nDuckJumpTimeMsecs)
OFFSET_EMPTY(S_m_nJumpTimeMsecs)
OFFSET_EMPTY(S_m_LastCmd)
OFFSET_EMPTY(C_pl)
OFFSET_EMPTY(S_pl)

// CPaintSprayer
OFFSET_EMPTY(S_m_nBlobRandomSeed)

// CPortal_Player
OFFSET_EMPTY(C_m_PortalLocal)
OFFSET_EMPTY(S_m_PortalLocal)
OFFSET_EMPTY(iNumPortalsPlaced)
OFFSET_DEFAULT(GetPaintPower, 2, 513)
OFFSET_DEFAULT(UseSpeedPower, 509, 519)
OFFSET_EMPTY(S_m_StatsThisLevel)
OFFSET_EMPTY(C_m_StatsThisLevel)
OFFSET_EMPTY(m_lifeState)
OFFSET_EMPTY(C_m_hPortalEnvironment)
OFFSET_EMPTY(S_m_hPortalEnvironment)
OFFSET_DEFAULT(PlayerRunCommand, 453, 454)
OFFSET_EMPTY(S_m_nPlayerCond)
OFFSET_EMPTY(C_m_nPlayerCond)

// CWeaponPortalgun
OFFSET_EMPTY(m_bCanFirePortal1)
OFFSET_EMPTY(m_bCanFirePortal2)
OFFSET_EMPTY(m_hPrimaryPortal)
OFFSET_EMPTY(m_hSecondaryPortal)
OFFSET_DEFAULT(m_iPortalLinkageGroupID, 385, 391)

// CProp_Portal
OFFSET_EMPTY(m_bActivated)
OFFSET_EMPTY(m_bIsPortal2)
OFFSET_EMPTY(m_hActiveWeapon)
OFFSET_EMPTY(C_m_ptOrigin)
OFFSET_EMPTY(S_m_ptOrigin)
OFFSET_DEFAULT(C_m_vPortalForward, 4128, 4104)
OFFSET_EMPTY(S_m_vForward)
OFFSET_DEFAULT(C_m_matrixThisToLinked, 3516, 3492)
OFFSET_DEFAULT(S_m_matrixThisToLinked, 1220, 1244)
OFFSET_EMPTY(C_m_hLinkedPortal)
OFFSET_EMPTY(m_hFiredByPlayer)

// IEngineVGuiInternal
OFFSET_DEFAULT(IsGameUIVisible, 2, 2)
OFFSET_DEFAULT(Paint, 14, 15)

// IEngineTrace
OFFSET_DEFAULT(TraceRay, 5, 5)

// CEngineTool
OFFSET_DEFAULT(GetCurrentMap, 25, 26)
OFFSET_DEFAULT(HostFrameTime, 39, 40)
OFFSET_DEFAULT(ClientTime, 47, 48)
OFFSET_DEFAULT(PrecacheModel, 61, 61)
OFFSET_DEFAULT(ClientTick, 49, 50)
OFFSET_DEFAULT(ServerTick, 45, 46)
OFFSET_DEFAULT(HostTick, 41, 42)

// CSchemeManager
OFFSET_DEFAULT(GetIScheme, 8, 9)

// CScheme
OFFSET_DEFAULT(GetFont, 3, 4)

// IClientEntityList
OFFSET_DEFAULT(GetClientEntity, 3, 3)

// CServerGameDLL
OFFSET_DEFAULT(GameFrame, 4, 4)
OFFSET_DEFAULT(Think, 31, 31)
OFFSET_DEFAULT(GetAllServerClasses, 10, 10)
OFFSET_DEFAULT(IsRestoring, 24, 24)
OFFSET_DEFAULT(ShouldDraw, 11, 12)

// CHud
OFFSET_DEFAULT(GetName, 10, 11)

// CGameEventManager
OFFSET_DEFAULT(AddListener, 3, 4)
OFFSET_DEFAULT(RemoveListener, 5, 6)
OFFSET_DEFAULT(FireEventClientSide, 8, 9)
OFFSET_DEFAULT(FireEventIntern, 12, 16)
OFFSET_DEFAULT(ConPrintEvent, 303, 320)

// CEngine
OFFSET_DEFAULT(Frame, 5, 6)

// CEngineAPI
OFFSET_DEFAULT(IsRunningSimulation, 12, 12)
OFFSET_DEFAULT(Init, 3, 3)

// CIVDebugOverlay
OFFSET_DEFAULT(ScreenPosition, 12, 11)

// CCommandBuffer
OFFSET_DEFAULT(m_bWaitEnabled, 8265, 8265)

// CServerTools
OFFSET_DEFAULT(GetIServerEntity, 1, 2)
OFFSET_DEFAULT(CreateEntityByName, 14, 15)
OFFSET_DEFAULT(DispatchSpawn, 15, 16)
OFFSET_DEFAULT(SetKeyValueChar, 13, 12)
OFFSET_DEFAULT(SetKeyValueFloat, 12, 13)
OFFSET_DEFAULT(SetKeyValueVector, 11, 14)

// CVEngineServer
OFFSET_DEFAULT(ChangeLevel, 0, 0)
OFFSET_DEFAULT(ClientCommand, 39, 39)
OFFSET_DEFAULT(IsServerPaused, 81, 81)
OFFSET_DEFAULT(ServerPause, 121, 121)
OFFSET_DEFAULT(ChatPrintf, 22, 25)
OFFSET_DEFAULT(MsgFunc_SayText2, 28, 35)
OFFSET_DEFAULT(GetTextColorForClient, 33, 41)

// CSteam3Client
OFFSET_DEFAULT(OnGameOverlayActivated, 148, 156)

// surfacedata_t
OFFSET_DEFAULT(jumpFactor, 68, 72)

// IPhysicsObject
OFFSET_DEFAULT(IsAsleep, 2, 3)
OFFSET_DEFAULT(IsCollisionEnabled, 6, 7)
OFFSET_DEFAULT(IsGravityEnabled, 7, 8)
OFFSET_DEFAULT(IsDragEnabled, 8, 9)
OFFSET_DEFAULT(IsMotionEnabled, 9, 10)
OFFSET_DEFAULT(GetPosition, 48, 49)
OFFSET_DEFAULT(GetVelocity, 52, 53)
OFFSET_DEFAULT(SetPosition, 46, 47)
OFFSET_DEFAULT(SetVelocity, 50, 51)
OFFSET_DEFAULT(EnableGravity, 13, 14)
OFFSET_DEFAULT(GetCollide, 74, 75)
OFFSET_DEFAULT(Wake, 24, 25)
OFFSET_DEFAULT(Sleep, 25, 26)

// IVideoMode
OFFSET_DEFAULT(GetModeWidth, 14, 15)
OFFSET_DEFAULT(GetModeHeight, 15, 16)
OFFSET_DEFAULT(ReadScreenPixels, 28, 29)

// Others
OFFSET_DEFAULT(tickcount, 95, 74)
OFFSET_DEFAULT(interval_per_tick, 65, 82)
OFFSET_DEFAULT(GetClientStateFunction, 4, 16)
OFFSET_EMPTY(cl)
OFFSET_DEFAULT(demoplayer, 74, 92)
OFFSET_DEFAULT(demorecorder, 87, 105)
OFFSET_DEFAULT(m_szLevelName, 36, 64)
OFFSET_DEFAULT(AirMove_Offset1, 7, 29)
OFFSET_DEFAULT(AirMove_Offset2, 5, 12)
OFFSET_DEFAULT(UTIL_PlayerByIndex, 39, 70)
OFFSET_DEFAULT(gpGlobals, 14, 12)
OFFSET_DEFAULT(g_Input, 2, 1)
OFFSET_EMPTY(in_jump)
OFFSET_DEFAULT(KeyDown, 398, 208)
OFFSET_DEFAULT(KeyUp, 377, 284)
OFFSET_DEFAULT(GetClientMode, 4, 21)
OFFSET_EMPTY(State_Shutdown)
OFFSET_DEFAULT(Cbuf_AddText, 46, 45)
OFFSET_DEFAULT(s_CommandBuffer, 82, 69)
OFFSET_DEFAULT(CCommandBufferSize, 9556, 9556)
OFFSET_EMPTY(AddText)
OFFSET_DEFAULT(AutoCompletionFunc, 66, 46)
OFFSET_DEFAULT(StartDrawing, 127, 559)
OFFSET_DEFAULT(FinishDrawing, 603, 430)
OFFSET_DEFAULT(GetHud, 125, 146)
OFFSET_DEFAULT(FindElement, 135, 161)
OFFSET_DEFAULT(Key_SetBinding, 135, 73)
OFFSET_DEFAULT(eng, 2, 7)
OFFSET_DEFAULT(HostState_OnClientConnected, 684, 1503)
OFFSET_DEFAULT(hoststate, 1, 9)
OFFSET_DEFAULT(m_bLoadGame, 448, 440)
OFFSET_DEFAULT(NUM_ENT_ENTRIES, 8192, 8192)
OFFSET_DEFAULT(ENT_ENTRY_MASK, 65535, 65535)
OFFSET_DEFAULT(INVALID_EHANDLE_INDEX, 0xFFFFFFFF, 0xFFFFFFFF)
OFFSET_DEFAULT(NUM_SERIAL_NUM_SHIFT_BITS, 16, 16)
OFFSET_DEFAULT(m_iClassName, 96, 104)
OFFSET_EMPTY(m_iName)
OFFSET_DEFAULT(m_EntPtrArray, 61, 48)
OFFSET_DEFAULT(g_pClientMode, 19, 25)
OFFSET_DEFAULT(m_pCommands, 244, 244)
OFFSET_DEFAULT(CUserCmdSize, 96, 96)
OFFSET_DEFAULT(MULTIPLAYER_BACKUP, 150, 150)
OFFSET_DEFAULT(PerUserInput_tSize, 376, 352)
OFFSET_DEFAULT(GetLocalClient, 128, 98)
OFFSET_DEFAULT(MAX_SPLITSCREEN_PLAYERS, 2, 2)
OFFSET_DEFAULT(net_time, 19, 24)
OFFSET_DEFAULT(VideoMode_Create, 88, 120)
OFFSET_DEFAULT(videomode, 35, 183)
OFFSET_EMPTY(VID_ProcessMovieFrame_1)
OFFSET_EMPTY(VID_ProcessMovieFrame_2)
OFFSET_DEFAULT(snd_linear_count, 63, 57)
OFFSET_DEFAULT(snd_p, 98, 65)
OFFSET_DEFAULT(snd_vol, 108, 71)
OFFSET_DEFAULT(StartTouch, 102, 103)
OFFSET_DEFAULT(FindMaterial, 82, 82)
OFFSET_DEFAULT(CreateDebugMesh, 41, 42)
OFFSET_DEFAULT(DestroyDebugMesh, 42, 43)
