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

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GetGachaID
struct ABP_MiniGame_Gacha_C_GetGachaID_Params
{
	struct FName                                       GachaId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LotteryGacha
struct ABP_MiniGame_Gacha_C_LotteryGacha_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GetGachaMaterialByPrice
struct ABP_MiniGame_Gacha_C_GetGachaMaterialByPrice_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.IsTalking
struct ABP_MiniGame_Gacha_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SettingPlayerShowObject
struct ABP_MiniGame_Gacha_C_SettingPlayerShowObject_Params
{
	bool                                               ArgIsNext;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DispCSCapsuleMass
struct ABP_MiniGame_Gacha_C_DispCSCapsuleMass_Params
{
	bool                                               ArgDisp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DispCapsuleMass
struct ABP_MiniGame_Gacha_C_DispCapsuleMass_Params
{
	bool                                               ArgDisp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DestroyReplaceActors
struct ABP_MiniGame_Gacha_C_DestroyReplaceActors_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnReplaceActors
struct ABP_MiniGame_Gacha_C_SpawnReplaceActors_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SetupRandomCapsuleMaterial
struct ABP_MiniGame_Gacha_C_SetupRandomCapsuleMaterial_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.RemoveAllSceneActors
struct ABP_MiniGame_Gacha_C_RemoveAllSceneActors_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.AllStopScenePlayer
struct ABP_MiniGame_Gacha_C_AllStopScenePlayer_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.CreateSequenceActors
struct ABP_MiniGame_Gacha_C_CreateSequenceActors_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnSequenceActor
struct ABP_MiniGame_Gacha_C_SpawnSequenceActor_Params
{
	class ULevelSequence*                              InSequence;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachParentActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnObj;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SpawnInputControlActor
struct ABP_MiniGame_Gacha_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.UserConstructionScript
struct ABP_MiniGame_Gacha_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB
struct ABP_MiniGame_Gacha_C_OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB
struct ABP_MiniGame_Gacha_C_OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB
struct ABP_MiniGame_Gacha_C_OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB
struct ABP_MiniGame_Gacha_C_OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnCompleted_0EE0A467474F13C67ED75B980A09A9AB
struct ABP_MiniGame_Gacha_C_OnCompleted_0EE0A467474F13C67ED75B980A09A9AB_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F
struct ABP_MiniGame_Gacha_C_OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStoped_Intro
struct ABP_MiniGame_Gacha_C_OnStoped_Intro_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.FinalizeTalk
struct ABP_MiniGame_Gacha_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkStart
struct ABP_MiniGame_Gacha_C_OnTalkStart_Params
{
	class US3TalkComponent**                           TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkFinished
struct ABP_MiniGame_Gacha_C_OnTalkFinished_Params
{
	class US3TalkComponent**                           TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.Screen_Player
struct ABP_MiniGame_Gacha_C_Screen_Player_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.Screen_NPC
struct ABP_MiniGame_Gacha_C_Screen_NPC_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaThinkingGameContinue
struct ABP_MiniGame_Gacha_C_GachaThinkingGameContinue_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaAction
struct ABP_MiniGame_Gacha_C_GachaAction_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnTalkScriptEvent
struct ABP_MiniGame_Gacha_C_OnTalkScriptEvent_Params
{
	int*                                               EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ResumeMiniGame
struct ABP_MiniGame_Gacha_C_ResumeMiniGame_Params
{
	struct FString*                                    ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStopedPreAction
struct ABP_MiniGame_Gacha_C_OnStopedPreAction_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnStoped_Action
struct ABP_MiniGame_Gacha_C_OnStoped_Action_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ConsumeMoney
struct ABP_MiniGame_Gacha_C_ConsumeMoney_Params
{
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaRewardWathing
struct ABP_MiniGame_Gacha_C_GachaRewardWathing_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.EnterMiniGame
struct ABP_MiniGame_Gacha_C_EnterMiniGame_Params
{
	float*                                             EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.GachaGameContinue
struct ABP_MiniGame_Gacha_C_GachaGameContinue_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DrawMiniGame
struct ABP_MiniGame_Gacha_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ReceiveBeginPlay
struct ABP_MiniGame_Gacha_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LoseMiniGame
struct ABP_MiniGame_Gacha_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.WinMiniGame
struct ABP_MiniGame_Gacha_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.EndMiniGame
struct ABP_MiniGame_Gacha_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.StartMiniGame
struct ABP_MiniGame_Gacha_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnFinishedPopup
struct ABP_MiniGame_Gacha_C_OnFinishedPopup_Params
{
	int                                                PopupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.DecideDetectAction
struct ABP_MiniGame_Gacha_C_DecideDetectAction_Params
{
	ES3ActionIconType*                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LoadMesh
struct ABP_MiniGame_Gacha_C_LoadMesh_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.SuspendMiniGame
struct ABP_MiniGame_Gacha_C_SuspendMiniGame_Params
{
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.ExecuteUbergraph_BP_MiniGame_Gacha
struct ABP_MiniGame_Gacha_C_ExecuteUbergraph_BP_MiniGame_Gacha_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.OnEndMiniGameForLinkDispacher__DelegateSignature
struct ABP_MiniGame_Gacha_C_OnEndMiniGameForLinkDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
