
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

// Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, BlueprintPure, NetValidate)

void ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.UserConstructionScript");

	ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ReceiveTick
// (NetReliable, Exec, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ReceiveTick");

	ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_LeftLoot
// (Net, Exec, Event, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C::STATIC_ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_LeftLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_LeftLoot");

	ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C_ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_LeftLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
