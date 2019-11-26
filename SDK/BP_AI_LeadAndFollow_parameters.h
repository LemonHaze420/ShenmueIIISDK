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

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.GetS3PathFollowingComponent
struct ABP_AI_LeadAndFollow_C_GetS3PathFollowingComponent_Params
{
	class US3PathFollowingComponent*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.UserConstructionScript
struct ABP_AI_LeadAndFollow_C_UserConstructionScript_Params
{
};

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartLead
struct ABP_AI_LeadAndFollow_C_StartLead_Params
{
};

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.StartFollow
struct ABP_AI_LeadAndFollow_C_StartFollow_Params
{
};

// Function BP_AI_LeadAndFollow.BP_AI_LeadAndFollow_C.ExecuteUbergraph_BP_AI_LeadAndFollow
struct ABP_AI_LeadAndFollow_C_ExecuteUbergraph_BP_AI_LeadAndFollow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
