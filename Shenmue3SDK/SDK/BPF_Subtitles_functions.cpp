
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

// Function BPF_Subtitles.BPF_Subtitles_C.SetOutlineColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateFontInfo          OutFontInfo                    (Parm, OutParm)

void UBPF_Subtitles_C::STATIC_SetOutlineColor(const struct FSlateFontInfo& InFontInfo, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateFontInfo* OutFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Subtitles.BPF_Subtitles_C.SetOutlineColor");

	UBPF_Subtitles_C_SetOutlineColor_Params params;
	params.InFontInfo = InFontInfo;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFontInfo != nullptr)
		*OutFontInfo = params.OutFontInfo;
}


// Function BPF_Subtitles.BPF_Subtitles_C.InitialFont
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DMI                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSlateFontInfo          InFontInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Ruby                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateFontInfo          OutFontInfo                    (Parm, OutParm)
// float                          GlowSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Subtitles_C::STATIC_InitialFont(const struct FSlateFontInfo& InFontInfo, bool Ruby, class UObject* __WorldContext, class UMaterialInstanceDynamic** DMI, struct FSlateFontInfo* OutFontInfo, float* GlowSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Subtitles.BPF_Subtitles_C.InitialFont");

	UBPF_Subtitles_C_InitialFont_Params params;
	params.InFontInfo = InFontInfo;
	params.Ruby = Ruby;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DMI != nullptr)
		*DMI = params.DMI;
	if (OutFontInfo != nullptr)
		*OutFontInfo = params.OutFontInfo;
	if (GlowSize != nullptr)
		*GlowSize = params.GlowSize;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
