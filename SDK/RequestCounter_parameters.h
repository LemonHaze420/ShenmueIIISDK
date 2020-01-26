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

// Function RequestCounter.RequestCounter_C.CreateDebugString
struct URequestCounter_C_CreateDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RequestCounter.RequestCounter_C.Clean
struct URequestCounter_C_Clean_Params
{
};

// Function RequestCounter.RequestCounter_C.HasRequestsFast
struct URequestCounter_C_HasRequestsFast_Params
{
	bool                                               bHasRequests;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RequestCounter.RequestCounter_C.HasRequests
struct URequestCounter_C_HasRequests_Params
{
	bool                                               bHasRequests;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RequestCounter.RequestCounter_C.RemoveRequester
struct URequestCounter_C_RemoveRequester_Params
{
	class UObject*                                     Requester;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewlyRemoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RequestCounter.RequestCounter_C.AddRequester
struct URequestCounter_C_AddRequester_Params
{
	class UObject*                                     Requester;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bnewlyAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RequestCounter.RequestCounter_C.OnLastRequestRemove__DelegateSignature
struct URequestCounter_C_OnLastRequestRemove__DelegateSignature_Params
{
};

// Function RequestCounter.RequestCounter_C.OnFirstRequestAdd__DelegateSignature
struct URequestCounter_C_OnFirstRequestAdd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
