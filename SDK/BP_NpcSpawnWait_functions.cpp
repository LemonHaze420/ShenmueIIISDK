
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

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.CheckNpcAlpha
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           NPCVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NpcSpawnWait_C::CheckNpcAlpha(bool* NPCVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.CheckNpcAlpha");

	ABP_NpcSpawnWait_C_CheckNpcAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NPCVisible != nullptr)
		*NPCVisible = params.NPCVisible;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.InitSet
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ChangeSpawnFadeTime            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckNpcAlpha                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NpcSpawnWait_C::STATIC_InitSet(const struct FGameplayTag& NPCID, float ChangeSpawnFadeTime, bool CheckNpcAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.InitSet");

	ABP_NpcSpawnWait_C_InitSet_Params params;
	params.NPCID = NPCID;
	params.ChangeSpawnFadeTime = ChangeSpawnFadeTime;
	params.CheckNpcAlpha = CheckNpcAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.UserConstructionScript
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_NpcSpawnWait_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.UserConstructionScript");

	ABP_NpcSpawnWait_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.EndNpcSpawnWait
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_NpcSpawnWait_C::EndNpcSpawnWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.EndNpcSpawnWait");

	ABP_NpcSpawnWait_C_EndNpcSpawnWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.NPCSpawn
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NpcSpawnWait_C::STATIC_NPCSpawn(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.NPCSpawn");

	ABP_NpcSpawnWait_C_NPCSpawn_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.ExecuteUbergraph_BP_NpcSpawnWait
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NpcSpawnWait_C::STATIC_ExecuteUbergraph_BP_NpcSpawnWait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.ExecuteUbergraph_BP_NpcSpawnWait");

	ABP_NpcSpawnWait_C_ExecuteUbergraph_BP_NpcSpawnWait_Params params;
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
