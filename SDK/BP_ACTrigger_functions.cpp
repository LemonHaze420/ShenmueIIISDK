
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

// Function BP_ACTrigger.BP_ACTrigger_C.BehaviorControl
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// bool                           NoChangeBehavior               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::STATIC_BehaviorControl(bool NoChangeBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.BehaviorControl");

	ABP_ACTrigger_C_BehaviorControl_Params params;
	params.NoChangeBehavior = NoChangeBehavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.CheckSavedConditions
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ACTrigger_C::STATIC_CheckSavedConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.CheckSavedConditions");

	ABP_ACTrigger_C_CheckSavedConditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ACTrigger.BP_ACTrigger_C.CheckPlayCount
// (NetReliable, NetRequest, Exec, Native, Event, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ACTrigger_C::CheckPlayCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.CheckPlayCount");

	ABP_ACTrigger_C_CheckPlayCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ACTrigger.BP_ACTrigger_C.TriggerEnable
// (Net, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::STATIC_TriggerEnable(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.TriggerEnable");

	ABP_ACTrigger_C_TriggerEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ShutDownActionFunc
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_ACTrigger_C::ShutDownActionFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ShutDownActionFunc");

	ABP_ACTrigger_C_ShutDownActionFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.IsForward
// (NetReliable, Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Play                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::STATIC_IsForward(const struct FVector& HitLocation, bool* Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.IsForward");

	ABP_ACTrigger_C_IsForward_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play != nullptr)
		*Play = params.Play;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ShouldDelayFadeIn
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DisableIt                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::ShouldDelayFadeIn(bool* DisableIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ShouldDelayFadeIn");

	ABP_ACTrigger_C_ShouldDelayFadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisableIt != nullptr)
		*DisableIt = params.DisableIt;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ShouldDisablePlayerControl
// (NetReliable, Native, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DisableIt                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::ShouldDisablePlayerControl(bool* DisableIt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ShouldDisablePlayerControl");

	ABP_ACTrigger_C_ShouldDisablePlayerControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisableIt != nullptr)
		*DisableIt = params.DisableIt;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ApplyLog
// (NetReliable, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)

void ABP_ACTrigger_C::ApplyLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ApplyLog");

	ABP_ACTrigger_C_ApplyLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ResetLog
// (Exec, NetResponse, NetMulticast, Public, BlueprintPure, NetValidate)

void ABP_ACTrigger_C::ResetLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ResetLog");

	ABP_ACTrigger_C_ResetLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.CheckReset
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Reset                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::STATIC_CheckReset(bool* Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.CheckReset");

	ABP_ACTrigger_C_CheckReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reset != nullptr)
		*Reset = params.Reset;
}


// Function BP_ACTrigger.BP_ACTrigger_C.SaveLog
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_ACTrigger_C::STATIC_SaveLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.SaveLog");

	ABP_ACTrigger_C_SaveLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.CanPlay
// (Net, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintPure, NetValidate)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::CanPlay(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.CanPlay");

	ABP_ACTrigger_C_CanPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_ACTrigger.BP_ACTrigger_C.TeleportPlayer
// (NetResponse, NetMulticast, Public, BlueprintPure, NetValidate)

void ABP_ACTrigger_C::TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.TeleportPlayer");

	ABP_ACTrigger_C_TeleportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.SetPlayerControl
// (NetRequest, Exec, Native, Public, NetServer, BlueprintPure, NetValidate)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::SetPlayerControl(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.SetPlayerControl");

	ABP_ACTrigger_C_SetPlayerControl_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.PlayAction
// (Net, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::STATIC_PlayAction(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.PlayAction");

	ABP_ACTrigger_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_ACTrigger.BP_ACTrigger_C.UserConstructionScript
// (Net, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)

void ABP_ACTrigger_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.UserConstructionScript");

	ABP_ACTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811");

	ABP_ACTrigger_C_OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ReceiveTick
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ReceiveTick");

	ABP_ACTrigger_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (Net, Exec, Native, Event, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ACTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ACTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ACTrigger.BP_ACTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ACTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ReceiveBeginPlay
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_ACTrigger_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ReceiveBeginPlay");

	ABP_ACTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ReceiveEndPlay");

	ABP_ACTrigger_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.PlayACEvent
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_ACTrigger_C::STATIC_PlayACEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.PlayACEvent");

	ABP_ACTrigger_C_PlayACEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.CheckCanPlay
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_ACTrigger_C::STATIC_CheckCanPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.CheckCanPlay");

	ABP_ACTrigger_C_CheckCanPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.CustomEvent
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::CustomEvent(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.CustomEvent");

	ABP_ACTrigger_C_CustomEvent_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.LoadTalkScript
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, NetValidate)

void ABP_ACTrigger_C::STATIC_LoadTalkScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.LoadTalkScript");

	ABP_ACTrigger_C_LoadTalkScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACTrigger.BP_ACTrigger_C.ExecuteUbergraph_BP_ACTrigger
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACTrigger_C::ExecuteUbergraph_BP_ACTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACTrigger.BP_ACTrigger_C.ExecuteUbergraph_BP_ACTrigger");

	ABP_ACTrigger_C_ExecuteUbergraph_BP_ACTrigger_Params params;
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
