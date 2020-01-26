
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_QTESimonButton.WBP_QTESimonButton_C.SetButtonImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimonButton_C::SetButtonImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.SetButtonImage");

	UWBP_QTESimonButton_C_SetButtonImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimonButton_C::PlayInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInput");

	UWBP_QTESimonButton_C_PlayInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInstruction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimonButton_C::PlayInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInstruction");

	UWBP_QTESimonButton_C_PlayInstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButton.WBP_QTESimonButton_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimonButton_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.Reset");

	UWBP_QTESimonButton_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
