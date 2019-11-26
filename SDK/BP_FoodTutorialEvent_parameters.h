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

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ShouldSetPlayerBehavior
struct ABP_FoodTutorialEvent_C_ShouldSetPlayerBehavior_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.UserConstructionScript
struct ABP_FoodTutorialEvent_C_UserConstructionScript_Params
{
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveBeginPlay
struct ABP_FoodTutorialEvent_C_ReceiveBeginPlay_Params
{
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveEndPlay
struct ABP_FoodTutorialEvent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.EnablePlayerInput
struct ABP_FoodTutorialEvent_C_EnablePlayerInput_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.BindDIalogFinish
struct ABP_FoodTutorialEvent_C_BindDIalogFinish_Params
{
	bool                                               Bind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.StartPause
struct ABP_FoodTutorialEvent_C_StartPause_Params
{
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.OnDialogClose
struct ABP_FoodTutorialEvent_C_OnDialogClose_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ExecuteUbergraph_BP_FoodTutorialEvent
struct ABP_FoodTutorialEvent_C_ExecuteUbergraph_BP_FoodTutorialEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
