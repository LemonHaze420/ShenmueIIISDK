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

// Function BPF_Character.BPF_Character_C.GetACCharacters
struct UBPF_Character_C_GetACCharacters_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_S3_ACCharacter_C*>                Character;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Character.BPF_Character_C.TeleportForceAnim
struct UBPF_Character_C_TeleportForceAnim_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ForceAnimTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Character.BPF_Character_C.CalcFootprint
struct UBPF_Character_C_CalcFootprint_Params
{
	class UFootprintComponent_C*                       FootprintComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ENEFootType>                           Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
