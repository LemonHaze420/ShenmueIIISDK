
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

// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetDateTime
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// struct FDateTime               DateTime                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_S3SaveLoadTestButton_C::STATIC_SetDateTime(const struct FDateTime& DateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetDateTime");

	UBP_S3SaveLoadTestButton_C_SetDateTime_Params params;
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetOptionText
// (Exec, Event, NetResponse, MulticastDelegate, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_S3SaveLoadTestButton_C::SetOptionText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetOptionText");

	UBP_S3SaveLoadTestButton_C_SetOptionText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetStep
// (Net, NetReliable, NetRequest, Native, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestButton_C::SetStep(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetStep");

	UBP_S3SaveLoadTestButton_C_SetStep_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.Construct
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadTestButton_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.Construct");

	UBP_S3SaveLoadTestButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadTestButton_C::STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_S3SaveLoadTestButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.ExecuteUbergraph_BP_S3SaveLoadTestButton
// (Exec, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestButton_C::STATIC_ExecuteUbergraph_BP_S3SaveLoadTestButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.ExecuteUbergraph_BP_S3SaveLoadTestButton");

	UBP_S3SaveLoadTestButton_C_ExecuteUbergraph_BP_S3SaveLoadTestButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.OnClicked__DelegateSignature
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Delegate, HasOutParms, BlueprintEvent)

void UBP_S3SaveLoadTestButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
