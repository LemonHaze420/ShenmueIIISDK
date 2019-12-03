
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
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::STATIC_ChangeHide_Owner(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ChangeHide_Owner");

	UBP_HideInStep_Template_C_ChangeHide_Owner_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.CheckStep_MinMax
// (NetReliable, NetRequest, Event, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
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
// (Net, NetReliable, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure, NetValidate)
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
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure, NetValidate)
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
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UBP_HideInStep_Template_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveBeginPlay");

	UBP_HideInStep_Template_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.ReceiveEndPlay");

	UBP_HideInStep_Template_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.StartIn
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UBP_HideInStep_Template_C::STATIC_StartIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideInStep_Template.BP_HideInStep_Template_C.StartIn");

	UBP_HideInStep_Template_C_StartIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideInStep_Template.BP_HideInStep_Template_C.ExecuteUbergraph_BP_HideInStep_Template
// (Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideInStep_Template_C::STATIC_ExecuteUbergraph_BP_HideInStep_Template(int EntryPoint)
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
