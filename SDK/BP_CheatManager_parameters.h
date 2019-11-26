#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CheatManager.BP_CheatManager_C.SetForceNPCVisible
struct UBP_CheatManager_C_SetForceNPCVisible_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CheatManager.BP_CheatManager_C.Init_DebugItemPrice
struct UBP_CheatManager_C_Init_DebugItemPrice_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.DisplayLightCount
struct UBP_CheatManager_C_DisplayLightCount_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ToggleDispDevelopText
struct UBP_CheatManager_C_ToggleDispDevelopText_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ToggleDispCutscenePlayArea
struct UBP_CheatManager_C_ToggleDispCutscenePlayArea_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.BatchAddPropertyWatch
struct UBP_CheatManager_C_BatchAddPropertyWatch_Params
{
	struct FText                                       ObjectDisplayName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FBatchPropertyWatchInfo>             Properties;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CheatManager.BP_CheatManager_C.DisplayWorkMap
struct UBP_CheatManager_C_DisplayWorkMap_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.DisplayLightInfo
struct UBP_CheatManager_C_DisplayLightInfo_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.DebugAddMoney
struct UBP_CheatManager_C_DebugAddMoney_Params
{
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CheatManager.BP_CheatManager_C.DisplayNPCNum
struct UBP_CheatManager_C_DisplayNPCNum_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.dbgCalcAddtime
struct UBP_CheatManager_C_dbgCalcAddtime_Params
{
	float                                              Base;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Signed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CheatManager.BP_CheatManager_C.UserConstructionScript
struct UBP_CheatManager_C_UserConstructionScript_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ReceiveInitCheatManager
struct UBP_CheatManager_C_ReceiveInitCheatManager_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Cmd_Insert
struct UBP_CheatManager_C_OnInputKey_Cmd_Insert_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdShiftPageUp
struct UBP_CheatManager_C_OnInputKey_CmdShiftPageUp_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdShiftPageDown
struct UBP_CheatManager_C_OnInputKey_CmdShiftPageDown_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdPageUp
struct UBP_CheatManager_C_OnInputKey_CmdPageUp_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdPageDown
struct UBP_CheatManager_C_OnInputKey_CmdPageDown_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdAltPageUp
struct UBP_CheatManager_C_OnInputKey_CmdAltPageUp_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdAltPageDown
struct UBP_CheatManager_C_OnInputKey_CmdAltPageDown_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_3
struct UBP_CheatManager_C_OnKeyInput_3_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_2
struct UBP_CheatManager_C_OnKeyInput_2_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Num+
struct UBP_CheatManager_C_OnKeyInput_Num_Plus_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Num-
struct UBP_CheatManager_C_OnKeyInput_Num_Minus_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Alt L
struct UBP_CheatManager_C_OnInputKey_Alt_L_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Alt+Shift L
struct UBP_CheatManager_C_OnInputKey_Alt_Shift_L_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_F9Ctrl
struct UBP_CheatManager_C_OnKeyInput_F9Ctrl_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInput_DpadLeft
struct UBP_CheatManager_C_OnInput_DpadLeft_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_E
struct UBP_CheatManager_C_OnKeyInput_E_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_T
struct UBP_CheatManager_C_OnKeyInput_T_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnMiniGameWinEvent
struct UBP_CheatManager_C_OnMiniGameWinEvent_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnMiniGameLoseEvent
struct UBP_CheatManager_C_OnMiniGameLoseEvent_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_U
struct UBP_CheatManager_C_OnKeyInput_U_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.InitAdventureDebugMenus
struct UBP_CheatManager_C_InitAdventureDebugMenus_Params
{
	class ABP_S3CharacterBase_C*                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CheatManager.BP_CheatManager_C.LevelStreamingDebug
struct UBP_CheatManager_C_LevelStreamingDebug_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_L
struct UBP_CheatManager_C_OnKeyInput_L_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnShowLightInfoEvent
struct UBP_CheatManager_C_OnShowLightInfoEvent_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_V
struct UBP_CheatManager_C_OnInputKey_V_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_F
struct UBP_CheatManager_C_OnKeyInput_F_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_CtrlT
struct UBP_CheatManager_C_OnKeyInput_CtrlT_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Z
struct UBP_CheatManager_C_OnKeyInput_Z_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInputSemicolon
struct UBP_CheatManager_C_OnKeyInputSemicolon_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ShowLightCount
struct UBP_CheatManager_C_ShowLightCount_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.DecideButton
struct UBP_CheatManager_C_DecideButton_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.EnableRecodingMode
struct UBP_CheatManager_C_EnableRecodingMode_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_AltB
struct UBP_CheatManager_C_OnKeyInput_AltB_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.LaunchDebugBattle
struct UBP_CheatManager_C_LaunchDebugBattle_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.DisableNPCTriggerOverlaps
struct UBP_CheatManager_C_DisableNPCTriggerOverlaps_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.EnableNPCTriggerOverlaps
struct UBP_CheatManager_C_EnableNPCTriggerOverlaps_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_SpecialRight
struct UBP_CheatManager_C_OnKeyInput_SpecialRight_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ShowNPCStreamingInfo
struct UBP_CheatManager_C_ShowNPCStreamingInfo_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ShowItemSpawnerHints
struct UBP_CheatManager_C_ShowItemSpawnerHints_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.NPCVisible
struct UBP_CheatManager_C_NPCVisible_Params
{
};

// Function BP_CheatManager.BP_CheatManager_C.ExecuteUbergraph_BP_CheatManager
struct UBP_CheatManager_C_ExecuteUbergraph_BP_CheatManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
