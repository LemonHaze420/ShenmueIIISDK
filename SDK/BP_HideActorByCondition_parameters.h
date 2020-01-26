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

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.UpdateCondition
struct UBP_HideActorByCondition_C_UpdateCondition_Params
{
	TEnumAsByte<EHideActorConditions>                  ConditionsType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IdMin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     IdMax;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.SetupEventStep
struct UBP_HideActorByCondition_C_SetupEventStep_Params
{
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.HideMyOwner
struct UBP_HideActorByCondition_C_HideMyOwner_Params
{
	bool                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveBeginPlay
struct UBP_HideActorByCondition_C_ReceiveBeginPlay_Params
{
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveTick
struct UBP_HideActorByCondition_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeStep
struct UBP_HideActorByCondition_C_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeItemNum
struct UBP_HideActorByCondition_C_ChangeItemNum_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeFlag
struct UBP_HideActorByCondition_C_ChangeFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveEndPlay
struct UBP_HideActorByCondition_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.UnbindEvent
struct UBP_HideActorByCondition_C_UnbindEvent_Params
{
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.SetUpEvent
struct UBP_HideActorByCondition_C_SetUpEvent_Params
{
};

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ExecuteUbergraph_BP_HideActorByCondition
struct UBP_HideActorByCondition_C_ExecuteUbergraph_BP_HideActorByCondition_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
