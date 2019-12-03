
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

// Function WBP_QTECommandButton.WBP_QTECommandButton_C.SetButtonImage
// (Net, NetReliable, NetRequest, Native, Event, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommandButton_C::SetButtonImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommandButton.WBP_QTECommandButton_C.SetButtonImage");

	UWBP_QTECommandButton_C_SetButtonImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommandButton.WBP_QTECommandButton_C.PlayInput
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void UWBP_QTECommandButton_C::STATIC_PlayInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommandButton.WBP_QTECommandButton_C.PlayInput");

	UWBP_QTECommandButton_C_PlayInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommandButton.WBP_QTECommandButton_C.PlayInstruction
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void UWBP_QTECommandButton_C::STATIC_PlayInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommandButton.WBP_QTECommandButton_C.PlayInstruction");

	UWBP_QTECommandButton_C_PlayInstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommandButton.WBP_QTECommandButton_C.Reset
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UWBP_QTECommandButton_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommandButton.WBP_QTECommandButton_C.Reset");

	UWBP_QTECommandButton_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
