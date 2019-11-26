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

// BlueprintGeneratedClass BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_S3CategoryButtonWidget_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_S3CategoryButtonWidget.BPF_S3CategoryButtonWidget_C");
		return ptr;
	}


	void STATIC_BPF_SetButtonTextures(class UImage* Image, class UTexture* LightTex, class UTexture* DarkTex, class UTexture* GlowTex, class UObject* __WorldContext);
	void STATIC_BPF_SetButtonSelected(class UImage* Image, class UTextBlock* Text, bool bSelected, class UObject* __WorldContext);
	void STATIC_BPF_EnableButtonCursor(class UImage* Image, class UTextBlock* Text, bool bEnabled, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
