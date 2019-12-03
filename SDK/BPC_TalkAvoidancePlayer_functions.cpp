
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

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ForceAnimationUpdate
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetClient, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::STATIC_ForceAnimationUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ForceAnimationUpdate");

	UBPC_TalkAvoidancePlayer_C_ForceAnimationUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.CanAvoidance
// (Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::CanAvoidance(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.CanAvoidance");

	UBPC_TalkAvoidancePlayer_C_CanAvoidance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetTargetActorEyeLocationForTraceCheck
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InOwnerLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_TalkAvoidancePlayer_C::STATIC_GetTargetActorEyeLocationForTraceCheck(class AActor* InActor, const struct FVector& InOwnerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetTargetActorEyeLocationForTraceCheck");

	UBPC_TalkAvoidancePlayer_C_GetTargetActorEyeLocationForTraceCheck_Params params;
	params.InActor = InActor;
	params.InOwnerLocation = InOwnerLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetTargetActorLocationForCheck
// (Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_TalkAvoidancePlayer_C::STATIC_GetTargetActorLocationForCheck(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetTargetActorLocationForCheck");

	UBPC_TalkAvoidancePlayer_C_GetTargetActorLocationForCheck_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetDistanceToLeaveForCheck
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_TalkAvoidancePlayer_C::GetDistanceToLeaveForCheck(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetDistanceToLeaveForCheck");

	UBPC_TalkAvoidancePlayer_C_GetDistanceToLeaveForCheck_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsAvoiddableDecide
// (Exec, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bExecution                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::IsAvoiddableDecide(bool* bExecution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsAvoiddableDecide");

	UBPC_TalkAvoidancePlayer_C_IsAvoiddableDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExecution != nullptr)
		*bExecution = params.bExecution;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsShowItemCollisionCheck
// (Net, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHitCollision                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::IsShowItemCollisionCheck(const struct FVector& ActorLocation, bool* bHitCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsShowItemCollisionCheck");

	UBPC_TalkAvoidancePlayer_C_IsShowItemCollisionCheck_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHitCollision != nullptr)
		*bHitCollision = params.bHitCollision;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.AvoidableTest
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bDesperate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessAvoidable              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::AvoidableTest(const struct FVector& ActorLocation, bool bDesperate, bool* bSuccessAvoidable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.AvoidableTest");

	UBPC_TalkAvoidancePlayer_C_AvoidableTest_Params params;
	params.ActorLocation = ActorLocation;
	params.bDesperate = bDesperate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessAvoidable != nullptr)
		*bSuccessAvoidable = params.bSuccessAvoidable;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsSitMotionPlayer
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          TargetActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bSit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::IsSitMotionPlayer(TArray<class AActor*>* TargetActors, bool* bSit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsSitMotionPlayer");

	UBPC_TalkAvoidancePlayer_C_IsSitMotionPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetActors != nullptr)
		*TargetActors = params.TargetActors;
	if (bSit != nullptr)
		*bSit = params.bSit;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsExistShowItemTask
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::STATIC_IsExistShowItemTask(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsExistShowItemTask");

	UBPC_TalkAvoidancePlayer_C_IsExistShowItemTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ProcessAvoidable
// (NetRequest, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bProcessed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::ProcessAvoidable(bool* bProcessed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ProcessAvoidable");

	UBPC_TalkAvoidancePlayer_C_ProcessAvoidable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessed != nullptr)
		*bProcessed = params.bProcessed;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, Event, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_TalkAvoidancePlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ReceiveBeginPlay");

	UBPC_TalkAvoidancePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.BeginTalk
// (NetRequest, Native, Event, Public, Delegate)

void UBPC_TalkAvoidancePlayer_C::BeginTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.BeginTalk");

	UBPC_TalkAvoidancePlayer_C_BeginTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ReceiveEndPlay
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ReceiveEndPlay");

	UBPC_TalkAvoidancePlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ExecuteUbergraph_BPC_TalkAvoidancePlayer
// (NetRequest, Exec, Event, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidancePlayer_C::ExecuteUbergraph_BPC_TalkAvoidancePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ExecuteUbergraph_BPC_TalkAvoidancePlayer");

	UBPC_TalkAvoidancePlayer_C_ExecuteUbergraph_BPC_TalkAvoidancePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
