
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet_C
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FlwOrNpc_New_C::ExspPosSet_C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet_C");

	ABP_Hakkason_FlwOrNpc_New_C_ExspPosSet_C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.CheckSHEDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsePlayer                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DoorType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::CheckSHEDoor(bool* UsePlayer, int* DoorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.CheckSHEDoor");

	ABP_Hakkason_FlwOrNpc_New_C_CheckSHEDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsePlayer != nullptr)
		*UsePlayer = params.UsePlayer;
	if (DoorType != nullptr)
		*DoorType = params.DoorType;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet_B
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FlwOrNpc_New_C::ExspPosSet_B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet_B");

	ABP_Hakkason_FlwOrNpc_New_C_ExspPosSet_B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FlwOrNpc_New_C::ExspPosSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExspPosSet");

	ABP_Hakkason_FlwOrNpc_New_C_ExspPosSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Door1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     Door2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     JoinTrigger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ParentSheSeparation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::InitSet(class UPrimitiveComponent* Door1, class UPrimitiveComponent* Door2, class UPrimitiveComponent* JoinTrigger, bool ParentSheSeparation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.InitSet");

	ABP_Hakkason_FlwOrNpc_New_C_InitSet_Params params;
	params.Door1 = Door1;
	params.Door2 = Door2;
	params.JoinTrigger = JoinTrigger;
	params.ParentSheSeparation = ParentSheSeparation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FlwOrNpc_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.UserConstructionScript");

	ABP_Hakkason_FlwOrNpc_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnBeginOverlap");

	ABP_Hakkason_FlwOrNpc_New_C_OnBeginOverlap_Params params;
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


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnEndOverlap");

	ABP_Hakkason_FlwOrNpc_New_C_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ReceiveTick");

	ABP_Hakkason_FlwOrNpc_New_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.RenewalActorCount");

	ABP_Hakkason_FlwOrNpc_New_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.TickChangeCheckKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FlwOrNpc_New_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.TickChangeCheckKill");

	ABP_Hakkason_FlwOrNpc_New_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnBeginOverLap_JoinTrigger
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::OnBeginOverLap_JoinTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnBeginOverLap_JoinTrigger");

	ABP_Hakkason_FlwOrNpc_New_C_OnBeginOverLap_JoinTrigger_Params params;
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


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnEndOverlap_JoinTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::OnEndOverlap_JoinTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.OnEndOverlap_JoinTrigger");

	ABP_Hakkason_FlwOrNpc_New_C_OnEndOverlap_JoinTrigger_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExecuteUbergraph_BP_Hakkason_FlwOrNpc_New
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FlwOrNpc_New_C::ExecuteUbergraph_BP_Hakkason_FlwOrNpc_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FlwOrNpc_New.BP_Hakkason_FlwOrNpc_New_C.ExecuteUbergraph_BP_Hakkason_FlwOrNpc_New");

	ABP_Hakkason_FlwOrNpc_New_C_ExecuteUbergraph_BP_Hakkason_FlwOrNpc_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
