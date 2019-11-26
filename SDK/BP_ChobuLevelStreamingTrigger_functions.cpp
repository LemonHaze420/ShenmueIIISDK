
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

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.FinishLevelStreaming
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ChobuLevelStreamingTrigger_C::FinishLevelStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.FinishLevelStreaming");

	ABP_ChobuLevelStreamingTrigger_C_FinishLevelStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.PlayAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuLevelStreamingTrigger_C::PlayAction(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.PlayAction");

	ABP_ChobuLevelStreamingTrigger_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.IsForward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ChobuLevelStreamingTrigger_C::IsForward(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.IsForward");

	ABP_ChobuLevelStreamingTrigger_C_IsForward_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChobuLevelStreamingTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.UserConstructionScript");

	ABP_ChobuLevelStreamingTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChobuLevelStreamingTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ReceiveBeginPlay");

	ABP_ChobuLevelStreamingTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuLevelStreamingTrigger_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ReceiveTick");

	ABP_ChobuLevelStreamingTrigger_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ChobuLevelStreamingTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ChobuLevelStreamingTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuLevelStreamingTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ChobuLevelStreamingTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.StartFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_ChobuLevelStreamingTrigger_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.StartFadeOut");

	ABP_ChobuLevelStreamingTrigger_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ExecuteUbergraph_BP_ChobuLevelStreamingTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuLevelStreamingTrigger_C::ExecuteUbergraph_BP_ChobuLevelStreamingTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ExecuteUbergraph_BP_ChobuLevelStreamingTrigger");

	ABP_ChobuLevelStreamingTrigger_C_ExecuteUbergraph_BP_ChobuLevelStreamingTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
