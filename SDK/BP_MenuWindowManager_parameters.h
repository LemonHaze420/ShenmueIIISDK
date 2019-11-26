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

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetItemListViewerManagerClass
struct ABP_MenuWindowManager_C_SetItemListViewerManagerClass_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckBehaviorState
struct ABP_MenuWindowManager_C_CheckBehaviorState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckDoorOpen
struct ABP_MenuWindowManager_C_CheckDoorOpen_Params
{
	bool                                               DoMenu;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartAllActor
struct ABP_MenuWindowManager_C_StartAllActor_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StopAllActor
struct ABP_MenuWindowManager_C_StopAllActor_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.setDenyFlag
struct ABP_MenuWindowManager_C_setDenyFlag_Params
{
	bool                                               deny;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.isDetected
struct ABP_MenuWindowManager_C_isDetected_Params
{
	bool                                               isDetected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.UserConstructionScript
struct ABP_MenuWindowManager_C_UserConstructionScript_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveTick
struct ABP_MenuWindowManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.doCmd_FirstDetectRetain(Menu)
struct ABP_MenuWindowManager_C_doCmd_FirstDetectRetain_Menu__Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.delayedRegistCheck(detector)
struct ABP_MenuWindowManager_C_delayedRegistCheck_detector__Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartMenu
struct ABP_MenuWindowManager_C_StartMenu_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ActionStartButton
struct ABP_MenuWindowManager_C_ActionStartButton_Params
{
	bool                                               IsPress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.FinishMenu
struct ABP_MenuWindowManager_C_FinishMenu_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.OpenInventory_EatEvent
struct ABP_MenuWindowManager_C_OpenInventory_EatEvent_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.Open_ItemWindow
struct ABP_MenuWindowManager_C_Open_ItemWindow_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveBeginPlay
struct ABP_MenuWindowManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ExecuteUbergraph_BP_MenuWindowManager
struct ABP_MenuWindowManager_C_ExecuteUbergraph_BP_MenuWindowManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.OnMenuClosed__DelegateSignature
struct ABP_MenuWindowManager_C_OnMenuClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
