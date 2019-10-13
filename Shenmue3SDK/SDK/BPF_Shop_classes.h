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

// BlueprintGeneratedClass BPF_Shop.BPF_Shop_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Shop_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Shop.BPF_Shop_C");
		return ptr;
	}


	void STATIC_SellMagnification_SkillBook(class UObject* __WorldContext, float* Magnification_Skillbook);
	void STATIC_SellMagnification(class UObject* __WorldContext, float* SellMagnification);
	void STATIC_GetS3ShopDataManager(class UObject* __WorldContext, class ABP_ShopDataManager_C** BP_ShopDataManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
