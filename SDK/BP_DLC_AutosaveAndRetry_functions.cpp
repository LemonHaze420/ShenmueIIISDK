
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

// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.CheckBeginHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeginIn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_AutosaveAndRetry_C::CheckBeginHit(bool* BeginIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.CheckBeginHit");

	ABP_DLC_AutosaveAndRetry_C_CheckBeginHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeginIn != nullptr)
		*BeginIn = params.BeginIn;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Exec Save
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DLC_AutosaveAndRetry_C::Exec_Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Exec Save");

	ABP_DLC_AutosaveAndRetry_C_Exec_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Check_Direction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Direction__OK                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_AutosaveAndRetry_C::Check_Direction(bool* Direction__OK)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Check_Direction");

	ABP_DLC_AutosaveAndRetry_C_Check_Direction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction__OK != nullptr)
		*Direction__OK = params.Direction__OK;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Check_ExecFlagRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SaveEnable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_AutosaveAndRetry_C::Check_ExecFlagRange(bool* SaveEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.Check_ExecFlagRange");

	ABP_DLC_AutosaveAndRetry_C_Check_ExecFlagRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveEnable != nullptr)
		*SaveEnable = params.SaveEnable;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DLC_AutosaveAndRetry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.UserConstructionScript");

	ABP_DLC_AutosaveAndRetry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.EvtFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_AutosaveAndRetry_C::EvtFlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.EvtFlagChange");

	ABP_DLC_AutosaveAndRetry_C_EvtFlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DLC_AutosaveAndRetry_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DLC_AutosaveAndRetry_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DLC_AutosaveAndRetry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.ReceiveBeginPlay");

	ABP_DLC_AutosaveAndRetry_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.FlagChange_in
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_AutosaveAndRetry_C::FlagChange_in()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.FlagChange_in");

	ABP_DLC_AutosaveAndRetry_C_FlagChange_in_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.StartIn_FlagCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_AutosaveAndRetry_C::StartIn_FlagCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.StartIn_FlagCheck");

	ABP_DLC_AutosaveAndRetry_C_StartIn_FlagCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.ExecuteUbergraph_BP_DLC_AutosaveAndRetry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_AutosaveAndRetry_C::ExecuteUbergraph_BP_DLC_AutosaveAndRetry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_AutosaveAndRetry.BP_DLC_AutosaveAndRetry_C.ExecuteUbergraph_BP_DLC_AutosaveAndRetry");

	ABP_DLC_AutosaveAndRetry_C_ExecuteUbergraph_BP_DLC_AutosaveAndRetry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
