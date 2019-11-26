#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_Color.BPF_Color_C.GetPlatformButtonColor_ByIndex
struct UBPF_Color_C_GetPlatformButtonColor_ByIndex_Params
{
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Color.BPF_Color_C.GetTalkFontColor
struct UBPF_Color_C_GetTalkFontColor_Params
{
	TEnumAsByte<EN_TalkCharacterType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SRGB;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                foreColor;                                                // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Color.BPF_Color_C.GetTalkFontColorSRGB
struct UBPF_Color_C_GetTalkFontColorSRGB_Params
{
	TEnumAsByte<EN_TalkCharacterType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                foreColor;                                                // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Color.BPF_Color_C.GetTalkFontColorLinear
struct UBPF_Color_C_GetTalkFontColorLinear_Params
{
	TEnumAsByte<EN_TalkCharacterType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                foreColor;                                                // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Color.BPF_Color_C.GetPlatformButtonColor
struct UBPF_Color_C_GetPlatformButtonColor_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ButtonA;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                ButtonB;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                ButtonX;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                ButtonY;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Color.BPF_Color_C.GetButtonColor
struct UBPF_Color_C_GetButtonColor_Params
{
	ES3Platform                                        Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ButtonA;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                ButtonB;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                ButtonX;                                                  // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                ButtonY;                                                  // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
