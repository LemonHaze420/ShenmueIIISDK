
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

// Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.Set Mode
// (Net, NetReliable, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_DressMode_SelectMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Button_C::Set_Mode(TEnumAsByte<EN_DressMode_SelectMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.Set Mode");

	UBPW_UI_DressMode_Button_C_Set_Mode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.SetFocusAndSelect
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsFocus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Button_C::SetFocusAndSelect(bool IsFocus, bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.SetFocusAndSelect");

	UBPW_UI_DressMode_Button_C_SetFocusAndSelect_Params params;
	params.IsFocus = IsFocus;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.SetImage
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Button_C::STATIC_SetImage(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.SetImage");

	UBPW_UI_DressMode_Button_C_SetImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
