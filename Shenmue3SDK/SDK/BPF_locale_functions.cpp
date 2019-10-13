
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

// Function BPF_locale.BPF_locale_C.FormatTimeMMSSss
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBTL_TimeMSC            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPF_locale_C::STATIC_FormatTimeMMSSss(const struct FBTL_TimeMSC& Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatTimeMMSSss");

	UBPF_locale_C_FormatTimeMMSSss_Params params;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.GetAlphabetType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_locale_C::STATIC_UsesFullWidthCharacters(ES3Locale Locale, class UObject* __WorldContext)
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
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_locale_C::STATIC_UsesLatinAlphabet(ES3Locale Locale, class UObject* __WorldContext)
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
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPF_locale_C::STATIC_FormatTimeMMSSss_float_(float Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.FormatTimeMMSSss(float)");

	UBPF_locale_C_FormatTimeMMSSss_float__Params params;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_locale.BPF_locale_C.GetLanguage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ret                            (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::STATIC_MakeLocale(class UObject* __WorldContext, struct FText* InText, struct FString* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_locale.BPF_locale_C.MakeLocale");

	UBPF_locale_C_MakeLocale_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;
	if (ret != nullptr)
		*ret = params.ret;
}


// Function BPF_locale.BPF_locale_C.FormatRealMoney
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BPF_locale.BPF_locale_C.FormatGameMoney
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::STATIC_FormatGameMoney(int Money, class UObject* __WorldContext, struct FString* String)
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
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::STATIC_FormatNumerics_float_(float Value, class UObject* __WorldContext, struct FString* String)
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
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UBPF_locale_C::STATIC_FormatNumerics_int_(int Value, class UObject* __WorldContext, struct FString* String)
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
