
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

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.SetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Output_Get                     (Parm, OutParm, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::SetTargetLocation(const struct FVector& TargetLocation, struct FVector* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.SetTargetLocation");

	ABP_Fishing_FreeMoveFish_C_SetTargetLocation_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.MoveToTaget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::MoveToTaget(bool InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.MoveToTaget");

	ABP_Fishing_FreeMoveFish_C_MoveToTaget_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.IsNeedTargetUpdate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::IsNeedTargetUpdate(bool* Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.IsNeedTargetUpdate");

	ABP_Fishing_FreeMoveFish_C_IsNeedTargetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need != nullptr)
		*Need = params.Need;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateTargetLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AdditiveAngle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::UpdateTargetLocation(float AdditiveAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateTargetLocation");

	ABP_Fishing_FreeMoveFish_C_UpdateTargetLocation_Params params;
	params.AdditiveAngle = AdditiveAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.SetBaseLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BaseLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::SetBaseLocation(const struct FVector& BaseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.SetBaseLocation");

	ABP_Fishing_FreeMoveFish_C_SetBaseLocation_Params params;
	params.BaseLocation = BaseLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.Initialize");

	ABP_Fishing_FreeMoveFish_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceReplace                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::UpdateMove(bool ForceReplace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateMove");

	ABP_Fishing_FreeMoveFish_C_UpdateMove_Params params;
	params.ForceReplace = ForceReplace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UserConstructionScript");

	ABP_Fishing_FreeMoveFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateFadeTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::UpdateFadeTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateFadeTimeLine__FinishedFunc");

	ABP_Fishing_FreeMoveFish_C_UpdateFadeTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateFadeTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::UpdateFadeTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateFadeTimeLine__UpdateFunc");

	ABP_Fishing_FreeMoveFish_C_UpdateFadeTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ReceiveTick");

	ABP_Fishing_FreeMoveFish_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ReceiveBeginPlay");

	ABP_Fishing_FreeMoveFish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Fishing_FreeMoveFish_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.DestroyReady
// (BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::DestroyReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.DestroyReady");

	ABP_Fishing_FreeMoveFish_C_DestroyReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.InitializeFadeMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Fishing_FreeMoveFish_C::InitializeFadeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.InitializeFadeMaterial");

	ABP_Fishing_FreeMoveFish_C_InitializeFadeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ExecuteUbergraph_BP_Fishing_FreeMoveFish
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_FreeMoveFish_C::ExecuteUbergraph_BP_Fishing_FreeMoveFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ExecuteUbergraph_BP_Fishing_FreeMoveFish");

	ABP_Fishing_FreeMoveFish_C_ExecuteUbergraph_BP_Fishing_FreeMoveFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
