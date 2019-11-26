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

// Function PlayerSplineNavi.PlayerSplineNavi_C.FindClosestForwardDirection
struct APlayerSplineNavi_C_FindClosestForwardDirection_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OutDirToSpline;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutDirectionOFSpline;                                     // (Parm, OutParm, IsPlainOldData)
	float                                              OutKey;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.CheckLOS
struct APlayerSplineNavi_C_CheckLOS_Params
{
	struct FVector                                     InSplineLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InPlayerLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               OutIsClear;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.RailGetClosestDirection
struct APlayerSplineNavi_C_RailGetClosestDirection_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                InPreviousDirection;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleHysteresis;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              OutAngleAbs;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutRailDir;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.FindSplineDistanceAndForward
struct APlayerSplineNavi_C_FindSplineDistanceAndForward_Params
{
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              DistanceAlongSpline;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.GetWidth
struct APlayerSplineNavi_C_GetWidth_Params
{
	struct FVector                                     Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.CalculateStrength
struct APlayerSplineNavi_C_CalculateStrength_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InputDir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetDir;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              NoInputN;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFollowDebug;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.CalculateSteer
struct APlayerSplineNavi_C_CalculateSteer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InputDir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              NoInputN;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugFollow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDir;                                                   // (Parm, OutParm, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.SplineInit
struct APlayerSplineNavi_C_SplineInit_Params
{
	class APlayer_SplineMoveActor_C*                   SplineMoveActorRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSplineNavi.PlayerSplineNavi_C.UserConstructionScript
struct APlayerSplineNavi_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
