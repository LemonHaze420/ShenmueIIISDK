
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

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetRotationNPC
// (Native, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.DestroyNPC
// (Static, MulticastDelegate, Private, Delegate, NetClient, NetValidate)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_NPC04_C::STATIC_DestroyNPC(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.DestroyNPC");

	ASL_Hakkason_NPC04_C_DestroyNPC_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SpawnNPC
// (Net, NetReliable, NetRequest, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
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
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetClient, NetValidate)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           EnableCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_NPC04_C::STATIC_SetLocationNPC(const struct FGameplayTag& NPCID, const struct FVector& Location, bool EnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetLocationNPC");

	ASL_Hakkason_NPC04_C_SetLocationNPC_Params params;
	params.NPCID = NPCID;
	params.Location = Location;
	params.EnableCollision = EnableCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori_Amimono
// (Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaActionIrori_Amimono()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori_Amimono");

	ASL_Hakkason_NPC04_C_ShenfaActionIrori_Amimono_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionYouIrori
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaActionYouIrori()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionYouIrori");

	ASL_Hakkason_NPC04_C_ShenfaActionYouIrori_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor2
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaSpawnDoor2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor2");

	ASL_Hakkason_NPC04_C_ShenfaSpawnDoor2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor1
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaSpawnDoor1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor1");

	ASL_Hakkason_NPC04_C_ShenfaSpawnDoor1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionDaidokoro
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaActionDaidokoro()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionDaidokoro");

	ASL_Hakkason_NPC04_C_ShenfaActionDaidokoro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIsu
// (Net, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaActionIsu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIsu");

	ASL_Hakkason_NPC04_C_ShenfaActionIsu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori
// (Net, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaActionIrori()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori");

	ASL_Hakkason_NPC04_C_ShenfaActionIrori_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Move
// (NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_SHE_Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Move");

	ASL_Hakkason_NPC04_C_SHE_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Hide
// (NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_SHE_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Hide");

	ASL_Hakkason_NPC04_C_SHE_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaDestroy
// (Net, NetReliable, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaDestroy");

	ASL_Hakkason_NPC04_C_ShenfaDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawn
// (Net, NetReliable, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ASL_Hakkason_NPC04_C::STATIC_ShenfaSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawn");

	ASL_Hakkason_NPC04_C_ShenfaSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ExecuteUbergraph_SL_Hakkason_NPC04
// (NetReliable, MulticastDelegate, Public, Protected, Delegate, NetClient, NetValidate)
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
