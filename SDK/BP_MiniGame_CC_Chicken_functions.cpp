
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

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.CheckNeedRun
// (NetRequest, Native, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// bool                           NeedRun                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_CheckNeedRun(bool* NeedRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.CheckNeedRun");

	ABP_MiniGame_CC_Chicken_C_CheckNeedRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedRun != nullptr)
		*NeedRun = params.NeedRun;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.SetMiniGameMode
// (Exec, Native, Event, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_SetMiniGameMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.SetMiniGameMode");

	ABP_MiniGame_CC_Chicken_C_SetMiniGameMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.IsReSpawnable
// (Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, Exec, Native, NetMulticast, MulticastDelegate, NetServer, HasDefaults, DLLImport, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::UpdateRunningSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateRunningSE");

	ABP_MiniGame_CC_Chicken_C_UpdateRunningSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableUpdateSerchCatch
// (NetReliable, Native, Event, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)

void ABP_MiniGame_CC_Chicken_C::STATIC_EnableUpdateSerchCatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableUpdateSerchCatch");

	ABP_MiniGame_CC_Chicken_C_EnableUpdateSerchCatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateEnableSearchCatch
// (Net, NetReliable, NetRequest, Native, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::UpdateEnableSearchCatch(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateEnableSearchCatch");

	ABP_MiniGame_CC_Chicken_C_UpdateEnableSearchCatch_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UnEnableChicken
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_CC_Chicken_C::UnEnableChicken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UnEnableChicken");

	ABP_MiniGame_CC_Chicken_C_UnEnableChicken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableChicken
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           RunStart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_EnableChicken(bool RunStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableChicken");

	ABP_MiniGame_CC_Chicken_C_EnableChicken_Params params;
	params.RunStart = RunStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetPlayRate
// (Net, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_GetPlayRate(int ID, float* Rate)
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
// (Exec, Native, Event, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MoveId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::GetFarMoveIdFromPlayer(int* MoveId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetFarMoveIdFromPlayer");

	ABP_MiniGame_CC_Chicken_C_GetFarMoveIdFromPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveId != nullptr)
		*MoveId = params.MoveId;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetCurrentState
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_CC_ChickenState> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::GetCurrentState(TEnumAsByte<E_MiniGame_CC_ChickenState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetCurrentState");

	ABP_MiniGame_CC_Chicken_C_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeWalk
// (NetReliable, Exec, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGame_CC_Chicken_C::STATIC_InitializeWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeWalk");

	ABP_MiniGame_CC_Chicken_C_InitializeWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeRun
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)

void ABP_MiniGame_CC_Chicken_C::STATIC_InitializeRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeRun");

	ABP_MiniGame_CC_Chicken_C_InitializeRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetNearMoveId
// (Exec, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, NetResponse, Static, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_UpdateDebug(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateDebug");

	ABP_MiniGame_CC_Chicken_C_UpdateDebug_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetEnableMoveId
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int>                    IdList                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_CC_Chicken_C::GetEnableMoveId(TArray<int>* IdList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetEnableMoveId");

	ABP_MiniGame_CC_Chicken_C_GetEnableMoveId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdList != nullptr)
		*IdList = params.IdList;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeMove
// (NetReliable, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, BlueprintEvent)

void ABP_MiniGame_CC_Chicken_C::InitializeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeMove");

	ABP_MiniGame_CC_Chicken_C_InitializeMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Chicken_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UserConstructionScript");

	ABP_MiniGame_CC_Chicken_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, Exec, Native, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveTick
// (NetReliable, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveTick");

	ABP_MiniGame_CC_Chicken_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveBeginPlay
// (NetReliable, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Chicken_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveBeginPlay");

	ABP_MiniGame_CC_Chicken_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveEndPlay
// (Net, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveEndPlay");

	ABP_MiniGame_CC_Chicken_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ChangeGameTimeEvent
// (Net, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ChangeGameTimeEvent");

	ABP_MiniGame_CC_Chicken_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ExecuteUbergraph_BP_MiniGame_CC_Chicken
// (Exec, Static, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Chicken_C::STATIC_ExecuteUbergraph_BP_MiniGame_CC_Chicken(int EntryPoint)
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
