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

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateSuddenDeathMole
struct ABP_WhackMoleMiniGame_C_UpdateSuddenDeathMole_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetMoleAppearWaitTime
struct ABP_WhackMoleMiniGame_C_GetMoleAppearWaitTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetDummyHammerRandomRot
struct ABP_WhackMoleMiniGame_C_SetDummyHammerRandomRot_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetLastScore
struct ABP_WhackMoleMiniGame_C_SetLastScore_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetClothMeshComponent
struct ABP_WhackMoleMiniGame_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetRenderScore
struct ABP_WhackMoleMiniGame_C_SetRenderScore_Params
{
	class UChildActorComponent*                        ScoreChildActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetRenderScoreEnabled
struct ABP_WhackMoleMiniGame_C_SetRenderScoreEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetMoleTickEnabled
struct ABP_WhackMoleMiniGame_C_SetMoleTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StopRoundBGM
struct ABP_WhackMoleMiniGame_C_StopRoundBGM_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetHighScore
struct ABP_WhackMoleMiniGame_C_SetHighScore_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.PlayRoundBGM
struct ABP_WhackMoleMiniGame_C_PlayRoundBGM_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CheckHighScore
struct ABP_WhackMoleMiniGame_C_CheckHighScore_Params
{
	bool                                               HighScore;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.LoadScore
struct ABP_WhackMoleMiniGame_C_LoadScore_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SaveHighScore
struct ABP_WhackMoleMiniGame_C_SaveHighScore_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SpawnInputControlActor
struct ABP_WhackMoleMiniGame_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateInputCommand
struct ABP_WhackMoleMiniGame_C_UpdateInputCommand_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateInputInterval
struct ABP_WhackMoleMiniGame_C_UpdateInputInterval_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateMoleAppearFromData
struct ABP_WhackMoleMiniGame_C_UpdateMoleAppearFromData_Params
{
	class UMG_WMData*                                  MoleData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RoundNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.IsCameraPosMove
struct ABP_WhackMoleMiniGame_C_IsCameraPosMove_Params
{
	bool                                               Move;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateCamera
struct ABP_WhackMoleMiniGame_C_UpdateCamera_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InitializeValue
struct ABP_WhackMoleMiniGame_C_InitializeValue_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CanNextRound
struct ABP_WhackMoleMiniGame_C_CanNextRound_Params
{
	bool                                               Next;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetMaxTime
struct ABP_WhackMoleMiniGame_C_GetMaxTime_Params
{
	class UMG_WMData*                                  Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RoundNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpdateWhackAnim
struct ABP_WhackMoleMiniGame_C_UpdateWhackAnim_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetUnAdjustedPos
struct ABP_WhackMoleMiniGame_C_GetUnAdjustedPos_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.GetAdjustedPos
struct ABP_WhackMoleMiniGame_C_GetAdjustedPos_Params
{
	struct FVector                                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.IsAppearMole
struct ABP_WhackMoleMiniGame_C_IsAppearMole_Params
{
	TArray<class ABP_MiniGameMole_C*>                  MoleList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CheckMoleWhack
struct ABP_WhackMoleMiniGame_C_CheckMoleWhack_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InterpPlayerMeshPos
struct ABP_WhackMoleMiniGame_C_InterpPlayerMeshPos_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.SetPlayerMeshPos
struct ABP_WhackMoleMiniGame_C_SetPlayerMeshPos_Params
{
	struct FVector                                     NewPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.AddScorePoint
struct ABP_WhackMoleMiniGame_C_AddScorePoint_Params
{
	int                                                AddScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndCheck
struct ABP_WhackMoleMiniGame_C_EndCheck_Params
{
	bool                                               EndGame;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputAction
struct ABP_WhackMoleMiniGame_C_InputAction_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UserConstructionScript
struct ABP_WhackMoleMiniGame_C_UserConstructionScript_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FieldOfViewTimeLine__FinishedFunc
struct ABP_WhackMoleMiniGame_C_FieldOfViewTimeLine__FinishedFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FieldOfViewTimeLine__UpdateFunc
struct ABP_WhackMoleMiniGame_C_FieldOfViewTimeLine__UpdateFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FinishedFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashScore1__FinishedFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__UpdateFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashScore1__UpdateFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FlashOff__EventFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashScore1__FlashOff__EventFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashScore1__FlashOn__EventFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashScore1__FlashOn__EventFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FinishedFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashHighScore__FinishedFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__UpdateFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashHighScore__UpdateFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FlashOff__EventFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashHighScore__FlashOff__EventFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.TL_FlashHighScore__FlashOn__EventFunc
struct ABP_WhackMoleMiniGame_C_TL_FlashHighScore__FlashOn__EventFunc_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputAButton
struct ABP_WhackMoleMiniGame_C_InputAButton_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputBButton
struct ABP_WhackMoleMiniGame_C_InputBButton_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputXButton
struct ABP_WhackMoleMiniGame_C_InputXButton_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputYButton
struct ABP_WhackMoleMiniGame_C_InputYButton_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputLeftStick
struct ABP_WhackMoleMiniGame_C_InputLeftStick_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.UpInterpSpeed
struct ABP_WhackMoleMiniGame_C_UpInterpSpeed_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.DownInterpSpeed
struct ABP_WhackMoleMiniGame_C_DownInterpSpeed_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputRightStick
struct ABP_WhackMoleMiniGame_C_InputRightStick_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputLeftUp
struct ABP_WhackMoleMiniGame_C_InputLeftUp_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.InputRightDown
struct ABP_WhackMoleMiniGame_C_InputRightDown_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedFade
struct ABP_WhackMoleMiniGame_C_OnFinishedFade_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndMiniGame
struct ABP_WhackMoleMiniGame_C_EndMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StartMiniGame
struct ABP_WhackMoleMiniGame_C_StartMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WinMiniGame
struct ABP_WhackMoleMiniGame_C_WinMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.LoseMiniGame
struct ABP_WhackMoleMiniGame_C_LoseMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.DrawMiniGame
struct ABP_WhackMoleMiniGame_C_DrawMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FinalizeTalk
struct ABP_WhackMoleMiniGame_C_FinalizeTalk_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent
struct ABP_WhackMoleMiniGame_C_CustomEvent_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent_2
struct ABP_WhackMoleMiniGame_C_CustomEvent_2_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.CustomEvent_3
struct ABP_WhackMoleMiniGame_C_CustomEvent_3_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.RestartMiniGame
struct ABP_WhackMoleMiniGame_C_RestartMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedCoinSequence
struct ABP_WhackMoleMiniGame_C_OnFinishedCoinSequence_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnFinishedStart
struct ABP_WhackMoleMiniGame_C_OnFinishedStart_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.Event_EndMiniGame
struct ABP_WhackMoleMiniGame_C_Event_EndMiniGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ReceiveBeginPlay
struct ABP_WhackMoleMiniGame_C_ReceiveBeginPlay_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ReceiveTick
struct ABP_WhackMoleMiniGame_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WhackMole
struct ABP_WhackMoleMiniGame_C_WhackMole_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.FlashScore1
struct ABP_WhackMoleMiniGame_C_FlashScore1_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.StartRound
struct ABP_WhackMoleMiniGame_C_StartRound_Params
{
	int                                                RoundNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EnableScore1
struct ABP_WhackMoleMiniGame_C_EnableScore1_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature
struct ABP_WhackMoleMiniGame_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature
struct ABP_WhackMoleMiniGame_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ResumeMiniGame
struct ABP_WhackMoleMiniGame_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnTalkScriptEvent
struct ABP_WhackMoleMiniGame_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.EndGame
struct ABP_WhackMoleMiniGame_C_EndGame_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.OnEndKihudaFlow
struct ABP_WhackMoleMiniGame_C_OnEndKihudaFlow_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ChangedClothes
struct ABP_WhackMoleMiniGame_C_ChangedClothes_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.PlayFlashHighScore
struct ABP_WhackMoleMiniGame_C_PlayFlashHighScore_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.WhackMoleMiss
struct ABP_WhackMoleMiniGame_C_WhackMoleMiss_Params
{
};

// Function BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C.ExecuteUbergraph_BP_WhackMoleMiniGame
struct ABP_WhackMoleMiniGame_C_ExecuteUbergraph_BP_WhackMoleMiniGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
