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

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpPriority
struct ABP_MiniGameBase_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpName
struct ABP_MiniGameBase_C_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IsActivateHelp
struct ABP_MiniGameBase_C_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.RegisterHelp
struct ABP_MiniGameBase_C_RegisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.UnregisterHelp
struct ABP_MiniGameBase_C_UnregisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IsTalking
struct ABP_MiniGameBase_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetPriority
struct ABP_MiniGameBase_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetDetectAction
struct ABP_MiniGameBase_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameValueType
struct ABP_MiniGameBase_C_GetMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetTalkCameraCalculationLocation
struct ABP_MiniGameBase_C_GetTalkCameraCalculationLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetDistanceToLeaveForCheckMiniGame
struct ABP_MiniGameBase_C_GetDistanceToLeaveForCheckMiniGame_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameBGMID
struct ABP_MiniGameBase_C_GetMiniGameBGMID_Params
{
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IsNeedDistanceToLeaveForCheckMiniGame
struct ABP_MiniGameBase_C_IsNeedDistanceToLeaveForCheckMiniGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetWinCount
struct ABP_MiniGameBase_C_GetWinCount_Params
{
	TEnumAsByte<EMiniGamePurpose>                      Purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IncrementWinCount
struct ABP_MiniGameBase_C_IncrementWinCount_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.CreateWinCountKey
struct ABP_MiniGameBase_C_CreateWinCountKey_Params
{
	TEnumAsByte<EMiniGamePurpose>                      Purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SetBottomsTransparent
struct ABP_MiniGameBase_C_SetBottomsTransparent_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetUseCoinSequence
struct ABP_MiniGameBase_C_GetUseCoinSequence_Params
{
	class ULevelSequence*                              Sequence;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadSequence
struct ABP_MiniGameBase_C_FindLoadSequence_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Sequence;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetCommonSequence
struct ABP_MiniGameBase_C_GetCommonSequence_Params
{
	TEnumAsByte<E_MiniGameCommonSequence>              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Sequence;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.AddLoadObject
struct ABP_MiniGameBase_C_AddLoadObject_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyLoadObject
struct ABP_MiniGameBase_C_DestroyLoadObject_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadObject
struct ABP_MiniGameBase_C_FindLoadObject_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.InitAsyncLoad
struct ABP_MiniGameBase_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ForceEndMiniGame
struct ABP_MiniGameBase_C_ForceEndMiniGame_Params
{
	bool                                               SuccessEnd;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.StopBGM
struct ABP_MiniGameBase_C_StopBGM_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetSightCheckLocation
struct ABP_MiniGameBase_C_GetSightCheckLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.UnBindEventToSequenceFinished
struct ABP_MiniGameBase_C_UnBindEventToSequenceFinished_Params
{
	struct FScriptDelegate                             UnknownVar01;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SetMeshUpdateEnabled
struct ABP_MiniGameBase_C_SetMeshUpdateEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeltalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.BindEventToSequenceFinished
struct ABP_MiniGameBase_C_BindEventToSequenceFinished_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             UnknownVar01;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameHelpName
struct ABP_MiniGameBase_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SetMiniGameCategory
struct ABP_MiniGameBase_C_SetMiniGameCategory_Params
{
	ES3MiniGameCategory                                MiniGameCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugScriptMode
struct ABP_MiniGameBase_C_IsDebugScriptMode_Params
{
	bool                                               bDebugMode;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteMiniGameResultEvent
struct ABP_MiniGameBase_C_ExecuteMiniGameResultEvent_Params
{
	TEnumAsByte<E_MiniGameResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IsPlayMiniGame
struct ABP_MiniGameBase_C_IsPlayMiniGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugMiniGameDisplayLog
struct ABP_MiniGameBase_C_IsDebugMiniGameDisplayLog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameId
struct ABP_MiniGameBase_C_GetMiniGameId_Params
{
	struct FName                                       MiniGameId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyInputControlActor
struct ABP_MiniGameBase_C_DestroyInputControlActor_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SpawnInputControlActor
struct ABP_MiniGameBase_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.UserConstructionScript
struct ABP_MiniGameBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B
struct ABP_MiniGameBase_C_OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.StartMiniGame
struct ABP_MiniGameBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.EndMiniGame
struct ABP_MiniGameBase_C_EndMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.WinMiniGame
struct ABP_MiniGameBase_C_WinMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.LoseMiniGame
struct ABP_MiniGameBase_C_LoseMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.DrawMiniGame
struct ABP_MiniGameBase_C_DrawMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.EnterMiniGame
struct ABP_MiniGameBase_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.RestartMiniGame
struct ABP_MiniGameBase_C_RestartMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.FinalizeTalk
struct ABP_MiniGameBase_C_FinalizeTalk_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.DecideDetectAction
struct ABP_MiniGameBase_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkStart
struct ABP_MiniGameBase_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkFinished
struct ABP_MiniGameBase_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_Player
struct ABP_MiniGameBase_C_Screen_Player_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_NPC
struct ABP_MiniGameBase_C_Screen_NPC_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SuspendMiniGame
struct ABP_MiniGameBase_C_SuspendMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ResumeMiniGame
struct ABP_MiniGameBase_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkScriptEvent
struct ABP_MiniGameBase_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveBeginPlay
struct ABP_MiniGameBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.CancelMiniGame
struct ABP_MiniGameBase_C_CancelMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_BindSequencePlayerFinished
struct ABP_MiniGameBase_C_Event_BindSequencePlayerFinished_Params
{
	class ULevelSequencePlayer*                        RefSequencePlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedSequence
struct ABP_MiniGameBase_C_OnFinishedSequence_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.StopSequenceOnCancel
struct ABP_MiniGameBase_C_StopSequenceOnCancel_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_EndMiniGame
struct ABP_MiniGameBase_C_Event_EndMiniGame_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_RemoveTimerEvent
struct ABP_MiniGameBase_C_Event_RemoveTimerEvent_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SetInputControlEnabled
struct ABP_MiniGameBase_C_SetInputControlEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.SetEnabledPlayer
struct ABP_MiniGameBase_C_SetEnabledPlayer_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveEndPlay
struct ABP_MiniGameBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetEnabledStreamingVolume
struct ABP_MiniGameBase_C_Event_SetEnabledStreamingVolume_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_OpenHelp
struct ABP_MiniGameBase_C_Event_OpenHelp_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetPlayerVisibleEnabled
struct ABP_MiniGameBase_C_Event_SetPlayerVisibleEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ConsumeGamblePrice
struct ABP_MiniGameBase_C_ConsumeGamblePrice_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.StartAsyncLoad
struct ABP_MiniGameBase_C_StartAsyncLoad_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ChangedClothes
struct ABP_MiniGameBase_C_ChangedClothes_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWet
struct ABP_MiniGameBase_C_ApplyClothWet_Params
{
	TScriptInterface<class US3ClothInterface>          Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wetness;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWetCurrentPlayerValue
struct ABP_MiniGameBase_C_ApplyClothWetCurrentPlayerValue_Params
{
	TScriptInterface<class US3ClothInterface>          Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteUbergraph_BP_MiniGameBase
struct ABP_MiniGameBase_C_ExecuteUbergraph_BP_MiniGameBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedAsyncLoad__DelegateSignature
struct ABP_MiniGameBase_C_OnFinishedAsyncLoad__DelegateSignature_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnSequencePlayerFinishedDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnSequencePlayerFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnScriptEventMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnScriptEventMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnRestartMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnRestartMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedEnterMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnFinishedEnterMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnEnterMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnEnterMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnDrawMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnDrawMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoseMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnLoseMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnWinMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnWinMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnEndMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnEndMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBase.BP_MiniGameBase_C.OnStartMiniGameDispatcher__DelegateSignature
struct ABP_MiniGameBase_C_OnStartMiniGameDispatcher__DelegateSignature_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
