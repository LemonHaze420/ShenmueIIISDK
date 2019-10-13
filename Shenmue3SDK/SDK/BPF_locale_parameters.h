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

// Function BPF_locale.BPF_locale_C.FormatTimeMMSSss
struct UBPF_locale_C_FormatTimeMMSSss_Params
{
	struct FBTL_TimeMSC                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BPF_locale.BPF_locale_C.GetAlphabetType
struct UBPF_locale_C_GetAlphabetType_Params
{
	ES3Locale                                          Locale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAlphabetType>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_locale.BPF_locale_C.UsesFullWidthCharacters
struct UBPF_locale_C_UsesFullWidthCharacters_Params
{
	ES3Locale                                          Locale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_locale.BPF_locale_C.UsesLatinAlphabet
struct UBPF_locale_C_UsesLatinAlphabet_Params
{
	ES3Locale                                          Locale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_locale.BPF_locale_C.FormatTimeMMSSss(float)
struct UBPF_locale_C_FormatTimeMMSSss_float__Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BPF_locale.BPF_locale_C.GetLanguage
struct UBPF_locale_C_GetLanguage_Params
{
	ES3Locale                                          Locale;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Language;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_locale.BPF_locale_C.MakeLocale
struct UBPF_locale_C_MakeLocale_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ret;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_locale.BPF_locale_C.FormatRealMoney
struct UBPF_locale_C_FormatRealMoney_Params
{
	float                                              Money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_locale.BPF_locale_C.FormatGameMoney
struct UBPF_locale_C_FormatGameMoney_Params
{
	int                                                Money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_locale.BPF_locale_C.FormatNumerics(float)
struct UBPF_locale_C_FormatNumerics_float__Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_locale.BPF_locale_C.FormatNumerics(int)
struct UBPF_locale_C_FormatNumerics_int__Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
