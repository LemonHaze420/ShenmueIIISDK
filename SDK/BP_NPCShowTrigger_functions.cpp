
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

// Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.EnableCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCHighPriorityShowSetting Setting                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bEnable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NPCShowTrigger_C::EnableCheck(struct FNPCHighPriorityShowSetting* Setting, bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.EnableCheck");

	ABP_NPCShowTrigger_C_EnableCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Setting != nullptr)
		*Setting = params.Setting;
	if (bEnable != nullptr)
		*bEnable = params.bEnable;
}


// Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.setShow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCShowTrigger_C::setShow(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.setShow");

	ABP_NPCShowTrigger_C_setShow_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPCShowTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.UserConstructionScript");

	ABP_NPCShowTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NPCShowTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_NPCShowTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCShowTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_NPCShowTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.ExecuteUbergraph_BP_NPCShowTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPCShowTrigger_C::ExecuteUbergraph_BP_NPCShowTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPCShowTrigger.BP_NPCShowTrigger_C.ExecuteUbergraph_BP_NPCShowTrigger");

	ABP_NPCShowTrigger_C_ExecuteUbergraph_BP_NPCShowTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
