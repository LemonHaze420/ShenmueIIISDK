
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

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.GetFadeTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ActorVisibleControl_C::GetFadeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.GetFadeTime");

	ABP_ActorVisibleControl_C_GetFadeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.GetCharFadeComponent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBTL_MeshFaderComponent* MeshFader                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ActorVisibleControl_C::GetCharFadeComponent(class AActor* Target, bool* IsValid, class UBTL_MeshFaderComponent** MeshFader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.GetCharFadeComponent");

	ABP_ActorVisibleControl_C_GetCharFadeComponent_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (MeshFader != nullptr)
		*MeshFader = params.MeshFader;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetFadeTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::SetFadeTime(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetFadeTime");

	ABP_ActorVisibleControl_C_SetFadeTime_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.AddIgnoreActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::AddIgnoreActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.AddIgnoreActor");

	ABP_ActorVisibleControl_C_AddIgnoreActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.CanEndOverlapEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::CanEndOverlapEvent(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.CanEndOverlapEvent");

	ABP_ActorVisibleControl_C_CanEndOverlapEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetVisibleControlRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRadius                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::SetVisibleControlRadius(float NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetVisibleControlRadius");

	ABP_ActorVisibleControl_C_SetVisibleControlRadius_Params params;
	params.NewRadius = NewRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetEnbledVisibleControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::SetEnbledVisibleControl(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetEnbledVisibleControl");

	ABP_ActorVisibleControl_C_SetEnbledVisibleControl_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ShowNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::ShowNPC(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ShowNPC");

	ABP_ActorVisibleControl_C_ShowNPC_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.HideNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hide                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::HideNPC(class AActor* Actor, bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.HideNPC");

	ABP_ActorVisibleControl_C_HideNPC_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorVisibleControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.UserConstructionScript");

	ABP_ActorVisibleControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ActorVisibleControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ReceiveBeginPlay");

	ABP_ActorVisibleControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ReceiveEndPlay");

	ABP_ActorVisibleControl_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ActorVisibleControl_C::BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ExecuteUbergraph_BP_ActorVisibleControl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorVisibleControl_C::ExecuteUbergraph_BP_ActorVisibleControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ExecuteUbergraph_BP_ActorVisibleControl");

	ABP_ActorVisibleControl_C_ExecuteUbergraph_BP_ActorVisibleControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
