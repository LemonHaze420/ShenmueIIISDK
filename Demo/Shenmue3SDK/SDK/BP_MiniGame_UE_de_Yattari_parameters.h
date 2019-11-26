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

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceTwoNum
struct ABP_MiniGame_UE_de_Yattari_C_GetDiceTwoNum_Params
{
	int                                                SumNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num1;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Num2;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDetectAction
struct ABP_MiniGame_UE_de_Yattari_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetClothMeshComponent
struct ABP_MiniGame_UE_de_Yattari_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DecideDiceNum
struct ABP_MiniGame_UE_de_Yattari_C_DecideDiceNum_Params
{
	bool                                               RyoWin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetBoardInfo
struct ABP_MiniGame_UE_de_Yattari_C_SetBoardInfo_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SetEnableAroundCollision
struct ABP_MiniGame_UE_de_Yattari_C_SetEnableAroundCollision_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceNumRandom
struct ABP_MiniGame_UE_de_Yattari_C_GetDiceNumRandom_Params
{
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DiceNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.SpawnInputControlActor
struct ABP_MiniGame_UE_de_Yattari_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ThrowDiceFromTotalNum
struct ABP_MiniGame_UE_de_Yattari_C_ThrowDiceFromTotalNum_Params
{
	int                                                TotalNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetCamera
struct ABP_MiniGame_UE_de_Yattari_C_ResetCamera_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CameraUpdate
struct ABP_MiniGame_UE_de_Yattari_C_CameraUpdate_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.GetDiceNum
struct ABP_MiniGame_UE_de_Yattari_C_GetDiceNum_Params
{
	int                                                DiceNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DestroyDice
struct ABP_MiniGame_UE_de_Yattari_C_DestroyDice_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.IsStopDice
struct ABP_MiniGame_UE_de_Yattari_C_IsStopDice_Params
{
	bool                                               Stop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.UserConstructionScript
struct ABP_MiniGame_UE_de_Yattari_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.WinMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.LoseMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DrawMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.StartMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.EndMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.FinalizeTalk
struct ABP_MiniGame_UE_de_Yattari_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OnFinishedFade
struct ABP_MiniGame_UE_de_Yattari_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ReceiveBeginPlay
struct ABP_MiniGame_UE_de_Yattari_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ReceiveTick
struct ABP_MiniGame_UE_de_Yattari_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetFlowDoOnce
struct ABP_MiniGame_UE_de_Yattari_C_ResetFlowDoOnce_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.NPCDiceThrow
struct ABP_MiniGame_UE_de_Yattari_C_NPCDiceThrow_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.PlayerDiceThrow
struct ABP_MiniGame_UE_de_Yattari_C_PlayerDiceThrow_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InputButtonRight
struct ABP_MiniGame_UE_de_Yattari_C_InputButtonRight_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.InitThrowIdle
struct ABP_MiniGame_UE_de_Yattari_C_InitThrowIdle_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__DummyCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__DummyCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__DummyCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__DummyCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__DummyCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__DummyCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__DummyCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__DummyCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UE_de_Yattari_C_BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.EnableForwardAndBackCollision
struct ABP_MiniGame_UE_de_Yattari_C_EnableForwardAndBackCollision_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.StartForceMoveDice
struct ABP_MiniGame_UE_de_Yattari_C_StartForceMoveDice_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.Event_EndMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_Event_EndMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OnTalkScriptEvent
struct ABP_MiniGame_UE_de_Yattari_C_OnTalkScriptEvent_Params
{
	int*                                               EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResumeMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_ResumeMiniGame_Params
{
	struct FString*                                    ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CancelMiniGame
struct ABP_MiniGame_UE_de_Yattari_C_CancelMiniGame_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ResetCancelDoOnce
struct ABP_MiniGame_UE_de_Yattari_C_ResetCancelDoOnce_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.DelayedInitialize
struct ABP_MiniGame_UE_de_Yattari_C_DelayedInitialize_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.OpponentResult
struct ABP_MiniGame_UE_de_Yattari_C_OpponentResult_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.RyoResult
struct ABP_MiniGame_UE_de_Yattari_C_RyoResult_Params
{
};

// Function BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.ExecuteUbergraph_BP_MiniGame_UE_de_Yattari
struct ABP_MiniGame_UE_de_Yattari_C_ExecuteUbergraph_BP_MiniGame_UE_de_Yattari_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
