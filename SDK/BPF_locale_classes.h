#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_locale.BPF_locale_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_locale_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_locale.BPF_locale_C");
		return ptr;
	}


	struct FString STATIC_FormatTimeMMSSss(const struct FBTL_TimeMSC& Time, class UObject* __WorldContext);
	TEnumAsByte<EAlphabetType> STATIC_GetAlphabetType(ES3Locale Locale, class UObject* __WorldContext);
	bool STATIC_UsesFullWidthCharacters(ES3Locale Locale, class UObject* __WorldContext);
	bool STATIC_UsesLatinAlphabet(ES3Locale Locale, class UObject* __WorldContext);
	struct FString STATIC_FormatTimeMMSSss_float_(float Time, class UObject* __WorldContext);
	void STATIC_GetLanguage(ES3Locale Locale, class UObject* __WorldContext, struct FString* Language);
	void STATIC_MakeLocale(class UObject* __WorldContext, struct FText* InText, struct FString* ret);
	void STATIC_FormatRealMoney(float Money, class UObject* __WorldContext, struct FString* String);
	void STATIC_FormatGameMoney(int Money, class UObject* __WorldContext, struct FString* String);
	void STATIC_FormatNumerics_float_(float Value, class UObject* __WorldContext, struct FString* String);
	void STATIC_FormatNumerics_int_(int Value, class UObject* __WorldContext, struct FString* String);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
