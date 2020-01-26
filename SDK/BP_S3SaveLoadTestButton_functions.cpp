
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetDateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime               DateTime                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_S3SaveLoadTestButton_C::SetDateTime(const struct FDateTime& DateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetDateTime");

	UBP_S3SaveLoadTestButton_C_SetDateTime_Params params;
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetOptionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestButton_C::SetStep(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.SetStep");

	UBP_S3SaveLoadTestButton_C_SetStep_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_S3SaveLoadTestButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.Construct");

	UBP_S3SaveLoadTestButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_S3SaveLoadTestButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.ExecuteUbergraph_BP_S3SaveLoadTestButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestButton_C::ExecuteUbergraph_BP_S3SaveLoadTestButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.ExecuteUbergraph_BP_S3SaveLoadTestButton");

	UBP_S3SaveLoadTestButton_C_ExecuteUbergraph_BP_S3SaveLoadTestButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestButton.BP_S3SaveLoadTestButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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
