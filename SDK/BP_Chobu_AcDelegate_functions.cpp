
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

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CheckSheInRyosya1F
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           She_On                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::CheckSheInRyosya1F(bool* She_On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CheckSheInRyosya1F");

	ABP_Chobu_AcDelegate_C_CheckSheInRyosya1F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (She_On != nullptr)
		*She_On = params.She_On;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.AcAfterFlagSet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Chobu_AcDelegate_C::AcAfterFlagSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.AcAfterFlagSet");

	ABP_Chobu_AcDelegate_C_AcAfterFlagSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.PreExecDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Chobu_AcDelegate_C::PreExecDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.PreExecDelegate");

	ABP_Chobu_AcDelegate_C_PreExecDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CheckBeginOverRap_Local
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Begin_In                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::CheckBeginOverRap_Local(class UPrimitiveComponent* Trigger, bool* Begin_In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CheckBeginOverRap_Local");

	ABP_Chobu_AcDelegate_C_CheckBeginOverRap_Local_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Begin_In != nullptr)
		*Begin_In = params.Begin_In;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ExecDelegate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Current_Actor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::ExecDelegate(class AActor* Current_Actor, bool* Skip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ExecDelegate");

	ABP_Chobu_AcDelegate_C_ExecDelegate_Params params;
	params.Current_Actor = Current_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skip != nullptr)
		*Skip = params.Skip;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.InitSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Ryosya_Trigger                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::InitSet(class UPrimitiveComponent* Ryosya_Trigger, const struct FName& EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.InitSet");

	ABP_Chobu_AcDelegate_C_InitSet_Params params;
	params.Ryosya_Trigger = Ryosya_Trigger;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chobu_AcDelegate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.UserConstructionScript");

	ABP_Chobu_AcDelegate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.OnBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.OnBeginOverlap");

	ABP_Chobu_AcDelegate_C_OnBeginOverlap_Params params;
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


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.RenewalActorCount");

	ABP_Chobu_AcDelegate_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ReceiveTick");

	ABP_Chobu_AcDelegate_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CounterChangeKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Chobu_AcDelegate_C::CounterChangeKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CounterChangeKill");

	ABP_Chobu_AcDelegate_C_CounterChangeKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.StepChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::StepChanged(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.StepChanged");

	ABP_Chobu_AcDelegate_C_StepChanged_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ExecuteUbergraph_BP_Chobu_AcDelegate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chobu_AcDelegate_C::ExecuteUbergraph_BP_Chobu_AcDelegate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ExecuteUbergraph_BP_Chobu_AcDelegate");

	ABP_Chobu_AcDelegate_C_ExecuteUbergraph_BP_Chobu_AcDelegate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
