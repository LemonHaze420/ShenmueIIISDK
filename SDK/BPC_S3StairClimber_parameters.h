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

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.IsHeightFixEnabled
struct UBPC_S3StairClimber_C_IsHeightFixEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.MatchHorizontal
struct UBPC_S3StairClimber_C_MatchHorizontal_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetRelativeY;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ValidateStairCollisionWithTrace
struct UBPC_S3StairClimber_C_ValidateStairCollisionWithTrace_Params
{
	struct FVector                                     TestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABP_S3StaircaseBase_C*                       Stair;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.SetMainStairs
struct UBPC_S3StairClimber_C_SetMainStairs_Params
{
	class ABP_S3StaircaseBase_C*                       StairsIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.IgnoreStairCollision
struct UBPC_S3StairClimber_C_IgnoreStairCollision_Params
{
	bool                                               bShouldIgnore;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3StaircaseBase_C*                       Stair;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.PostUpdateHeightFix
struct UBPC_S3StairClimber_C_PostUpdateHeightFix_Params
{
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.BottomToCenterLocation
struct UBPC_S3StairClimber_C_BottomToCenterLocation_Params
{
	struct FVector                                     Bottom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.TrySelectAndUpdateStairs
struct UBPC_S3StairClimber_C_TrySelectAndUpdateStairs_Params
{
	class ABP_S3StaircaseBase_C*                       InStairs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.CalculateMovePosition
struct UBPC_S3StairClimber_C_CalculateMovePosition_Params
{
	struct FVector                                     PrevLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PrevAnimCycle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NextAnimCycle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.CalculateAngleData
struct UBPC_S3StairClimber_C_CalculateAngleData_Params
{
	class ABP_S3StaircaseBase_C*                       Stairs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRawVeerAngle;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDirectionalVeerAngle;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutStrideScale;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutDirUp;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.CheckOnStairs
struct UBPC_S3StairClimber_C_CheckOnStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Stairs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StrideScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddHysteresis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.GetArcTOA
struct UBPC_S3StairClimber_C_GetArcTOA_Params
{
	struct FVector2D                                   End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              OutCalc;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.GetWeightedAngleToCorner
struct UBPC_S3StairClimber_C_GetWeightedAngleToCorner_Params
{
	bool                                               IsLeftSide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.SetInteractingStairs
struct UBPC_S3StairClimber_C_SetInteractingStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Stair;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.MatchAnimCycle
struct UBPC_S3StairClimber_C_MatchAnimCycle_Params
{
	float                                              InAnimPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InStairPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUp;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAnimPosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ClampDirection
struct UBPC_S3StairClimber_C_ClampDirection_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Clamped;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.Update
struct UBPC_S3StairClimber_C_Update_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ReceiveBeginPlay
struct UBPC_S3StairClimber_C_ReceiveBeginPlay_Params
{
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ReceiveTick
struct UBPC_S3StairClimber_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnBeginOverlapStairs
struct UBPC_S3StairClimber_C_OnBeginOverlapStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Staircase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnEndOverlapStairs
struct UBPC_S3StairClimber_C_OnEndOverlapStairs_Params
{
	class ABP_S3StaircaseBase_C*                       Staircase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.ExecuteUbergraph_BPC_S3StairClimber
struct UBPC_S3StairClimber_C_ExecuteUbergraph_BPC_S3StairClimber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnEndStairUse__DelegateSignature
struct UBPC_S3StairClimber_C_OnEndStairUse__DelegateSignature_Params
{
};

// Function BPC_S3StairClimber.BPC_S3StairClimber_C.OnStartStairUse__DelegateSignature
struct UBPC_S3StairClimber_C_OnStartStairUse__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
