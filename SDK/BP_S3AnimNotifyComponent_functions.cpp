
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3AnimNotifyComponent_C::ReceiveNotify(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ReceiveNotify");

	UBP_S3AnimNotifyComponent_C_ReceiveNotify_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ConsumeNotify
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exists                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3AnimNotifyComponent_C::ConsumeNotify(const struct FName& Name, bool* Exists)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.ConsumeNotify");

	UBP_S3AnimNotifyComponent_C_ConsumeNotify_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exists != nullptr)
		*Exists = params.Exists;
}


// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.HasNotify
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3AnimNotifyComponent_C::HasNotify(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.HasNotify");

	UBP_S3AnimNotifyComponent_C_HasNotify_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AnimNotifyComponent.BP_S3AnimNotifyComponent_C.OnReceiveNotify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
