
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

// Function WBP_QTESimonButton.WBP_QTESimonButton_C.SetButtonImage
// (Net, Native, Event, NetResponse, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimonButton_C::SetButtonImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.SetButtonImage");

	UWBP_QTESimonButton_C_SetButtonImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInput
// (NetRequest, Exec, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimonButton_C::STATIC_PlayInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInput");

	UWBP_QTESimonButton_C_PlayInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInstruction
// (NetReliable, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimonButton_C::STATIC_PlayInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.PlayInstruction");

	UWBP_QTESimonButton_C_PlayInstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimonButton.WBP_QTESimonButton_C.Reset
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimonButton_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimonButton.WBP_QTESimonButton_C.Reset");

	UWBP_QTESimonButton_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
