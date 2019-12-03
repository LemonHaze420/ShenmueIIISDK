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

// BlueprintGeneratedClass BPF_Versioning.BPF_Versioning_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Versioning_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Versioning.BPF_Versioning_C");
		return ptr;
	}


	void GetAvailableVoiceLanguages(class UObject* __WorldContext, TArray<ES3VoiceLanguage>* Languages);
	void STATIC_GetAvailableLocales(class UObject* __WorldContext, TArray<ES3Locale>* Locales);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
