
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

// Function BPF_Versioning.BPF_Versioning_C.GetAvailableVoiceLanguages
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<ES3VoiceLanguage>       Languages                      (Parm, OutParm, ZeroConstructor)

void UBPF_Versioning_C::STATIC_GetAvailableVoiceLanguages(class UObject* __WorldContext, TArray<ES3VoiceLanguage>* Languages)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Versioning.BPF_Versioning_C.GetAvailableVoiceLanguages");

	UBPF_Versioning_C_GetAvailableVoiceLanguages_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Languages != nullptr)
		*Languages = params.Languages;
}


// Function BPF_Versioning.BPF_Versioning_C.GetAvailableLocales
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<ES3Locale>              Locales                        (Parm, OutParm, ZeroConstructor)

void UBPF_Versioning_C::STATIC_GetAvailableLocales(class UObject* __WorldContext, TArray<ES3Locale>* Locales)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Versioning.BPF_Versioning_C.GetAvailableLocales");

	UBPF_Versioning_C_GetAvailableLocales_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locales != nullptr)
		*Locales = params.Locales;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
