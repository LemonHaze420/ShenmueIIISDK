#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BTL_Area.BP_BTL_Area_C.InsideEntireArea
struct ABP_BTL_Area_C_InsideEntireArea_Params
{
	struct FVector                                     Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIsInside;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.GetPathfindingRefLocation
struct ABP_BTL_Area_C_GetPathfindingRefLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.TestStraightPathInside
struct ABP_BTL_Area_C_TestStraightPathInside_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.ClampLocation
struct ABP_BTL_Area_C_ClampLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.NudgeDirTowardsCenter
struct ABP_BTL_Area_C_NudgeDirTowardsCenter_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ToCenter;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.EnableCollision
struct ABP_BTL_Area_C_EnableCollision_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.IsReturnedInside
struct ABP_BTL_Area_C_IsReturnedInside_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Returned;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.ScaleMovement
struct ABP_BTL_Area_C_ScaleMovement_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Redirected;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.InsideFreeArea
struct ABP_BTL_Area_C_InsideFreeArea_Params
{
	struct FVector                                     Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIsInside;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_Area.BP_BTL_Area_C.UserConstructionScript
struct ABP_BTL_Area_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
