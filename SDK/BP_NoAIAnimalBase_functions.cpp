
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

// Function BP_NoAIAnimalBase.BP_NoAIAnimalBase_C.UserConstructionScript
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, NetValidate)

void ABP_NoAIAnimalBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoAIAnimalBase.BP_NoAIAnimalBase_C.UserConstructionScript");

	ABP_NoAIAnimalBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
