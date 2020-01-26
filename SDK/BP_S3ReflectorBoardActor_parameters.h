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

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.SetActiveLight
struct ABP_S3ReflectorBoardActor_C_SetActiveLight_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ToggleActive
struct ABP_S3ReflectorBoardActor_C_ToggleActive_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UpdateLightActive
struct ABP_S3ReflectorBoardActor_C_UpdateLightActive_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPos
struct ABP_S3ReflectorBoardActor_C_CalcLightPos_Params
{
	struct FVector                                     pelvis;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnPos;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPosition
struct ABP_S3ReflectorBoardActor_C_CalcLightPosition_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UserConstructionScript
struct ABP_S3ReflectorBoardActor_C_UserConstructionScript_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndCutscene
struct ABP_S3ReflectorBoardActor_C_EndCutscene_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartCutscene
struct ABP_S3ReflectorBoardActor_C_StartCutscene_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartTalk
struct ABP_S3ReflectorBoardActor_C_StartTalk_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndTalk
struct ABP_S3ReflectorBoardActor_C_EndTalk_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ChangeTalkCamera
struct ABP_S3ReflectorBoardActor_C_ChangeTalkCamera_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UnbindEventDispacher
struct ABP_S3ReflectorBoardActor_C_UnbindEventDispacher_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.BindEventDispatcher
struct ABP_S3ReflectorBoardActor_C_BindEventDispatcher_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveBeginPlay
struct ABP_S3ReflectorBoardActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveTick
struct ABP_S3ReflectorBoardActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndOwner
struct ABP_S3ReflectorBoardActor_C_EndOwner_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveEndPlay
struct ABP_S3ReflectorBoardActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ExecuteUbergraph_BP_S3ReflectorBoardActor
struct ABP_S3ReflectorBoardActor_C_ExecuteUbergraph_BP_S3ReflectorBoardActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
