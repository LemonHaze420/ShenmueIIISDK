
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

// Function RequestCounter.RequestCounter_C.CreateDebugString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URequestCounter_C::CreateDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.CreateDebugString");

	URequestCounter_C_CreateDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RequestCounter.RequestCounter_C.Clean
// (Public, BlueprintCallable, BlueprintEvent)

void URequestCounter_C::Clean()
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.Clean");

	URequestCounter_C_Clean_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RequestCounter.RequestCounter_C.HasRequestsFast
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHasRequests                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URequestCounter_C::HasRequestsFast(bool* bHasRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.HasRequestsFast");

	URequestCounter_C_HasRequestsFast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasRequests != nullptr)
		*bHasRequests = params.bHasRequests;
}


// Function RequestCounter.RequestCounter_C.HasRequests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasRequests                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URequestCounter_C::HasRequests(bool* bHasRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.HasRequests");

	URequestCounter_C_HasRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasRequests != nullptr)
		*bHasRequests = params.bHasRequests;
}


// Function RequestCounter.RequestCounter_C.RemoveRequester
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewlyRemoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URequestCounter_C::RemoveRequester(class UObject* Requester, bool* bNewlyRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.RemoveRequester");

	URequestCounter_C_RemoveRequester_Params params;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNewlyRemoved != nullptr)
		*bNewlyRemoved = params.bNewlyRemoved;
}


// Function RequestCounter.RequestCounter_C.AddRequester
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bnewlyAdded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URequestCounter_C::AddRequester(class UObject* Requester, bool* bnewlyAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.AddRequester");

	URequestCounter_C_AddRequester_Params params;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bnewlyAdded != nullptr)
		*bnewlyAdded = params.bnewlyAdded;
}


// Function RequestCounter.RequestCounter_C.OnLastRequestRemove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URequestCounter_C::OnLastRequestRemove__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.OnLastRequestRemove__DelegateSignature");

	URequestCounter_C_OnLastRequestRemove__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RequestCounter.RequestCounter_C.OnFirstRequestAdd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URequestCounter_C::OnFirstRequestAdd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RequestCounter.RequestCounter_C.OnFirstRequestAdd__DelegateSignature");

	URequestCounter_C_OnFirstRequestAdd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
