
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

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetRotationNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ASL_Hakkason_NPC04_C::SetRotationNPC(const struct FGameplayTag& NPCID, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetRotationNPC");

	ASL_Hakkason_NPC04_C_SetRotationNPC_Params params;
	params.NPCID = NPCID;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.DestroyNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_NPC04_C::DestroyNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.DestroyNPC");

	ASL_Hakkason_NPC04_C_DestroyNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SpawnNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ASL_Hakkason_NPC04_C::SpawnNPC(const struct FGameplayTag& NPCID, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SpawnNPC");

	ASL_Hakkason_NPC04_C_SpawnNPC_Params params;
	params.NPCID = NPCID;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetLocationNPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           EnableCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_NPC04_C::SetLocationNPC(const struct FGameplayTag& NPCID, const struct FVector& Location, bool EnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetLocationNPC");

	ASL_Hakkason_NPC04_C_SetLocationNPC_Params params;
	params.NPCID = NPCID;
	params.Location = Location;
	params.EnableCollision = EnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori_Amimono
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaActionIrori_Amimono()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori_Amimono");

	ASL_Hakkason_NPC04_C_ShenfaActionIrori_Amimono_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionYouIrori
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaActionYouIrori()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionYouIrori");

	ASL_Hakkason_NPC04_C_ShenfaActionYouIrori_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor2
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaSpawnDoor2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor2");

	ASL_Hakkason_NPC04_C_ShenfaSpawnDoor2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor1
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaSpawnDoor1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor1");

	ASL_Hakkason_NPC04_C_ShenfaSpawnDoor1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionDaidokoro
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaActionDaidokoro()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionDaidokoro");

	ASL_Hakkason_NPC04_C_ShenfaActionDaidokoro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIsu
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaActionIsu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIsu");

	ASL_Hakkason_NPC04_C_ShenfaActionIsu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaActionIrori()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori");

	ASL_Hakkason_NPC04_C_ShenfaActionIrori_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Move
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::SHE_Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Move");

	ASL_Hakkason_NPC04_C_SHE_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Hide
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::SHE_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Hide");

	ASL_Hakkason_NPC04_C_SHE_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaDestroy
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaDestroy");

	ASL_Hakkason_NPC04_C_ShenfaDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawn
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_NPC04_C::ShenfaSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawn");

	ASL_Hakkason_NPC04_C_ShenfaSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ExecuteUbergraph_SL_Hakkason_NPC04
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_NPC04_C::ExecuteUbergraph_SL_Hakkason_NPC04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ExecuteUbergraph_SL_Hakkason_NPC04");

	ASL_Hakkason_NPC04_C_ExecuteUbergraph_SL_Hakkason_NPC04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
