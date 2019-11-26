
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

// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ChangeHide_Owner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::ChangeHide_Owner(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ChangeHide_Owner");

	UBP_HideInStep_Template_C_ChangeHide_Owner_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.CheckStep_MinMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MinStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::CheckStep_MinMax(int MinStep, int MaxStep, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.CheckStep_MinMax");

	UBP_HideInStep_Template_C_CheckStep_MinMax_Params params;
	params.MinStep = MinStep;
	params.MaxStep = MaxStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.LocalEvt_ChangeStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::LocalEvt_ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.LocalEvt_ChangeStep");

	UBP_HideInStep_Template_C_LocalEvt_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveTick");

	UBP_HideInStep_Template_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HideInStep_Template_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveBeginPlay");

	UBP_HideInStep_Template_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveEndPlay");

	UBP_HideInStep_Template_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.StartIn
// (BlueprintCallable, BlueprintEvent)

void UBP_HideInStep_Template_C::StartIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.StartIn");

	UBP_HideInStep_Template_C_StartIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ExecuteUbergraph_BP_HideInStep_Template
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::ExecuteUbergraph_BP_HideInStep_Template(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ExecuteUbergraph_BP_HideInStep_Template");

	UBP_HideInStep_Template_C_ExecuteUbergraph_BP_HideInStep_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
