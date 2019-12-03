
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

// Function BPF_Versioning.BPF_Versioning_C.GetAvailableVoiceLanguages
// (NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<ES3VoiceLanguage>       Languages                      (Parm, OutParm, ZeroConstructor)

void UBPF_Versioning_C::GetAvailableVoiceLanguages(class UObject* __WorldContext, TArray<ES3VoiceLanguage>* Languages)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Versioning.BPF_Versioning_C.GetAvailableVoiceLanguages");

	UBPF_Versioning_C_GetAvailableVoiceLanguages_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Languages != nullptr)
		*Languages = params.Languages;
}


// Function BPF_Versioning.BPF_Versioning_C.GetAvailableLocales
// (Net, NetRequest, Exec, Native, Static, NetMulticast, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<ES3Locale>              Locales                        (Parm, OutParm, ZeroConstructor)

void UBPF_Versioning_C::STATIC_GetAvailableLocales(class UObject* __WorldContext, TArray<ES3Locale>* Locales)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Versioning.BPF_Versioning_C.GetAvailableLocales");

	UBPF_Versioning_C_GetAvailableLocales_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locales != nullptr)
		*Locales = params.Locales;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
