
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

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetPriority
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_NPC_Lead_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetPriority");

	ABP_NPC_Lead_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetDetectAction
// (NetReliable, NetRequest, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_NPC_Lead_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetDetectAction");

	ABP_NPC_Lead_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetCurrentTargetSpeed
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_NPC_Lead_C::STATIC_GetCurrentTargetSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetCurrentTargetSpeed");

	ABP_NPC_Lead_C_GetCurrentTargetSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.IsSitting
// (Net, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPC_Lead_C::IsSitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.IsSitting");

	ABP_NPC_Lead_C_IsSitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.SetLookAheadSpline
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USplineComponent*        spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_SetLookAheadSpline(class USplineComponent* spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.SetLookAheadSpline");

	ABP_NPC_Lead_C_SetLookAheadSpline_Params params;
	params.spline = spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.CanEnterBuilding
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3BuildingStaticMeshActor_C* Building                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPC_Lead_C::CanEnterBuilding(class ABP_S3BuildingStaticMeshActor_C* Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.CanEnterBuilding");

	ABP_NPC_Lead_C_CanEnterBuilding_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.TeleportToLeavePoint
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_NPC_Lead_C::TeleportToLeavePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.TeleportToLeavePoint");

	ABP_NPC_Lead_C_TeleportToLeavePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.StopMovement
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::StopMovement(bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.StopMovement");

	ABP_NPC_Lead_C_StopMovement_Params params;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.IsIdle
// (Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPC_Lead_C::STATIC_IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.IsIdle");

	ABP_NPC_Lead_C_IsIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetEnableIK
// (NetReliable, NetRequest, Exec, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIKEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::GetEnableIK(bool* bIKEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetEnableIK");

	ABP_NPC_Lead_C_GetEnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIKEnabled != nullptr)
		*bIKEnabled = params.bIKEnabled;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.SetEnableIK
// (Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bInIKEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_SetEnableIK(bool bInIKEnabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.SetEnableIK");

	ABP_NPC_Lead_C_SetEnableIK_Params params;
	params.bInIKEnabled = bInIKEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetAnimVelocity
// (Net, NetRequest, Native, Event, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_GetAnimVelocity(float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetAnimVelocity");

	ABP_NPC_Lead_C_GetAnimVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetStairClimber
// (NetRequest, Exec, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPC_S3PlayerStairClimber_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBPC_S3PlayerStairClimber_C* ABP_NPC_Lead_C::GetStairClimber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetStairClimber");

	ABP_NPC_Lead_C_GetStairClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetSpeed
// (Net, NetReliable, Exec, Native, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::GetSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetSpeed");

	ABP_NPC_Lead_C_GetSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.SetTargetSpeed
// (Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TargetSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_SetTargetSpeed(float TargetSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.SetTargetSpeed");

	ABP_NPC_Lead_C_SetTargetSpeed_Params params;
	params.TargetSpeed = TargetSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.IsTalking
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_NPC_Lead_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.IsTalking");

	ABP_NPC_Lead_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.GetTalkRotation
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_NPC_Lead_C::STATIC_GetTalkRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.GetTalkRotation");

	ABP_NPC_Lead_C_GetTalkRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.AddTurnAroundComponent
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_NPC_Lead_C::AddTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.AddTurnAroundComponent");

	ABP_NPC_Lead_C_AddTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.UserConstructionScript
// (Net, Exec, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_NPC_Lead_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.UserConstructionScript");

	ABP_NPC_Lead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.OnTalkFinished
// (Net, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.OnTalkFinished");

	ABP_NPC_Lead_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.OnTalkStart
// (Net, NetReliable, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_NPC_Lead_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.OnTalkStart");

	ABP_NPC_Lead_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.Screen_Player
// (NetReliable, Exec, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPC_Lead_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.Screen_Player");

	ABP_NPC_Lead_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.Screen_NPC
// (Net, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPC_Lead_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.Screen_NPC");

	ABP_NPC_Lead_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.OnFinishedTurnRotate
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_OnFinishedTurnRotate(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.OnFinishedTurnRotate");

	ABP_NPC_Lead_C_OnFinishedTurnRotate_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPC_Lead_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveBeginPlay");

	ABP_NPC_Lead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveEndPlay
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveEndPlay");

	ABP_NPC_Lead_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.DecideDetectAction
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.DecideDetectAction");

	ABP_NPC_Lead_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveTick
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveTick");

	ABP_NPC_Lead_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature
// (Net, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPC_Lead_C::BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature");

	ABP_NPC_Lead_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature
// (Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NPC_Lead_C::BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature");

	ABP_NPC_Lead_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.HandleTeleportSucceeded
// (Net, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsATest                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::STATIC_HandleTeleportSucceeded(bool bIsATest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.HandleTeleportSucceeded");

	ABP_NPC_Lead_C_HandleTeleportSucceeded_Params params;
	params.bIsATest = bIsATest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Lead.BP_NPC_Lead_C.ExecuteUbergraph_BP_NPC_Lead
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Lead_C::ExecuteUbergraph_BP_NPC_Lead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Lead.BP_NPC_Lead_C.ExecuteUbergraph_BP_NPC_Lead");

	ABP_NPC_Lead_C_ExecuteUbergraph_BP_NPC_Lead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
