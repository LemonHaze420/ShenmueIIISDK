
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

// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeMaterial
// (NetReliable, Static, NetMulticast, Private, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_ChangeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeMaterial");

	ABP_ChangeMaterialStaticMeshActor_C_ChangeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.CheckTimeEvent
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_CheckTimeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.CheckTimeEvent");

	ABP_ChangeMaterialStaticMeshActor_C_CheckTimeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.UserConstructionScript
// (Native, Event, NetResponse, Static, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.UserConstructionScript");

	ABP_ChangeMaterialStaticMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveBeginPlay");

	ABP_ChangeMaterialStaticMeshActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeTimeEvent
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_ChangeTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeTimeEvent");

	ABP_ChangeMaterialStaticMeshActor_C_ChangeTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveEndPlay
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveEndPlay");

	ABP_ChangeMaterialStaticMeshActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveTick
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveTick");

	ABP_ChangeMaterialStaticMeshActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::STATIC_ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor");

	ABP_ChangeMaterialStaticMeshActor_C_ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor_Params params;
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
