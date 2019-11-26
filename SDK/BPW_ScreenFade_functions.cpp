
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

// Function BPW_ScreenFade.BPW_ScreenFade_C.GetFadeColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIgnoreOpacity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorAndOpacity                (Parm, OutParm, IsPlainOldData)

void UBPW_ScreenFade_C::GetFadeColor(bool bIgnoreOpacity, struct FLinearColor* ColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ScreenFade.BPW_ScreenFade_C.GetFadeColor");

	UBPW_ScreenFade_C_GetFadeColor_Params params;
	params.bIgnoreOpacity = bIgnoreOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorAndOpacity != nullptr)
		*ColorAndOpacity = params.ColorAndOpacity;
}


// Function BPW_ScreenFade.BPW_ScreenFade_C.SetFadeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_ScreenFade_C::SetFadeColor(const struct FLinearColor& FadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ScreenFade.BPW_ScreenFade_C.SetFadeColor");

	UBPW_ScreenFade_C_SetFadeColor_Params params;
	params.FadeColor = FadeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
