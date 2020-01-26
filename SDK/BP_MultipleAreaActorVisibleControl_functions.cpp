
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

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.CheckOverlappingActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MultipleAreaActorVisibleControl_C::CheckOverlappingActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.CheckOverlappingActor");

	ABP_MultipleAreaActorVisibleControl_C_CheckOverlappingActor_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.OnVisibleControlAreaEndOverlap
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InOverlappedComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  InOtherActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     InOtherComp                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultipleAreaActorVisibleControl_C::OnVisibleControlAreaEndOverlap(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.OnVisibleControlAreaEndOverlap");

	ABP_MultipleAreaActorVisibleControl_C_OnVisibleControlAreaEndOverlap_Params params;
	params.InOverlappedComponent = InOverlappedComponent;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.OnVisibleControlAreaBeginOverlap
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InOverlappedComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  InOtherActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     InOtherComp                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFromSweep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InHitResult                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MultipleAreaActorVisibleControl_C::OnVisibleControlAreaBeginOverlap(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, struct FHitResult* InHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.OnVisibleControlAreaBeginOverlap");

	ABP_MultipleAreaActorVisibleControl_C_OnVisibleControlAreaBeginOverlap_Params params;
	params.InOverlappedComponent = InOverlappedComponent;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InHitResult != nullptr)
		*InHitResult = params.InHitResult;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.FinalizeAdditionalVisibleControlArea
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MultipleAreaActorVisibleControl_C::FinalizeAdditionalVisibleControlArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.FinalizeAdditionalVisibleControlArea");

	ABP_MultipleAreaActorVisibleControl_C_FinalizeAdditionalVisibleControlArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.InitializeAdditionalVisibleControlArea
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MultipleAreaActorVisibleControl_C::InitializeAdditionalVisibleControlArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.InitializeAdditionalVisibleControlArea");

	ABP_MultipleAreaActorVisibleControl_C_InitializeAdditionalVisibleControlArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MultipleAreaActorVisibleControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.UserConstructionScript");

	ABP_MultipleAreaActorVisibleControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MultipleAreaActorVisibleControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ReceiveBeginPlay");

	ABP_MultipleAreaActorVisibleControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultipleAreaActorVisibleControl_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ReceiveEndPlay");

	ABP_MultipleAreaActorVisibleControl_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MultipleAreaActorVisibleControl_C::BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MultipleAreaActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultipleAreaActorVisibleControl_C::BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MultipleAreaActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ExecuteUbergraph_BP_MultipleAreaActorVisibleControl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultipleAreaActorVisibleControl_C::ExecuteUbergraph_BP_MultipleAreaActorVisibleControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ExecuteUbergraph_BP_MultipleAreaActorVisibleControl");

	ABP_MultipleAreaActorVisibleControl_C_ExecuteUbergraph_BP_MultipleAreaActorVisibleControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
