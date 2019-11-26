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

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddFortuneCount
struct ABP_MiniGameManager_C_AddFortuneCount_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.DisableCheckFishingSuspendTime
struct ABP_MiniGameManager_C_DisableCheckFishingSuspendTime_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetEnabledPlayFishing
struct ABP_MiniGameManager_C_SetEnabledPlayFishing_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetEnabledPlayFishing
struct ABP_MiniGameManager_C_GetEnabledPlayFishing_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.DestroyChooseActor
struct ABP_MiniGameManager_C_DestroyChooseActor_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeMiniGameProgress
struct ABP_MiniGameManager_C_InitializeMiniGameProgress_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetCurrentMiniGame
struct ABP_MiniGameManager_C_SetCurrentMiniGame_Params
{
	class ABP_MiniGameBase_C*                          MiniGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkMovePlaceFlag
struct ABP_MiniGameManager_C_GetForkMovePlaceFlag_Params
{
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ToggleForkCCBMovePlace
struct ABP_MiniGameManager_C_ToggleForkCCBMovePlace_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkNextProgress
struct ABP_MiniGameManager_C_GetForkNextProgress_Params
{
	TEnumAsByte<E_MiniGame_ForkJobResult>              Job;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetDailyAppearCCBNum
struct ABP_MiniGameManager_C_GetDailyAppearCCBNum_Params
{
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddDailyAppearCCBNum
struct ABP_MiniGameManager_C_AddDailyAppearCCBNum_Params
{
	int                                                AddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameData
struct ABP_MiniGameManager_C_GetCCBGameData_Params
{
	TEnumAsByte<E_MiniGame_ForkJobResult>              Job;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Data;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAvailableCCBGameDataNum
struct ABP_MiniGameManager_C_GetAvailableCCBGameDataNum_Params
{
	TEnumAsByte<E_MiniGame_ForkJobResult>              Job;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IgnoreNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameDataNum
struct ABP_MiniGameManager_C_GetCCBGameDataNum_Params
{
	TEnumAsByte<E_MiniGameCCBattlePlace>               Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CabinetNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DataNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetCCBGameDataNum
struct ABP_MiniGameManager_C_SetCCBGameDataNum_Params
{
	TEnumAsByte<E_MiniGame_ForkJobResult>              Job;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameDataNum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DataList;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetWinCount
struct ABP_MiniGameManager_C_GetWinCount_Params
{
	ES3MiniGameCategory                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMiniGamePurpose>                      Purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetSpecialPlayerMesh
struct ABP_MiniGameManager_C_GetSpecialPlayerMesh_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetSpecialPlayerMesh
struct ABP_MiniGameManager_C_SetSpecialPlayerMesh_Params
{
	class USkeletalMesh*                               SpecialPlayerMesh;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.StopBGM
struct ABP_MiniGameManager_C_StopBGM_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBTargetNumList
struct ABP_MiniGameManager_C_GetCCBTargetNumList_Params
{
	TEnumAsByte<E_MiniGameCCBattlePlace>               Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutValues;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetDayCount
struct ABP_MiniGameManager_C_GetDayCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateDayCount
struct ABP_MiniGameManager_C_UpdateDayCount_Params
{
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleResult
struct ABP_MiniGameManager_C_UpdateCCBattleResult_Params
{
	TEnumAsByte<E_MiniGameCCBattlePlace>               CheckPlace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClearNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Clear;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleSettings
struct ABP_MiniGameManager_C_UpdateCCBattleSettings_Params
{
	TEnumAsByte<E_MiniGameCCBattlePlace>               Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddMiniGameProgress
struct ABP_MiniGameManager_C_AddMiniGameProgress_Params
{
	struct FName                                       Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                AddValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3MiniGameCategory                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddForkNextProgress
struct ABP_MiniGameManager_C_AddForkNextProgress_Params
{
	TEnumAsByte<E_MiniGame_ForkJobResult>              JobType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateForkLiftResult
struct ABP_MiniGameManager_C_UpdateForkLiftResult_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateWinRate
struct ABP_MiniGameManager_C_UpdateWinRate_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameAllWinRate
struct ABP_MiniGameManager_C_GetMiniGameAllWinRate_Params
{
	TEnumAsByte<E_MiniGameGambleType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fortune;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetGambleKifudaAccumulate
struct ABP_MiniGameManager_C_GetGambleKifudaAccumulate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddGambleKifudaAccumulate
struct ABP_MiniGameManager_C_AddGambleKifudaAccumulate_Params
{
	int                                                AddValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameWinRate
struct ABP_MiniGameManager_C_GetMiniGameWinRate_Params
{
	TEnumAsByte<E_MiniGameGambleType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fortune;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameGambleWinRate>               RateType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetMiniGameWinRate
struct ABP_MiniGameManager_C_SetMiniGameWinRate_Params
{
	TEnumAsByte<E_MiniGameGambleType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fotune;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameGambleWinRate>               RateType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameGlobalFlag
struct ABP_MiniGameManager_C_UpdateMiniGameGlobalFlag_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneProgress
struct ABP_MiniGameManager_C_UpdateFortuneProgress_Params
{
	bool                                               IsNumberFortune;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabledFortune;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FortuneNum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.IsEnabledFortune
struct ABP_MiniGameManager_C_IsEnabledFortune_Params
{
	bool                                               IsNumberFortune;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FlagIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FortuneNum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.PlayBGM
struct ABP_MiniGameManager_C_PlayBGM_Params
{
	struct FName                                       BGMID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Play;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.StartFishingShopResult
struct ABP_MiniGameManager_C_StartFishingShopResult_Params
{
	TArray<struct FST_Fishing_ResultFishData>          result_fish_array;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeFishing
struct ABP_MiniGameManager_C_InitializeFishing_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeFishing
struct ABP_MiniGameManager_C_FinalizeFishing_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.CreateFishingManager
struct ABP_MiniGameManager_C_CreateFishingManager_Params
{
	TArray<int>                                        RentalItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.CheckBGM
struct ABP_MiniGameManager_C_CheckBGM_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameActorID
struct ABP_MiniGameManager_C_GetMiniGameActorID_Params
{
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.CheckFishing
struct ABP_MiniGameManager_C_CheckFishing_Params
{
	bool                                               Jump;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneTellingFlag
struct ABP_MiniGameManager_C_UpdateFortuneTellingFlag_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameGachaID
struct ABP_MiniGameManager_C_GetMiniGameGachaID_Params
{
	struct FName                                       PlayGachaID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCurrentMiniGameValueType
struct ABP_MiniGameManager_C_GetCurrentMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteMiniGameResultEvent
struct ABP_MiniGameManager_C_ExecuteMiniGameResultEvent_Params
{
	TEnumAsByte<E_MiniGameResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.CanvertMiniGameCategory
struct ABP_MiniGameManager_C_CanvertMiniGameCategory_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3MiniGameCategory                                Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeTalkMiniGame
struct ABP_MiniGameManager_C_FinalizeTalkMiniGame_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByMiniGame
struct ABP_MiniGameManager_C_GetMiniGameControlledByMiniGame_Params
{
	class ABP_MiniGameBase_C*                          MiniGameBase;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByActor
struct ABP_MiniGameManager_C_GetMiniGameControlledByActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMinGamePrice
struct ABP_MiniGameManager_C_GetMinGamePrice_Params
{
	int                                                MinPrice;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_MiniGameBase_C*                          Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ResetValue
struct ABP_MiniGameManager_C_ResetValue_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.IsProcessingMiniGame
struct ABP_MiniGameManager_C_IsProcessingMiniGame_Params
{
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeTalkMiniGame
struct ABP_MiniGameManager_C_InitializeTalkMiniGame_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.SpawnMiniGameChooseActor
struct ABP_MiniGameManager_C_SpawnMiniGameChooseActor_Params
{
	bool                                               ManualCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MiniGameChoose_C*                        ChooseActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript
struct ABP_MiniGameManager_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnDestroyedChooseActor
struct ABP_MiniGameManager_C_OnDestroyedChooseActor_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.BindChooseActor
struct ABP_MiniGameManager_C_BindChooseActor_Params
{
	class ABP_MiniGameChoose_C*                        MiniGameChoose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangedFlag
struct ABP_MiniGameManager_C_OnChangedFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.BindGameInstanceFlagEvent
struct ABP_MiniGameManager_C_BindGameInstanceFlagEvent_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UnbindGameInstanceFlagEvent
struct ABP_MiniGameManager_C_UnbindGameInstanceFlagEvent_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnCancelChooseMiniGame
struct ABP_MiniGameManager_C_OnCancelChooseMiniGame_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChooseMiniGame
struct ABP_MiniGameManager_C_OnChooseMiniGame_Params
{
	class AActor*                                      ChooseActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveBeginPlay
struct ABP_MiniGameManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkStartEvent
struct ABP_MiniGameManager_C_OnTalkStartEvent_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkEndEvent
struct ABP_MiniGameManager_C_OnTalkEndEvent_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnScriptResumeMiniGame
struct ABP_MiniGameManager_C_OnScriptResumeMiniGame_Params
{
	struct FString                                     ResumeKeydword;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnStartMiniGame
struct ABP_MiniGameManager_C_OnStartMiniGame_Params
{
	int                                                MiniGameRuleIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.TimeJump
struct ABP_MiniGameManager_C_TimeJump_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.PlayFishingShopAC
struct ABP_MiniGameManager_C_PlayFishingShopAC_Params
{
	int                                                ResultRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ResetFishingTimeLimit
struct ABP_MiniGameManager_C_ResetFishingTimeLimit_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.FinishLoad
struct ABP_MiniGameManager_C_FinishLoad_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnEndMiniGame
struct ABP_MiniGameManager_C_OnEndMiniGame_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.LoadedCueSheet
struct ABP_MiniGameManager_C_LoadedCueSheet_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveEndPlay
struct ABP_MiniGameManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameWinRate
struct ABP_MiniGameManager_C_UpdateMiniGameWinRate_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager
struct ABP_MiniGameManager_C_ExecuteUbergraph_BP_MiniGameManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeDay__DelegateSignature
struct ABP_MiniGameManager_C_OnChangeDay__DelegateSignature_Params
{
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnClearCCB__DelegateSignature
struct ABP_MiniGameManager_C_OnClearCCB__DelegateSignature_Params
{
	TEnumAsByte<E_MiniGameCCBattlePlace>               Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeMiniGameFlags__DelegateSignature
struct ABP_MiniGameManager_C_OnChangeMiniGameFlags__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
