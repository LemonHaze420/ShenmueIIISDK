
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

// Function BP_Minigame_CC_Duck.BP_Minigame_CC_Duck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Minigame_CC_Duck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minigame_CC_Duck.BP_Minigame_CC_Duck_C.UserConstructionScript");

	ABP_Minigame_CC_Duck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
