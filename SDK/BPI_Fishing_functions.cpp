
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

// Function BPI_Fishing.BPI_Fishing_C.UpdateForCable
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPI_Fishing_C::UpdateForCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Fishing.BPI_Fishing_C.UpdateForCable");

	UBPI_Fishing_C_UpdateForCable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
