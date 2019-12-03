
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

// Function BPF_locale.BPF_locale_C.FormatTimeMMSSss
// (NetRequest, Native, Event, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FBTL_TimeMSC            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPF_locale_C::FormatTimeMMSSss(const struct FBTL_TimeMSC& Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatTimeMMSSss");

	UBPF_locale_C_FormatTimeMMSSss_Params params;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.GetAlphabetType
// (Net, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAlphabetType>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAlphabetType> UBPF_locale_C::STATIC_GetAlphabetType(ES3Locale Locale, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.GetAlphabetType");

	UBPF_locale_C_GetAlphabetType_Params params;
	params.Locale = Locale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.UsesFullWidthCharacters
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_locale_C::UsesFullWidthCharacters(ES3Locale Locale, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.UsesFullWidthCharacters");

	UBPF_locale_C_UsesFullWidthCharacters_Params params;
	params.Locale = Locale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.UsesLatinAlphabet
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_locale_C::UsesLatinAlphabet(ES3Locale Locale, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.UsesLatinAlphabet");

	UBPF_locale_C_UsesLatinAlphabet_Params params;
	params.Locale = Locale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.FormatTimeMMSSss(float)
// (Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPF_locale_C::FormatTimeMMSSss_float_(float Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatTimeMMSSss(float)");

	UBPF_locale_C_FormatTimeMMSSss_float__Params params;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.GetLanguage
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Language                       (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::STATIC_GetLanguage(ES3Locale Locale, class UObject* __WorldContext, struct FString* Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.GetLanguage");

	UBPF_locale_C_GetLanguage_Params params;
	params.Locale = Locale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Language != nullptr)
		*Language = params.Language;
}


// Function BPF_locale.BPF_locale_C.MakeLocale
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ret                            (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::MakeLocale(class UObject* __WorldContext, struct FText* InText, struct FString* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.MakeLocale");

	UBPF_locale_C_MakeLocale_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;
	if (ret != nullptr)
		*ret = params.ret;
}


// Function BPF_locale.BPF_locale_C.FormatRealMoney
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::STATIC_FormatRealMoney(float Money, class UObject* __WorldContext, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatRealMoney");

	UBPF_locale_C_FormatRealMoney_Params params;
	params.Money = Money;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BPF_locale.BPF_locale_C.FormatGameMoney
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::FormatGameMoney(int Money, class UObject* __WorldContext, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatGameMoney");

	UBPF_locale_C_FormatGameMoney_Params params;
	params.Money = Money;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BPF_locale.BPF_locale_C.FormatNumerics(float)
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::FormatNumerics_float_(float Value, class UObject* __WorldContext, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatNumerics(float)");

	UBPF_locale_C_FormatNumerics_float__Params params;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BPF_locale.BPF_locale_C.FormatNumerics(int)
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::FormatNumerics_int_(int Value, class UObject* __WorldContext, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatNumerics(int)");

	UBPF_locale_C_FormatNumerics_int__Params params;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
