
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

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.SetMiniGameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::SetMiniGameMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.SetMiniGameMode");

	ABP_MiniGame_CC_Chicken_C_SetMiniGameMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.IsReSpawnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_CC_Chicken_C::IsReSpawnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.IsReSpawnable");

	ABP_MiniGame_CC_Chicken_C_IsReSpawnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateRunningSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::UpdateRunningSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateRunningSE");

	ABP_MiniGame_CC_Chicken_C_UpdateRunningSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableUpdateSerchCatch
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::EnableUpdateSerchCatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableUpdateSerchCatch");

	ABP_MiniGame_CC_Chicken_C_EnableUpdateSerchCatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateEnableSearchCatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::UpdateEnableSearchCatch(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateEnableSearchCatch");

	ABP_MiniGame_CC_Chicken_C_UpdateEnableSearchCatch_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UnEnableChicken
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::UnEnableChicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UnEnableChicken");

	ABP_MiniGame_CC_Chicken_C_UnEnableChicken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableChicken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RunStart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::EnableChicken(bool RunStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableChicken");

	ABP_MiniGame_CC_Chicken_C_EnableChicken_Params params;
	params.RunStart = RunStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetPlayRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::GetPlayRate(int ID, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetPlayRate");

	ABP_MiniGame_CC_Chicken_C_GetPlayRate_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetFarMoveIdFromPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MoveId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::GetFarMoveIdFromPlayer(int* MoveId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetFarMoveIdFromPlayer");

	ABP_MiniGame_CC_Chicken_C_GetFarMoveIdFromPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveId != nullptr)
		*MoveId = params.MoveId;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetCurrentState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_CC_ChickenState> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::GetCurrentState(TEnumAsByte<E_MiniGame_CC_ChickenState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetCurrentState");

	ABP_MiniGame_CC_Chicken_C_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeWalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::InitializeWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeWalk");

	ABP_MiniGame_CC_Chicken_C_InitializeWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeRun
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::InitializeRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeRun");

	ABP_MiniGame_CC_Chicken_C_InitializeRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetNearMoveId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MoveId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::GetNearMoveId(int* MoveId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetNearMoveId");

	ABP_MiniGame_CC_Chicken_C_GetNearMoveId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveId != nullptr)
		*MoveId = params.MoveId;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::UpdateDebug(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateDebug");

	ABP_MiniGame_CC_Chicken_C_UpdateDebug_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetEnableMoveId
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    IdList                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_CC_Chicken_C::GetEnableMoveId(TArray<int>* IdList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetEnableMoveId");

	ABP_MiniGame_CC_Chicken_C_GetEnableMoveId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdList != nullptr)
		*IdList = params.IdList;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::InitializeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeMove");

	ABP_MiniGame_CC_Chicken_C_InitializeMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UserConstructionScript");

	ABP_MiniGame_CC_Chicken_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_CC_Chicken_C_BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchCatchCollision_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::BndEvt__SearchCatchCollision_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchCatchCollision_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_CC_Chicken_C_BndEvt__SearchCatchCollision_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveTick");

	ABP_MiniGame_CC_Chicken_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveBeginPlay");

	ABP_MiniGame_CC_Chicken_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveEndPlay");

	ABP_MiniGame_CC_Chicken_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ChangeGameTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ChangeGameTimeEvent");

	ABP_MiniGame_CC_Chicken_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ExecuteUbergraph_BP_MiniGame_CC_Chicken
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::ExecuteUbergraph_BP_MiniGame_CC_Chicken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ExecuteUbergraph_BP_MiniGame_CC_Chicken");

	ABP_MiniGame_CC_Chicken_C_ExecuteUbergraph_BP_MiniGame_CC_Chicken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
