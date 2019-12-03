
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

// Function BP_Scale_001.BP_Scale_001_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ABP_Scale_001_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scale_001.BP_Scale_001_C.UserConstructionScript");

	ABP_Scale_001_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
