
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

// Function BP_TestACCharaRoot.BP_TestACCharaRoot_C.UserConstructionScript
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_TestACCharaRoot_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TestACCharaRoot.BP_TestACCharaRoot_C.UserConstructionScript");

	ABP_TestACCharaRoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
