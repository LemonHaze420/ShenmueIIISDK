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

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.CreateIconMaterial
struct ABP_Minigame_QTETitle_C_CreateIconMaterial_Params
{
	class UMaterialBillboardComponent*                 Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetTimeOutValue
struct ABP_Minigame_QTETitle_C_GetTimeOutValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitializePadTrans
struct ABP_Minigame_QTETitle_C_InitializePadTrans_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetTime
struct ABP_Minigame_QTETitle_C_SetTime_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetLevelSequence
struct ABP_Minigame_QTETitle_C_GetLevelSequence_Params
{
	TEnumAsByte<EQTETitleSequence>                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Sequence;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitAsyncLoad
struct ABP_Minigame_QTETitle_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitButtonIcon
struct ABP_Minigame_QTETitle_C_InitButtonIcon_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResetScore
struct ABP_Minigame_QTETitle_C_ResetScore_Params
{
	class UChildActorComponent*                        ChildComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetScoreNum
struct ABP_Minigame_QTETitle_C_SetScoreNum_Params
{
	class UChildActorComponent*                        ChildActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetEnabledScore
struct ABP_Minigame_QTETitle_C_SetEnabledScore_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AllDestroySequenceActors
struct ABP_Minigame_QTETitle_C_AllDestroySequenceActors_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SpawnSequenceActor
struct ABP_Minigame_QTETitle_C_SpawnSequenceActor_Params
{
	class ULevelSequence*                              InSequence;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachParentActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnObj;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.DebugDispLog
struct ABP_Minigame_QTETitle_C_DebugDispLog_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.DebugAutoPlay
struct ABP_Minigame_QTETitle_C_DebugAutoPlay_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Load
struct ABP_Minigame_QTETitle_C_Load_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Save
struct ABP_Minigame_QTETitle_C_Save_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ItemGetCheck
struct ABP_Minigame_QTETitle_C_ItemGetCheck_Params
{
	int                                                item_count1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FeintCommandCheck
struct ABP_Minigame_QTETitle_C_FeintCommandCheck_Params
{
	struct FQTECommandStruct                           Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               is_feint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddRightCommand
struct ABP_Minigame_QTETitle_C_AddRightCommand_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddMiddleCommand
struct ABP_Minigame_QTETitle_C_AddMiddleCommand_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.AddLeftCommand
struct ABP_Minigame_QTETitle_C_AddLeftCommand_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RefreshScores
struct ABP_Minigame_QTETitle_C_RefreshScores_Params
{
	class AWBP_QT2_Score2_C*                           Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.QTETitleFadeIn
struct ABP_Minigame_QTETitle_C_QTETitleFadeIn_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SetPlayRate
struct ABP_Minigame_QTETitle_C_SetPlayRate_Params
{
	int                                                Buttons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        SequencerRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.InitializeBoxingSequencers
struct ABP_Minigame_QTETitle_C_InitializeBoxingSequencers_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PickUpRandomBoxingSequencer
struct ABP_Minigame_QTETitle_C_PickUpRandomBoxingSequencer_Params
{
	TArray<class ABP_SpawnableSequenceActor_C*>        InputSequencerArray;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ABP_SpawnableSequenceActor_C*                OutputSequencer;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResetButtonUnPushed
struct ABP_Minigame_QTETitle_C_ResetButtonUnPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LoseCheck
struct ABP_Minigame_QTETitle_C_LoseCheck_Params
{
	int                                                LifeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LostGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.HideAllIcons
struct ABP_Minigame_QTETitle_C_HideAllIcons_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconRight
struct ABP_Minigame_QTETitle_C_ToggleIconRight_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconMiddle
struct ABP_Minigame_QTETitle_C_ToggleIconMiddle_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ToggleIconLeft
struct ABP_Minigame_QTETitle_C_ToggleIconLeft_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.TransferNameToEnum
struct ABP_Minigame_QTETitle_C_TransferNameToEnum_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	Enum_QTETitleCommand                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SpawnInputControlActor
struct ABP_Minigame_QTETitle_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.UserConstructionScript
struct ABP_Minigame_QTETitle_C_UserConstructionScript_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__FinishedFunc
struct ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__UpdateFunc
struct ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__SE_Timing__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__SE_Timing__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__Feint_Finish__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__Feint_Finish__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadLeftTimeline__ShowIcon__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadLeftTimeline__ShowIcon__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__FinishedFunc
struct ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__UpdateFunc
struct ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__SE_Timing__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__SE_Timing__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__Feint_Finish__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__Feint_Finish__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadMiddleTimeline__ShowIcon__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadMiddleTimeline__ShowIcon__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__FinishedFunc
struct ABP_Minigame_QTETitle_C_MovingPadRightTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__UpdateFunc
struct ABP_Minigame_QTETitle_C_MovingPadRightTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__SE_Timing__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadRightTimeline__SE_Timing__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__Feint_Finish__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadRightTimeline__Feint_Finish__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MovingPadRightTimeline__ShowIcon__EventFunc
struct ABP_Minigame_QTETitle_C_MovingPadRightTimeline__ShowIcon__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.򠪦􆖐񍳔_
struct ABP_Minigame_QTETitle_C_UnknownFunc01__Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__FinishedFunc
struct ABP_Minigame_QTETitle_C_ScoreFlashTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__UpdateFunc
struct ABP_Minigame_QTETitle_C_ScoreFlashTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__test2__EventFunc
struct ABP_Minigame_QTETitle_C_ScoreFlashTimeline__test2__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlashTimeline__test__EventFunc
struct ABP_Minigame_QTETitle_C_ScoreFlashTimeline__test__EventFunc_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveBeginPlay
struct ABP_Minigame_QTETitle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveActorBeginOverlap
struct ABP_Minigame_QTETitle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReceiveTick
struct ABP_Minigame_QTETitle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.StartMiniGame
struct ABP_Minigame_QTETitle_C_StartMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PlayIntro
struct ABP_Minigame_QTETitle_C_PlayIntro_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameStart
struct ABP_Minigame_QTETitle_C_GameStart_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GetCommand
struct ABP_Minigame_QTETitle_C_GetCommand_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftPunchPushed
struct ABP_Minigame_QTETitle_C_LeftPunchPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddlePunchPushed
struct ABP_Minigame_QTETitle_C_MiddlePunchPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightPunchPushed
struct ABP_Minigame_QTETitle_C_RightPunchPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.StartPlayList
struct ABP_Minigame_QTETitle_C_StartPlayList_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ContinuePlayList
struct ABP_Minigame_QTETitle_C_ContinuePlayList_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.EndMiniGame
struct ABP_Minigame_QTETitle_C_EndMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.onFinishScreenFadeOut_Event_1
struct ABP_Minigame_QTETitle_C_onFinishScreenFadeOut_Event_1_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.TimeOutCheck
struct ABP_Minigame_QTETitle_C_TimeOutCheck_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.WinMiniGame
struct ABP_Minigame_QTETitle_C_WinMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightButtonPushed
struct ABP_Minigame_QTETitle_C_RightButtonPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RightButtonReleased
struct ABP_Minigame_QTETitle_C_RightButtonReleased_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddleButtonPushed
struct ABP_Minigame_QTETitle_C_MiddleButtonPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.MiddleButtonReleased
struct ABP_Minigame_QTETitle_C_MiddleButtonReleased_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftButtonPushed
struct ABP_Minigame_QTETitle_C_LeftButtonPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LeftButtonReleased
struct ABP_Minigame_QTETitle_C_LeftButtonReleased_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonRPushed
struct ABP_Minigame_QTETitle_C_FaceButtonRPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonMPushed
struct ABP_Minigame_QTETitle_C_FaceButtonMPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.FaceButtonLPushed
struct ABP_Minigame_QTETitle_C_FaceButtonLPushed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadLeft
struct ABP_Minigame_QTETitle_C_ShowMovingPadLeft_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftBack
struct ABP_Minigame_QTETitle_C_PadLeftBack_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ReversePads
struct ABP_Minigame_QTETitle_C_ReversePads_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadMiddle
struct ABP_Minigame_QTETitle_C_ShowMovingPadMiddle_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleBack
struct ABP_Minigame_QTETitle_C_PadMiddleBack_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ShowMovingPadRight
struct ABP_Minigame_QTETitle_C_ShowMovingPadRight_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightBack
struct ABP_Minigame_QTETitle_C_PadRightBack_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PunchSucceed
struct ABP_Minigame_QTETitle_C_PunchSucceed_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LoseMiniGame
struct ABP_Minigame_QTETitle_C_LoseMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightFlash
struct ABP_Minigame_QTETitle_C_PadRightFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleFlash
struct ABP_Minigame_QTETitle_C_PadMiddleFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftFlash
struct ABP_Minigame_QTETitle_C_PadLeftFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Light Flash
struct ABP_Minigame_QTETitle_C_Light_Flash_Params
{
	bool                                               PlayLumpOffSE;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LifeDownSequence
struct ABP_Minigame_QTETitle_C_LifeDownSequence_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ScoreFlash
struct ABP_Minigame_QTETitle_C_ScoreFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameClearSequence
struct ABP_Minigame_QTETitle_C_GameClearSequence_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Play UseCoin
struct ABP_Minigame_QTETitle_C_Play_UseCoin_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Initialize
struct ABP_Minigame_QTETitle_C_Initialize_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.RestartMiniGame
struct ABP_Minigame_QTETitle_C_RestartMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_Minigame_QTETitle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_Minigame_QTETitle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ResumeMiniGame
struct ABP_Minigame_QTETitle_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnTalkScriptEvent
struct ABP_Minigame_QTETitle_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.One Play End
struct ABP_Minigame_QTETitle_C_One_Play_End_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PunchFlashStop
struct ABP_Minigame_QTETitle_C_PunchFlashStop_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnEndKihudaFlow
struct ABP_Minigame_QTETitle_C_OnEndKihudaFlow_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.UseCoinFinished
struct ABP_Minigame_QTETitle_C_UseCoinFinished_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.CancelMiniGame
struct ABP_Minigame_QTETitle_C_CancelMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnFinishedFadeEndGame
struct ABP_Minigame_QTETitle_C_OnFinishedFadeEndGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnIntroFinished
struct ABP_Minigame_QTETitle_C_OnIntroFinished_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.EventUseCoinUnBind
struct ABP_Minigame_QTETitle_C_EventUseCoinUnBind_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.LifeDownFinished_Miss
struct ABP_Minigame_QTETitle_C_LifeDownFinished_Miss_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.GameClearFinished_2
struct ABP_Minigame_QTETitle_C_GameClearFinished_2_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.OnFinished_Event_00
struct ABP_Minigame_QTETitle_C_OnFinished_Event_00_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadRightStopFlash
struct ABP_Minigame_QTETitle_C_PadRightStopFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadMiddleStopFlash
struct ABP_Minigame_QTETitle_C_PadMiddleStopFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.PadLeftStopFlash
struct ABP_Minigame_QTETitle_C_PadLeftStopFlash_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Event_ExecuteResult
struct ABP_Minigame_QTETitle_C_Event_ExecuteResult_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.Event_EndMiniGame
struct ABP_Minigame_QTETitle_C_Event_EndMiniGame_Params
{
};

// Function BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.ExecuteUbergraph_BP_Minigame_QTETitle
struct ABP_Minigame_QTETitle_C_ExecuteUbergraph_BP_Minigame_QTETitle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
