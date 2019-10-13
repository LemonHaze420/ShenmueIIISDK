
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

// Function BPI_Fishing.BPI_Fishing_C.UpdateForCable
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Fishing_C::UpdateForCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Fishing.BPI_Fishing_C.UpdateForCable");

	UBPI_Fishing_C_UpdateForCable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
