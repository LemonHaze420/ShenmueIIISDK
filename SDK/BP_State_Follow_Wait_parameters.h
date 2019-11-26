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

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.FindNearbyRoadLocation
struct UBP_State_Follow_Wait_C_FindNearbyRoadLocation_Params
{
	struct FVector                                     ProjectedLocation;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateEnter
struct UBP_State_Follow_Wait_C_StateEnter_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateExit
struct UBP_State_Follow_Wait_C_StateExit_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateUpdate
struct UBP_State_Follow_Wait_C_StateUpdate_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.UpdateTransitions
struct UBP_State_Follow_Wait_C_UpdateTransitions_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.ExecuteUbergraph_BP_State_Follow_Wait
struct UBP_State_Follow_Wait_C_ExecuteUbergraph_BP_State_Follow_Wait_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
