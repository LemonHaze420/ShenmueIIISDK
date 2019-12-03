
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

// Function BP_AnimalBase.BP_AnimalBase_C.OnRep_FlySpeed
// (Net, NetReliable, NetRequest, Event, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)

void ABP_AnimalBase_C::OnRep_FlySpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRep_FlySpeed");

	ABP_AnimalBase_C_OnRep_FlySpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AnimalBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript");

	ABP_AnimalBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void ABP_AnimalBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay");

	ABP_AnimalBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBase.BP_AnimalBase_C.BndEvt__AlertSphere_K2Node_ComponentBoundEvent_171_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AnimalBase_C::STATIC_BndEvt__AlertSphere_K2Node_ComponentBoundEvent_171_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.BndEvt__AlertSphere_K2Node_ComponentBoundEvent_171_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AnimalBase_C_BndEvt__AlertSphere_K2Node_ComponentBoundEvent_171_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase
// (Net, Native, Event, NetResponse, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalBase_C::ExecuteUbergraph_BP_AnimalBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase");

	ABP_AnimalBase_C_ExecuteUbergraph_BP_AnimalBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBase.BP_AnimalBase_C.LandingPointOccupied__DelegateSignature
// (Net, NetReliable, Native, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)
// Parameters:
// class ABP_AnimalBase_C*        TriggeredAnimal                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalBase_C::LandingPointOccupied__DelegateSignature(class ABP_AnimalBase_C* TriggeredAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LandingPointOccupied__DelegateSignature");

	ABP_AnimalBase_C_LandingPointOccupied__DelegateSignature_Params params;
	params.TriggeredAnimal = TriggeredAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetAggroed__DelegateSignature
// (Net, NetReliable, Native, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)
// Parameters:
// class ABP_AnimalBase_C*        AggroAnimal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalBase_C::GetAggroed__DelegateSignature(class ABP_AnimalBase_C* AggroAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAggroed__DelegateSignature");

	ABP_AnimalBase_C_GetAggroed__DelegateSignature_Params params;
	params.AggroAnimal = AggroAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimalBase.BP_AnimalBase_C.GetAlerted__DelegateSignature
// (Net, NetReliable, Native, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)
// Parameters:
// class ABP_AnimalBase_C*        AlertedAnimal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimalBase_C::GetAlerted__DelegateSignature(class ABP_AnimalBase_C* AlertedAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAlerted__DelegateSignature");

	ABP_AnimalBase_C_GetAlerted__DelegateSignature_Params params;
	params.AlertedAnimal = AlertedAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
