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

// BlueprintGeneratedClass BPF_ImageDetectAction.BPF_ImageDetectAction_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ImageDetectAction_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ImageDetectAction.BPF_ImageDetectAction_C");
		return ptr;
	}


	void SetDetectIconMaterialParams(class UMaterialInstanceDynamic* Material, ES3ActionIconType Type, class UObject* __WorldContext);
	class UTexture2D* STATIC_GetDetectActionConfirm(class UObject* __WorldContext);
	void GetDeviceBindingIcon(ES3PadButtonIndex Index, class UObject* __WorldContext, class UTexture2D** Texture);
	ES3PadButtonIndex STATIC_DetectIconIdxToFaceButtonIdx(int Index, bool Absolute, class UObject* __WorldContext, bool* IsValid);
	void GetDetectIconBase(int ButtonIndex, bool Absolute, class UObject* __WorldContext, class UTexture** IconBase);
	void GetDetectButtonBase(class UObject* __WorldContext, TArray<class UTexture2D*>* TexArray);
	void GetDetectActionIcon(ES3ActionIconType Type, class UObject* __WorldContext, class UTexture** Icon, struct FVector2D* FlipSize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
