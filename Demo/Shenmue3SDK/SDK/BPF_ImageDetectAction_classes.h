#pragma once

// Name: S3Demo, Version: 0.90.0

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


	ES3PadButtonIndex STATIC_DetectIconIdxToFaceButtonIdx(int Index, bool Absolute, class UObject* __WorldContext, bool* IsValid);
	void STATIC_GetDetectIconBase(int ButtonIndex, bool Absolute, class UObject* __WorldContext, class UTexture** IconBase);
	void STATIC_GetDetectButtonBase(class UObject* __WorldContext, TArray<class UTexture2D*>* TexArray);
	void STATIC_GetDetectActionIcon(ES3ActionIconType Type, class UObject* __WorldContext, class UTexture** Icon, struct FVector2D* FlipSize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
