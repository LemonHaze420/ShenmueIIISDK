
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

// Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillDisplayScene_Battle_MatchPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.UserConstructionScript");

	ABP_SkillDisplayScene_Battle_MatchPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
