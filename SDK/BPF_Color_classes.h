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

// BlueprintGeneratedClass BPF_Color.BPF_Color_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Color_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Color.BPF_Color_C");
		return ptr;
	}


	void STATIC_GetPlatformButtonColor_ByIndex(ES3PadButtonIndex Index, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetTalkFontColor(TEnumAsByte<EN_TalkCharacterType> Type, bool SRGB, class UObject* __WorldContext, struct FLinearColor* foreColor, struct FLinearColor* GlowColor, struct FLinearColor* OutlineColor);
	void STATIC_GetTalkFontColorSRGB(TEnumAsByte<EN_TalkCharacterType> Type, class UObject* __WorldContext, struct FLinearColor* foreColor, struct FLinearColor* GlowColor, struct FLinearColor* OutlineColor, bool* Found);
	void STATIC_GetTalkFontColorLinear(TEnumAsByte<EN_TalkCharacterType> Type, class UObject* __WorldContext, struct FLinearColor* foreColor, struct FLinearColor* GlowColor, bool* Found);
	void STATIC_GetPlatformButtonColor(class UObject* __WorldContext, struct FLinearColor* ButtonA, struct FLinearColor* ButtonB, struct FLinearColor* ButtonX, struct FLinearColor* ButtonY);
	void STATIC_GetButtonColor(ES3Platform Platform, class UObject* __WorldContext, struct FLinearColor* ButtonA, struct FLinearColor* ButtonB, struct FLinearColor* ButtonX, struct FLinearColor* ButtonY);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
