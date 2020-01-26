#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Subtitles.BPF_Subtitles_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Subtitles_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Subtitles.BPF_Subtitles_C");
		return ptr;
	}


	void STATIC_SetOutlineColor(const struct FSlateFontInfo& InFontInfo, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateFontInfo* OutFontInfo);
	void STATIC_InitialFont(const struct FSlateFontInfo& InFontInfo, bool Ruby, class UObject* __WorldContext, class UMaterialInstanceDynamic** DMI, struct FSlateFontInfo* OutFontInfo, float* GlowSize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
