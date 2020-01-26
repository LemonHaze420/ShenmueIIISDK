#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_Versioning.BPF_Versioning_C.GetAvailableVoiceLanguages
struct UBPF_Versioning_C_GetAvailableVoiceLanguages_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<ES3VoiceLanguage>                           Languages;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Versioning.BPF_Versioning_C.GetAvailableLocales
struct UBPF_Versioning_C_GetAvailableLocales_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<ES3Locale>                                  Locales;                                                  // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
