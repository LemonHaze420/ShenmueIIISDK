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

// BlueprintGeneratedClass BPF_FadeMaterial.BPF_FadeMaterial_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_FadeMaterial_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_FadeMaterial.BPF_FadeMaterial_C");
		return ptr;
	}


	void CreateFadeMaterial(class UMaterialInterface* Source, class UObject* __WorldContext, class UMaterialInstanceDynamic** FadeMaterial);
	class UMaterialInstanceDynamic* STATIC_SimpleDuplicateMatParams(class UMaterialInterface* MaterialInstance, class UMaterialInterface* FadeMatTemplate, class UObject* __WorldContext);
	void SwitchToFadeMaterial(class USkeletalMeshComponent* Component, class UObject* __WorldContext, TArray<class UMaterialInterface*>* Materials);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
