
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

// Function WBP_QTESimonLight.WBP_QTESimonLight_C.PlayLightAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimonLight_C::PlayLightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonLight.WBP_QTESimonLight_C.PlayLightAnimation");

	UWBP_QTESimonLight_C_PlayLightAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
