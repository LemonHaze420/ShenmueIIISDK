
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

// Function BP_PoleWithCable.BP_PoleWithCable_C.UpdateTimezone
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::UpdateTimezone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.UpdateTimezone");

	ABP_PoleWithCable_C_UpdateTimezone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.TurnOnPower
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bTurnOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::TurnOnPower(bool bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.TurnOnPower");

	ABP_PoleWithCable_C_TurnOnPower_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.ConditionalInitialize
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::ConditionalInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.ConditionalInitialize");

	ABP_PoleWithCable_C_ConditionalInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.setBaseIntensities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponentBase*     SpotLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ULightComponentBase*     PointLight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PoleWithCable_C::setBaseIntensities(class ULightComponentBase* SpotLight, class ULightComponentBase* PointLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.setBaseIntensities");

	ABP_PoleWithCable_C_setBaseIntensities_Params params;
	params.SpotLight = SpotLight;
	params.PointLight = PointLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.setShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::setShow(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.setShow");

	ABP_PoleWithCable_C_setShow_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.UserConstructionScript");

	ABP_PoleWithCable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_PoleWithCable_C::Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.Timeline__FinishedFunc");

	ABP_PoleWithCable_C_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_PoleWithCable_C::Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.Timeline__UpdateFunc");

	ABP_PoleWithCable_C_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.Flicker__FinishedFunc
// (BlueprintEvent)

void ABP_PoleWithCable_C::Flicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.Flicker__FinishedFunc");

	ABP_PoleWithCable_C_Flicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.Flicker__UpdateFunc
// (BlueprintEvent)

void ABP_PoleWithCable_C::Flicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.Flicker__UpdateFunc");

	ABP_PoleWithCable_C_Flicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.ReceiveTick");

	ABP_PoleWithCable_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.SlowlyLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::SlowlyLight(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.SlowlyLight");

	ABP_PoleWithCable_C_SlowlyLight_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.toggle
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.toggle");

	ABP_PoleWithCable_C_toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.StartFlicker
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::StartFlicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.StartFlicker");

	ABP_PoleWithCable_C_StartFlicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.StopFlicker
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::StopFlicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.StopFlicker");

	ABP_PoleWithCable_C_StopFlicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.Manual_Stop
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::Manual_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.Manual_Stop");

	ABP_PoleWithCable_C_Manual_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.Manual_Start
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::Manual_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.Manual_Start");

	ABP_PoleWithCable_C_Manual_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.catch_onTimeJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::catch_onTimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.catch_onTimeJump");

	ABP_PoleWithCable_C_catch_onTimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature");

	ABP_PoleWithCable_C_BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.DayTimeEventDispatcher_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.DayTimeEventDispatcher_Event_1");

	ABP_PoleWithCable_C_DayTimeEventDispatcher_Event_1_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PoleWithCable_C::BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_PoleWithCable_C_BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature");

	ABP_PoleWithCable_C_BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PoleWithCable_C::BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_PoleWithCable_C_BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_PoleWithCable.BP_PoleWithCable_C.firstBeginArea01
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::firstBeginArea01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.firstBeginArea01");

	ABP_PoleWithCable_C_firstBeginArea01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.firstBeginArea00
// (BlueprintCallable, BlueprintEvent)

void ABP_PoleWithCable_C::firstBeginArea00()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.firstBeginArea00");

	ABP_PoleWithCable_C_firstBeginArea00_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PoleWithCable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.ReceiveBeginPlay");

	ABP_PoleWithCable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PoleWithCable.BP_PoleWithCable_C.ExecuteUbergraph_BP_PoleWithCable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PoleWithCable_C::ExecuteUbergraph_BP_PoleWithCable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoleWithCable.BP_PoleWithCable_C.ExecuteUbergraph_BP_PoleWithCable");

	ABP_PoleWithCable_C_ExecuteUbergraph_BP_PoleWithCable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
