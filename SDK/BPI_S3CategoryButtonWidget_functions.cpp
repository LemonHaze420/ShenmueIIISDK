
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

// Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetButtonSelected
// (Net, Exec, Native, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_S3CategoryButtonWidget_C::STATIC_SetButtonSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetButtonSelected");

	UBPI_S3CategoryButtonWidget_C_SetButtonSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetCursorEnabled
// (Net, Exec, Native, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_S3CategoryButtonWidget_C::STATIC_SetCursorEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetCursorEnabled");

	UBPI_S3CategoryButtonWidget_C_SetCursorEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetText
// (Net, Exec, Native, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_S3CategoryButtonWidget_C::STATIC_SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_S3CategoryButtonWidget.BPI_S3CategoryButtonWidget_C.SetText");

	UBPI_S3CategoryButtonWidget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
