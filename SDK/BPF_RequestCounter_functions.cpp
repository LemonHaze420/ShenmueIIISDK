
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_CreateRequestCounter
// (Net, NetRequest, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// class URequestCounter_C*       Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_RequestCounter_C::BPF_CreateRequestCounter(class UObject* __WorldContext, class URequestCounter_C** Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_CreateRequestCounter");

	UBPF_RequestCounter_C_BPF_CreateRequestCounter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;
}


// Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_RemoveRequest
// (Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient)
// Parameters:
// class UObject*                 RequestingObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URequestCounter_C*       RequestCounterReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewlyRemoved                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_RequestCounter_C::STATIC_BPF_RemoveRequest(class UObject* RequestingObject, class UObject* __WorldContext, class URequestCounter_C** RequestCounterReference, bool* NewlyRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_RemoveRequest");

	UBPF_RequestCounter_C_BPF_RemoveRequest_Params params;
	params.RequestingObject = RequestingObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestCounterReference != nullptr)
		*RequestCounterReference = params.RequestCounterReference;
	if (NewlyRemoved != nullptr)
		*NewlyRemoved = params.NewlyRemoved;
}


// Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_AddRequest
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// class UObject*                 RequestingObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URequestCounter_C*       RequestCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URequestCounter_C*       Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewlyRequested                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_RequestCounter_C::STATIC_BPF_AddRequest(class UObject* RequestingObject, class URequestCounter_C* RequestCounter, class UObject* __WorldContext, class URequestCounter_C** Reference, bool* NewlyRequested)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_RequestCounter.BPF_RequestCounter_C.BPF_AddRequest");

	UBPF_RequestCounter_C_BPF_AddRequest_Params params;
	params.RequestingObject = RequestingObject;
	params.RequestCounter = RequestCounter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;
	if (NewlyRequested != nullptr)
		*NewlyRequested = params.NewlyRequested;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
