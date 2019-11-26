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

// Function BP_State_LookAtLead.BP_State_LookAtLead_C.IsInitializeState
struct UBP_State_LookAtLead_C_IsInitializeState_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_LookAtLead.BP_State_LookAtLead_C.StateOnInitialize
struct UBP_State_LookAtLead_C_StateOnInitialize_Params
{
};

// Function BP_State_LookAtLead.BP_State_LookAtLead_C.ExecuteUbergraph_BP_State_LookAtLead
struct UBP_State_LookAtLead_C_ExecuteUbergraph_BP_State_LookAtLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
