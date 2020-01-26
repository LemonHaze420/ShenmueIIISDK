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

// Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_CreateRequestCounter
struct UBPF_RequestCounter_C_BPF_CreateRequestCounter_Params
{
	class URequestCounter_C*                           Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_RemoveRequest
struct UBPF_RequestCounter_C_BPF_RemoveRequest_Params
{
	class UObject*                                     RequestingObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URequestCounter_C*                           RequestCounterReference;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewlyRemoved;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_AddRequest
struct UBPF_RequestCounter_C_BPF_AddRequest_Params
{
	class UObject*                                     RequestingObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URequestCounter_C*                           RequestCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URequestCounter_C*                           Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewlyRequested;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
