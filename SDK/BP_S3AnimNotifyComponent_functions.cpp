
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

// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ReceiveNotify
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3AnimNotifyComponent_C::STATIC_ReceiveNotify(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ReceiveNotify");

	UBP_S3AnimNotifyComponent_C_ReceiveNotify_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ConsumeNotify
// (Net, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exists                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3AnimNotifyComponent_C::STATIC_ConsumeNotify(const struct FName& Name, bool* Exists)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ConsumeNotify");

	UBP_S3AnimNotifyComponent_C_ConsumeNotify_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exists != nullptr)
		*Exists = params.Exists;
}


// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.HasNotify
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3AnimNotifyComponent_C::STATIC_HasNotify(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.HasNotify");

	UBP_S3AnimNotifyComponent_C_HasNotify_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.OnReceiveNotify__DelegateSignature
// (Event, NetResponse, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3AnimNotifyComponent_C::OnReceiveNotify__DelegateSignature(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.OnReceiveNotify__DelegateSignature");

	UBP_S3AnimNotifyComponent_C_OnReceiveNotify__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
