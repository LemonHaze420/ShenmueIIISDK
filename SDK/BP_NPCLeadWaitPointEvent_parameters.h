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

// Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.IsStillValidToWait
struct ABP_NPCLeadWaitPointEvent_C_IsStillValidToWait_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.StartEvent
struct ABP_NPCLeadWaitPointEvent_C_StartEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.UserConstructionScript
struct ABP_NPCLeadWaitPointEvent_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
