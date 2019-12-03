
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

// Function BP_TimedBrazier.BP_TimedBrazier_C.ChangeEffect
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::ChangeEffect(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ChangeEffect");

	ABP_TimedBrazier_C_ChangeEffect_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.IsLightOn
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, NetServer, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           lightOn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::IsLightOn(bool* lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.IsLightOn");

	ABP_TimedBrazier_C_IsLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightOn != nullptr)
		*lightOn = params.lightOn;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.PlaySound
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, DLLImport, BlueprintEvent, NetValidate)

void ABP_TimedBrazier_C::STATIC_PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.PlaySound");

	ABP_TimedBrazier_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.UserConstructionScript
// (Net, NetRequest, Exec, NetResponse, Private, Protected, NetServer, DLLImport, BlueprintEvent, NetValidate)

void ABP_TimedBrazier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.UserConstructionScript");

	ABP_TimedBrazier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__FinishedFunc
// (Net, NetReliable, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__FinishedFunc");

	ABP_TimedBrazier_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__UpdateFunc
// (Net, NetReliable, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Timeline_0__UpdateFunc");

	ABP_TimedBrazier_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.delayedEveningStart
// (NetReliable, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::delayedEveningStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.delayedEveningStart");

	ABP_TimedBrazier_C_delayedEveningStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Start
// (NetReliable, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::Manual_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Start");

	ABP_TimedBrazier_C_Manual_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Stop
// (Net, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::Manual_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Manual_Stop");

	ABP_TimedBrazier_C_Manual_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.Toggle
// (Net, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.Toggle");

	ABP_TimedBrazier_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveEndPlay
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveEndPlay");

	ABP_TimedBrazier_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisible
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisible");

	ABP_TimedBrazier_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.catch_onTimeJump
// (Net, Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::catch_onTimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.catch_onTimeJump");

	ABP_TimedBrazier_C_catch_onTimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleBasedOnTime
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::SetVisibleBasedOnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleBasedOnTime");

	ABP_TimedBrazier_C_SetVisibleBasedOnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.DayTimeEventDispatcher_Event_1
// (Net, Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.DayTimeEventDispatcher_Event_1");

	ABP_TimedBrazier_C_DayTimeEventDispatcher_Event_1_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ReceiveBeginPlay");

	ABP_TimedBrazier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.UpdateTime
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TimedBrazier_C::UpdateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.UpdateTime");

	ABP_TimedBrazier_C_UpdateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleReinit
// (Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::SetVisibleReinit(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.SetVisibleReinit");

	ABP_TimedBrazier_C_SetVisibleReinit_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (NetResponse, Private, Protected, NetServer, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TimedBrazier_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_TimedBrazier_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_TimedBrazier.BP_TimedBrazier_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (Exec, Native, Static, NetMulticast, NetServer, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::STATIC_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_TimedBrazier_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimedBrazier.BP_TimedBrazier_C.ExecuteUbergraph_BP_TimedBrazier
// (Net, Static, MulticastDelegate, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimedBrazier_C::STATIC_ExecuteUbergraph_BP_TimedBrazier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimedBrazier.BP_TimedBrazier_C.ExecuteUbergraph_BP_TimedBrazier");

	ABP_TimedBrazier_C_ExecuteUbergraph_BP_TimedBrazier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
