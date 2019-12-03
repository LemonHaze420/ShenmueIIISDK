
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

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecSave
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AutoSave_Trigger_C::ExecSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecSave");

	ABP_AutoSave_Trigger_C_ExecSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckBeginHit
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           BeginIn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::STATIC_CheckBeginHit(bool* BeginIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckBeginHit");

	ABP_AutoSave_Trigger_C_CheckBeginHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeginIn != nullptr)
		*BeginIn = params.BeginIn;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckDirection
// (NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// bool                           DirectionOK                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::STATIC_CheckDirection(bool* DirectionOK)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckDirection");

	ABP_AutoSave_Trigger_C_CheckDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DirectionOK != nullptr)
		*DirectionOK = params.DirectionOK;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ResetFlag
// (Net, Native, NetResponse, Static, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AutoSave_Trigger_C::STATIC_ResetFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ResetFlag");

	ABP_AutoSave_Trigger_C_ResetFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckFlag
// (Exec, Static, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           flag_on                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::STATIC_CheckFlag(bool* flag_on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckFlag");

	ABP_AutoSave_Trigger_C_CheckFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag_on != nullptr)
		*flag_on = params.flag_on;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckStep
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result_EnableStep              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::STATIC_CheckStep(bool* Result_EnableStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckStep");

	ABP_AutoSave_Trigger_C_CheckStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result_EnableStep != nullptr)
		*Result_EnableStep = params.Result_EnableStep;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.UserConstructionScript
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_AutoSave_Trigger_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.UserConstructionScript");

	ABP_AutoSave_Trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, Static, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AutoSave_Trigger_C::STATIC_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AutoSave_Trigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AutoSave_Trigger_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ReceiveBeginPlay");

	ABP_AutoSave_Trigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.EvtStepChange
// (Exec, Native, Static, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::STATIC_EvtStepChange(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.EvtStepChange");

	ABP_AutoSave_Trigger_C_EvtStepChange_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckTriigerIn
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AutoSave_Trigger_C::STATIC_CheckTriigerIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckTriigerIn");

	ABP_AutoSave_Trigger_C_CheckTriigerIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecuteUbergraph_BP_AutoSave_Trigger
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::ExecuteUbergraph_BP_AutoSave_Trigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecuteUbergraph_BP_AutoSave_Trigger");

	ABP_AutoSave_Trigger_C_ExecuteUbergraph_BP_AutoSave_Trigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
