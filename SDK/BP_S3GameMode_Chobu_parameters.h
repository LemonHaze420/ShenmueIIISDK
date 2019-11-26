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

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.CheckSunLightCastShadow
struct ABP_S3GameMode_Chobu_C_CheckSunLightCastShadow_Params
{
	ES3PlayerBehavior                                  ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.CheckCasinoShip
struct ABP_S3GameMode_Chobu_C_CheckCasinoShip_Params
{
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.UserConstructionScript
struct ABP_S3GameMode_Chobu_C_UserConstructionScript_Params
{
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.InitializeShip
struct ABP_S3GameMode_Chobu_C_InitializeShip_Params
{
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.FinalizeShip
struct ABP_S3GameMode_Chobu_C_FinalizeShip_Params
{
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangeFlag
struct ABP_S3GameMode_Chobu_C_ChangeFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.JumpShip
struct ABP_S3GameMode_Chobu_C_JumpShip_Params
{
	struct FTransform                                  JumpTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       EyecatchLabel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.FinishJump
struct ABP_S3GameMode_Chobu_C_FinishJump_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ReceiveBeginPlay
struct ABP_S3GameMode_Chobu_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ReceiveEndPlay
struct ABP_S3GameMode_Chobu_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangeStep
struct ABP_S3GameMode_Chobu_C_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ChangePlayerBehavior
struct ABP_S3GameMode_Chobu_C_ChangePlayerBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.StartChobu
struct ABP_S3GameMode_Chobu_C_StartChobu_Params
{
};

// Function BP_S3GameMode_Chobu.BP_S3GameMode_Chobu_C.ExecuteUbergraph_BP_S3GameMode_Chobu
struct ABP_S3GameMode_Chobu_C_ExecuteUbergraph_BP_S3GameMode_Chobu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
