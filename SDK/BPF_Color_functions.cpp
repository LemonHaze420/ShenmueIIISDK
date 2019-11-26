
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

// Function BPF_Color.BPF_Color_C.GetPlatformButtonColor_ByIndex
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UBPF_Color_C::STATIC_GetPlatformButtonColor_ByIndex(ES3PadButtonIndex Index, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Color.BPF_Color_C.GetPlatformButtonColor_ByIndex");

	UBPF_Color_C_GetPlatformButtonColor_ByIndex_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BPF_Color.BPF_Color_C.GetTalkFontColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_TalkCharacterType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SRGB                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            foreColor                      (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            GlowColor                      (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            OutlineColor                   (Parm, OutParm, IsPlainOldData)

void UBPF_Color_C::STATIC_GetTalkFontColor(TEnumAsByte<EN_TalkCharacterType> Type, bool SRGB, class UObject* __WorldContext, struct FLinearColor* foreColor, struct FLinearColor* GlowColor, struct FLinearColor* OutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Color.BPF_Color_C.GetTalkFontColor");

	UBPF_Color_C_GetTalkFontColor_Params params;
	params.Type = Type;
	params.SRGB = SRGB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foreColor != nullptr)
		*foreColor = params.foreColor;
	if (GlowColor != nullptr)
		*GlowColor = params.GlowColor;
	if (OutlineColor != nullptr)
		*OutlineColor = params.OutlineColor;
}


// Function BPF_Color.BPF_Color_C.GetTalkFontColorSRGB
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_TalkCharacterType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            foreColor                      (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            GlowColor                      (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            OutlineColor                   (Parm, OutParm, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Color_C::STATIC_GetTalkFontColorSRGB(TEnumAsByte<EN_TalkCharacterType> Type, class UObject* __WorldContext, struct FLinearColor* foreColor, struct FLinearColor* GlowColor, struct FLinearColor* OutlineColor, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Color.BPF_Color_C.GetTalkFontColorSRGB");

	UBPF_Color_C_GetTalkFontColorSRGB_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foreColor != nullptr)
		*foreColor = params.foreColor;
	if (GlowColor != nullptr)
		*GlowColor = params.GlowColor;
	if (OutlineColor != nullptr)
		*OutlineColor = params.OutlineColor;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BPF_Color.BPF_Color_C.GetTalkFontColorLinear
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_TalkCharacterType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            foreColor                      (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            GlowColor                      (Parm, OutParm, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Color_C::STATIC_GetTalkFontColorLinear(TEnumAsByte<EN_TalkCharacterType> Type, class UObject* __WorldContext, struct FLinearColor* foreColor, struct FLinearColor* GlowColor, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Color.BPF_Color_C.GetTalkFontColorLinear");

	UBPF_Color_C_GetTalkFontColorLinear_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foreColor != nullptr)
		*foreColor = params.foreColor;
	if (GlowColor != nullptr)
		*GlowColor = params.GlowColor;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BPF_Color.BPF_Color_C.GetPlatformButtonColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ButtonA                        (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            ButtonB                        (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            ButtonX                        (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            ButtonY                        (Parm, OutParm, IsPlainOldData)

void UBPF_Color_C::STATIC_GetPlatformButtonColor(class UObject* __WorldContext, struct FLinearColor* ButtonA, struct FLinearColor* ButtonB, struct FLinearColor* ButtonX, struct FLinearColor* ButtonY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Color.BPF_Color_C.GetPlatformButtonColor");

	UBPF_Color_C_GetPlatformButtonColor_Params params;
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
}


// Function BPF_Color.BPF_Color_C.GetButtonColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3Platform                    Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ButtonA                        (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            ButtonB                        (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            ButtonX                        (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            ButtonY                        (Parm, OutParm, IsPlainOldData)

void UBPF_Color_C::STATIC_GetButtonColor(ES3Platform Platform, class UObject* __WorldContext, struct FLinearColor* ButtonA, struct FLinearColor* ButtonB, struct FLinearColor* ButtonX, struct FLinearColor* ButtonY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Color.BPF_Color_C.GetButtonColor");

	UBPF_Color_C_GetButtonColor_Params params;
	params.Platform = Platform;
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
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
