
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

// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.SetButtonImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimonButtonEffect_C::SetButtonImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.SetButtonImage");

	UWBP_QTESimonButtonEffect_C_SetButtonImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.PlayInstruction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimonButtonEffect_C::PlayInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.PlayInstruction");

	UWBP_QTESimonButtonEffect_C_PlayInstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimonButtonEffect_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButtonEffect.WBP_QTESimonButtonEffect_C.Reset");

	UWBP_QTESimonButtonEffect_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
