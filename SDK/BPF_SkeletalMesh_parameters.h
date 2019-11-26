#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.GetS3PostProcessAnimInstance
struct UBPF_SkeletalMesh_C_GetS3PostProcessAnimInstance_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3PostProcessAnimInstance*                  AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.ChangeMaterial
struct UBPF_SkeletalMesh_C_ChangeMaterial_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EClothPartsType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.SetDisablePostProcessPhysics
struct UBPF_SkeletalMesh_C_SetDisablePostProcessPhysics_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.GetFaceSubAnimInstance
struct UBPF_SkeletalMesh_C_GetFaceSubAnimInstance_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USubABP_CharacterBase_C*                     SubABP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkeletalMesh.BPF_SkeletalMesh_C.TryGetSocketLocation
struct UBPF_SkeletalMesh_C_TryGetSocketLocation_Params
{
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
