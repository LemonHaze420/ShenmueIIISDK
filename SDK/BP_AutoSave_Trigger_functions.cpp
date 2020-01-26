
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

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AutoSave_Trigger_C::ExecSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecSave");

	ABP_AutoSave_Trigger_C_ExecSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckBeginHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeginIn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::CheckBeginHit(bool* BeginIn)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DirectionOK                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::CheckDirection(bool* DirectionOK)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AutoSave_Trigger_C::ResetFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ResetFlag");

	ABP_AutoSave_Trigger_C_ResetFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag_on                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::CheckFlag(bool* flag_on)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result_EnableStep              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::CheckStep(bool* Result_EnableStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckStep");

	ABP_AutoSave_Trigger_C_CheckStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result_EnableStep != nullptr)
		*Result_EnableStep = params.Result_EnableStep;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AutoSave_Trigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.UserConstructionScript");

	ABP_AutoSave_Trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AutoSave_Trigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
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
// (Event, Protected, BlueprintEvent)

void ABP_AutoSave_Trigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ReceiveBeginPlay");

	ABP_AutoSave_Trigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.EvtStepChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoSave_Trigger_C::EvtStepChange(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.EvtStepChange");

	ABP_AutoSave_Trigger_C_EvtStepChange_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckTriigerIn
// (BlueprintCallable, BlueprintEvent)

void ABP_AutoSave_Trigger_C::CheckTriigerIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckTriigerIn");

	ABP_AutoSave_Trigger_C_CheckTriigerIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecuteUbergraph_BP_AutoSave_Trigger
// (HasDefaults)
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
