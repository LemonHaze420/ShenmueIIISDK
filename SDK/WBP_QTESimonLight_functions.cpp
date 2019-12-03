
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

// Function WBP_QTESimonLight.WBP_QTESimonLight_C.PlayLightAnimation
// (Net, NetReliable, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimonLight_C::STATIC_PlayLightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonLight.WBP_QTESimonLight_C.PlayLightAnimation");

	UWBP_QTESimonLight_C_PlayLightAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
