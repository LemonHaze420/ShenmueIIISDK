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

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetAnimalCameraPos
struct ABP_AnimalRaceBase_C_GetAnimalCameraPos_Params
{
	int                                                IndexNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetAnimalDelayTime
struct ABP_AnimalRaceBase_C_GetAnimalDelayTime_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetFortuneGrade
struct ABP_AnimalRaceBase_C_GetFortuneGrade_Params
{
	int                                                GradeNum;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CheckAnimalWallCollision
struct ABP_AnimalRaceBase_C_CheckAnimalWallCollision_Params
{
	class AActor*                                      CheckActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             CheckComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CheckAnimalIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBeginOverlap;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdatePlayCount
struct ABP_AnimalRaceBase_C_UpdatePlayCount_Params
{
	bool                                               IsToad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUseHighTable;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetCollisionEnabled
struct ABP_AnimalRaceBase_C_SetCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.InitializeOnBeginPlay
struct ABP_AnimalRaceBase_C_InitializeOnBeginPlay_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.InitializeAnimalData
struct ABP_AnimalRaceBase_C_InitializeAnimalData_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetMiniGameBGMID
struct ABP_AnimalRaceBase_C_GetMiniGameBGMID_Params
{
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.TestFunc
struct ABP_AnimalRaceBase_C_TestFunc_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalCondition
struct ABP_AnimalRaceBase_C_SetAnimalCondition_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ChangeSpeedFromCache
struct ABP_AnimalRaceBase_C_ChangeSpeedFromCache_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateResultCache
struct ABP_AnimalRaceBase_C_UpdateResultCache_Params
{
	bool                                               ResultSuccess;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetQTEInfo
struct ABP_AnimalRaceBase_C_ResetQTEInfo_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateQte
struct ABP_AnimalRaceBase_C_UpdateQte_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.IsToadRace
struct ABP_AnimalRaceBase_C_IsToadRace_Params
{
	bool                                               bToad;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetFortuneResult
struct ABP_AnimalRaceBase_C_SetFortuneResult_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetBoardInfo
struct ABP_AnimalRaceBase_C_SetBoardInfo_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetMiniGameHelpName
struct ABP_AnimalRaceBase_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalCrySEVolume
struct ABP_AnimalRaceBase_C_SetAnimalCrySEVolume_Params
{
	float                                              CrySEVolume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SetAnimalSE
struct ABP_AnimalRaceBase_C_SetAnimalSE_Params
{
	class ABP_AR_Animal_Base_C*                        Animal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateOpeningCamera
struct ABP_AnimalRaceBase_C_UpdateOpeningCamera_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateBetAnimalUI
struct ABP_AnimalRaceBase_C_UpdateBetAnimalUI_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UpdateCamera
struct ABP_AnimalRaceBase_C_UpdateCamera_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GetRewardMoney
struct ABP_AnimalRaceBase_C_GetRewardMoney_Params
{
	int                                                Money;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.set Select Point Location
struct ABP_AnimalRaceBase_C_set_Select_Point_Location_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.SpawnInputControlActor
struct ABP_AnimalRaceBase_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.UserConstructionScript
struct ABP_AnimalRaceBase_C_UserConstructionScript_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDown__FinishedFunc
struct ABP_AnimalRaceBase_C_CountDown__FinishedFunc_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDown__UpdateFunc
struct ABP_AnimalRaceBase_C_CountDown__UpdateFunc_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResultCheck
struct ABP_AnimalRaceBase_C_ResultCheck_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.RaceTick
struct ABP_AnimalRaceBase_C_RaceTick_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.GameStartFinished
struct ABP_AnimalRaceBase_C_GameStartFinished_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Tick
struct ABP_AnimalRaceBase_C_Bet_Tick_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Result Tick
struct ABP_AnimalRaceBase_C_Result_Tick_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResumeMiniGame
struct ABP_AnimalRaceBase_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.OnTalkScriptEvent
struct ABP_AnimalRaceBase_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.StartMiniGame
struct ABP_AnimalRaceBase_C_StartMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.EndMiniGame
struct ABP_AnimalRaceBase_C_EndMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.RestartMiniGame
struct ABP_AnimalRaceBase_C_RestartMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.WinMiniGame
struct ABP_AnimalRaceBase_C_WinMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.LoseMiniGame
struct ABP_AnimalRaceBase_C_LoseMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.DrawMiniGame
struct ABP_AnimalRaceBase_C_DrawMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.AnimalRace End
struct ABP_AnimalRaceBase_C_AnimalRace_End_Params
{
	bool                                               is_success;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CancelMiniGame
struct ABP_AnimalRaceBase_C_CancelMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.StartGameFadeOutFinish
struct ABP_AnimalRaceBase_C_StartGameFadeOutFinish_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.WinGameFadeOutFinish
struct ABP_AnimalRaceBase_C_WinGameFadeOutFinish_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.LoseGameFadeOutFinish
struct ABP_AnimalRaceBase_C_LoseGameFadeOutFinish_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CancelFadeEnd
struct ABP_AnimalRaceBase_C_CancelFadeEnd_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Back Pushed
struct ABP_AnimalRaceBase_C_Back_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Action Pushed
struct ABP_AnimalRaceBase_C_Action_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Up Pushed
struct ABP_AnimalRaceBase_C_Up_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Down Pushed
struct ABP_AnimalRaceBase_C_Down_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Left Pushed
struct ABP_AnimalRaceBase_C_Bet_Left_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Bet Right Pushed
struct ABP_AnimalRaceBase_C_Bet_Right_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Up Pushed
struct ABP_AnimalRaceBase_C_Race_Up_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Down Pushed
struct ABP_AnimalRaceBase_C_Race_Down_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Right Pushed
struct ABP_AnimalRaceBase_C_Race_Right_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Race Left Pushed
struct ABP_AnimalRaceBase_C_Race_Left_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Right Pushed
struct ABP_AnimalRaceBase_C_Right_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Left Pushed
struct ABP_AnimalRaceBase_C_Left_Pushed_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.CountDownFinished
struct ABP_AnimalRaceBase_C_CountDownFinished_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Add Push Count
struct ABP_AnimalRaceBase_C_Add_Push_Count_Params
{
	TEnumAsByte<EN_padSwitch>                          ButtonType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.count max
struct ABP_AnimalRaceBase_C_count_max_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Input Update
struct ABP_AnimalRaceBase_C_Input_Update_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_StopCountDown
struct ABP_AnimalRaceBase_C_Event_StopCountDown_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ReceiveBeginPlay
struct ABP_AnimalRaceBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ReceiveTick
struct ABP_AnimalRaceBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetSupport1
struct ABP_AnimalRaceBase_C_ResetSupport1_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ResetSupport2
struct ABP_AnimalRaceBase_C_ResetSupport2_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Game Start
struct ABP_AnimalRaceBase_C_Game_Start_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Game End
struct ABP_AnimalRaceBase_C_Game_End_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_AnimalRaceBase_C_BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Pre Game End
struct ABP_AnimalRaceBase_C_Pre_Game_End_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Set Animal Tick Enable
struct ABP_AnimalRaceBase_C_Set_Animal_Tick_Enable_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_EndMiniGame
struct ABP_AnimalRaceBase_C_Event_EndMiniGame_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_ChearAnimal
struct ABP_AnimalRaceBase_C_Event_ChearAnimal_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.Event_EndCheer
struct ABP_AnimalRaceBase_C_Event_EndCheer_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ConsumeGamblePrice
struct ABP_AnimalRaceBase_C_ConsumeGamblePrice_Params
{
};

// Function BP_AnimalRaceBase.BP_AnimalRaceBase_C.ExecuteUbergraph_BP_AnimalRaceBase
struct ABP_AnimalRaceBase_C_ExecuteUbergraph_BP_AnimalRaceBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
