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

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetPlayerMotionSpeed
struct ABP_MiniGame_CC_Manager_C_SetPlayerMotionSpeed_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetRewardUnitPrice
struct ABP_MiniGame_CC_Manager_C_GetRewardUnitPrice_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetClothMeshComponent
struct ABP_MiniGame_CC_Manager_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitAsyncLoad
struct ABP_MiniGame_CC_Manager_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.IsFirstPlayDuck
struct ABP_MiniGame_CC_Manager_C_IsFirstPlayDuck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetNPCVisibleOnDuck
struct ABP_MiniGame_CC_Manager_C_SetNPCVisibleOnDuck_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetMiniGameHelpName
struct ABP_MiniGame_CC_Manager_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetQTEButtonIndex
struct ABP_MiniGame_CC_Manager_C_GetQTEButtonIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EnableChickenFromPlayer
struct ABP_MiniGame_CC_Manager_C_EnableChickenFromPlayer_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.GetSafeAngle
struct ABP_MiniGame_CC_Manager_C_GetSafeAngle_Params
{
	struct FRotator                                    newParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetSequenceRate
struct ABP_MiniGame_CC_Manager_C_SetSequenceRate_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnSequenceActor
struct ABP_MiniGame_CC_Manager_C_SpawnSequenceActor_Params
{
	class ULevelSequence*                              InSequence;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachParentActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnObj;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PauseGame
struct ABP_MiniGame_CC_Manager_C_PauseGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateProgressTime
struct ABP_MiniGame_CC_Manager_C_UpdateProgressTime_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ForceEndSequence
struct ABP_MiniGame_CC_Manager_C_ForceEndSequence_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SetQTEWaitTime
struct ABP_MiniGame_CC_Manager_C_SetQTEWaitTime_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InitializeValue
struct ABP_MiniGame_CC_Manager_C_InitializeValue_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UpdateQte
struct ABP_MiniGame_CC_Manager_C_UpdateQte_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ActivateCatch
struct ABP_MiniGame_CC_Manager_C_ActivateCatch_Params
{
	class ABP_MiniGame_CC_Chicken_C*                   CCPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnPlayer
struct ABP_MiniGame_CC_Manager_C_SpawnPlayer_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CheckEndGame
struct ABP_MiniGame_CC_Manager_C_CheckEndGame_Params
{
	bool                                               End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnInputControlActor
struct ABP_MiniGame_CC_Manager_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.SpawnChicken
struct ABP_MiniGame_CC_Manager_C_SpawnChicken_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.PlaySequence
struct ABP_MiniGame_CC_Manager_C_PlaySequence_Params
{
	class ABP_MiniGame_CC_Chicken_C*                   CCPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.UserConstructionScript
struct ABP_MiniGame_CC_Manager_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.StartMiniGame
struct ABP_MiniGame_CC_Manager_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndMiniGame
struct ABP_MiniGame_CC_Manager_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedFade
struct ABP_MiniGame_CC_Manager_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.WinMiniGame
struct ABP_MiniGame_CC_Manager_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.LoseMiniGame
struct ABP_MiniGame_CC_Manager_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DrawMiniGame
struct ABP_MiniGame_CC_Manager_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.FinalizeTalk
struct ABP_MiniGame_CC_Manager_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_StartMiniGame
struct ABP_MiniGame_CC_Manager_C_Event_StartMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndResult
struct ABP_MiniGame_CC_Manager_C_Event_EndResult_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ClothesChangedCC
struct ABP_MiniGame_CC_Manager_C_ClothesChangedCC_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveBeginPlay
struct ABP_MiniGame_CC_Manager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveTick
struct ABP_MiniGame_CC_Manager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputStart
struct ABP_MiniGame_CC_Manager_C_Event_InputStart_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_InputEnd
struct ABP_MiniGame_CC_Manager_C_Event_InputEnd_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BindFinishSequence
struct ABP_MiniGame_CC_Manager_C_BindFinishSequence_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputQTE
struct ABP_MiniGame_CC_Manager_C_InputQTE_Params
{
	struct FKey                                        Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveForward
struct ABP_MiniGame_CC_Manager_C_InputPlayerMoveForward_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerMoveRight
struct ABP_MiniGame_CC_Manager_C_InputPlayerMoveRight_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunPressed
struct ABP_MiniGame_CC_Manager_C_InputPlayerRunPressed_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputPlayerRunReleased
struct ABP_MiniGame_CC_Manager_C_InputPlayerRunReleased_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.InputCameraRight
struct ABP_MiniGame_CC_Manager_C_InputCameraRight_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeLocoState
struct ABP_MiniGame_CC_Manager_C_ChangeLocoState_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.EndSequence
struct ABP_MiniGame_CC_Manager_C_EndSequence_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteMiniGameResultEvent
struct ABP_MiniGame_CC_Manager_C_ExecuteMiniGameResultEvent_Params
{
	TEnumAsByte<E_MiniGameResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnFinishedEvent_Sequence
struct ABP_MiniGame_CC_Manager_C_OnFinishedEvent_Sequence_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_CC_Manager_C_BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_CC_Manager_C_BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ReceiveEndPlay
struct ABP_MiniGame_CC_Manager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.DestroyChicken
struct ABP_MiniGame_CC_Manager_C_DestroyChicken_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ChangeGameTimeEvent
struct ABP_MiniGame_CC_Manager_C_ChangeGameTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.CancelMiniGame
struct ABP_MiniGame_CC_Manager_C_CancelMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.Event_EndMiniGame
struct ABP_MiniGame_CC_Manager_C_Event_EndMiniGame_Params
{
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnBeginOverlapWallCollision
struct ABP_MiniGame_CC_Manager_C_OnBeginOverlapWallCollision_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.OnEndOverlapWallCollision
struct ABP_MiniGame_CC_Manager_C_OnEndOverlapWallCollision_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C.ExecuteUbergraph_BP_MiniGame_CC_Manager
struct ABP_MiniGame_CC_Manager_C_ExecuteUbergraph_BP_MiniGame_CC_Manager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
