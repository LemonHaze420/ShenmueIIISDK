
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

// Function BattleDebugArrowZB.BattleDebugArrowZB_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABattleDebugArrowZB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleDebugArrowZB.BattleDebugArrowZB_C.UserConstructionScript");

	ABattleDebugArrowZB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
