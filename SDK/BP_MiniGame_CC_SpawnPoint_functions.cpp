
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

// Function BP_MiniGame_CC_SpawnPoint.BP_MiniGame_CC_SpawnPoint_C.GetSpawnPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_CC_SpawnPoint_C::GetSpawnPosition(struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_SpawnPoint.BP_MiniGame_CC_SpawnPoint_C.GetSpawnPosition");

	ABP_MiniGame_CC_SpawnPoint_C_GetSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
}


// Function BP_MiniGame_CC_SpawnPoint.BP_MiniGame_CC_SpawnPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_CC_SpawnPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_SpawnPoint.BP_MiniGame_CC_SpawnPoint_C.UserConstructionScript");

	ABP_MiniGame_CC_SpawnPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
