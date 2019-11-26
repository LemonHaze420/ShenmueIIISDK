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

// BlueprintGeneratedClass BPF_MainTitle.BPF_MainTitle_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_MainTitle_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_MainTitle.BPF_MainTitle_C");
		return ptr;
	}


	void STATIC_BPF_ExitGame(class UObject* __WorldContext);
	void STATIC_BPF_LoadMainTitle(bool bSkipIntro, bool bRunBoot, bool bEndPIE, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
