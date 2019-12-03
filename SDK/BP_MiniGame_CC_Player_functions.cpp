
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

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.IsPlayerCollision
// (Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActorComponent*         ActorComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_CC_Player_C::IsPlayerCollision(class UActorComponent* ActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.IsPlayerCollision");

	ABP_MiniGame_CC_Player_C_IsPlayerCollision_Params params;
	params.ActorComponent = ActorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetReturnLocation
// (NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::SetReturnLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetReturnLocation");

	ABP_MiniGame_CC_Player_C_SetReturnLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.AddReturnCount
// (Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AddCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::STATIC_AddReturnCount(int AddCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.AddReturnCount");

	ABP_MiniGame_CC_Player_C_AddReturnCount_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetEnabledPlayer
// (NetRequest, NetMulticast, MulticastDelegate, Public, Protected, NetServer)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::SetEnabledPlayer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetEnabledPlayer");

	ABP_MiniGame_CC_Player_C_SetEnabledPlayer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UpdateCamera
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::UpdateCamera(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UpdateCamera");

	ABP_MiniGame_CC_Player_C_UpdateCamera_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.AnimRateUpdate
// (NetRequest, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::AnimRateUpdate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.AnimRateUpdate");

	ABP_MiniGame_CC_Player_C_AnimRateUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.StopMove
// (Exec, NetResponse, Static, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_CC_Player_C::STATIC_StopMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.StopMove");

	ABP_MiniGame_CC_Player_C_StopMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.MoveUpdate
// (Net, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::MoveUpdate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.MoveUpdate");

	ABP_MiniGame_CC_Player_C_MoveUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetAnimMoveRate
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::STATIC_SetAnimMoveRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetAnimMoveRate");

	ABP_MiniGame_CC_Player_C_SetAnimMoveRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.PlayCatchAnim
// (Net, Exec, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_CC_Player_C::PlayCatchAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.PlayCatchAnim");

	ABP_MiniGame_CC_Player_C_PlayCatchAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputAxisLook
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          LRAxis                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UDAxis                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::STATIC_InputAxisLook(float LRAxis, float UDAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputAxisLook");

	ABP_MiniGame_CC_Player_C_InputAxisLook_Params params;
	params.LRAxis = LRAxis;
	params.UDAxis = UDAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.PreUpdate
// (NetResponse, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSec                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::PreUpdate(float DeltaSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.PreUpdate");

	ABP_MiniGame_CC_Player_C_PreUpdate_Params params;
	params.DeltaSec = DeltaSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UserConstructionScript
// (Net, Exec, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_CC_Player_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UserConstructionScript");

	ABP_MiniGame_CC_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdollBlend__FinishedFunc
// (Net, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::UnRagdollBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdollBlend__FinishedFunc");

	ABP_MiniGame_CC_Player_C_UnRagdollBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdollBlend__UpdateFunc
// (Net, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::UnRagdollBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdollBlend__UpdateFunc");

	ABP_MiniGame_CC_Player_C_UnRagdollBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.RagdollBlend__FinishedFunc
// (Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::RagdollBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.RagdollBlend__FinishedFunc");

	ABP_MiniGame_CC_Player_C_RagdollBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.RagdollBlend__UpdateFunc
// (Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::RagdollBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.RagdollBlend__UpdateFunc");

	ABP_MiniGame_CC_Player_C_RagdollBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.Timeline_0__FinishedFunc
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.Timeline_0__FinishedFunc");

	ABP_MiniGame_CC_Player_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.Timeline_0__UpdateFunc
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.Timeline_0__UpdateFunc");

	ABP_MiniGame_CC_Player_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InpActEvt_Y_K2Node_InputKeyEvent_4
// (Net, NetRequest, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Player_C::InpActEvt_Y_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InpActEvt_Y_K2Node_InputKeyEvent_4");

	ABP_MiniGame_CC_Player_C_InpActEvt_Y_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InpActEvt_Y_K2Node_InputKeyEvent_3
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Player_C::STATIC_InpActEvt_Y_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InpActEvt_Y_K2Node_InputKeyEvent_3");

	ABP_MiniGame_CC_Player_C_InpActEvt_Y_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ReceiveBeginPlay");

	ABP_MiniGame_CC_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ReceiveTick
// (Net, Event, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ReceiveTick");

	ABP_MiniGame_CC_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ChangeLocoState
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<ELocomotionState>  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::ChangeLocoState(TEnumAsByte<ELocomotionState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ChangeLocoState");

	ABP_MiniGame_CC_Player_C_ChangeLocoState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ToRagdoll
// (Net, NetRequest, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::ToRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ToRagdoll");

	ABP_MiniGame_CC_Player_C_ToRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdoll
// (NetRequest, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::UnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdoll");

	ABP_MiniGame_CC_Player_C_UnRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.StopTurningInPlace
// (NetRequest, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::StopTurningInPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.StopTurningInPlace");

	ABP_MiniGame_CC_Player_C_StopTurningInPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.TurnInPlace
// (Net, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                TurnInPlaceStart               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TurnInPlaceTarget              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            TurnAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::TurnInPlace(const struct FRotator& TurnInPlaceStart, const struct FRotator& TurnInPlaceTarget, class UCurveFloat* Curve, class UAnimMontage* TurnAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.TurnInPlace");

	ABP_MiniGame_CC_Player_C_TurnInPlace_Params params;
	params.TurnInPlaceStart = TurnInPlaceStart;
	params.TurnInPlaceTarget = TurnInPlaceTarget;
	params.Curve = Curve;
	params.TurnAnimation = TurnAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputReleasedRun
// (Net, NetReliable, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::InputReleasedRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputReleasedRun");

	ABP_MiniGame_CC_Player_C_InputReleasedRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputPressedRun
// (Net, NetReliable, Native, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_CC_Player_C::InputPressedRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputPressedRun");

	ABP_MiniGame_CC_Player_C_InputPressedRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputMoveForward
// (NetRequest, Exec, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::InputMoveForward(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputMoveForward");

	ABP_MiniGame_CC_Player_C_InputMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputMoveRight
// (Native, NetResponse, Static, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::STATIC_InputMoveRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputMoveRight");

	ABP_MiniGame_CC_Player_C_InputMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ExecuteUbergraph_BP_MiniGame_CC_Player
// (Net, NetRequest, Native, Event, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Player_C::ExecuteUbergraph_BP_MiniGame_CC_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ExecuteUbergraph_BP_MiniGame_CC_Player");

	ABP_MiniGame_CC_Player_C_ExecuteUbergraph_BP_MiniGame_CC_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
