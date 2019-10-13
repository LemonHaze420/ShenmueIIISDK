
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

// Function BP_MortarAndPestle_001.BP_MortarAndPestle_001_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MortarAndPestle_001_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MortarAndPestle_001.BP_MortarAndPestle_001_C.UserConstructionScript");

	ABP_MortarAndPestle_001_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
