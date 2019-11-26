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

// BlueprintGeneratedClass BPF_ItemIcon.BPF_ItemIcon_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_ItemIcon_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ItemIcon.BPF_ItemIcon_C");
		return ptr;
	}


	void STATIC_SetItemIconToImage(class UImage* target_image, int item_id, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
