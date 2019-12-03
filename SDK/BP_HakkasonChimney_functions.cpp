
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

// Function BP_HakkasonChimney.BP_HakkasonChimney_C.UserConstructionScript
// (NetRequest, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void ABP_HakkasonChimney_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HakkasonChimney.BP_HakkasonChimney_C.UserConstructionScript");

	ABP_HakkasonChimney_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
