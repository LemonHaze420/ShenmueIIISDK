
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

// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.CheckFlagValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           In_Range                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HideInFlag_Template_C::CheckFlagValue(bool* In_Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.CheckFlagValue");

	UBP_HideInFlag_Template_C_CheckFlagValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In_Range != nullptr)
		*In_Range = params.In_Range;
}


// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.CheckHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide_On                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HideInFlag_Template_C::CheckHide(bool* Hide_On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.CheckHide");

	UBP_HideInFlag_Template_C_CheckHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hide_On != nullptr)
		*Hide_On = params.Hide_On;
}


// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ChangeHide_Owner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInFlag_Template_C::ChangeHide_Owner(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ChangeHide_Owner");

	UBP_HideInFlag_Template_C_ChangeHide_Owner_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HideInFlag_Template_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ReceiveBeginPlay");

	UBP_HideInFlag_Template_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInFlag_Template_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ReceiveEndPlay");

	UBP_HideInFlag_Template_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.Event_FlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInFlag_Template_C::Event_FlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.Event_FlagChange");

	UBP_HideInFlag_Template_C_Event_FlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ExecuteUbergraph_BP_HideInFlag_Template
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInFlag_Template_C::ExecuteUbergraph_BP_HideInFlag_Template(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInFlag_Template.BP_HideInFlag_Template_C.ExecuteUbergraph_BP_HideInFlag_Template");

	UBP_HideInFlag_Template_C_ExecuteUbergraph_BP_HideInFlag_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
