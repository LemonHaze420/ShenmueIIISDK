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

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitForStrength
struct UBPC_DoorSteeringHint_C_InitForStrength_Params
{
	TEnumAsByte<EN_DoorGuideStrength>                  Str;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetAlternateWeightBasedOnDir
struct UBPC_DoorSteeringHint_C_GetAlternateWeightBasedOnDir_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Scaler;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CheckLOS
struct UBPC_DoorSteeringHint_C_CheckLOS_Params
{
	struct FVector                                     From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               OutLOS;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcHintSizeInDir
struct UBPC_DoorSteeringHint_C_CalcHintSizeInDir_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InSideDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InBackDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InMaxDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTestBackDistance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTestIntervalDistance;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.AutoConfigureSteeringHint
struct UBPC_DoorSteeringHint_C_AutoConfigureSteeringHint_Params
{
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitAllPoints
struct UBPC_DoorSteeringHint_C_InitAllPoints_Params
{
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CheckInsideBoundingBox
struct UBPC_DoorSteeringHint_C_CheckInsideBoundingBox_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIsInside;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InitBoundingBox
struct UBPC_DoorSteeringHint_C_InitBoundingBox_Params
{
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalculateSteer
struct UBPC_DoorSteeringHint_C_CalculateSteer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InputDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcSteeringTarget
struct UBPC_DoorSteeringHint_C_CalcSteeringTarget_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Target;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcDistanceDoorframeToPoint
struct UBPC_DoorSteeringHint_C_CalcDistanceDoorframeToPoint_Params
{
	struct FVector2D                                   Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.DistancePointToLineSegment
struct UBPC_DoorSteeringHint_C_DistancePointToLineSegment_Params
{
	struct FVector2D                                   P;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   LS2;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   LS1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.InAngleRangeCC
struct UBPC_DoorSteeringHint_C_InAngleRangeCC_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIsIn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetSteerAmountAngleMethod
struct UBPC_DoorSteeringHint_C_GetSteerAmountAngleMethod_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Steer;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetWorldSpaceAngle
struct UBPC_DoorSteeringHint_C_GetWorldSpaceAngle_Params
{
	float                                              Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              World;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetHeadingAngleFromDirection
struct UBPC_DoorSteeringHint_C_GetHeadingAngleFromDirection_Params
{
	struct FVector2D                                   Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetComponentSpaceAngle
struct UBPC_DoorSteeringHint_C_GetComponentSpaceAngle_Params
{
	float                                              World;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Component;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.GetHeadingAngleFromLocations
struct UBPC_DoorSteeringHint_C_GetHeadingAngleFromLocations_Params
{
	struct FVector2D                                   FromLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ToLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Degrees;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalculateAngleRange
struct UBPC_DoorSteeringHint_C_CalculateAngleRange_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   AngleRangeCW;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.IntersectsSegment
struct UBPC_DoorSteeringHint_C_IntersectsSegment_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bIntersects;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.CalcScalerBasedOnDistance
struct UBPC_DoorSteeringHint_C_CalcScalerBasedOnDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scaler;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.IsOnRelevantSide
struct UBPC_DoorSteeringHint_C_IsOnRelevantSide_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bRelevantSide;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ReceiveBeginPlay
struct UBPC_DoorSteeringHint_C_ReceiveBeginPlay_Params
{
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ReceiveTick
struct UBPC_DoorSteeringHint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorSteeringHint.BPC_DoorSteeringHint_C.ExecuteUbergraph_BPC_DoorSteeringHint
struct UBPC_DoorSteeringHint_C_ExecuteUbergraph_BPC_DoorSteeringHint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
