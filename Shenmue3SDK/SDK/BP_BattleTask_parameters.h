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

// Function BP_BattleTask.BP_BattleTask_C.GetAssetReferenceHolder
struct ABP_BattleTask_C_GetAssetReferenceHolder_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.EndBattle
struct ABP_BattleTask_C_EndBattle_Params
{
	TEnumAsByte<EBattleWinLoseResult>*                 Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.EnableGameTime
struct ABP_BattleTask_C_EnableGameTime_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.RunOnBothTransitions
struct ABP_BattleTask_C_RunOnBothTransitions_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.CheckFadeFinishedOrCancelled
struct ABP_BattleTask_C_CheckFadeFinishedOrCancelled_Params
{
	bool                                               Done;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.StartChangeClothes
struct ABP_BattleTask_C_StartChangeClothes_Params
{
	bool                                               StartBattle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.SetPostBattleEventFlags
struct ABP_BattleTask_C_SetPostBattleEventFlags_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.StartFadeStep
struct ABP_BattleTask_C_StartFadeStep_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanStartFade;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MustWait;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.CheckFadeFinished
struct ABP_BattleTask_C_CheckFadeFinished_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.CheckFadeInProgress
struct ABP_BattleTask_C_CheckFadeInProgress_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.StartBattle_ByMediator
struct ABP_BattleTask_C_StartBattle_ByMediator_Params
{
	class ABP_BattleMediatorBase_C*                    MediatorBase;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.StartBattle_ByID
struct ABP_BattleTask_C_StartBattle_ByID_Params
{
	struct FName                                       BattleId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoadLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.FindMediator
struct ABP_BattleTask_C_FindMediator_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BattleMediatorBase_C*                    Battle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.CallEndEvents
struct ABP_BattleTask_C_CallEndEvents_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.UserConstructionScript
struct ABP_BattleTask_C_UserConstructionScript_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1
struct ABP_BattleTask_C_OnLoaded_3AC68FA04E82B1C21019C4A9165E85C1_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2
struct ABP_BattleTask_C_OnLoaded_F3EFC8734A9BA6BB6F0861A8C832BDC2_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.OnBattleEndEvent
struct ABP_BattleTask_C_OnBattleEndEvent_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.AbortBattle
struct ABP_BattleTask_C_AbortBattle_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.ClothesChanged
struct ABP_BattleTask_C_ClothesChanged_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.ReceiveEndPlay
struct ABP_BattleTask_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.StartBattle
struct ABP_BattleTask_C_StartBattle_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.FinishedUnloadLevel
struct ABP_BattleTask_C_FinishedUnloadLevel_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.FinishEnvLevelStreaming
struct ABP_BattleTask_C_FinishEnvLevelStreaming_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleTask.BP_BattleTask_C.OnHintWindowClose
struct ABP_BattleTask_C_OnHintWindowClose_Params
{
};

// Function BP_BattleTask.BP_BattleTask_C.ExecuteUbergraph_BP_BattleTask
struct ABP_BattleTask_C_ExecuteUbergraph_BP_BattleTask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
