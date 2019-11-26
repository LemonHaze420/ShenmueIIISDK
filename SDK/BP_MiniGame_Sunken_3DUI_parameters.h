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

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.CheckTiming
struct ABP_MiniGame_Sunken_3DUI_C_CheckTiming_Params
{
	bool                                               IsJust;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEx;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.SetJustTiming
struct ABP_MiniGame_Sunken_3DUI_C_SetJustTiming_Params
{
	bool                                               IsJustTiming;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateToMaxDistance
struct ABP_MiniGame_Sunken_3DUI_C_UpdateToMaxDistance_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateBar
struct ABP_MiniGame_Sunken_3DUI_C_UpdateBar_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UserConstructionScript
struct ABP_MiniGame_Sunken_3DUI_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__FinishedFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_FlashCenterBar__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__UpdateFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_FlashCenterBar__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__FinishedFunc
struct ABP_MiniGame_Sunken_3DUI_C_TimeLine_SideBar__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__UpdateFunc
struct ABP_MiniGame_Sunken_3DUI_C_TimeLine_SideBar__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__FinishedFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ScaleChangeBack__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__UpdateFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ScaleChangeBack__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__FinishedFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__UpdateFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndJust__EventFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__EndJust__EventFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndEx__EventFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__EndEx__EventFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartEx__EventFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__StartEx__EventFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartJust__EventFunc
struct ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__StartJust__EventFunc_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ReceiveBeginPlay
struct ABP_MiniGame_Sunken_3DUI_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_FlashCenterBar
struct ABP_MiniGame_Sunken_3DUI_C_Event_FlashCenterBar_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_EnabledSideBar
struct ABP_MiniGame_Sunken_3DUI_C_Event_EnabledSideBar_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_ForceSideBarEnabled
struct ABP_MiniGame_Sunken_3DUI_C_Event_ForceSideBarEnabled_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.StartActionTiming
struct ABP_MiniGame_Sunken_3DUI_C_StartActionTiming_Params
{
};

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ExecuteUbergraph_BP_MiniGame_Sunken_3DUI
struct ABP_MiniGame_Sunken_3DUI_C_ExecuteUbergraph_BP_MiniGame_Sunken_3DUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
