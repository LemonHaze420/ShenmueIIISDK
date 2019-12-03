
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

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.AddGameTime
// (Exec, NetResponse, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JumpProcessActor_C::AddGameTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.AddGameTime");

	ABP_JumpProcessActor_C_AddGameTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.CheckNPCSpawn
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_JumpProcessActor_C::STATIC_CheckNPCSpawn(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.CheckNPCSpawn");

	ABP_JumpProcessActor_C_CheckNPCSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.UserConstructionScript
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_JumpProcessActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.UserConstructionScript");

	ABP_JumpProcessActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.BindNPCSpawn
// (NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_JumpProcessActor_C::BindNPCSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.BindNPCSpawn");

	ABP_JumpProcessActor_C_BindNPCSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.SpawnNPC
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_JumpProcessActor_C::STATIC_SpawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.SpawnNPC");

	ABP_JumpProcessActor_C_SpawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.UnspawnNPC
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_JumpProcessActor_C::STATIC_UnspawnNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.UnspawnNPC");

	ABP_JumpProcessActor_C_UnspawnNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.ReceiveTick
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JumpProcessActor_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.ReceiveTick");

	ABP_JumpProcessActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_JumpProcessActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.ReceiveBeginPlay");

	ABP_JumpProcessActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpProcessActor.BP_JumpProcessActor_C.ExecuteUbergraph_BP_JumpProcessActor
// (Net, NetReliable, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JumpProcessActor_C::ExecuteUbergraph_BP_JumpProcessActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpProcessActor.BP_JumpProcessActor_C.ExecuteUbergraph_BP_JumpProcessActor");

	ABP_JumpProcessActor_C_ExecuteUbergraph_BP_JumpProcessActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
