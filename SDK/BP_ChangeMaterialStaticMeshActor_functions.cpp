
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ChangeMaterialStaticMeshActor_C::ChangeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeMaterial");

	ABP_ChangeMaterialStaticMeshActor_C_ChangeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.CheckTimeEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ChangeMaterialStaticMeshActor_C::CheckTimeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.CheckTimeEvent");

	ABP_ChangeMaterialStaticMeshActor_C_CheckTimeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ChangeMaterialStaticMeshActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.UserConstructionScript");

	ABP_ChangeMaterialStaticMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChangeMaterialStaticMeshActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveBeginPlay");

	ABP_ChangeMaterialStaticMeshActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::ChangeTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ChangeTimeEvent");

	ABP_ChangeMaterialStaticMeshActor_C_ChangeTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveEndPlay");

	ABP_ChangeMaterialStaticMeshActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ReceiveTick");

	ABP_ChangeMaterialStaticMeshActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChangeMaterialStaticMeshActor_C::ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C.ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor");

	ABP_ChangeMaterialStaticMeshActor_C_ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
