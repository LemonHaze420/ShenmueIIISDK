
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

// Function BP_BendingPlanks.BP_BendingPlanks_C.EvaluateWeight
// (Native, Event, Static, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PrintWeightDebug               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WeightMulti                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BendingPlanks_C::STATIC_EvaluateWeight(class UObject* Object, bool PrintWeightDebug, float* WeightMulti)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.EvaluateWeight");

	ABP_BendingPlanks_C_EvaluateWeight_Params params;
	params.Object = Object;
	params.PrintWeightDebug = PrintWeightDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeightMulti != nullptr)
		*WeightMulti = params.WeightMulti;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.PrintPawnArrayContents
// (Exec, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<class APawn*>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Print                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendingPlanks_C::STATIC_PrintPawnArrayContents(bool Print, TArray<class APawn*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.PrintPawnArrayContents");

	ABP_BendingPlanks_C_PrintPawnArrayContents_Params params;
	params.Print = Print;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.SortTouchingPawnsByDistance
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Delegate, BlueprintPure, NetValidate)
// Parameters:
// TArray<class APawn*>           Pawns                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APawn*>           SortedPawns                    (Parm, OutParm, ZeroConstructor)

void ABP_BendingPlanks_C::SortTouchingPawnsByDistance(TArray<class APawn*>* Pawns, TArray<class APawn*>* SortedPawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.SortTouchingPawnsByDistance");

	ABP_BendingPlanks_C_SortTouchingPawnsByDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawns != nullptr)
		*Pawns = params.Pawns;
	if (SortedPawns != nullptr)
		*SortedPawns = params.SortedPawns;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.UserConstructionScript
// (Net, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, BlueprintPure, NetValidate)

void ABP_BendingPlanks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.UserConstructionScript");

	ABP_BendingPlanks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.Sine__FinishedFunc
// (Net, NetReliable, Exec, Native, Event, NetResponse, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_BendingPlanks_C::Sine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.Sine__FinishedFunc");

	ABP_BendingPlanks_C_Sine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.Sine__UpdateFunc
// (NetReliable, Exec, Native, Event, NetResponse, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_BendingPlanks_C::Sine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.Sine__UpdateFunc");

	ABP_BendingPlanks_C_Sine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.ReceiveTick
// (Net, NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendingPlanks_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.ReceiveTick");

	ABP_BendingPlanks_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.BndEvt__Box_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Native, Event, MulticastDelegate, Private, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BendingPlanks_C::BndEvt__Box_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.BndEvt__Box_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_BendingPlanks_C_BndEvt__Box_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_BendingPlanks.BP_BendingPlanks_C.BndEvt__Box_K2Node_ComponentBoundEvent_85_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, HasDefaults, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendingPlanks_C::STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_85_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.BndEvt__Box_K2Node_ComponentBoundEvent_85_ComponentEndOverlapSignature__DelegateSignature");

	ABP_BendingPlanks_C_BndEvt__Box_K2Node_ComponentBoundEvent_85_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.ReceiveBeginPlay
// (Net, Exec, Native, Event, NetResponse, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_BendingPlanks_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.ReceiveBeginPlay");

	ABP_BendingPlanks_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendingPlanks.BP_BendingPlanks_C.ExecuteUbergraph_BP_BendingPlanks
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendingPlanks_C::STATIC_ExecuteUbergraph_BP_BendingPlanks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendingPlanks.BP_BendingPlanks_C.ExecuteUbergraph_BP_BendingPlanks");

	ABP_BendingPlanks_C_ExecuteUbergraph_BP_BendingPlanks_Params params;
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
