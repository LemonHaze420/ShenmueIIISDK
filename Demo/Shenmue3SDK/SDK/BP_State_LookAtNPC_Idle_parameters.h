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

// Function BP_State_LookAtNPC_Idle.BP_State_LookAtNPC_Idle_C.StateExit
struct UBP_State_LookAtNPC_Idle_C_StateExit_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Idle.BP_State_LookAtNPC_Idle_C.StateUpdate
struct UBP_State_LookAtNPC_Idle_C_StateUpdate_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtNPC_Idle.BP_State_LookAtNPC_Idle_C.StateEnter
struct UBP_State_LookAtNPC_Idle_C_StateEnter_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
