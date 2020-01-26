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

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.GetYawVelocity
struct UBP_S3CameraSmoothRotator_C_GetYawVelocity_Params
{
	float                                              YawVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateYaw
struct UBP_S3CameraSmoothRotator_C_UpdateYaw_Params
{
	float                                              CurrentAngle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowAcceleration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceDeaccel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateAxis
struct UBP_S3CameraSmoothRotator_C_UpdateAxis_Params
{
	float                                              CurrentAngle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VelocityCurve;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AccelerationCurve;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Deaccleration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowAcceleration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceDeaccel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ResultVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdatePitch
struct UBP_S3CameraSmoothRotator_C_UpdatePitch_Params
{
	float                                              CurrentAngle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowAcceleration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceDeaccel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.Reset
struct UBP_S3CameraSmoothRotator_C_Reset_Params
{
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.GetRealVelocity
struct UBP_S3CameraSmoothRotator_C_GetRealVelocity_Params
{
	float                                              SourceAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DestinationAngle;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IntendedVelocity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RealVelocity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.UpdateAngularVelocity
struct UBP_S3CameraSmoothRotator_C_UpdateAngularVelocity_Params
{
	float                                              CurrentAngle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VelCurve;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AccelCurve;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Deaccel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableAccel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceDeaccel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3CameraSmoothRotator.BP_S3CameraSmoothRotator_C.Update
struct UBP_S3CameraSmoothRotator_C_Update_Params
{
	float                                              TargetPitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetYaw;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AllowAccel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
