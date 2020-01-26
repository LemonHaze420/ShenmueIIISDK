
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

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.CanEndOverlapEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkActorVisibleControl_C::CanEndOverlapEvent(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.CanEndOverlapEvent");

	ABP_TalkActorVisibleControl_C_CanEndOverlapEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.CanHideNPC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkActorVisibleControl_C::CanHideNPC(class AActor* Actor, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.CanHideNPC");

	ABP_TalkActorVisibleControl_C_CanHideNPC_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.UpdateHideNPC
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkActorVisibleControl_C::UpdateHideNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.UpdateHideNPC");

	ABP_TalkActorVisibleControl_C_UpdateHideNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TalkActorVisibleControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.UserConstructionScript");

	ABP_TalkActorVisibleControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TalkActorVisibleControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ReceiveBeginPlay");

	ABP_TalkActorVisibleControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkActorVisibleControl_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ReceiveTick");

	ABP_TalkActorVisibleControl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.OnCameraChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_TalkActorVisibleControl_C::OnCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.OnCameraChanged");

	ABP_TalkActorVisibleControl_C_OnCameraChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TalkActorVisibleControl_C::BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_TalkActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ExecuteUbergraph_BP_TalkActorVisibleControl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkActorVisibleControl_C::ExecuteUbergraph_BP_TalkActorVisibleControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ExecuteUbergraph_BP_TalkActorVisibleControl");

	ABP_TalkActorVisibleControl_C_ExecuteUbergraph_BP_TalkActorVisibleControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
