
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

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.CulcDoorRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          axell                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          result_rot                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           end_rot                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::CulcDoorRot(float axell, float* result_rot, bool* end_rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.CulcDoorRot");

	ABP_Chubu_GamblBlock_C_CulcDoorRot_Params params;
	params.axell = axell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result_rot != nullptr)
		*result_rot = params.result_rot;
	if (end_rot != nullptr)
		*end_rot = params.end_rot;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chubu_GamblBlock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.UserConstructionScript");

	ABP_Chubu_GamblBlock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.Get StepChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::Get_StepChange(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.Get StepChange");

	ABP_Chubu_GamblBlock_C_Get_StepChange_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Chubu_GamblBlock_C_BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Chubu_GamblBlock_C_BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Chubu_GamblBlock_C_BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ReceiveTick");

	ABP_Chubu_GamblBlock_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Chubu_GamblBlock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ReceiveBeginPlay");

	ABP_Chubu_GamblBlock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ExecuteUbergraph_BP_Chubu_GamblBlock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chubu_GamblBlock_C::ExecuteUbergraph_BP_Chubu_GamblBlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ExecuteUbergraph_BP_Chubu_GamblBlock");

	ABP_Chubu_GamblBlock_C_ExecuteUbergraph_BP_Chubu_GamblBlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
