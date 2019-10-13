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

// Function BP_S3AreaManager.BP_S3AreaManager_C.IsTargetComponentInBuilding
struct ABP_S3AreaManager_C_IsTargetComponentInBuilding_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UsePoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3BuildingStaticMeshActor_C*             Building;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isIn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AreaManager.BP_S3AreaManager_C.GetBuildingByCharaName
struct ABP_S3AreaManager_C_GetBuildingByCharaName_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3BuildingStaticMeshActor_C*             Building;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AreaManager.BP_S3AreaManager_C.GetLeavePoint
struct ABP_S3AreaManager_C_GetLeavePoint_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InBuilding;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3AreaManager.BP_S3AreaManager_C.GetBuildingByName
struct ABP_S3AreaManager_C_GetBuildingByName_Params
{
	struct FString                                     BuildingName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class ABP_S3BuildingStaticMeshActor_C*             Building;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AreaManager.BP_S3AreaManager_C.IsPlayerInBuilding
struct ABP_S3AreaManager_C_IsPlayerInBuilding_Params
{
	class ABP_S3BuildingStaticMeshActor_C*             Building;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isIn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AreaManager.BP_S3AreaManager_C.SetBuilding
struct ABP_S3AreaManager_C_SetBuilding_Params
{
	class ABP_S3BuildingStaticMeshActor_C*             Building;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AreaManager.BP_S3AreaManager_C.UserConstructionScript
struct ABP_S3AreaManager_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
