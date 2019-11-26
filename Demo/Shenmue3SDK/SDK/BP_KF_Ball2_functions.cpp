
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_KF_Ball2.BP_KF_Ball2_C.DisableBall
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KF_Ball2_C::DisableBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.DisableBall");

	ABP_KF_Ball2_C_DisableBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.EnableBall
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KF_Ball2_C::EnableBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.EnableBall");

	ABP_KF_Ball2_C_EnableBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.SetInsideArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Inside                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Ball2_C::SetInsideArea(bool Inside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.SetInsideArea");

	ABP_KF_Ball2_C_SetInsideArea_Params params;
	params.Inside = Inside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.IsStopped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStop                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Ball2_C::IsStopped(bool* bStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.IsStopped");

	ABP_KF_Ball2_C_IsStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KF_Ball2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.UserConstructionScript");

	ABP_KF_Ball2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_KF_Ball2_C::BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_KF_Ball2_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KF_Ball2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.ReceiveBeginPlay");

	ABP_KF_Ball2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Ball2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.ReceiveTick");

	ABP_KF_Ball2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.ExecuteUbergraph_BP_KF_Ball2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Ball2_C::ExecuteUbergraph_BP_KF_Ball2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.ExecuteUbergraph_BP_KF_Ball2");

	ABP_KF_Ball2_C_ExecuteUbergraph_BP_KF_Ball2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Ball2.BP_KF_Ball2_C.EventDispatcher_BallHitXObj__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_KF_Ball2_C::EventDispatcher_BallHitXObj__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Ball2.BP_KF_Ball2_C.EventDispatcher_BallHitXObj__DelegateSignature");

	ABP_KF_Ball2_C_EventDispatcher_BallHitXObj__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
