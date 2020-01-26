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

// BlueprintGeneratedClass BPF_ImageActionSelect.BPF_ImageActionSelect_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ImageActionSelect_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ImageActionSelect.BPF_ImageActionSelect_C");
		return ptr;
	}


	void STATIC_GetSelectFrameBase(TEnumAsByte<EN_S3ActionSelect_frameType> frameType, class UObject* __WorldContext, TArray<class UTexture*>* Textures);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
