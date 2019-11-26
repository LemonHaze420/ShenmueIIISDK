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

// BlueprintGeneratedClass BPF_SkeletalMesh.BPF_SkeletalMesh_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_SkeletalMesh_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_SkeletalMesh.BPF_SkeletalMesh_C");
		return ptr;
	}


	void STATIC_GetS3PostProcessAnimInstance(class AActor* Actor, class UObject* __WorldContext, class US3PostProcessAnimInstance** AnimInstance);
	void STATIC_ChangeMaterial(class USkeletalMeshComponent* Component, EClothPartsType Type, class UMaterialInterface* Material, class UObject* __WorldContext);
	void STATIC_SetDisablePostProcessPhysics(class USkeletalMeshComponent* Component, bool Disable, class UObject* __WorldContext);
	void STATIC_GetFaceSubAnimInstance(class USkeletalMeshComponent* Component, class UObject* __WorldContext, class USubABP_CharacterBase_C** SubABP);
	void STATIC_TryGetSocketLocation(class USceneComponent* Target, const struct FName& InSocketName, class UObject* __WorldContext, bool* Result, struct FVector* Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
