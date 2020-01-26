#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_FocusSignManager.BP_FocusSignManager_C.IsEnabledPlayerState
struct ABP_FocusSignManager_C_IsEnabledPlayerState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.CheckMoveCamera
struct ABP_FocusSignManager_C_CheckMoveCamera_Params
{
	bool                                               Move;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.IsSearchSightEnabled
struct ABP_FocusSignManager_C_IsSearchSightEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.UpdateWidget
struct ABP_FocusSignManager_C_UpdateWidget_Params
{
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.UserConstructionScript
struct ABP_FocusSignManager_C_UserConstructionScript_Params
{
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveBeginPlay
struct ABP_FocusSignManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveTick
struct ABP_FocusSignManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveEndPlay
struct ABP_FocusSignManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FocusSignManager.BP_FocusSignManager_C.ExecuteUbergraph_BP_FocusSignManager
struct ABP_FocusSignManager_C_ExecuteUbergraph_BP_FocusSignManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
