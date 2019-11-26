
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

// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformDpadImage_ByIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDpadButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageGamePad_C::STATIC_GetPlatformDpadImage_ByIndex(TEnumAsByte<EDpadButtonImageStyle> Style, ES3PadButtonIndex Index, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformDpadImage_ByIndex");

	UBPF_ImageGamePad_C_GetPlatformDpadImage_ByIndex_Params params;
	params.Style = Style;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetInputDeviceImageSet
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3InputDeviceModel            DeviceType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadImageSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetInputDeviceImageSet(ES3InputDeviceModel DeviceType, class UObject* __WorldContext, class UBP_GamePadImageSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetInputDeviceImageSet");

	UBPF_ImageGamePad_C_GetInputDeviceImageSet_Params params;
	params.DeviceType = DeviceType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFullDpadImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageGamePad_C::STATIC_GetPlatformFullDpadImage(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFullDpadImage");

	UBPF_ImageGamePad_C_GetPlatformFullDpadImage_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetCancelButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageGamePad_C::STATIC_GetCancelButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetCancelButtonImage");

	UBPF_ImageGamePad_C_GetCancelButtonImage_Params params;
	params.Style = Style;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetConfirmButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageGamePad_C::STATIC_GetConfirmButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetConfirmButtonImage");

	UBPF_ImageGamePad_C_GetConfirmButtonImage_Params params;
	params.Style = Style;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformShoulderImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGamepadShoulder>  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageGamePad_C::STATIC_GetPlatformShoulderImage(TEnumAsByte<EShoulderButtonStyle> Style, TEnumAsByte<EGamepadShoulder> Button, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformShoulderImage");

	UBPF_ImageGamePad_C_GetPlatformShoulderImage_Params params;
	params.Style = Style;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetShoulderSetAsset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadShoulderSetAsset_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBP_GamePadShoulderSetAsset_C* UBPF_ImageGamePad_C::STATIC_GetShoulderSetAsset(TEnumAsByte<EShoulderButtonStyle> Style, ES3Platform Platform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetShoulderSetAsset");

	UBPF_ImageGamePad_C_GetShoulderSetAsset_Params params;
	params.Style = Style;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetShoulderImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGamepadShoulder>  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageGamePad_C::STATIC_GetShoulderImage(TEnumAsByte<EShoulderButtonStyle> Style, TEnumAsByte<EGamepadShoulder> Button, ES3Platform Platform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetShoulderImage");

	UBPF_ImageGamePad_C_GetShoulderImage_Params params;
	params.Style = Style;
	params.Button = Button;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetGamePadImageSet
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadImageSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetGamePadImageSet(ES3Platform Platform, class UObject* __WorldContext, class UBP_GamePadImageSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetGamePadImageSet");

	UBPF_ImageGamePad_C_GetGamePadImageSet_Params params;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFaceButtonImage_ByIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetPlatformFaceButtonImage_ByIndex(TEnumAsByte<EFaceButtonImageStyle> Style, ES3PadButtonIndex Index, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFaceButtonImage_ByIndex");

	UBPF_ImageGamePad_C_GetPlatformFaceButtonImage_ByIndex_Params params;
	params.Style = Style;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonImage_ByIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetFaceButtonImage_ByIndex(TEnumAsByte<EFaceButtonImageStyle> Style, ES3Platform Platform, ES3PadButtonIndex Index, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonImage_ByIndex");

	UBPF_ImageGamePad_C_GetFaceButtonImage_ByIndex_Params params;
	params.Style = Style;
	params.Platform = Platform;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDpadButtonSetAsset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDpadButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetDpadButtonSetAsset(TEnumAsByte<EDpadButtonImageStyle> Style, ES3Platform Platform, class UObject* __WorldContext, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDpadButtonSetAsset");

	UBPF_ImageGamePad_C_GetDpadButtonSetAsset_Params params;
	params.Style = Style;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonSetAsset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetFaceButtonSetAsset(TEnumAsByte<EFaceButtonImageStyle> Style, ES3Platform Platform, class UObject* __WorldContext, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonSetAsset");

	UBPF_ImageGamePad_C_GetFaceButtonSetAsset_Params params;
	params.Style = Style;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPopPlatformButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Absolute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonA                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonB                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonBlank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetPopPlatformButtonImage(bool Absolute, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** ButtonB, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPopPlatformButtonImage");

	UBPF_ImageGamePad_C_GetPopPlatformButtonImage_Params params;
	params.Absolute = Absolute;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonA != nullptr)
		*ButtonA = params.ButtonA;
	if (ButtonB != nullptr)
		*ButtonB = params.ButtonB;
	if (ButtonX != nullptr)
		*ButtonX = params.ButtonX;
	if (ButtonY != nullptr)
		*ButtonY = params.ButtonY;
	if (ButtonBlank != nullptr)
		*ButtonBlank = params.ButtonBlank;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDefaultPlatformButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Absolute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonA                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonB                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonBlank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetDefaultPlatformButtonImage(bool Absolute, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** ButtonB, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDefaultPlatformButtonImage");

	UBPF_ImageGamePad_C_GetDefaultPlatformButtonImage_Params params;
	params.Absolute = Absolute;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonA != nullptr)
		*ButtonA = params.ButtonA;
	if (ButtonB != nullptr)
		*ButtonB = params.ButtonB;
	if (ButtonX != nullptr)
		*ButtonX = params.ButtonX;
	if (ButtonY != nullptr)
		*ButtonY = params.ButtonY;
	if (ButtonBlank != nullptr)
		*ButtonBlank = params.ButtonBlank;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFaceButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonA                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Button_B                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonBlank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetPlatformFaceButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, bool Absolute, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** Button_B, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformFaceButtonImage");

	UBPF_ImageGamePad_C_GetPlatformFaceButtonImage_Params params;
	params.Style = Style;
	params.Absolute = Absolute;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonA != nullptr)
		*ButtonA = params.ButtonA;
	if (Button_B != nullptr)
		*Button_B = params.Button_B;
	if (ButtonX != nullptr)
		*ButtonX = params.ButtonX;
	if (ButtonY != nullptr)
		*ButtonY = params.ButtonY;
	if (ButtonBlank != nullptr)
		*ButtonBlank = params.ButtonBlank;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonA                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Button_B                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonBlank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetFaceButtonImage(TEnumAsByte<EFaceButtonImageStyle> Style, ES3Platform Platform, class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** Button_B, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetFaceButtonImage");

	UBPF_ImageGamePad_C_GetFaceButtonImage_Params params;
	params.Style = Style;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonA != nullptr)
		*ButtonA = params.ButtonA;
	if (Button_B != nullptr)
		*Button_B = params.Button_B;
	if (ButtonX != nullptr)
		*ButtonX = params.ButtonX;
	if (ButtonY != nullptr)
		*ButtonY = params.ButtonY;
	if (ButtonBlank != nullptr)
		*ButtonBlank = params.ButtonBlank;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformDpadImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              DpadUP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dpadDOWN                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dpadRIGHT                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dpadLEFT                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              DpadNEUTRAL                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetPlatformDpadImage(class UObject* __WorldContext, class UTexture2D** DpadUP, class UTexture2D** dpadDOWN, class UTexture2D** dpadRIGHT, class UTexture2D** dpadLEFT, class UTexture2D** DpadNEUTRAL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetPlatformDpadImage");

	UBPF_ImageGamePad_C_GetPlatformDpadImage_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DpadUP != nullptr)
		*DpadUP = params.DpadUP;
	if (dpadDOWN != nullptr)
		*dpadDOWN = params.dpadDOWN;
	if (dpadRIGHT != nullptr)
		*dpadRIGHT = params.dpadRIGHT;
	if (dpadLEFT != nullptr)
		*dpadLEFT = params.dpadLEFT;
	if (DpadNEUTRAL != nullptr)
		*DpadNEUTRAL = params.DpadNEUTRAL;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDpadImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              DpadUP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dpadDOWN                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dpadRIGHT                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dpadLEFT                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              DpadNEUTRAL                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetDpadImage(ES3Platform Platform, class UObject* __WorldContext, class UTexture2D** DpadUP, class UTexture2D** dpadDOWN, class UTexture2D** dpadRIGHT, class UTexture2D** dpadLEFT, class UTexture2D** DpadNEUTRAL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetDpadImage");

	UBPF_ImageGamePad_C_GetDpadImage_Params params;
	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DpadUP != nullptr)
		*DpadUP = params.DpadUP;
	if (dpadDOWN != nullptr)
		*dpadDOWN = params.dpadDOWN;
	if (dpadRIGHT != nullptr)
		*dpadRIGHT = params.dpadRIGHT;
	if (dpadLEFT != nullptr)
		*dpadLEFT = params.dpadLEFT;
	if (DpadNEUTRAL != nullptr)
		*DpadNEUTRAL = params.DpadNEUTRAL;
}


// Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetQTEPlatformButtonImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonA                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonB                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonBlank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageGamePad_C::STATIC_GetQTEPlatformButtonImage(class UObject* __WorldContext, class UTexture2D** ButtonA, class UTexture2D** ButtonB, class UTexture2D** ButtonX, class UTexture2D** ButtonY, class UTexture2D** ButtonBlank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageGamePad.BPF_ImageGamePad_C.GetQTEPlatformButtonImage");

	UBPF_ImageGamePad_C_GetQTEPlatformButtonImage_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonA != nullptr)
		*ButtonA = params.ButtonA;
	if (ButtonB != nullptr)
		*ButtonB = params.ButtonB;
	if (ButtonX != nullptr)
		*ButtonX = params.ButtonX;
	if (ButtonY != nullptr)
		*ButtonY = params.ButtonY;
	if (ButtonBlank != nullptr)
		*ButtonBlank = params.ButtonBlank;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
