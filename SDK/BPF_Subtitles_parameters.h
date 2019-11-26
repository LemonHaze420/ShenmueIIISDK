#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_Subtitles.BPF_Subtitles_C.SetOutlineColor
struct UBPF_Subtitles_C_SetOutlineColor_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              OutFontInfo;                                              // (Parm, OutParm)
};

// Function BPF_Subtitles.BPF_Subtitles_C.InitialFont
struct UBPF_Subtitles_C_InitialFont_Params
{
	class UMaterialInstanceDynamic*                    DMI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSlateFontInfo                              InFontInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Ruby;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              OutFontInfo;                                              // (Parm, OutParm)
	float                                              GlowSize;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
