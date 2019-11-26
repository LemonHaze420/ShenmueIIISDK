#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FootprintComponent.FootprintComponent_C.GetLastFootprintType
struct UFootprintComponent_C_GetLastFootprintType_Params
{
	class UFootprintTypeBase_C*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.CanCheck
struct UFootprintComponent_C_CanCheck_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.BoxTraceGround
struct UFootprintComponent_C_BoxTraceGround_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.ChooseCue
struct UFootprintComponent_C_ChooseCue_Params
{
	class USoundAtomCue*                               Cue;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.TraceGround
struct UFootprintComponent_C_TraceGround_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.IsRainy
struct UFootprintComponent_C_IsRainy_Params
{
	bool                                               Rainy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.PlayFootprintAtomCue
struct UFootprintComponent_C_PlayFootprintAtomCue_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     SelectorLabel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ApplyRain;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OverlapRainLabel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FootprintComponent.FootprintComponent_C.SpawnParticles
struct UFootprintComponent_C_SpawnParticles_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.SpawnDecal
struct UFootprintComponent_C_SpawnDecal_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginalOpacity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.OnFootprintTypeChange
struct UFootprintComponent_C_OnFootprintTypeChange_Params
{
	class UFootprintTypeBase_C*                        OldType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFootprintTypeBase_C*                        NewType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.GetFootprintTypeFromPhysicalMaterial
struct UFootprintComponent_C_GetFootprintTypeFromPhysicalMaterial_Params
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFootprintTypeBase_C*                        FootprintType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.OnFootFall
struct UFootprintComponent_C_OnFootFall_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<ENEFootType>                           FootType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.ReceiveBeginPlay
struct UFootprintComponent_C_ReceiveBeginPlay_Params
{
};

// Function FootprintComponent.FootprintComponent_C.ReceiveTick
struct UFootprintComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FootprintComponent.FootprintComponent_C.ExecuteUbergraph_FootprintComponent
struct UFootprintComponent_C_ExecuteUbergraph_FootprintComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
