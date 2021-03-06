#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.StateEnter
struct UBP_State_Follow_UsePOI_C_StateEnter_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.StateUpdate
struct UBP_State_Follow_UsePOI_C_StateUpdate_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.UpdateTransitions
struct UBP_State_Follow_UsePOI_C_UpdateTransitions_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.ExecuteUbergraph_BP_State_Follow_UsePOI
struct UBP_State_Follow_UsePOI_C_ExecuteUbergraph_BP_State_Follow_UsePOI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
