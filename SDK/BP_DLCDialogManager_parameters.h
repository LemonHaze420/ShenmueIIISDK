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

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.AddItem
struct ABP_DLCDialogManager_C_AddItem_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckBattleRallyItem
struct ABP_DLCDialogManager_C_CheckBattleRallyItem_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckDLCDialog
struct ABP_DLCDialogManager_C_CheckDLCDialog_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.UserConstructionScript
struct ABP_DLCDialogManager_C_UserConstructionScript_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckFreerun
struct ABP_DLCDialogManager_C_CheckFreerun_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.DecideDialog
struct ABP_DLCDialogManager_C_DecideDialog_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ChangePlayerBehavior
struct ABP_DLCDialogManager_C_ChangePlayerBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecCheck
struct ABP_DLCDialogManager_C_ExecCheck_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ShowDLCDialog
struct ABP_DLCDialogManager_C_ShowDLCDialog_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.FinishedDLC
struct ABP_DLCDialogManager_C_FinishedDLC_Params
{
};

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecuteUbergraph_BP_DLCDialogManager
struct ABP_DLCDialogManager_C_ExecuteUbergraph_BP_DLCDialogManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
