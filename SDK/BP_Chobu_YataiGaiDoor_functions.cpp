
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

// Function BP_Chobu_YataiGaiDoor.BP_Chobu_YataiGaiDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chobu_YataiGaiDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_YataiGaiDoor.BP_Chobu_YataiGaiDoor_C.UserConstructionScript");

	ABP_Chobu_YataiGaiDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
