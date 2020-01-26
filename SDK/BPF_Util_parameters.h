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

// Function BPF_Util.BPF_Util_C.BPF_YawAngleToActor
struct UBPF_Util_C_BPF_YawAngleToActor_Params
{
	class AActor*                                      To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleSignedDegrees;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_VectorToActor
struct UBPF_Util_C_BPF_VectorToActor_Params
{
	class AActor*                                      To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetCharacterTop
struct UBPF_Util_C_BPF_GetCharacterTop_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Bottom;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_WorldSpaceYawToDirection
struct UBPF_Util_C_BPF_WorldSpaceYawToDirection_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_IntStepTo
struct UBPF_Util_C_BPF_IntStepTo_Params
{
	int                                                Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_FindActor2DLookAtRotation
struct UBPF_Util_C_BPF_FindActor2DLookAtRotation_Params
{
	class AActor*                                      Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_Find2DLookAtRotation
struct UBPF_Util_C_BPF_Find2DLookAtRotation_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_AddCharacterHalfHeight
struct UBPF_Util_C_BPF_AddCharacterHalfHeight_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Bottom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetCharacterBottom
struct UBPF_Util_C_BPF_GetCharacterBottom_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Bottom;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_RotateVectorTo2DDamp
struct UBPF_Util_C_BPF_RotateVectorTo2DDamp_Params
{
	struct FVector                                     RotateMe;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TowardsMe;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_RemoveVectorZ
struct UBPF_Util_C_BPF_RemoveVectorZ_Params
{
	struct FVector                                     InVector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVector;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetDeltaTimeAsRemainingFraction
struct UBPF_Util_C_BPF_GetDeltaTimeAsRemainingFraction_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NowTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultOnEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_DirectionToWorldSpaceYaw
struct UBPF_Util_C_BPF_DirectionToWorldSpaceYaw_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceYaw;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_LerpAngle
struct UBPF_Util_C_BPF_LerpAngle_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_LerpAngleSigned
struct UBPF_Util_C_BPF_LerpAngleSigned_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AlphaWithSign;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_AngleVector2DSignedDegrees
struct UBPF_Util_C_BPF_AngleVector2DSignedDegrees_Params
{
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleSignedDegrees;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtPointVector3D
struct UBPF_Util_C_BPF_GetSplineAreaAtPointVector3D_Params
{
	TArray<struct FVector>                             PointVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBounds;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_InterpolateAngleConstantNear
struct UBPF_Util_C_BPF_InterpolateAngleConstantNear_Params
{
	float                                              Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_InterpolateAngleConstantSigned
struct UBPF_Util_C_BPF_InterpolateAngleConstantSigned_Params
{
	float                                              Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionSignedDeg;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_ConvertAngleToSignDegrees
struct UBPF_Util_C_BPF_ConvertAngleToSignDegrees_Params
{
	float                                              AngleDegrees;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sign;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_AngleDifferenceSignedDegrees
struct UBPF_Util_C_BPF_AngleDifferenceSignedDegrees_Params
{
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_ResumeCamera
struct UBPF_Util_C_BPF_ResumeCamera_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_RInterpToQuaternion
struct UBPF_Util_C_BPF_RInterpToQuaternion_Params
{
	struct FRotator                                    Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_RInterpToQuaternionLinear
struct UBPF_Util_C_BPF_RInterpToQuaternionLinear_Params
{
	struct FRotator                                    Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_IsLineSightCheck
struct UBPF_Util_C_BPF_IsLineSightCheck_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputLog;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetEyeLocationAndRightVector
struct UBPF_Util_C_BPF_GetEyeLocationAndRightVector_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EyeLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     RightVector;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               bSuccessEyeLocation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_Vector2DLengthSquared
struct UBPF_Util_C_BPF_Vector2DLengthSquared_Params
{
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_AddDeltaTime
struct UBPF_Util_C_BPF_AddDeltaTime_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddedValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetSplineRate
struct UBPF_Util_C_BPF_GetSplineRate_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtSpline
struct UBPF_Util_C_BPF_GetSplineAreaAtSpline_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              x_max;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              x_min;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              y_max;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              y_min;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_GetSplineAreaAtPointVector
struct UBPF_Util_C_BPF_GetSplineAreaAtPointVector_Params
{
	TArray<struct FVector>                             PointVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              x_max;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              x_min;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              y_max;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              y_min;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_Length1d
struct UBPF_Util_C_BPF_Length1d_Params
{
	float                                              V0;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_ReducedScaleChangeNoLimit
struct UBPF_Util_C_BPF_ReducedScaleChangeNoLimit_Params
{
	float                                              defult_len;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              change_over_len;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_InterVector
struct UBPF_Util_C_BPF_InterVector_Params
{
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     V0;                                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_QueryTagCharaName2Character
struct UBPF_Util_C_BPF_QueryTagCharaName2Character_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_PadInput2SinTbl
struct UBPF_Util_C_BPF_PadInput2SinTbl_Params
{
	float                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DstSinTbl;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_LineWrongSideOut2d
struct UBPF_Util_C_BPF_LineWrongSideOut2d_Params
{
	float                                              PosX;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vx0;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vy0;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vx1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vy1;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DstFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_AngleVector
struct UBPF_Util_C_BPF_AngleVector_Params
{
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RetRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_TriangleNormal
struct UBPF_Util_C_BPF_TriangleNormal_Params
{
	struct FVector                                     V0;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_LineDirection
struct UBPF_Util_C_BPF_LineDirection_Params
{
	struct FVector                                     V0;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dst;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_DeltaTimeScale
struct UBPF_Util_C_BPF_DeltaTimeScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dst;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.stringCompare
struct UBPF_Util_C_stringCompare_Params
{
	struct FString                                     stringA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     stringB;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               i;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.BPF_TraceIdast1dDeltaTime
struct UBPF_Util_C_BPF_TraceIdast1dDeltaTime_Params
{
	float                                              V;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TergetV;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dst;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Util.BPF_Util_C.toString(withDigit)
struct UBPF_Util_C_toString_withDigit__Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                digit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     digitFixString;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Util.BPF_Util_C.BPF_FloatEqual
struct UBPF_Util_C_BPF_FloatEqual_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DstFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
