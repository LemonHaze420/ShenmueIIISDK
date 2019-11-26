
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

// Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.UserConstructionScript");

	ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ReceiveTick");

	ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_OpenDoor_OneSide_LeftLoot.BP_Gimmick_OpenDoor_OneSide_LeftLoot_C.ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_LeftLoot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_OpenDoor_OneSide_LeftLoot_C::ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_LeftLoot(int EntryPoint)
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
