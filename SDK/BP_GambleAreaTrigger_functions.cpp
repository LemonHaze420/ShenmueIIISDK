
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

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ShowUI
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_GambleAreaTrigger_C::STATIC_ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ShowUI");

	ABP_GambleAreaTrigger_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.HideUI
// (Net, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_GambleAreaTrigger_C::HideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.HideUI");

	ABP_GambleAreaTrigger_C_HideUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.UserConstructionScript
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_GambleAreaTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.UserConstructionScript");

	ABP_GambleAreaTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ReceiveBeginPlay
// (Net, NetRequest, Native, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_GambleAreaTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ReceiveBeginPlay");

	ABP_GambleAreaTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_GambleAreaTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_GambleAreaTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (Native, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GambleAreaTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_GambleAreaTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ReceiveEndPlay
// (Net, Event, NetResponse, Static, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GambleAreaTrigger_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ReceiveEndPlay");

	ABP_GambleAreaTrigger_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ExecuteUbergraph_BP_GambleAreaTrigger
// (Exec, Native, NetResponse, Static, NetMulticast, Public, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GambleAreaTrigger_C::STATIC_ExecuteUbergraph_BP_GambleAreaTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ExecuteUbergraph_BP_GambleAreaTrigger");

	ABP_GambleAreaTrigger_C_ExecuteUbergraph_BP_GambleAreaTrigger_Params params;
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
