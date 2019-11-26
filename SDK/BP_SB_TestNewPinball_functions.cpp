
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

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.GetTargetCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::GetTargetCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.GetTargetCount");

	ABP_SB_TestNewPinball_C_GetTargetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ResetTargetCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::ResetTargetCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ResetTargetCount");

	ABP_SB_TestNewPinball_C_ResetTargetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.AddTargetCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::AddTargetCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.AddTargetCount");

	ABP_SB_TestNewPinball_C_AddTargetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.GetIsCountTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsTarget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::GetIsCountTarget(bool* IsTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.GetIsCountTarget");

	ABP_SB_TestNewPinball_C_GetIsCountTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTarget != nullptr)
		*IsTarget = params.IsTarget;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.SetStopJudgeSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::SetStopJudgeSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.SetStopJudgeSpeed");

	ABP_SB_TestNewPinball_C_SetStopJudgeSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ResetPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::ResetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ResetPosition");

	ABP_SB_TestNewPinball_C_ResetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.PlayHitWallSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::PlayHitWallSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.PlayHitWallSound");

	ABP_SB_TestNewPinball_C_PlayHitWallSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.FinalizeSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::FinalizeSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.FinalizeSE");

	ABP_SB_TestNewPinball_C_FinalizeSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.Initialize");

	ABP_SB_TestNewPinball_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.SetWaitingStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWaitingStop                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::SetWaitingStop(bool bWaitingStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.SetWaitingStop");

	ABP_SB_TestNewPinball_C_SetWaitingStop_Params params;
	params.bWaitingStop = bWaitingStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.DisableBall
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::DisableBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.DisableBall");

	ABP_SB_TestNewPinball_C_DisableBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.EnableBall
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::EnableBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.EnableBall");

	ABP_SB_TestNewPinball_C_EnableBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.IsStopped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::IsStopped(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.IsStopped");

	ABP_SB_TestNewPinball_C_IsStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.UserConstructionScript");

	ABP_SB_TestNewPinball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewPinball_C::BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_SB_TestNewPinball_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewPinball_C::BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SB_TestNewPinball_C_BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SB_TestNewPinball_C_BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveTick");

	ABP_SB_TestNewPinball_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.StopSERolling
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewPinball_C::StopSERolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.StopSERolling");

	ABP_SB_TestNewPinball_C_StopSERolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveEndPlay");

	ABP_SB_TestNewPinball_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SB_TestNewPinball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveBeginPlay");

	ABP_SB_TestNewPinball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ExecuteUbergraph_BP_SB_TestNewPinball
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewPinball_C::ExecuteUbergraph_BP_SB_TestNewPinball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ExecuteUbergraph_BP_SB_TestNewPinball");

	ABP_SB_TestNewPinball_C_ExecuteUbergraph_BP_SB_TestNewPinball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
