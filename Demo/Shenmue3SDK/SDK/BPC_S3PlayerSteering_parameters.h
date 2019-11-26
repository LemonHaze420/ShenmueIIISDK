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

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ZeroedOutInput
struct UBPC_S3PlayerSteering_C_ZeroedOutInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Clear
struct UBPC_S3PlayerSteering_C_Clear_Params
{
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.CalcNPCSteer
struct UBPC_S3PlayerSteering_C_CalcNPCSteer_Params
{
	class AS3Character*                                NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InputDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              OutStrength;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutPriority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.SampleFloatCurveWithLinearDefault
struct UBPC_S3PlayerSteering_C_SampleFloatCurveWithLinearDefault_Params
{
	class UCurveFloat*                                 Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.GetNPCAngleN
struct UBPC_S3PlayerSteering_C_GetNPCAngleN_Params
{
	struct FVector                                     NPCLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PlayerNPCDistance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NPCRadius;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputAngleWS;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ClearHints
struct UBPC_S3PlayerSteering_C_ClearHints_Params
{
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.Update
struct UBPC_S3PlayerSteering_C_Update_Params
{
	struct FVector                                     InputDirWS;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ActiveInput;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputMagnitude;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutStrength;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              OutMagnitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ReceiveBeginPlay
struct UBPC_S3PlayerSteering_C_ReceiveBeginPlay_Params
{
};

// Function BPC_S3PlayerSteering.BPC_S3PlayerSteering_C.ExecuteUbergraph_BPC_S3PlayerSteering
struct UBPC_S3PlayerSteering_C_ExecuteUbergraph_BPC_S3PlayerSteering_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
