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

// BlueprintGeneratedClass BPF_PopupItem.BPF_PopupItem_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_PopupItem_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_PopupItem.BPF_PopupItem_C");
		return ptr;
	}


	void STATIC_getS3PopupItem(class UObject* __WorldContext, class ABP_PopupItem_C** BP_PopupItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
