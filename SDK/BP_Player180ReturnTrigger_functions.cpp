
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

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.TestPlayerState
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::TestPlayerState(bool* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.TestPlayerState");

	ABP_Player180ReturnTrigger_C_TestPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.SetEventStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStartEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::SetEventStatus(bool bStartEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.SetEventStatus");

	ABP_Player180ReturnTrigger_C_SetEventStatus_Params params;
	params.bStartEvent = bStartEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.CanActionByBehaviorState
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Player180ReturnTrigger_C::CanActionByBehaviorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.CanActionByBehaviorState");

	ABP_Player180ReturnTrigger_C_CanActionByBehaviorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.IsSubtitleDone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Player180ReturnTrigger_C::IsSubtitleDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.IsSubtitleDone");

	ABP_Player180ReturnTrigger_C_IsSubtitleDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.CheckCanBack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Back                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::CheckCanBack(const struct FVector& HitLocation, bool* Back)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.CheckCanBack");

	ABP_Player180ReturnTrigger_C_CheckCanBack_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Back != nullptr)
		*Back = params.Back;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.PlayAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::PlayAction(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.PlayAction");

	ABP_Player180ReturnTrigger_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.GetPlaybackDir
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ImpactDir                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalDir                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PlaybackDIr                    (Parm, OutParm, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::GetPlaybackDir(const struct FVector& ImpactDir, const struct FVector& NormalDir, struct FVector* PlaybackDIr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.GetPlaybackDir");

	ABP_Player180ReturnTrigger_C_GetPlaybackDir_Params params;
	params.ImpactDir = ImpactDir;
	params.NormalDir = NormalDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlaybackDIr != nullptr)
		*PlaybackDIr = params.PlaybackDIr;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.PlayAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::PlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.PlayAnimation");

	ABP_Player180ReturnTrigger_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.GetTextWithRandom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SubtitleIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Text_Label                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::GetTextWithRandom(int SubtitleIndex, struct FName* Text_Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.GetTextWithRandom");

	ABP_Player180ReturnTrigger_C_GetTextWithRandom_Params params;
	params.SubtitleIndex = SubtitleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text_Label != nullptr)
		*Text_Label = params.Text_Label;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ExistNextText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::ExistNextText(bool* Exist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ExistNextText");

	ABP_Player180ReturnTrigger_C_ExistNextText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.StartSubtitle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::StartSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.StartSubtitle");

	ABP_Player180ReturnTrigger_C_StartSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.UserConstructionScript");

	ABP_Player180ReturnTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Player180ReturnTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveTick");

	ABP_Player180ReturnTrigger_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnSubtitlePlayFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::OnSubtitlePlayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnSubtitlePlayFinished");

	ABP_Player180ReturnTrigger_C_OnSubtitlePlayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Player180ReturnTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveBeginPlay");

	ABP_Player180ReturnTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveEndPlay");

	ABP_Player180ReturnTrigger_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnEnterStepAndTime
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::OnEnterStepAndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnEnterStepAndTime");

	ABP_Player180ReturnTrigger_C_OnEnterStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnExitStepAndTime
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::OnExitStepAndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnExitStepAndTime");

	ABP_Player180ReturnTrigger_C_OnExitStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.SetShouldBeObstacle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::SetShouldBeObstacle(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.SetShouldBeObstacle");

	ABP_Player180ReturnTrigger_C_SetShouldBeObstacle_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ExecuteUbergraph_BP_Player180ReturnTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Player180ReturnTrigger_C::ExecuteUbergraph_BP_Player180ReturnTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ExecuteUbergraph_BP_Player180ReturnTrigger");

	ABP_Player180ReturnTrigger_C_ExecuteUbergraph_BP_Player180ReturnTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.EndTurnAround__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Player180ReturnTrigger_C::EndTurnAround__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.EndTurnAround__DelegateSignature");

	ABP_Player180ReturnTrigger_C_EndTurnAround__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
