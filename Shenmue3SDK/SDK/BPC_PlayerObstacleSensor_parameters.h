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

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsValidTalkTargetNPC
struct UBPC_PlayerObstacleSensor_C_IsValidTalkTargetNPC_Params
{
	class AS3Character*                                NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.GetCurrentFloor
struct UBPC_PlayerObstacleSensor_C_GetCurrentFloor_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdateSurroundTraces
struct UBPC_PlayerObstacleSensor_C_UpdateSurroundTraces_Params
{
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsValidObstacle
struct UBPC_PlayerObstacleSensor_C_IsValidObstacle_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsNPCObstacle
struct UBPC_PlayerObstacleSensor_C_IsNPCObstacle_Params
{
	class UObject*                                     NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ClassifyObstacle
struct UBPC_PlayerObstacleSensor_C_ClassifyObstacle_Params
{
	TEnumAsByte<EN_PC_ObstacleType>                    ObstacleType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.SenseNPCs
struct UBPC_PlayerObstacleSensor_C_SenseNPCs_Params
{
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.CapsuleTrace
struct UBPC_PlayerObstacleSensor_C_CapsuleTrace_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               return_value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdateAI
struct UBPC_PlayerObstacleSensor_C_UpdateAI_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdatePlayerState
struct UBPC_PlayerObstacleSensor_C_UpdatePlayerState_Params
{
	class AS3Character*                                InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InInputDirectionWS;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.Sense
struct UBPC_PlayerObstacleSensor_C_Sense_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ReceiveBeginPlay
struct UBPC_PlayerObstacleSensor_C_ReceiveBeginPlay_Params
{
};

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ExecuteUbergraph_BPC_PlayerObstacleSensor
struct UBPC_PlayerObstacleSensor_C_ExecuteUbergraph_BPC_PlayerObstacleSensor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
