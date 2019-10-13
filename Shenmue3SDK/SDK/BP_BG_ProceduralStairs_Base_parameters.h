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

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.DebugPrintMobility
struct ABP_BG_ProceduralStairs_Base_C_DebugPrintMobility_Params
{
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.EnsureMeshActor
struct ABP_BG_ProceduralStairs_Base_C_EnsureMeshActor_Params
{
	bool                                               IsStep;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Parent;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.GetGimmickInitInfo
struct ABP_BG_ProceduralStairs_Base_C_GetGimmickInitInfo_Params
{
	struct FTransform                                  ActorTransform;                                           // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     StepDimensions;                                           // (Parm, OutParm, IsPlainOldData)
	int                                                StepCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.EnsureStaticMeshComponent
struct ABP_BG_ProceduralStairs_Base_C_EnsureStaticMeshComponent_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFloor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.SpawnMesh
struct ABP_BG_ProceduralStairs_Base_C_SpawnMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CalcChildScaleFix
struct ABP_BG_ProceduralStairs_Base_C_CalcChildScaleFix_Params
{
	bool                                               bNeedFix;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixScale;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.PostConstruction
struct ABP_BG_ProceduralStairs_Base_C_PostConstruction_Params
{
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CreateGimmick
struct ABP_BG_ProceduralStairs_Base_C_CreateGimmick_Params
{
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.SetModifierBox
struct ABP_BG_ProceduralStairs_Base_C_SetModifierBox_Params
{
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CreateLink
struct ABP_BG_ProceduralStairs_Base_C_CreateLink_Params
{
	struct FST_StairsNavLink                           StairsNavLink;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.InitializeFromLegacyChild
struct ABP_BG_ProceduralStairs_Base_C_InitializeFromLegacyChild_Params
{
	float                                              StepDepth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StepHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps__1_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumbWidths__1_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.CalculateBaseRelativeTransform
struct ABP_BG_ProceduralStairs_Base_C_CalculateBaseRelativeTransform_Params
{
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.UserConstructionScript
struct ABP_BG_ProceduralStairs_Base_C_UserConstructionScript_Params
{
};

// Function BP_BG_ProceduralStairs_Base.BP_BG_ProceduralStairs_Base_C.ExecuteUbergraph_BP_BG_ProceduralStairs_Base
struct ABP_BG_ProceduralStairs_Base_C_ExecuteUbergraph_BP_BG_ProceduralStairs_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
