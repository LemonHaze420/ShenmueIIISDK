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

// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.SpawnRailsAndPoles
struct ABP_BG_ProceduralStairs_Rails_C_SpawnRailsAndPoles_Params
{
	bool                                               SpawnRight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnLeft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PoleOnly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        StepBounds;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.SpawnRailAndPole
struct ABP_BG_ProceduralStairs_Rails_C_SpawnRailAndPole_Params
{
	bool                                               RightSide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PoleOnly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        StepBounds;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.GetScaledMeshBoundingBox
struct ABP_BG_ProceduralStairs_Rails_C_GetScaledMeshBoundingBox_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBounds;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.GenerateRandomMeshRotation
struct ABP_BG_ProceduralStairs_Rails_C_GenerateRandomMeshRotation_Params
{
	struct FRotator                                    Random;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BG_ProceduralStairs_Rails.BP_BG_ProceduralStairs_Rails_C.UserConstructionScript
struct ABP_BG_ProceduralStairs_Rails_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
