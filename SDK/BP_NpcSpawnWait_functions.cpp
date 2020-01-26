
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.CheckNpcAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NPCVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_NpcSpawnWait_C::CheckNpcAlpha(bool* NPCVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.CheckNpcAlpha");

	ABP_NpcSpawnWait_C_CheckNpcAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NPCVisible != nullptr)
		*NPCVisible = params.NPCVisible;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ChangeSpawnFadeTime            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckNpcAlpha                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NpcSpawnWait_C::InitSet(const struct FGameplayTag& NPCID, float ChangeSpawnFadeTime, bool CheckNpcAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.InitSet");

	ABP_NpcSpawnWait_C_InitSet_Params params;
	params.NPCID = NPCID;
	params.ChangeSpawnFadeTime = ChangeSpawnFadeTime;
	params.CheckNpcAlpha = CheckNpcAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NpcSpawnWait_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.UserConstructionScript");

	ABP_NpcSpawnWait_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.EndNpcSpawnWait
// (BlueprintCallable, BlueprintEvent)

void ABP_NpcSpawnWait_C::EndNpcSpawnWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.EndNpcSpawnWait");

	ABP_NpcSpawnWait_C_EndNpcSpawnWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.NPCSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NpcSpawnWait_C::NPCSpawn(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.NPCSpawn");

	ABP_NpcSpawnWait_C_NPCSpawn_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.ExecuteUbergraph_BP_NpcSpawnWait
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NpcSpawnWait_C::ExecuteUbergraph_BP_NpcSpawnWait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.ExecuteUbergraph_BP_NpcSpawnWait");

	ABP_NpcSpawnWait_C_ExecuteUbergraph_BP_NpcSpawnWait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
