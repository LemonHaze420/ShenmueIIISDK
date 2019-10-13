
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

// Function BP_DirectionCheck.BP_DirectionCheck_C.Get_PlayerAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DirectionCheck_C::Get_PlayerAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.Get_PlayerAngle");

	ABP_DirectionCheck_C_Get_PlayerAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_DirectionCheck.BP_DirectionCheck_C.Get_HitDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Positive_direction             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Impact_dot_Arrow               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DirectionCheck_C::Get_HitDirection(bool* Positive_direction, float* Impact_dot_Arrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.Get_HitDirection");

	ABP_DirectionCheck_C_Get_HitDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Positive_direction != nullptr)
		*Positive_direction = params.Positive_direction;
	if (Impact_dot_Arrow != nullptr)
		*Impact_dot_Arrow = params.Impact_dot_Arrow;
}


// Function BP_DirectionCheck.BP_DirectionCheck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DirectionCheck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.UserConstructionScript");

	ABP_DirectionCheck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionCheck.BP_DirectionCheck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DirectionCheck_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.ReceiveBeginPlay");

	ABP_DirectionCheck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionCheck.BP_DirectionCheck_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DirectionCheck_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DirectionCheck_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionCheck.BP_DirectionCheck_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DirectionCheck_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DirectionCheck_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DirectionCheck.BP_DirectionCheck_C.ExecuteUbergraph_BP_DirectionCheck
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DirectionCheck_C::ExecuteUbergraph_BP_DirectionCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.ExecuteUbergraph_BP_DirectionCheck");

	ABP_DirectionCheck_C_ExecuteUbergraph_BP_DirectionCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionCheck.BP_DirectionCheck_C.ChangeDirection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Positive_direction             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Impact_dot_Arrow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DirectionCheck_C::ChangeDirection__DelegateSignature(bool Positive_direction, float Impact_dot_Arrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionCheck.BP_DirectionCheck_C.ChangeDirection__DelegateSignature");

	ABP_DirectionCheck_C_ChangeDirection__DelegateSignature_Params params;
	params.Positive_direction = Positive_direction;
	params.Impact_dot_Arrow = Impact_dot_Arrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
