
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

// Function BP_Hakkason_WoodenCart.BP_Hakkason_WoodenCart_C.UserConstructionScript
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, NetValidate)

void ABP_Hakkason_WoodenCart_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_WoodenCart.BP_Hakkason_WoodenCart_C.UserConstructionScript");

	ABP_Hakkason_WoodenCart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
