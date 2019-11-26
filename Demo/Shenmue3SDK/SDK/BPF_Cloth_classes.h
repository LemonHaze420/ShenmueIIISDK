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

// BlueprintGeneratedClass BPF_Cloth.BPF_Cloth_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Cloth_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Cloth.BPF_Cloth_C");
		return ptr;
	}


	void STATIC_LoadHandMesh(const struct FString& CharaCode, const struct FString& HandShape, bool Right, class UObject* __WorldContext, class UStaticMesh** Mesh);
	void STATIC_LoadBodyMesh(const struct FString& CharaCode, const struct FString& ClothId, bool Battle, bool Light, const struct FString& SituationId, class UObject* __WorldContext, class USkeletalMesh** Mesh);
	void STATIC_getS3ClothManager(class UObject* __WorldContext, class ABP_ClothManager_C** BP_ClothManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
