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

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetEnableLightCollision
struct ABP_CharaLightingManager_C_SetEnableLightCollision_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightingColorParameter
struct ABP_CharaLightingManager_C_GetLightingColorParameter_Params
{
	struct FS3CharaLightingCurveColorParamater         Paramater;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllLightupActors
struct ABP_CharaLightingManager_C_UpdateAllLightupActors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCalculationMeshAndCameraVariable
struct ABP_CharaLightingManager_C_SetupCalculationMeshAndCameraVariable_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetTalkTargetActorMesh
struct ABP_CharaLightingManager_C_GetTalkTargetActorMesh_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsConditionsCheck
struct ABP_CharaLightingManager_C_IsConditionsCheck_Params
{
	struct FS3CharaLightingContainer                   Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3TagCharaComponent*                        TagCharaComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Evaluation
struct ABP_CharaLightingManager_C_Evaluation_Params
{
	class AActor*                                      TargetLightupActor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LightGroupId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3CharaLightingContainer                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetLightupTargetLocation
struct ABP_CharaLightingManager_C_GetLightupTargetLocation_Params
{
	class AActor*                                      InTargetActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllCharaLightingActors
struct ABP_CharaLightingManager_C_GetAllCharaLightingActors_Params
{
	TArray<class AS3CharaLightingActor*>               Values;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetAllTargetCharaActors
struct ABP_CharaLightingManager_C_GetAllTargetCharaActors_Params
{
	TArray<class AActor*>                              CharaActors;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ClearLightupActors
struct ABP_CharaLightingManager_C_ClearLightupActors_Params
{
	bool                                               CutsceneOnly;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupCutsceneLightingActors
struct ABP_CharaLightingManager_C_SetupCutsceneLightingActors_Params
{
	class AS3CharaLightingSequencerActor*              SeqLightingActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.TryGetActorMeshComponent
struct ABP_CharaLightingManager_C_TryGetActorMeshComponent_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.IsUsableLight
struct ABP_CharaLightingManager_C_IsUsableLight_Params
{
	class ALight*                                      Light;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUse;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SpotDeviatedConeAngle;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetMainSpotLightDesirabilityScore
struct ABP_CharaLightingManager_C_GetMainSpotLightDesirabilityScore_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeviatedConeAngle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzySystemComponent*                       SpotFuzzySystem;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DesirabilityScore;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupEnvironmentLightParamater
struct ABP_CharaLightingManager_C_SetupEnvironmentLightParamater_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.GetMainPointLightDesirabilityScore
struct ABP_CharaLightingManager_C_GetMainPointLightDesirabilityScore_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFuzzySystemComponent*                       PointFuzzySystem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DesirabilityScore;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.InitializeFuzzySystems
struct ABP_CharaLightingManager_C_InitializeFuzzySystems_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UpdateAllCutsceneLightingActors
struct ABP_CharaLightingManager_C_UpdateAllCutsceneLightingActors_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ResetValues
struct ABP_CharaLightingManager_C_ResetValues_Params
{
	bool                                               FromCutscene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SpawnCharaLightingActor
struct ABP_CharaLightingManager_C_SpawnCharaLightingActor_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UserConstructionScript
struct ABP_CharaLightingManager_C_UserConstructionScript_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveTick
struct ABP_CharaLightingManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugDrawLightLineToggle
struct ABP_CharaLightingManager_C_DebugDrawLightLineToggle_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.DebugCharaLightOnOffToggle
struct ABP_CharaLightingManager_C_DebugCharaLightOnOffToggle_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_UpdateAllCutsceneLightingActors
struct ABP_CharaLightingManager_C_Editor_UpdateAllCutsceneLightingActors_Params
{
	class ACameraActor*                                Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.Editor_ResetVariable
struct ABP_CharaLightingManager_C_Editor_ResetVariable_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.SetupTestLevel
struct ABP_CharaLightingManager_C_SetupTestLevel_Params
{
	class AS3CharaLightingActor*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.BindManagerEvents
struct ABP_CharaLightingManager_C_BindManagerEvents_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnBeginTalk
struct ABP_CharaLightingManager_C_OnBeginTalk_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnEndTalk
struct ABP_CharaLightingManager_C_OnEndTalk_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChanged
struct ABP_CharaLightingManager_C_OnCameraChanged_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneStart
struct ABP_CharaLightingManager_C_onCutsceneStart_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.onCutsceneEnd
struct ABP_CharaLightingManager_C_onCutsceneEnd_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnCameraChangedSequencer
struct ABP_CharaLightingManager_C_OnCameraChangedSequencer_Params
{
	class UObject*                                     CameraObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindCutscene
struct ABP_CharaLightingManager_C_UnbindCutscene_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedJoinActor
struct ABP_CharaLightingManager_C_OnChangedJoinActor_Params
{
	EJoinActorChangeEvent                              ChangeEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStartAcCameraSequence
struct ABP_CharaLightingManager_C_OnStartAcCameraSequence_Params
{
	class ALevelSequenceActor*                         PlaySequenceActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnFinishedAcCameraSequence
struct ABP_CharaLightingManager_C_OnFinishedAcCameraSequence_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnStopAcCameraSequence
struct ABP_CharaLightingManager_C_OnStopAcCameraSequence_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.UnbindAcCameraSequence
struct ABP_CharaLightingManager_C_UnbindAcCameraSequence_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.OnChangedACCameraCut
struct ABP_CharaLightingManager_C_OnChangedACCameraCut_Params
{
	class UCameraComponent*                            CameraComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ReceiveBeginPlay
struct ABP_CharaLightingManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_CharaLightingManager.BP_CharaLightingManager_C.ExecuteUbergraph_BP_CharaLightingManager
struct ABP_CharaLightingManager_C_ExecuteUbergraph_BP_CharaLightingManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
