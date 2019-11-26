
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

// Function BP_Chobu_BarriaSet.BP_Chobu_BarriaSet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chobu_BarriaSet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chobu_BarriaSet.BP_Chobu_BarriaSet_C.UserConstructionScript");

	ABP_Chobu_BarriaSet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
