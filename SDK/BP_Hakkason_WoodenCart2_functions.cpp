
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

// Function BP_Hakkason_WoodenCart2.BP_Hakkason_WoodenCart2_C.UserConstructionScript
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent, NetValidate)

void ABP_Hakkason_WoodenCart2_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_WoodenCart2.BP_Hakkason_WoodenCart2_C.UserConstructionScript");

	ABP_Hakkason_WoodenCart2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
