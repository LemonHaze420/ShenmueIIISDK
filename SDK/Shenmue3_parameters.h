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

// Function Shenmue3.TalkEventTaskBase.Update
struct UTalkEventTaskBase_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.TalkEventTaskBase.IsStopForceDebugSkip
struct UTalkEventTaskBase_IsStopForceDebugSkip_Params
{
	class AS3TalkEventManagerBase*                     mng;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.TalkEventTaskBase.GetLogMessage
struct UTalkEventTaskBase_GetLogMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.TalkEventTaskBase.GetCommandName
struct UTalkEventTaskBase_GetCommandName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.TalkEventTaskBase.Finish
struct UTalkEventTaskBase_Finish_Params
{
};

// Function Shenmue3.TalkEventTaskBase.FinalizeTask
struct UTalkEventTaskBase_FinalizeTask_Params
{
};

// Function Shenmue3.BattleTask.SetWinLabelIndex
struct UBattleTask_SetWinLabelIndex_Params
{
};

// Function Shenmue3.BattleTask.SetLoseLabelIndex
struct UBattleTask_SetLoseLabelIndex_Params
{
};

// Function Shenmue3.BetTask.NextSelectEnoughMoney
struct UBetTask_NextSelectEnoughMoney_Params
{
};

// Function Shenmue3.BetTask.NextSelectCancel
struct UBetTask_NextSelectCancel_Params
{
};

// Function Shenmue3.BetTask.NextSelectBet
struct UBetTask_NextSelectBet_Params
{
};

// Function Shenmue3.BuyKihudaTask.SetNextCancelLabel
struct UBuyKihudaTask_SetNextCancelLabel_Params
{
};

// Function Shenmue3.BuyKihudaTask.SetNextBuyLabel
struct UBuyKihudaTask_SetNextBuyLabel_Params
{
};

// Function Shenmue3.CallScriptTask.GetScriptName
struct UCallScriptTask_GetScriptName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.ChooseMiniGameTask.NextSelectChoose
struct UChooseMiniGameTask_NextSelectChoose_Params
{
};

// Function Shenmue3.ChooseMiniGameTask.NextSelectCancel
struct UChooseMiniGameTask_NextSelectCancel_Params
{
};

// Function Shenmue3.EventMiniGameTask.SetNextLabelIndex
struct UEventMiniGameTask_SetNextLabelIndex_Params
{
	int                                                NextIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.EventMiniGameTask.IsSetupLabelIndex
struct UEventMiniGameTask_IsSetupLabelIndex_Params
{
	int                                                CheckIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.Replace
struct UExpressionFunctionLibrary_Replace_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                leftInd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rightInd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.ExpressionFunctionLibrary.GetExpressionFromOperator
struct UExpressionFunctionLibrary_GetExpressionFromOperator_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                operatorInd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                lNum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                rNum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                lInd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                rInd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.GetExpressionFromComparison
struct UExpressionFunctionLibrary_GetExpressionFromComparison_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                operatorInd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComparisonKind>                       comparisonKind;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                lNum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                rNum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                lInd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                rInd;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     lStr;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     rStr;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindSub
struct UExpressionFunctionLibrary_FindSub_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                findInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindParenBlock
struct UExpressionFunctionLibrary_FindParenBlock_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                leftInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                rightInd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     retStr;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindMul
struct UExpressionFunctionLibrary_FindMul_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                findInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindMod
struct UExpressionFunctionLibrary_FindMod_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                findInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindFirstOperator
struct UExpressionFunctionLibrary_FindFirstOperator_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchDir>                            SearchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     findOperator;                                             // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindDiv
struct UExpressionFunctionLibrary_FindDiv_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                findInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindComparison
struct UExpressionFunctionLibrary_FindComparison_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                findInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComparisonKind>                       comparisonKind;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.FindAdd
struct UExpressionFunctionLibrary_FindAdd_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	int                                                findInd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ExpressionFunctionLibrary.EvaluateAllFlags
struct UExpressionFunctionLibrary_EvaluateAllFlags_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.GachaFunctionLibrary.SetGachaDataTable
struct UGachaFunctionLibrary_SetGachaDataTable_Params
{
	class UDataTable*                                  GachaItemTable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.GachaFunctionLibrary.PlayGacha
struct UGachaFunctionLibrary_PlayGacha_Params
{
	struct FName                                       GachaId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3GachaItem                                Out;                                                      // (Parm, OutParm)
	bool                                               IsRare;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.GachaFunctionLibrary.LoadGachaDataTable
struct UGachaFunctionLibrary_LoadGachaDataTable_Params
{
	struct FString                                     GachaItemTableName;                                       // (Parm, ZeroConstructor)
};

// Function Shenmue3.GachaFunctionLibrary.IsLoadGachaDataTable
struct UGachaFunctionLibrary_IsLoadGachaDataTable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.KsSelectTask.SetSelectKeywordIndex
struct UKsSelectTask_SetSelectKeywordIndex_Params
{
	int                                                new_index;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.TalkScript.Init
struct UTalkScript_Init_Params
{
};

// Function Shenmue3.MG_ODDataTable.MG_ODOutputTextFile
struct UMG_ODDataTable_MG_ODOutputTextFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     outputFolderName;                                         // (Parm, ZeroConstructor)
	struct FString                                     outStr;                                                   // (Parm, ZeroConstructor)
};

// Function Shenmue3.MG_ODDataTable.GetODDataTableRowFromName
struct UMG_ODDataTable_GetODDataTableRowFromName_Params
{
	class UScriptStruct*                               _struct;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  _table;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       _row_name;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.MG_WMData.IsEnableMole
struct UMG_WMData_IsEnableMole_Params
{
	int                                                RoundNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AppearCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMG_WMDataStruct                            ReturnData;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.MG_WMData.GetToatalRoundNum
struct UMG_WMData_GetToatalRoundNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.MG_WMData.GetRoundMaxTime
struct UMG_WMData_GetRoundMaxTime_Params
{
	int                                                RoundNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.MG_WMData.GetMoleNum
struct UMG_WMData_GetMoleNum_Params
{
	int                                                RoundNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.MGForkliftRCFunctionLibrary.SetVehicleWheelOffset
struct UMGForkliftRCFunctionLibrary_SetVehicleWheelOffset_Params
{
	class UWheeledVehicleMovementComponent*            wheel_vehicle_movement_component;                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             Offset;                                                   // (Parm, ZeroConstructor)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.MGForkliftRCFunctionLibrary.GetRowByNameCowDataTable
struct UMGForkliftRCFunctionLibrary_GetRowByNameCowDataTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMGForkliftRCCowTableRowBase                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.ResultMiniGameTask.NextSelectWin
struct UResultMiniGameTask_NextSelectWin_Params
{
};

// Function Shenmue3.ResultMiniGameTask.NextSelectLose
struct UResultMiniGameTask_NextSelectLose_Params
{
};

// Function Shenmue3.ResultMiniGameTask.NextSelectDraw
struct UResultMiniGameTask_NextSelectDraw_Params
{
};

// Function Shenmue3.ResumeMiniGameTask.SetLoopLabelIndex
struct UResumeMiniGameTask_SetLoopLabelIndex_Params
{
	int                                                LoopIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.UnlockAward
struct US3_BRallyAwardSystem_UnlockAward_Params
{
	struct FName                                       AwardId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnnounce;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.SetAwardCount
struct US3_BRallyAwardSystem_SetAwardCount_Params
{
	struct FName                                       AwardId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpOnly;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnnounce;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.LockAward
struct US3_BRallyAwardSystem_LockAward_Params
{
	struct FName                                       AwardId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.ListUpAwardStatuses
struct US3_BRallyAwardSystem_ListUpAwardStatuses_Params
{
	TArray<struct FS3BRallyAwardStatus>                StatusList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3_BRallyAwardSystem.IsEarned
struct US3_BRallyAwardSystem_IsEarned_Params
{
	struct FName                                       Award;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckAnnounced;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.HasAnnouncement
struct US3_BRallyAwardSystem_HasAnnouncement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.GetEarnedItems
struct US3_BRallyAwardSystem_GetEarnedItems_Params
{
	TArray<int>                                        Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3_BRallyAwardSystem.GetAwardCount
struct US3_BRallyAwardSystem_GetAwardCount_Params
{
	struct FName                                       AwardId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3_BRallyAwardSystem.GetAnnouncements
struct US3_BRallyAwardSystem_GetAnnouncements_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Shenmue3.S3_BRallyAwardSystem.GetAnnouncementQueue
struct US3_BRallyAwardSystem_GetAnnouncementQueue_Params
{
	TArray<struct FS3BRallyAwardAnnouncement>          ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Shenmue3.S3_BRallyAwardSystem.ClearAnnouncement
struct US3_BRallyAwardSystem_ClearAnnouncement_Params
{
};

// Function Shenmue3.S3_ExclamationComponent.SearchSpecificCue
struct US3_ExclamationComponent_SearchSpecificCue_Params
{
	struct FString                                     CueName;                                                  // (Parm, ZeroConstructor)
	class USoundAtomCue*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3_ExclamationComponent.ListCuesByType
struct US3_ExclamationComponent_ListCuesByType_Params
{
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
	TArray<class USoundAtomCue*>                       Cues;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3_ExclamationComponent.InitializeCueSheet
struct US3_ExclamationComponent_InitializeCueSheet_Params
{
};

// Function Shenmue3.S3GameInstance.UpdateMainFlowWork
struct US3GameInstance_UpdateMainFlowWork_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.UpdateCulture
struct US3GameInstance_UpdateCulture_Params
{
};

// Function Shenmue3.S3GameInstance.UpdateClothParts
struct US3GameInstance_UpdateClothParts_Params
{
	TMap<EClothPartsType, struct FName>                PartsInfo;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.UpdateACPlayDateTime
struct US3GameInstance_UpdateACPlayDateTime_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   NewDateTime;                                              // (Parm)
};

// Function Shenmue3.S3GameInstance.UnlockClothParts
struct US3GameInstance_UnlockClothParts_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.StartCheckRetryFlag
struct US3GameInstance_StartCheckRetryFlag_Params
{
};

// Function Shenmue3.S3GameInstance.SetYesterdayPlayerState
struct US3GameInstance_SetYesterdayPlayerState_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetWindowParam
struct US3GameInstance_SetWindowParam_Params
{
	ES3WindowType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InResolution;                                             // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetVSync
struct US3GameInstance_SetVSync_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetVoiceVolume
struct US3GameInstance_SetVoiceVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetVoiceLanguage
struct US3GameInstance_SetVoiceLanguage_Params
{
	ES3VoiceLanguage                                   InVoiceLanguage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetUnleadMemoIds
struct US3GameInstance_SetUnleadMemoIds_Params
{
	TArray<int>                                        Ids;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetTabFlagUnread
struct US3GameInstance_SetTabFlagUnread_Params
{
	TArray<bool>                                       TabUnreadArray;                                           // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetSystemFlag
struct US3GameInstance_SetSystemFlag_Params
{
	int                                                array_index;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetSEVolume
struct US3GameInstance_SetSEVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetRedemptionPoint
struct US3GameInstance_SetRedemptionPoint_Params
{
	int                                                NewPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetReadHelp
struct US3GameInstance_SetReadHelp_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetProgressIndex
struct US3GameInstance_SetProgressIndex_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetPlayerBehavior
struct US3GameInstance_SetPlayerBehavior_Params
{
	ES3PlayerBehavior                                  InPlayerBehavior;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoTabIndex
struct US3GameInstance_SetMemoTabIndex_Params
{
	int                                                memoTabNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoSubEventUnderlineList
struct US3GameInstance_SetMemoSubEventUnderlineList_Params
{
	TArray<int>                                        SubEventUbderlineList;                                    // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetMemoMapMask
struct US3GameInstance_SetMemoMapMask_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoLatestMotivationIndex
struct US3GameInstance_SetMemoLatestMotivationIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoLatestIndex
struct US3GameInstance_SetMemoLatestIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoFlagAndAlready
struct US3GameInstance_SetMemoFlagAndAlready_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Already;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoFlag
struct US3GameInstance_SetMemoFlag_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoDataUnderline
struct US3GameInstance_SetMemoDataUnderline_Params
{
	int                                                MemoNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoDataPage
struct US3GameInstance_SetMemoDataPage_Params
{
	int                                                MemoNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoDataIdentifer
struct US3GameInstance_SetMemoDataIdentifer_Params
{
	int                                                MemoNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                identifer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetMemoAlready
struct US3GameInstance_SetMemoAlready_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetLocale
struct US3GameInstance_SetLocale_Params
{
	ES3Locale                                          InLocale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetLoadMemoDataIdentifer
struct US3GameInstance_SetLoadMemoDataIdentifer_Params
{
	int                                                MemoNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                identifer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetKeyConfigValue
struct US3GameInstance_SetKeyConfigValue_Params
{
	ES3KeyConfigType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetItemNum
struct US3GameInstance_SetItemNum_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetItemCheckFlag
struct US3GameInstance_SetItemCheckFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetIsJumpYesterdayPrace
struct US3GameInstance_SetIsJumpYesterdayPrace_Params
{
	bool                                               IsJump;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetIsFirstContactState
struct US3GameInstance_SetIsFirstContactState_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	bool                                               newParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetInstalledRewards
struct US3GameInstance_SetInstalledRewards_Params
{
	TArray<ES3RewardType>                              Rewards;                                                  // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetHaveMoney_NoDispatcher
struct US3GameInstance_SetHaveMoney_NoDispatcher_Params
{
	int                                                NewMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetHaveMoney
struct US3GameInstance_SetHaveMoney_Params
{
	int                                                NewMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetGraphicQuality
struct US3GameInstance_SetGraphicQuality_Params
{
	ES3GraphicPreset                                   InQuality;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetFishingInfo
struct US3GameInstance_SetFishingInfo_Params
{
	struct FString                                     StoreId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     RodId;                                                    // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetEventStep
struct US3GameInstance_SetEventStep_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetEventFlag
struct US3GameInstance_SetEventFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetEnableVibration
struct US3GameInstance_SetEnableVibration_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetDisplayGamma
struct US3GameInstance_SetDisplayGamma_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetDebugEventStep
struct US3GameInstance_SetDebugEventStep_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetBootFlag
struct US3GameInstance_SetBootFlag_Params
{
	bool                                               InBootFlag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetBGMVolume
struct US3GameInstance_SetBGMVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetBetMoney_NoDispatcher
struct US3GameInstance_SetBetMoney_NoDispatcher_Params
{
	int                                                NewMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetBetMoney
struct US3GameInstance_SetBetMoney_Params
{
	int                                                NewMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.SetBattleRallyInfo
struct US3GameInstance_SetBattleRallyInfo_Params
{
	struct FS3BattleRallySaveData                      Info;                                                     // (Parm)
};

// Function Shenmue3.S3GameInstance.SetAcquisitionMap
struct US3GameInstance_SetAcquisitionMap_Params
{
	TMap<struct FName, unsigned char>                  InMap;                                                    // (Parm, OutParm, ZeroConstructor)
	TMap<struct FName, unsigned char>                  InAchieveMap;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.SetAcquisition
struct US3GameInstance_SetAcquisition_Params
{
	struct FName                                       UniqueName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.ResetRetryFlag
struct US3GameInstance_ResetRetryFlag_Params
{
};

// Function Shenmue3.S3GameInstance.RemovePlayerBehavior
struct US3GameInstance_RemovePlayerBehavior_Params
{
	ES3PlayerBehavior                                  InPlayerBehavior;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.RemoveMemoSubEventOrder
struct US3GameInstance_RemoveMemoSubEventOrder_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.RemoveMainFlowWork
struct US3GameInstance_RemoveMainFlowWork_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.PushPlayerBehavior
struct US3GameInstance_PushPlayerBehavior_Params
{
	ES3PlayerBehavior                                  InPlayerBehavior;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.PrepareLoadingScreen
struct US3GameInstance_PrepareLoadingScreen_Params
{
	ES3LoadingType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.PopPlayerBehavior
struct US3GameInstance_PopPlayerBehavior_Params
{
};

// Function Shenmue3.S3GameInstance.OnEndLoadingScreen
struct US3GameInstance_OnEndLoadingScreen_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.OnBeginLoadingScreen
struct US3GameInstance_OnBeginLoadingScreen_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.IsTrialVersion
struct US3GameInstance_IsTrialVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsSwapDecideButton
struct US3GameInstance_IsSwapDecideButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsReadHelp
struct US3GameInstance_IsReadHelp_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsPlayedCutscene
struct US3GameInstance_IsPlayedCutscene_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsMainlandChina
struct US3GameInstance_IsMainlandChina_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsEventStepMaxMin
struct US3GameInstance_IsEventStepMaxMin_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsEventStep
struct US3GameInstance_IsEventStep_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsEnableVibration
struct US3GameInstance_IsEnableVibration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsDebugChangeStep
struct US3GameInstance_IsDebugChangeStep_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsAcquisitionAchievement
struct US3GameInstance_IsAcquisitionAchievement_Params
{
	struct FName                                       UniqueName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.IsAcquisition
struct US3GameInstance_IsAcquisition_Params
{
	struct FName                                       UniqueName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.InitTalkScript
struct US3GameInstance_InitTalkScript_Params
{
};

// Function Shenmue3.S3GameInstance.InitStatus
struct US3GameInstance_InitStatus_Params
{
};

// Function Shenmue3.S3GameInstance.InitReward
struct US3GameInstance_InitReward_Params
{
};

// Function Shenmue3.S3GameInstance.InitProgress
struct US3GameInstance_InitProgress_Params
{
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.InitMemoFlag
struct US3GameInstance_InitMemoFlag_Params
{
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.InitItem
struct US3GameInstance_InitItem_Params
{
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.InitBattleStats
struct US3GameInstance_InitBattleStats_Params
{
};

// Function Shenmue3.S3GameInstance.GetYesterdayRotation
struct US3GameInstance_GetYesterdayRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetYesterdayPraceLocation
struct US3GameInstance_GetYesterdayPraceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetWindParam
struct US3GameInstance_GetWindParam_Params
{
	struct FVector                                     NormalVec;                                                // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, OutParm, IsPlainOldData)
	float                                              Power;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetWindowParam
struct US3GameInstance_GetWindowParam_Params
{
	ES3WindowType                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutResolution;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetWearClothParts
struct US3GameInstance_GetWearClothParts_Params
{
	TMap<EClothPartsType, struct FName>                WearParts;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetVSync
struct US3GameInstance_GetVSync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetVoiceVolume
struct US3GameInstance_GetVoiceVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetVoiceLanguage
struct US3GameInstance_GetVoiceLanguage_Params
{
	ES3VoiceLanguage                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetUnlockedClothParts
struct US3GameInstance_GetUnlockedClothParts_Params
{
	TArray<struct FName>                               UnlockedParts;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetUnleadMemoIds
struct US3GameInstance_GetUnleadMemoIds_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetTalkScriptManager
struct US3GameInstance_GetTalkScriptManager_Params
{
	class US3TalkScriptManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetTalkScriptIndexData
struct US3GameInstance_GetTalkScriptIndexData_Params
{
	TArray<struct FTalkScriptData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetTabFlagUnread
struct US3GameInstance_GetTabFlagUnread_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetSystemFlagLength
struct US3GameInstance_GetSystemFlagLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetSystemFlag
struct US3GameInstance_GetSystemFlag_Params
{
	int                                                array_index;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetSEVolume
struct US3GameInstance_GetSEVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetSaveItemNum
struct US3GameInstance_GetSaveItemNum_Params
{
	TArray<int>                                        NumArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetSaveEventFlag
struct US3GameInstance_GetSaveEventFlag_Params
{
	TArray<int>                                        FlagArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetRewardPasswords
struct US3GameInstance_GetRewardPasswords_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetRedemptionPoint
struct US3GameInstance_GetRedemptionPoint_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetReadHelpIdAll
struct US3GameInstance_GetReadHelpIdAll_Params
{
	TArray<struct FName>                               IdArray;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetProgressStep
struct US3GameInstance_GetProgressStep_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetProgressIndex
struct US3GameInstance_GetProgressIndex_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetPlayerBehavior
struct US3GameInstance_GetPlayerBehavior_Params
{
	ES3PlayerBehavior                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMiniGameProgressManager
struct US3GameInstance_GetMiniGameProgressManager_Params
{
	class US3MiniGameProgressManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoUnreadNum
struct US3GameInstance_GetMemoUnreadNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoSubEventOrder
struct US3GameInstance_GetMemoSubEventOrder_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetMemoMapMask
struct US3GameInstance_GetMemoMapMask_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetMemoLatestMotivationIndex
struct US3GameInstance_GetMemoLatestMotivationIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoLatestIndex
struct US3GameInstance_GetMemoLatestIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoFlagManager
struct US3GameInstance_GetMemoFlagManager_Params
{
	class US3MemoFlagManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoFlagLength
struct US3GameInstance_GetMemoFlagLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoFlag
struct US3GameInstance_GetMemoFlag_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Already;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetMemoDataArray
struct US3GameInstance_GetMemoDataArray_Params
{
	TArray<struct FMemoData>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetMainFlowWorkMap
struct US3GameInstance_GetMainFlowWorkMap_Params
{
	TMap<struct FName, struct FString>                 WorkMap;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetMainFlowWork
struct US3GameInstance_GetMainFlowWork_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3GameInstance.GetLocale
struct US3GameInstance_GetLocale_Params
{
	ES3Locale                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetKeyConfigValue
struct US3GameInstance_GetKeyConfigValue_Params
{
	ES3KeyConfigType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetItemNum
struct US3GameInstance_GetItemNum_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetItemLength
struct US3GameInstance_GetItemLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetItemFlag
struct US3GameInstance_GetItemFlag_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetItemCheckFlagArray
struct US3GameInstance_GetItemCheckFlagArray_Params
{
	TArray<bool>                                       FlagArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetItemCheckFlag
struct US3GameInstance_GetItemCheckFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetIsJumpYesterdayPrace
struct US3GameInstance_GetIsJumpYesterdayPrace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetIsFirstContactState
struct US3GameInstance_GetIsFirstContactState_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetInstalledRewards
struct US3GameInstance_GetInstalledRewards_Params
{
	TArray<ES3RewardType>                              Rewards;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetInputDeviceManager
struct US3GameInstance_GetInputDeviceManager_Params
{
	class US3InputDeviceManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetHaveMoney
struct US3GameInstance_GetHaveMoney_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetGraphicQuality
struct US3GameInstance_GetGraphicQuality_Params
{
	ES3GraphicPreset                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetFishingInfo
struct US3GameInstance_GetFishingInfo_Params
{
	struct FString                                     StoreId;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     RodId;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FDateTime                                   RentalDate;                                               // (Parm, OutParm)
};

// Function Shenmue3.S3GameInstance.GetEventStep
struct US3GameInstance_GetEventStep_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetEventFlagLength
struct US3GameInstance_GetEventFlagLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetEventFlag
struct US3GameInstance_GetEventFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetDisplayGamma
struct US3GameInstance_GetDisplayGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetDemoType
struct US3GameInstance_GetDemoType_Params
{
	ES3DemoType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetBootFlag
struct US3GameInstance_GetBootFlag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetBGMVolume
struct US3GameInstance_GetBGMVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetBetMoney
struct US3GameInstance_GetBetMoney_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetBattleStatsManager
struct US3GameInstance_GetBattleStatsManager_Params
{
	class US3BattleStatsManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetBattleRallyInfo
struct US3GameInstance_GetBattleRallyInfo_Params
{
	struct FS3BattleRallySaveData                      Info;                                                     // (Parm, OutParm)
};

// Function Shenmue3.S3GameInstance.GetBattleCommandLibrary
struct US3GameInstance_GetBattleCommandLibrary_Params
{
	class UBTL_CommandLibraryBase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.GetAcquisitionMap
struct US3GameInstance_GetAcquisitionMap_Params
{
	TMap<struct FName, unsigned char>                  OutMap;                                                   // (Parm, OutParm, ZeroConstructor)
	TMap<struct FName, unsigned char>                  OutAchieveMap;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameInstance.GetACPlayDateTime
struct US3GameInstance_GetACPlayDateTime_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   DateTime;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.ForceCallOnStepChanged
struct US3GameInstance_ForceCallOnStepChanged_Params
{
};

// Function Shenmue3.S3GameInstance.EnableAnsel
struct US3GameInstance_EnableAnsel_Params
{
	class UObject*                                     Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.DisableAnsel
struct US3GameInstance_DisableAnsel_Params
{
	class UObject*                                     Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.ClearPlayerBehaviorStack
struct US3GameInstance_ClearPlayerBehaviorStack_Params
{
};

// Function Shenmue3.S3GameInstance.ClearGameModeCache
struct US3GameInstance_ClearGameModeCache_Params
{
};

// Function Shenmue3.S3GameInstance.ClearAnselObjects
struct US3GameInstance_ClearAnselObjects_Params
{
};

// Function Shenmue3.S3GameInstance.ChangeBattleCommandLibrary
struct US3GameInstance_ChangeBattleCommandLibrary_Params
{
	class UClass*                                      CommandLibraryClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddRewardPassword
struct US3GameInstance_AddRewardPassword_Params
{
	struct FName                                       Password;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddRedemptionPoint
struct US3GameInstance_AddRedemptionPoint_Params
{
	int                                                AddPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddMemoSubEventOrder
struct US3GameInstance_AddMemoSubEventOrder_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddItemNum
struct US3GameInstance_AddItemNum_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddHaveMoney
struct US3GameInstance_AddHaveMoney_Params
{
	int                                                AddMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddCutsceneId
struct US3GameInstance_AddCutsceneId_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameInstance.AddBetMoney
struct US3GameInstance_AddBetMoney_Params
{
	int                                                AddMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.WriteAchievement
struct US3AchievementManager_WriteAchievement_Params
{
	ES3AchievementType                                 ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.OnMoneyChanged
struct US3AchievementManager_OnMoneyChanged_Params
{
	int                                                NewMoney;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.OnMiniGameHighScoreChanged
struct US3AchievementManager_OnMiniGameHighScoreChanged_Params
{
	ES3MiniGameCategory                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ScoreKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.OnItemNumChanged
struct US3AchievementManager_OnItemNumChanged_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.OnEventFlagChanged
struct US3AchievementManager_OnEventFlagChanged_Params
{
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.OnBetMoneyChanged
struct US3AchievementManager_OnBetMoneyChanged_Params
{
	int                                                NewBetMoney;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.OnAcquisitionFlagChanged
struct US3AchievementManager_OnAcquisitionFlagChanged_Params
{
	struct FName                                       UniqueName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.IsGachaSetComplete
struct US3AchievementManager_IsGachaSetComplete_Params
{
	struct FS3AchievementGachaSet                      GachaSet;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.GetGameInstance
struct US3AchievementManager_GetGameInstance_Params
{
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.GetAchievementCount
struct US3AchievementManager_GetAchievementCount_Params
{
	ES3AchievementCountType                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AchievementManager.AddAchievementCount
struct US3AchievementManager_AddAchievementCount_Params
{
	ES3AchievementCountType                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerControllerBase.UpdateKeyBinding
struct AS3PlayerControllerBase_UpdateKeyBinding_Params
{
};

// Function Shenmue3.S3PlayerController.UnregisterInteractionComponent
struct AS3PlayerController_UnregisterInteractionComponent_Params
{
	class US3InteractionComponent*                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.UnloadAtomCueSheet
struct AS3PlayerController_UnloadAtomCueSheet_Params
{
	struct FString                                     CueSheetId;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.UnbindDebugInputDelegate
struct AS3PlayerController_UnbindDebugInputDelegate_Params
{
	struct FText                                       Name;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.SetViewTargetWithBoomBlend
struct AS3PlayerController_SetViewTargetWithBoomBlend_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPivot;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOutgoing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InvalidBoomBlend;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.SetFOVOffset
struct AS3PlayerController_SetFOVOffset_Params
{
	float                                              NewOffset;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.RegisterInteractionComponent
struct AS3PlayerController_RegisterInteractionComponent_Params
{
	class US3InteractionComponent*                     NewInteraction;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.NumberOfWatchItems
struct AS3PlayerController_NumberOfWatchItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.NumberOfTeleportDelegates
struct AS3PlayerController_NumberOfTeleportDelegates_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.NumberOfInputDelegates
struct AS3PlayerController_NumberOfInputDelegates_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.LoadAtomCueSheet
struct AS3PlayerController_LoadAtomCueSheet_Params
{
	struct FString                                     CueSheetId;                                               // (Parm, ZeroConstructor)
	struct FName                                       Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.IsViewportInFocus
struct AS3PlayerController_IsViewportInFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.InitDebugInputBox
struct AS3PlayerController_InitDebugInputBox_Params
{
	class US3DebugInputBox*                            InputBox;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutCategory;                                              // (Parm, OutParm)
	struct FText                                       OutName;                                                  // (Parm, OutParm)
	struct FText                                       OutDescription;                                           // (Parm, OutParm)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class US3DebugInputBox*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.GetWatchItem
struct AS3PlayerController_GetWatchItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ObjectDisplayName;                                        // (Parm, OutParm)
	struct FText                                       PropertyDisplayName;                                      // (Parm, OutParm)
	struct FText                                       Description;                                              // (Parm, OutParm)
	struct FName                                       PropertyName;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3WatchPropertyTypes>                 PropertyType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EnumType;                                                 // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.CreateDebugWidght
struct AS3PlayerController_CreateDebugWidght_Params
{
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.ClearDebugTeleportDelegates
struct AS3PlayerController_ClearDebugTeleportDelegates_Params
{
};

// Function Shenmue3.S3PlayerController.ClearDebugInputDelegates
struct AS3PlayerController_ClearDebugInputDelegates_Params
{
};

// Function Shenmue3.S3PlayerController.ClearAtomCueSheet
struct AS3PlayerController_ClearAtomCueSheet_Params
{
};

// Function Shenmue3.S3PlayerController.CancelViewTargetWithBlend
struct AS3PlayerController_CancelViewTargetWithBlend_Params
{
	class AActor*                                      OnlyIfMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOutgoing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.CancelViewTarget
struct AS3PlayerController_CancelViewTarget_Params
{
	class AActor*                                      OnlyIfMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerController.BindTeleportDelegate
struct AS3PlayerController_BindTeleportDelegate_Params
{
	struct FText                                       Category;                                                 // (Parm)
	struct FText                                       Name;                                                     // (Parm)
	struct FText                                       Description;                                              // (Parm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3PlayerController.BindDebugInputDelegate
struct AS3PlayerController_BindDebugInputDelegate_Params
{
	struct FText                                       Category;                                                 // (Parm)
	struct FText                                       Name;                                                     // (Parm)
	struct FText                                       Description;                                              // (Parm)
	bool                                               bHotKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      Input;                                                    // (Parm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3PlayerController.AddPropertyWatch
struct AS3PlayerController_AddPropertyWatch_Params
{
	struct FText                                       ObjectDisplayName;                                        // (Parm)
	struct FText                                       PropertyDisplayName;                                      // (Parm)
	struct FText                                       Description;                                              // (Parm)
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.ProjectionXY
struct AS3AdventurePlayerController_ProjectionXY_Params
{
	struct FVector                                     InVec;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               InNormalize;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.PC_GetIsInFirstPersonMode
struct AS3AdventurePlayerController_PC_GetIsInFirstPersonMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.PC_GetInteractionVector
struct AS3AdventurePlayerController_PC_GetInteractionVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.IsOwnedByPlayer
struct AS3AdventurePlayerController_IsOwnedByPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             InComponent;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.IsDisablePadControl
struct AS3AdventurePlayerController_IsDisablePadControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.GetOffsetVectorZ
struct AS3AdventurePlayerController_GetOffsetVectorZ_Params
{
	struct FVector                                     InVec;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InOffsetZ;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.GetOffsetVectorY
struct AS3AdventurePlayerController_GetOffsetVectorY_Params
{
	struct FVector                                     InVec;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InOffsetY;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.GetOffsetVectorX
struct AS3AdventurePlayerController_GetOffsetVectorX_Params
{
	struct FVector                                     InVec;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InOffsetX;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.GetHighestFloatIndex
struct AS3AdventurePlayerController_GetHighestFloatIndex_Params
{
	TArray<float>                                      InFloatArray;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.GetHavingTagChildComponent
struct AS3AdventurePlayerController_GetHavingTagChildComponent_Params
{
	class USceneComponent*                             InSceneComponent;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InTag;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAllChildren;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.GetFloatSign
struct AS3AdventurePlayerController_GetFloatSign_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.EnablePadControl
struct AS3AdventurePlayerController_EnablePadControl_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.DisablePadControl
struct AS3AdventurePlayerController_DisablePadControl_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.CalcNormal
struct AS3AdventurePlayerController_CalcNormal_Params
{
	struct FVector                                     InVec;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               InProjectionXZ;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.CalcDirection
struct AS3AdventurePlayerController_CalcDirection_Params
{
	struct FVector                                     InSrc;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InDst;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               InProjectionXY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AdventurePlayerController.CalcAngleDegXY
struct AS3AdventurePlayerController_CalcAngleDegXY_Params
{
	struct FVector                                     InSrcDir;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InDstDir;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.TryGetSocketLocation
struct US3AnalyzeFunctionLibrary_TryGetSocketLocation_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.IsPlayerPawn
struct US3AnalyzeFunctionLibrary_IsPlayerPawn_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.IsPlayerCollision
struct US3AnalyzeFunctionLibrary_IsPlayerCollision_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.IsOverlappingPlayer
struct US3AnalyzeFunctionLibrary_IsOverlappingPlayer_Params
{
	class UPrimitiveComponent*                         Trigger;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PlayerCapsule;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.IsOverlappingAdventurePlayer
struct US3AnalyzeFunctionLibrary_IsOverlappingAdventurePlayer_Params
{
	class UPrimitiveComponent*                         Trigger;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PlayerCapsule;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.IsAdventurePlayerCollision
struct US3AnalyzeFunctionLibrary_IsAdventurePlayerCollision_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.IsAdventurePlayer
struct US3AnalyzeFunctionLibrary_IsAdventurePlayer_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.GetS3CharacterFromCollision
struct US3AnalyzeFunctionLibrary_GetS3CharacterFromCollision_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AS3Character*                                Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnalyzeFunctionLibrary.EstimateGroundLocation
struct US3AnalyzeFunctionLibrary_EstimateGroundLocation_Params
{
	class ACharacter*                                  Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              MaxAbove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxBelow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.MapToCircularRange
struct US3AngleFunctionLibrary_MapToCircularRange_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.MakeAngleRangeFromLimits
struct US3AngleFunctionLibrary_MakeAngleRangeFromLimits_Params
{
	float                                              LHS;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RHS;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3AngleRange                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3AngleFunctionLibrary.IsWithinCircularRange
struct US3AngleFunctionLibrary_IsWithinCircularRange_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.GetNormalizedOutsideRange
struct US3AngleFunctionLibrary_GetNormalizedOutsideRange_Params
{
	struct FS3AngleRange                               Range;                                                    // (Parm)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.GetCycleDifferenceInDirection
struct US3AngleFunctionLibrary_GetCycleDifferenceInDirection_Params
{
	float                                              Prev;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Next;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.GetCycleDifferenceAbs
struct US3AngleFunctionLibrary_GetCycleDifferenceAbs_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.GetCloserCyclePosition
struct US3AngleFunctionLibrary_GetCloserCyclePosition_Params
{
	float                                              CloseTo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.GetAngleOutsideRange
struct US3AngleFunctionLibrary_GetAngleOutsideRange_Params
{
	struct FS3AngleRange                               Range;                                                    // (Parm)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.ExpandAngleRange
struct US3AngleFunctionLibrary_ExpandAngleRange_Params
{
	struct FS3AngleRange                               Range;                                                    // (Parm)
	float                                              IncludeAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3AngleRange                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3AngleFunctionLibrary.ClampAngleToRange
struct US3AngleFunctionLibrary_ClampAngleToRange_Params
{
	struct FS3AngleRange                               Range;                                                    // (Parm)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AngleFunctionLibrary.AngleRangeContains
struct US3AngleFunctionLibrary_AngleRangeContains_Params
{
	struct FS3AngleRange                               Range;                                                    // (Parm)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.StartCharaFadeOut
struct AS3Character_StartCharaFadeOut_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.StartCharaFadeIn
struct AS3Character_StartCharaFadeIn_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.StairsPreSetting
struct AS3Character_StairsPreSetting_Params
{
	class AActor*                                      StairActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetupMesh
struct AS3Character_SetupMesh_Params
{
};

// Function Shenmue3.S3Character.SetUpdateTickEnabled
struct AS3Character_SetUpdateTickEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetTagCharaName
struct AS3Character_SetTagCharaName_Params
{
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetSchedulePaused
struct AS3Character_SetSchedulePaused_Params
{
	bool                                               bNewSchedulePaused;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetNPCFadeTimeOnce
struct AS3Character_SetNPCFadeTimeOnce_Params
{
	float                                              FadeTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetFaceAnimData
struct AS3Character_SetFaceAnimData_Params
{
	class US3FaceAnimDataAsset*                        InFaceMontageData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetDistanceFromPlayer
struct AS3Character_SetDistanceFromPlayer_Params
{
	float                                              InDistanceFromPlayer;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInBattleMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.SetAttachObjectHiddenInGame
struct AS3Character_SetAttachObjectHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.ReturnOutOfWorld
struct AS3Character_ReturnOutOfWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.ResetFadeMaterial
struct AS3Character_ResetFadeMaterial_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3Character.PauseAvoidance
struct AS3Character_PauseAvoidance_Params
{
	bool                                               IsPaused;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.OnStartStairs
struct AS3Character_OnStartStairs_Params
{
};

// Function Shenmue3.S3Character.OnNPCUninitialized
struct AS3Character_OnNPCUninitialized_Params
{
};

// Function Shenmue3.S3Character.OnNPCInitialized
struct AS3Character_OnNPCInitialized_Params
{
};

// Function Shenmue3.S3Character.OnMeshVisibilityChanged
struct AS3Character_OnMeshVisibilityChanged_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.OnEndStairs
struct AS3Character_OnEndStairs_Params
{
};

// Function Shenmue3.S3Character.OnDoorAreaOutsideEndOverlap
struct AS3Character_OnDoorAreaOutsideEndOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.OnDoorAreaOutsideBeginOverlap
struct AS3Character_OnDoorAreaOutsideBeginOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.OnDoorAreaEndOverlap
struct AS3Character_OnDoorAreaEndOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.OnDoorAreaBeginOverlap
struct AS3Character_OnDoorAreaBeginOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsSchedulePaused
struct AS3Character_IsSchedulePaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsRespawn
struct AS3Character_IsRespawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsPauseAvoidance
struct AS3Character_IsPauseAvoidance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsMeshFadeOutComplete
struct AS3Character_IsMeshFadeOutComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsMeshFadeInProgress
struct AS3Character_IsMeshFadeInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsMeshFadeInComplete
struct AS3Character_IsMeshFadeInComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IsIgnoringPlayerWhenMoving
struct AS3Character_IsIgnoringPlayerWhenMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.IgnorePlayerWhenMoving
struct AS3Character_IgnorePlayerWhenMoving_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.HandleTeleportSucceeded
struct AS3Character_HandleTeleportSucceeded_Params
{
	bool                                               bIsATest;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetTagCharaName
struct AS3Character_GetTagCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetTagCharaComponent
struct AS3Character_GetTagCharaComponent_Params
{
	class US3TagCharaComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetProfileHandedness
struct AS3Character_GetProfileHandedness_Params
{
	TEnumAsByte<ES3HandednessType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetNPCStreamingState
struct AS3Character_GetNPCStreamingState_Params
{
	ES3NPCStreamingState                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetNPCMeshState
struct AS3Character_GetNPCMeshState_Params
{
	ES3NPCMeshState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetNPCFadeTime
struct AS3Character_GetNPCFadeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetNPCDefaultFadeTime
struct AS3Character_GetNPCDefaultFadeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetMeshFadeAlpha
struct AS3Character_GetMeshFadeAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetDoorActor
struct AS3Character_GetDoorActor_Params
{
	class AS3GimmickOpenDoor*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.GetClothCharaName
struct AS3Character_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.DestroyCameraCollision
struct AS3Character_DestroyCameraCollision_Params
{
};

// Function Shenmue3.S3Character.DestroyBSCollision
struct AS3Character_DestroyBSCollision_Params
{
};

// Function Shenmue3.S3Character.CreateProceduralTalkCollision
struct AS3Character_CreateProceduralTalkCollision_Params
{
	int                                                InSides;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCanTalkAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCanTalkRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.CreateCameraCollision
struct AS3Character_CreateCameraCollision_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Character.CreateBSCollision
struct AS3Character_CreateBSCollision_Params
{
};

// Function Shenmue3.S3Character.CheckInRangePlayer
struct AS3Character_CheckInRangePlayer_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.CanDisableNPCTick
struct AS3Character_CanDisableNPCTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.CalculateShoveVectorWithBones
struct AS3Character_CalculateShoveVectorWithBones_Params
{
	class AS3Character*                                ShovedCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutShove;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              ExtraDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.CalculateShoveVector
struct AS3Character_CalculateShoveVector_Params
{
	class AS3Character*                                ShovedCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutShove;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              ExtraDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Character.AccelerateCharaFadeOut
struct AS3Character_AccelerateCharaFadeOut_Params
{
	float                                              MaxAlpha;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AnimationFunctionLibrary.LoadFaceAnimation
struct US3AnimationFunctionLibrary_LoadFaceAnimation_Params
{
	struct FName                                       CharaTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3FaceAnimDataAsset*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnimCutsceneInstance.SetUpdateEnabled
struct US3AnimCutsceneInstance_SetUpdateEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AnimCutsceneInstance.SetEyeBlinkEnabled
struct US3AnimCutsceneInstance_SetEyeBlinkEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AnimCutsceneInstance.SetClipperEnabled
struct US3AnimCutsceneInstance_SetClipperEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AnimCutsceneInstance.IsUpdateEnabled
struct US3AnimCutsceneInstance_IsUpdateEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnimCutsceneInstance.IsEyeBlinkEnabled
struct US3AnimCutsceneInstance_IsEyeBlinkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnimCutsceneInstance.IsClipperEnabled
struct US3AnimCutsceneInstance_IsClipperEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnimInstance.IsReadyTalk
struct US3AnimInstance_IsReadyTalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AnimNotify_PlayAtomCue.PlaySoundEditor
struct US3AnimNotify_PlayAtomCue_PlaySoundEditor_Params
{
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAtomComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3AreaFunctionLibrary.IsInValidStreamingArea
struct US3AreaFunctionLibrary_IsInValidStreamingArea_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaFunctionLibrary.GetLevelEnum
struct US3AreaFunctionLibrary_GetLevelEnum_Params
{
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	bool                                               Detail;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ES3Where                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaFunctionLibrary.GetCurrentLevelEnum
struct US3AreaFunctionLibrary_GetCurrentLevelEnum_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Detail;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ES3Where                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaJumpBase.SetYesterdayPraceLocationRotation
struct US3AreaJumpBase_SetYesterdayPraceLocationRotation_Params
{
	struct FVector                                     PlayerLocation;                                           // (Parm, IsPlainOldData)
	struct FRotator                                    PlayerRotation;                                           // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3AreaJumpBase.SetIsJumpYesterdayPrace
struct US3AreaJumpBase_SetIsJumpYesterdayPrace_Params
{
	bool                                               IsJump;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AreaJumpBase.GetYesterdayRotation
struct US3AreaJumpBase_GetYesterdayRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaJumpBase.GetYesterdayPraceLocation
struct US3AreaJumpBase_GetYesterdayPraceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaJumpBase.GetIsJumpYesterdayPrace
struct US3AreaJumpBase_GetIsJumpYesterdayPrace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaLightManagerComponent.GetCertainRangeSpotLightList
struct US3AreaLightManagerComponent_GetCertainRangeSpotLightList_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3SpotLight*>                        OutSpotLightList;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3AreaLightManagerComponent.GetCertainRangePointLightList
struct US3AreaLightManagerComponent_GetCertainRangePointLightList_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3PointLight*>                       OutPointLightList;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3AreaLightManagerComponent.GetAreaSpotLightList
struct US3AreaLightManagerComponent_GetAreaSpotLightList_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, IsPlainOldData)
	TArray<class AS3SpotLight*>                        OutSpotLightList;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3AreaLightManagerComponent.GetAreaPointLightList
struct US3AreaLightManagerComponent_GetAreaPointLightList_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, IsPlainOldData)
	TArray<class AS3PointLight*>                       OutPointLightList;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3AreaManager.S3UnloadLevels
struct AS3AreaManager_S3UnloadLevels_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OverrideLevelNames;                                       // (Parm, ZeroConstructor)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.S3LoadLevels
struct AS3AreaManager_S3LoadLevels_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, ZeroConstructor)
	bool                                               bDisableStreamingVolume;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibleAfterLoad;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.IsTargetActorInBuilding
struct AS3AreaManager_IsTargetActorInBuilding_Params
{
	bool                                               bInBuilding;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3BuildingStaticMeshActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.IsEnabledStreamingVolume
struct AS3AreaManager_IsEnabledStreamingVolume_Params
{
	class ULevelStreaming*                             Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.GetNeedLevels
struct AS3AreaManager_GetNeedLevels_Params
{
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.GetAreaId
struct AS3AreaManager_GetAreaId_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3AreaManager.EnableStreamingVolume
struct AS3AreaManager_EnableStreamingVolume_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.DisableStreamingVolume
struct AS3AreaManager_DisableStreamingVolume_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.CanUnloadLevel
struct AS3AreaManager_CanUnloadLevel_Params
{
	class ULevelStreaming*                             Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.CanLoadLevel
struct AS3AreaManager_CanLoadLevel_Params
{
	class ULevelStreaming*                             Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AreaManager.AddVolume
struct AS3AreaManager_AddVolume_Params
{
	class AS3AreaVolume*                               Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AreaVolume.RegisterManager
struct AS3AreaVolume_RegisterManager_Params
{
};

// Function Shenmue3.S3AssetChunkManager.ShowInstallDialog
struct US3AssetChunkManager_ShowInstallDialog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AssetChunkManager.SetPendingLocationId
struct US3AssetChunkManager_SetPendingLocationId_Params
{
	ES3Where                                           LocationId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventStep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AssetChunkManager.SetPendingChunkId
struct US3AssetChunkManager_SetPendingChunkId_Params
{
	ES3AssetChunkId                                    ChunkId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AssetChunkManager.IsChunkInstalled
struct US3AssetChunkManager_IsChunkInstalled_Params
{
	ES3AssetChunkId                                    ChunkId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AssetChunkManager.GetChunkIdFromLocation
struct US3AssetChunkManager_GetChunkIdFromLocation_Params
{
	ES3Where                                           LocationId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ES3AssetChunkId                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3AssetCullDistanceVolume.OnGraphicPresetChanged
struct AS3AssetCullDistanceVolume_OnGraphicPresetChanged_Params
{
};

// Function Shenmue3.S3AttentionComponent.SetFinishedActionEvent
struct US3AttentionComponent_SetFinishedActionEvent_Params
{
	bool                                               Finished;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AttentionComponent.SetEnabledBackerEvent
struct US3AttentionComponent_SetEnabledBackerEvent_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3AttentionComponent.GetEnabledBackerEvent
struct US3AttentionComponent_GetEnabledBackerEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleRallyManager.ShowRewardResult
struct AS3BattleRallyManager_ShowRewardResult_Params
{
};

// Function Shenmue3.S3BattleRallyManager.ClearInventoryItems
struct AS3BattleRallyManager_ClearInventoryItems_Params
{
};

// Function Shenmue3.S3BattleRallyManager.CheckRewardAnnouncement
struct AS3BattleRallyManager_CheckRewardAnnouncement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetSkillsForSet
struct US3BattleStatsManager_SetSkillsForSet_Params
{
	TArray<struct FName>                               SkillIds;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SkillSetIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetSkill
struct US3BattleStatsManager_SetSkill_Params
{
	struct FName                                       SkillId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillSetIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetLevelBasedStatCalculation
struct US3BattleStatsManager_SetLevelBasedStatCalculation_Params
{
};

// Function Shenmue3.S3BattleStatsManager.SetHealthRatio
struct US3BattleStatsManager_SetHealthRatio_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetHealth
struct US3BattleStatsManager_SetHealth_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetFixedStatCalculation
struct US3BattleStatsManager_SetFixedStatCalculation_Params
{
	float                                              FixedHealthRatio;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FixedAttackBonus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetDojoRank
struct US3BattleStatsManager_SetDojoRank_Params
{
	struct FName                                       Dojo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetDifficultySetting
struct US3BattleStatsManager_SetDifficultySetting_Params
{
	int                                                NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.SetBattleCharacterAsset
struct US3BattleStatsManager_SetBattleCharacterAsset_Params
{
};

// Function Shenmue3.S3BattleStatsManager.SelectSkillSet
struct US3BattleStatsManager_SelectSkillSet_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.IsMaxHealth
struct US3BattleStatsManager_IsMaxHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.IsAutoSkillSetSelected
struct US3BattleStatsManager_IsAutoSkillSetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.InitBlueprint
struct US3BattleStatsManager_InitBlueprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetVitalityLevelMan
struct US3BattleStatsManager_GetVitalityLevelMan_Params
{
	class US3DerivedPlayerLevel*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetSkillExpMan
struct US3BattleStatsManager_GetSkillExpMan_Params
{
	class US3PlayerExpCollection*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetSelectedSkillSetIndex
struct US3BattleStatsManager_GetSelectedSkillSetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetSelectedSkillSet
struct US3BattleStatsManager_GetSelectedSkillSet_Params
{
	TArray<struct FName>                               Skills;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BattleStatsManager.GetPlayerLevelMan
struct US3BattleStatsManager_GetPlayerLevelMan_Params
{
	class US3DerivedPlayerLevel*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetMaxHealthRatio
struct US3BattleStatsManager_GetMaxHealthRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetMaxHealth
struct US3BattleStatsManager_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetManualSkillSetCount
struct US3BattleStatsManager_GetManualSkillSetCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetKunFuExpMan
struct US3BattleStatsManager_GetKunFuExpMan_Params
{
	class US3PlayerExpCollection*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetHealthRatio
struct US3BattleStatsManager_GetHealthRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetHealth
struct US3BattleStatsManager_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetGameInstance
struct US3BattleStatsManager_GetGameInstance_Params
{
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetDojoRankIndex
struct US3BattleStatsManager_GetDojoRankIndex_Params
{
	struct FName                                       Dojo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetDojoRank
struct US3BattleStatsManager_GetDojoRank_Params
{
	struct FName                                       Dojo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetDifficultySetting
struct US3BattleStatsManager_GetDifficultySetting_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetBattleCharacterAsset
struct US3BattleStatsManager_GetBattleCharacterAsset_Params
{
};

// Function Shenmue3.S3BattleStatsManager.GetBaseMaxHealth
struct US3BattleStatsManager_GetBaseMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetAttackLevelMan
struct US3BattleStatsManager_GetAttackLevelMan_Params
{
	class US3DerivedPlayerLevel*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.GetAttackBonus
struct US3BattleStatsManager_GetAttackBonus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.Debug_SetVitalityLevel
struct US3BattleStatsManager_Debug_SetVitalityLevel_Params
{
	int                                                TargetLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.Debug_SetPlayerLevel
struct US3BattleStatsManager_Debug_SetPlayerLevel_Params
{
	int                                                TargetLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BattleStatsManager.Debug_SetAttackLevel
struct US3BattleStatsManager_Debug_SetAttackLevel_Params
{
	int                                                TargetLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BellTowerGimmick.GetClothCharaName
struct AS3BellTowerGimmick_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BgmArea.OnActorEndOverlapImpl
struct AS3BgmArea_OnActorEndOverlapImpl_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmArea.OnActorBeginOverlapImpl
struct AS3BgmArea_OnActorBeginOverlapImpl_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmArea.GetSourceInfo
struct AS3BgmArea_GetSourceInfo_Params
{
	struct FS3BgmAreaSourceInfo                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BgmManager.Stop
struct AS3BgmManager_Stop_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.SetTalkVolume
struct AS3BgmManager_SetTalkVolume_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.SetDisableFadePause
struct AS3BgmManager_SetDisableFadePause_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.Restart
struct AS3BgmManager_Restart_Params
{
};

// Function Shenmue3.S3BgmManager.PlayFromPlayer
struct AS3BgmManager_PlayFromPlayer_Params
{
	class AS3BgmPlayer*                                BgmPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.PlayFromCue
struct AS3BgmManager_PlayFromCue_Params
{
	class UObject*                                     Cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EBgmPriority                                       Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3BgmPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.Pause
struct AS3BgmManager_Pause_Params
{
};

// Function Shenmue3.S3BgmManager.OnEndTouchArea
struct AS3BgmManager_OnEndTouchArea_Params
{
	class AS3BgmArea*                                  AreaActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.OnBeginTouchArea
struct AS3BgmManager_OnBeginTouchArea_Params
{
	class AS3BgmArea*                                  AreaActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BgmManager.OnAreaBgmChanged
struct AS3BgmManager_OnAreaBgmChanged_Params
{
	class AS3BgmArea*                                  area;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_text
struct US3BlueprintFunctionLibrary_ZSortArr_text_Params
{
	TArray<struct FText>                               arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               opt;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_string
struct US3BlueprintFunctionLibrary_ZSortArr_string_Params
{
	TArray<struct FString>                             arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               opt;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_object
struct US3BlueprintFunctionLibrary_ZSortArr_object_Params
{
	TArray<class UObject*>                             arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_name
struct US3BlueprintFunctionLibrary_ZSortArr_name_Params
{
	TArray<struct FName>                               arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_locate
struct US3BlueprintFunctionLibrary_ZSortArr_locate_Params
{
	TArray<struct FVector>                             arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, IsPlainOldData)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      resDs;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_int
struct US3BlueprintFunctionLibrary_ZSortArr_int_Params
{
	TArray<int>                                        arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_float
struct US3BlueprintFunctionLibrary_ZSortArr_float_Params
{
	TArray<float>                                      arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZSortArr_actorLocate
struct US3BlueprintFunctionLibrary_ZSortArr_actorLocate_Params
{
	TArray<class AActor*>                              arg;                                                      // (ConstParm, Parm, ZeroConstructor)
	class AActor*                                      Loc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dsc;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              resAr;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        resId;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      resDs;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ZArrayFindMaxValue_int
struct US3BlueprintFunctionLibrary_ZArrayFindMaxValue_int_Params
{
	TArray<int>                                        arr;                                                      // (ConstParm, Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.UpdateTextureStreamingStatus
struct US3BlueprintFunctionLibrary_UpdateTextureStreamingStatus_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.UpdateTextureStreaming
struct US3BlueprintFunctionLibrary_UpdateTextureStreaming_Params
{
};

// Function Shenmue3.S3BlueprintFunctionLibrary.UpdateCaptureSceneDeferred
struct US3BlueprintFunctionLibrary_UpdateCaptureSceneDeferred_Params
{
	class USceneCaptureComponent2D*                    Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.TryReimport
struct US3BlueprintFunctionLibrary_TryReimport_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotification;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.TestComponentOverlapComponent
struct US3BlueprintFunctionLibrary_TestComponentOverlapComponent_Params
{
	class UPrimitiveComponent*                         PrimitiveA;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveB;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.StreamOutTextureData
struct US3BlueprintFunctionLibrary_StreamOutTextureData_Params
{
	int                                                RequiredMemorySize;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SplineConvertInputKeyToDistance
struct US3BlueprintFunctionLibrary_SplineConvertInputKeyToDistance_Params
{
	class USplineComponent*                            spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InputKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetTextureForceResidentFlag
struct US3BlueprintFunctionLibrary_SetTextureForceResidentFlag_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForceMiplevelsToBeResident;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetStaticMeshMaterial
struct US3BlueprintFunctionLibrary_SetStaticMeshMaterial_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetSequenceToMontage
struct US3BlueprintFunctionLibrary_SetSequenceToMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessShadowsGamma
struct US3BlueprintFunctionLibrary_SetPostProcessShadowsGamma_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessShadowsGain
struct US3BlueprintFunctionLibrary_SetPostProcessShadowsGain_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessShadowsContrast
struct US3BlueprintFunctionLibrary_SetPostProcessShadowsContrast_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessGlobalSaturation
struct US3BlueprintFunctionLibrary_SetPostProcessGlobalSaturation_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessGlobalGamma
struct US3BlueprintFunctionLibrary_SetPostProcessGlobalGamma_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessGlobalGain
struct US3BlueprintFunctionLibrary_SetPostProcessGlobalGain_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetPostProcessGlobalContrast
struct US3BlueprintFunctionLibrary_SetPostProcessGlobalContrast_Params
{
	struct FPostProcessSettings                        Settings;                                                 // (Parm)
	struct FVector4                                    Value;                                                    // (Parm, IsPlainOldData)
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetMobility
struct US3BlueprintFunctionLibrary_SetMobility_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetIntParameterValue
struct US3BlueprintFunctionLibrary_SetIntParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetInputPriority
struct US3BlueprintFunctionLibrary_SetInputPriority_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetForceMipStreaming
struct US3BlueprintFunctionLibrary_SetForceMipStreaming_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewStreaming;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetFloatParameterValue
struct US3BlueprintFunctionLibrary_SetFloatParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetDisableWorldRendering
struct US3BlueprintFunctionLibrary_SetDisableWorldRendering_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetDisableClothSimulation
struct US3BlueprintFunctionLibrary_SetDisableClothSimulation_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDisableClothSimulation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetDisableAnsel
struct US3BlueprintFunctionLibrary_SetDisableAnsel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetDecalFadeScreenSize
struct US3BlueprintFunctionLibrary_SetDecalFadeScreenSize_Params
{
	class UDecalComponent*                             DecalComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NewFadeScreenSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetCanEverAffectNavigation
struct US3BlueprintFunctionLibrary_SetCanEverAffectNavigation_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bRelevant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetByteParameterValue
struct US3BlueprintFunctionLibrary_SetByteParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SetBoolParameterValue
struct US3BlueprintFunctionLibrary_SetBoolParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.SaveStringToFile
struct US3BlueprintFunctionLibrary_SaveStringToFile_Params
{
	struct FString                                     SaveText;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.RunShaderTest
struct US3BlueprintFunctionLibrary_RunShaderTest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    InputTexture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HalfWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sigma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ResetMatineeTimeDilation
struct US3BlueprintFunctionLibrary_ResetMatineeTimeDilation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.RenderMaterialTile
struct US3BlueprintFunctionLibrary_RenderMaterialTile_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          InMaterial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      InRenderTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFrontView;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.PrintS3Warning
struct US3BlueprintFunctionLibrary_PrintS3Warning_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.PrintS3Error
struct US3BlueprintFunctionLibrary_PrintS3Error_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.PlaySound
struct US3BlueprintFunctionLibrary_PlaySound_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.MakeInputActionKeyMapping
struct US3BlueprintFunctionLibrary_MakeInputActionKeyMapping_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               bShift;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCtrl;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlt;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCmd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      Action;                                                   // (Parm, OutParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.MakeAssetId
struct US3BlueprintFunctionLibrary_MakeAssetId_Params
{
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.MakeAssetClassId
struct US3BlueprintFunctionLibrary_MakeAssetClassId_Params
{
	class UClass*                                      AssetClass;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.LoadObject
struct US3BlueprintFunctionLibrary_LoadObject_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     OutObject;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.LoadAssetSync
struct US3BlueprintFunctionLibrary_LoadAssetSync_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.LoadAssetClassSync
struct US3BlueprintFunctionLibrary_LoadAssetClassSync_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.IsStreamingLevelAlwaysLoaded
struct US3BlueprintFunctionLibrary_IsStreamingLevelAlwaysLoaded_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.IsInUseByLevel
struct US3BlueprintFunctionLibrary_IsInUseByLevel_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.IsInRangeTimeEvent
struct US3BlueprintFunctionLibrary_IsInRangeTimeEvent_Params
{
	ES3DayTimeEvent                                    CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.IsInRangeTime
struct US3BlueprintFunctionLibrary_IsInRangeTime_Params
{
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.IsCurrentAnimState
struct US3BlueprintFunctionLibrary_IsCurrentAnimState_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MachineName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetWalkCycleInfo
struct US3BlueprintFunctionLibrary_GetWalkCycleInfo_Params
{
	float                                              StartMarkerA;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartMarkerB;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutPreviousMarkerIsA;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTimeSincePreviousMarker;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTimeToNextMarker;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetVolumeMultiplier
struct US3BlueprintFunctionLibrary_GetVolumeMultiplier_Params
{
	class UAtomComponent*                              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetTimeForEvent
struct US3BlueprintFunctionLibrary_GetTimeForEvent_Params
{
	class UTimelineComponent*                          Timeline;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Event;                                                    // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetStreamingVolumesForStreamingLevel
struct US3BlueprintFunctionLibrary_GetStreamingVolumesForStreamingLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ALevelStreamingVolume*>               StreamingVolumes;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetStaticSwitchParameterValue
struct US3BlueprintFunctionLibrary_GetStaticSwitchParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExist;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetSequenceFromMontage
struct US3BlueprintFunctionLibrary_GetSequenceFromMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInAnimation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetResourceSizeDetail
struct US3BlueprintFunctionLibrary_GetResourceSizeDetail_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DedicatedSystemMemoryBytes;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SharedSystemMemoryBytes;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DedicatedVideoMemoryBytes;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SharedVideoMemoryBytes;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                UnknownMemoryBytes;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetResourceSize
struct US3BlueprintFunctionLibrary_GetResourceSize_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetProjectVersion
struct US3BlueprintFunctionLibrary_GetProjectVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetPlaceLevel
struct US3BlueprintFunctionLibrary_GetPlaceLevel_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetMontageWeight
struct US3BlueprintFunctionLibrary_GetMontageWeight_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetMontageSectionRange
struct US3BlueprintFunctionLibrary_GetMontageSectionRange_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartSectionPosition;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EndSectionPosition;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetMontageAnimMetaData
struct US3BlueprintFunctionLibrary_GetMontageAnimMetaData_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMetaData*>                       OutAnimMetaData;                                          // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetLevelSequenceSubtitleLabels
struct US3BlueprintFunctionLibrary_GetLevelSequenceSubtitleLabels_Params
{
	class ULevelSequence*                              InLevelSequence;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutLabels;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetItemNamesFromEnum
struct US3BlueprintFunctionLibrary_GetItemNamesFromEnum_Params
{
	TArray<struct FText>                               EnumItems;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     EnumName;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetIntParameterValue
struct US3BlueprintFunctionLibrary_GetIntParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetIntParameterMinMaxFromClass
struct US3BlueprintFunctionLibrary_GetIntParameterMinMaxFromClass_Params
{
	class UClass*                                      WatchedObjectClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetIntParameterMinMax
struct US3BlueprintFunctionLibrary_GetIntParameterMinMax_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetInputPriority
struct US3BlueprintFunctionLibrary_GetInputPriority_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetFloatParameterValue
struct US3BlueprintFunctionLibrary_GetFloatParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetFloatParameterMinMaxFromClass
struct US3BlueprintFunctionLibrary_GetFloatParameterMinMaxFromClass_Params
{
	class UClass*                                      WatchedObjectClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetFloatParameterMinMax
struct US3BlueprintFunctionLibrary_GetFloatParameterMinMax_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.getDistance
struct US3BlueprintFunctionLibrary_getDistance_Params
{
	struct FVector                                     v1;                                                       // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, IsPlainOldData)
	bool                                               sw;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetCopyrightNotice
struct US3BlueprintFunctionLibrary_GetCopyrightNotice_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetByteParameterValue
struct US3BlueprintFunctionLibrary_GetByteParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetBoolParameterValue
struct US3BlueprintFunctionLibrary_GetBoolParameterValue_Params
{
	class UObject*                                     WatchedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasParameter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetBoneTransformFromSequence
struct US3BlueprintFunctionLibrary_GetBoneTransformFromSequence_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExtractRootMotion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetBoneTransformFromMontage
struct US3BlueprintFunctionLibrary_GetBoneTransformFromMontage_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Section;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetBoneRotation
struct US3BlueprintFunctionLibrary_GetBoneRotation_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetBoneLocation
struct US3BlueprintFunctionLibrary_GetBoneLocation_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAttachedActorsOfClass
struct US3BlueprintFunctionLibrary_GetAttachedActorsOfClass_Params
{
	class AActor*                                      AttachParent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAttachedActorOfClass
struct US3BlueprintFunctionLibrary_GetAttachedActorOfClass_Params
{
	class AActor*                                      AttachParent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAssetUserDataCharaScale
struct US3BlueprintFunctionLibrary_GetAssetUserDataCharaScale_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAnimTimeFraction
struct US3BlueprintFunctionLibrary_GetAnimTimeFraction_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MachineName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAnimTime
struct US3BlueprintFunctionLibrary_GetAnimTime_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MachineName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAnimLength
struct US3BlueprintFunctionLibrary_GetAnimLength_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MachineName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetAllActorsByLevelName
struct US3BlueprintFunctionLibrary_GetAllActorsByLevelName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetActorsOfClassFromArray
struct US3BlueprintFunctionLibrary_GetActorsOfClassFromArray_Params
{
	TArray<class AActor*>                              InActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.GetActorOfClassFromArray
struct US3BlueprintFunctionLibrary_GetActorOfClassFromArray_Params
{
	TArray<class AActor*>                              InActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ForceUpdateSkylightComponents
struct US3BlueprintFunctionLibrary_ForceUpdateSkylightComponents_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ForceUpdateOverlaps
struct US3BlueprintFunctionLibrary_ForceUpdateOverlaps_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ForceUpdateAnimDynamics
struct US3BlueprintFunctionLibrary_ForceUpdateAnimDynamics_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LoopDeltaTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ForceUpdateAnimation
struct US3BlueprintFunctionLibrary_ForceUpdateAnimation_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.FilterAnalogInputEvent
struct US3BlueprintFunctionLibrary_FilterAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           Input;                                                    // (ConstParm, Parm)
	struct FKey                                        Filter;                                                   // (ConstParm, Parm)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ExtractSequenceRootMotionFromTrackRange
struct US3BlueprintFunctionLibrary_ExtractSequenceRootMotionFromTrackRange_Params
{
	class UAnimSequence*                               Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTrackPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTrackPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.ExtractMontageRootMotionFromTrackRange
struct US3BlueprintFunctionLibrary_ExtractMontageRootMotionFromTrackRange_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTrackPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTrackPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.DrawBoxNonAsset
struct US3BlueprintFunctionLibrary_DrawBoxNonAsset_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                Tint;                                                     // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.DisableStaticSwitchOverride
struct US3BlueprintFunctionLibrary_DisableStaticSwitchOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.CalculateSequenceRootMotionAlignment
struct US3BlueprintFunctionLibrary_CalculateSequenceRootMotionAlignment_Params
{
	class UAnimSequence*                               Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AlignmentTransform;                                       // (Parm, IsPlainOldData)
	float                                              AlignmentAnimTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (Parm, IsPlainOldData)
	float                                              CurrentAnimTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RootMotionScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BlueprintFunctionLibrary.CalculateMontageRootMotionAlignment
struct US3BlueprintFunctionLibrary_CalculateMontageRootMotionAlignment_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AlignmentTransform;                                       // (Parm, IsPlainOldData)
	float                                              AlignmentAnimTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (Parm, IsPlainOldData)
	float                                              CurrentAnimTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RootMotionScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.StartPause
struct AS3GameMode_StartPause_Params
{
	TArray<class UClass*>                              IgnoreClasses;                                            // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameMode.StartCheckLevelStreaming
struct AS3GameMode_StartCheckLevelStreaming_Params
{
};

// Function Shenmue3.S3GameMode.StartBattleLevelStreaming
struct AS3GameMode_StartBattleLevelStreaming_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BattleLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               NeedLevels;                                               // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3GameMode.SetSkyManager
struct AS3GameMode_SetSkyManager_Params
{
	class AS3SkyManager*                               InSkyManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.SetS3Pause
struct AS3GameMode_SetS3Pause_Params
{
	EPausePriority                                     Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.RecreatePlayerController
struct AS3GameMode_RecreatePlayerController_Params
{
	class APlayerController*                           OldPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewPlayerControllerClass;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.IsS3SystemPause
struct AS3GameMode_IsS3SystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.IsS3Paused
struct AS3GameMode_IsS3Paused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.IsNPCFadeInProgress
struct AS3GameMode_IsNPCFadeInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.IsLoadingLevel
struct AS3GameMode_IsLoadingLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.IsLevelStreaming
struct AS3GameMode_IsLevelStreaming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.GetLevelStreamingDebugData
struct AS3GameMode_GetLevelStreamingDebugData_Params
{
	TArray<struct FS3LevelDebugData>                   LevelStreamingData;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.GetBattleSpawner
struct AS3GameMode_GetBattleSpawner_Params
{
	class ABTL_BattleSpawner*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.GetBattleCommandLibrary
struct AS3GameMode_GetBattleCommandLibrary_Params
{
	class UBTL_CommandLibraryBase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.GetAreaManager
struct AS3GameMode_GetAreaManager_Params
{
	class AS3AreaManager*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.GetActiveSearchArea
struct AS3GameMode_GetActiveSearchArea_Params
{
	class AS3SearchArea*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.EndPause
struct AS3GameMode_EndPause_Params
{
};

// Function Shenmue3.S3GameMode.EndBattleLevelStreaming
struct AS3GameMode_EndBattleLevelStreaming_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.EnableAllLevelStreamingVolume
struct AS3GameMode_EnableAllLevelStreamingVolume_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.DisableAllLevelStreamingVolume
struct AS3GameMode_DisableAllLevelStreamingVolume_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameMode.ClearS3Pause
struct AS3GameMode_ClearS3Pause_Params
{
	EPausePriority                                     Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BootGameMode.ShowDialog
struct AS3BootGameMode_ShowDialog_Params
{
	TArray<struct FName>                               Labels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BootGameMode.LoginPlatform
struct AS3BootGameMode_LoginPlatform_Params
{
};

// Function Shenmue3.S3BRallyCourseCSPlayer.TryPlaceCSAlongSpline
struct AS3BRallyCourseCSPlayer_TryPlaceCSAlongSpline_Params
{
	class ACharacter*                                  Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBTL_BRallyCourseCutsceneData               CutsceneData;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRotator;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BRallyCourseCSPlayer.EstimateGroundLocation
struct AS3BRallyCourseCSPlayer_EstimateGroundLocation_Params
{
	class ACharacter*                                  ContextPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BRallyTrophyData.TryUnlockAchievements
struct US3BRallyTrophyData_TryUnlockAchievements_Params
{
	class US3AchievementManager*                       AchievementManager;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewlyUnlocked;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             AllUnlocked;                                              // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3TalkComponentBase.UnLoadTalkScript
struct US3TalkComponentBase_UnLoadTalkScript_Params
{
};

// Function Shenmue3.S3TalkComponentBase.SetSubQuestControlInfo
struct US3TalkComponentBase_SetSubQuestControlInfo_Params
{
	TArray<struct FS3SubQuestControl>                  Info;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3TalkComponentBase.SetEnableByScript
struct US3TalkComponentBase_SetEnableByScript_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.SetEnableBySchedule
struct US3TalkComponentBase_SetEnableBySchedule_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.ParseTalkScriptData
struct US3TalkComponentBase_ParseTalkScriptData_Params
{
	class US3TalkDataListBase*                         TalkDataList;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.LoadTalkScript
struct US3TalkComponentBase_LoadTalkScript_Params
{
};

// Function Shenmue3.S3TalkComponentBase.IsInRangeOfTime
struct US3TalkComponentBase_IsInRangeOfTime_Params
{
	int                                                MinTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.IsInRangeOfStep
struct US3TalkComponentBase_IsInRangeOfStep_Params
{
	int                                                MinStep;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.InitEnableBySchedule
struct US3TalkComponentBase_InitEnableBySchedule_Params
{
};

// Function Shenmue3.S3TalkComponentBase.GetEnableBySchedule
struct US3TalkComponentBase_GetEnableBySchedule_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.GetEnable
struct US3TalkComponentBase_GetEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponentBase.GetCurrentTalkScript
struct US3TalkComponentBase_GetCurrentTalkScript_Params
{
	struct FTalkScriptState                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3TalkComponentBase.CanTalk
struct US3TalkComponentBase_CanTalk_Params
{
	bool                                               Sight;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BSComponent.SetEventCountByScript
struct US3BSComponent_SetEventCountByScript_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BSComponent.SetEventCountBySchedule
struct US3BSComponent_SetEventCountBySchedule_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BSComponent.InitEventCountBySchedule
struct US3BSComponent_InitEventCountBySchedule_Params
{
};

// Function Shenmue3.S3BSComponent.GetEventCountBySchedule
struct US3BSComponent_GetEventCountBySchedule_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BSComponent.GetEventCount
struct US3BSComponent_GetEventCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BSComponent.ExistEvent
struct US3BSComponent_ExistEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BuildingStaticMeshActor.OverlapPlayer
struct AS3BuildingStaticMeshActor_OverlapPlayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bin;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3BuildingStaticMeshActor.EncompassPoint
struct AS3BuildingStaticMeshActor_EncompassPoint_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3BuildingStaticMeshActor.EncompassAllVolume
struct AS3BuildingStaticMeshActor_EncompassAllVolume_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CameraFadeCollisionActor.FadeOutCharacter
struct AS3CameraFadeCollisionActor_FadeOutCharacter_Params
{
	class AS3Character*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CameraFadeCollisionActor.FadeInCharacter
struct AS3CameraFadeCollisionActor_FadeInCharacter_Params
{
	class AS3Character*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CameraFadeCollisionActor.FadeInAll
struct AS3CameraFadeCollisionActor_FadeInAll_Params
{
};

// Function Shenmue3.S3Button.ForceClickAction
struct US3Button_ForceClickAction_Params
{
};

// Function Shenmue3.S3CharacterPawn.GetClothCharaName
struct AS3CharacterPawn_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharacterPhasingComponent.StopIgnoring_ByReference
struct US3CharacterPhasingComponent_StopIgnoring_ByReference_Params
{
	class ACharacter*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharacterPhasingComponent.StartIgnoring_ByTime
struct US3CharacterPhasingComponent_StartIgnoring_ByTime_Params
{
	class ACharacter*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharacterPhasingComponent.StartIgnoring_ByReference
struct US3CharacterPhasingComponent_StartIgnoring_ByReference_Params
{
	class ACharacter*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharacterPhasingComponent.OnCharacterFadedOut
struct US3CharacterPhasingComponent_OnCharacterFadedOut_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharacterPhasingComponent.OnCharacterFadedIn
struct US3CharacterPhasingComponent_OnCharacterFadedIn_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharacterPhasingComponent.CancelTimer
struct US3CharacterPhasingComponent_CancelTimer_Params
{
	class ACharacter*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharacterSensorComponentBase.UpdateSensors
struct US3CharacterSensorComponentBase_UpdateSensors_Params
{
};

// Function Shenmue3.S3CharacterSensorComponentBase.ReleaseSensors
struct US3CharacterSensorComponentBase_ReleaseSensors_Params
{
};

// Function Shenmue3.S3CharacterSensorComponentBase.InitializeSensors
struct US3CharacterSensorComponentBase_InitializeSensors_Params
{
};

// Function Shenmue3.S3CharacterSensorComponentBase.CreateSensors
struct US3CharacterSensorComponentBase_CreateSensors_Params
{
};

// Function Shenmue3.S3CharacterSensorComponentBase.ClearSensors
struct US3CharacterSensorComponentBase_ClearSensors_Params
{
};

// Function Shenmue3.S3CharaLightingActor.UpdateLightingParamater
struct AS3CharaLightingActor_UpdateLightingParamater_Params
{
	struct FS3CharaLightingContainer                   Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Shenmue3.S3CharaLightingActor.UpdateCastShadows
struct AS3CharaLightingActor_UpdateCastShadows_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingActor.SetupLighting
struct AS3CharaLightingActor_SetupLighting_Params
{
};

// Function Shenmue3.S3CharaLightingActor.SetLightVisibility
struct AS3CharaLightingActor_SetLightVisibility_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingActor.ResetCacheTargetLocationFlag
struct AS3CharaLightingActor_ResetCacheTargetLocationFlag_Params
{
};

// Function Shenmue3.S3CharaLightingActor.OverrideCacheTargetLocation
struct AS3CharaLightingActor_OverrideCacheTargetLocation_Params
{
	struct FTransform                                  WorldTransform;                                           // (Parm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (Parm, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     RightVector;                                              // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingActor.GetTargetSceneComponent
struct AS3CharaLightingActor_GetTargetSceneComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingActor.GetTargetActorSocketTransform
struct AS3CharaLightingActor_GetTargetActorSocketTransform_Params
{
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingActor.GetCharaLightingManager
struct AS3CharaLightingActor_GetCharaLightingManager_Params
{
	class AS3CharaLightingManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingActor.DrawLightingDebugLine
struct AS3CharaLightingActor_DrawLightingDebugLine_Params
{
};

// Function Shenmue3.S3CharaLightingManager.UpdateManualTargetCharaLight
struct AS3CharaLightingManager_UpdateManualTargetCharaLight_Params
{
	class AS3CharaLightingActor*                       CharaLightingActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.UpdateLightingColorInBuilding
struct AS3CharaLightingManager_UpdateLightingColorInBuilding_Params
{
	struct FS3CharaLightingCurveColorParamater         CurveColorParamater;                                      // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FS3CharaLightingContainer                   InContainer;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Shenmue3.S3CharaLightingManager.UpdateLightingColorCurve
struct AS3CharaLightingManager_UpdateLightingColorCurve_Params
{
	struct FS3CharaLightingCurveColorParamater         CurveColorParamater;                                      // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FS3CharaLightingContainer                   InContainer;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Shenmue3.S3CharaLightingManager.UpdateAllLightupActors
struct AS3CharaLightingManager_UpdateAllLightupActors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.SetupEnvironmentLightParamater
struct AS3CharaLightingManager_SetupEnvironmentLightParamater_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.SetupCalculationMeshAndCameraVariable
struct AS3CharaLightingManager_SetupCalculationMeshAndCameraVariable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.SetCurrentLightingColorCurve
struct AS3CharaLightingManager_SetCurrentLightingColorCurve_Params
{
	struct FS3CharaLightingCurveColorParamater         CurveColorParamater;                                      // (Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.ResetLightsInBuilding
struct AS3CharaLightingManager_ResetLightsInBuilding_Params
{
};

// Function Shenmue3.S3CharaLightingManager.RequestManualUpdateTargetCharaLight
struct AS3CharaLightingManager_RequestManualUpdateTargetCharaLight_Params
{
	struct FName                                       TargetTagCharaName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LightParamaterTableName;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaLightRequestType                           RequestType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.IsEnabledAllCharaLighting
struct AS3CharaLightingManager_IsEnabledAllCharaLighting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.IsConditionsCheck
struct AS3CharaLightingManager_IsConditionsCheck_Params
{
	struct FS3CharaLightingContainer                   Container;                                                // (Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class US3TagCharaComponent*                        TagCharaComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.InvertLightingDirection
struct AS3CharaLightingManager_InvertLightingDirection_Params
{
	bool                                               bCameraRightDirection;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3CharaLightingContainer                   InContainer;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Shenmue3.S3CharaLightingManager.GetTalkTargetActorMesh
struct AS3CharaLightingManager_GetTalkTargetActorMesh_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.GetLightsInBuildingInfo
struct AS3CharaLightingManager_GetLightsInBuildingInfo_Params
{
	class AActor*                                      TargetBuilding;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3CharaLightsInBuildingInfo                OutInfo;                                                  // (Parm, OutParm)
};

// Function Shenmue3.S3CharaLightingManager.GetLightParamAfterApplyingLocationAndRotation
struct AS3CharaLightingManager_GetLightParamAfterApplyingLocationAndRotation_Params
{
	struct FS3CharaLightingParamater                   Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  WorldTrans;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Up;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Right;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutWorldLocation;                                         // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutWorldRotation;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.GetLightingColorParameter
struct AS3CharaLightingManager_GetLightingColorParameter_Params
{
	struct FS3CharaLightingCurveColorParamater         Paramater;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.GetEditorPreviewTagName
struct AS3CharaLightingManager_GetEditorPreviewTagName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.GetEditorCurrentLevelName
struct AS3CharaLightingManager_GetEditorCurrentLevelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3CharaLightingManager.GetCharaLightingContainerByLightGroupId
struct AS3CharaLightingManager_GetCharaLightingContainerByLightGroupId_Params
{
	struct FName                                       LightGroupId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3CharaLightingContainer>           OutContainers;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.GetCameraLocationAndRotation
struct AS3CharaLightingManager_GetCameraLocationAndRotation_Params
{
	struct FVector                                     OutWorldLocation;                                         // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutWorldRotation;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.GetAllEditorActorsOfClass
struct AS3CharaLightingManager_GetAllEditorActorsOfClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3CharaLightingManager.Evaluation
struct AS3CharaLightingManager_Evaluation_Params
{
	class AActor*                                      TargetLightupActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LightGroupId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3CharaLightingContainer                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3CharaLightingManager.EnabledAllCharaLighting
struct AS3CharaLightingManager_EnabledAllCharaLighting_Params
{
};

// Function Shenmue3.S3CharaLightingManager.Editor_UpdateAllCutsceneLightingActors
struct AS3CharaLightingManager_Editor_UpdateAllCutsceneLightingActors_Params
{
	class ACameraActor*                                Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.Editor_ResetVariable
struct AS3CharaLightingManager_Editor_ResetVariable_Params
{
};

// Function Shenmue3.S3CharaLightingManager.DisabledAllCharaLighting
struct AS3CharaLightingManager_DisabledAllCharaLighting_Params
{
};

// Function Shenmue3.S3CharaLightingManager.ClearRequestManualCharaLight
struct AS3CharaLightingManager_ClearRequestManualCharaLight_Params
{
	bool                                               bAllReset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CharaLightingManager.AddLightsInBuilding
struct AS3CharaLightingManager_AddLightsInBuilding_Params
{
	class AActor*                                      TargetBuilding;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3PointLight*                               Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3SpotLight*                                Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.UpdateSample
struct AS3Clipper_UpdateSample_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetTalkClipperVoice
struct AS3Clipper_SetTalkClipperVoice_Params
{
	struct FString                                     TalkClipperString;                                        // (Parm, ZeroConstructor)
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3SoundPlayer*                              VoicePlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetTalkClipperInternal
struct AS3Clipper_SetTalkClipperInternal_Params
{
	struct FString                                     TalkClipperString;                                        // (Parm, ZeroConstructor)
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVoice;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3SoundPlayer*                              VoicePlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetTalkClipper
struct AS3Clipper_SetTalkClipper_Params
{
	struct FString                                     TalkClipperString;                                        // (Parm, ZeroConstructor)
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVoice;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetSoundPlayer
struct AS3Clipper_SetSoundPlayer_Params
{
	class AS3SoundPlayer*                              InSoundPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetPlayRate
struct AS3Clipper_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetFaceId
struct AS3Clipper_SetFaceId_Params
{
	struct FString                                     InFaceId;                                                 // (Parm, ZeroConstructor)
	struct FName                                       InCharaName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.SetCharaName
struct AS3Clipper_SetCharaName_Params
{
	struct FName                                       NewName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.IsStopped
struct AS3Clipper_IsStopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.IsFaceDisabled
struct AS3Clipper_IsFaceDisabled_Params
{
	struct FName                                       InCharaName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetSmoothShapeVolume
struct AS3Clipper_GetSmoothShapeVolume_Params
{
	int                                                ShapeId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetFaceId
struct AS3Clipper_GetFaceId_Params
{
	struct FString                                     OutFaceId;                                                // (Parm, OutParm, ZeroConstructor)
	struct FName                                       InCharaName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetElapsedTimeAlpha
struct AS3Clipper_GetElapsedTimeAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetElapsedTime
struct AS3Clipper_GetElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetDuration
struct AS3Clipper_GetDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetCurrentFrameVolume
struct AS3Clipper_GetCurrentFrameVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetCurrentFrameShapeId
struct AS3Clipper_GetCurrentFrameShapeId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetCurrentFrameRawVolume
struct AS3Clipper_GetCurrentFrameRawVolume_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetClipperReader
struct AS3Clipper_GetClipperReader_Params
{
	class US3ClipperReader*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.GetClipperMultiSampler
struct AS3Clipper_GetClipperMultiSampler_Params
{
	class US3ClipperMultiSampler*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3Clipper.ClearTalkClipper
struct AS3Clipper_ClearTalkClipper_Params
{
};

// Function Shenmue3.S3Clipper.ClearSyncContext
struct AS3Clipper_ClearSyncContext_Params
{
};

// Function Shenmue3.S3Clipper.ClearFaceId
struct AS3Clipper_ClearFaceId_Params
{
};

// Function Shenmue3.S3Clipper.CheckChara
struct AS3Clipper_CheckChara_Params
{
	struct FName                                       Match;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperLibrary.ConvertClipperVolume
struct US3ClipperLibrary_ConvertClipperVolume_Params
{
	int                                                Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperMultiSampler.UpdateSamples
struct US3ClipperMultiSampler_UpdateSamples_Params
{
	class US3ClipperReader*                            ClipperReader;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClipperMultiSampler.SetWindowInterval
struct US3ClipperMultiSampler_SetWindowInterval_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClipperMultiSampler.GetVolume
struct US3ClipperMultiSampler_GetVolume_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperMultiSampler.GetLoudestSample
struct US3ClipperMultiSampler_GetLoudestSample_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperMultiSampler.GetLoudestId
struct US3ClipperMultiSampler_GetLoudestId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperMultiSampler.Clear
struct US3ClipperMultiSampler_Clear_Params
{
};

// Function Shenmue3.S3CheatManager.UnlockAchievement
struct US3CheatManager_UnlockAchievement_Params
{
	int                                                AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.UnloadStreamLevel
struct US3CheatManager_UnloadStreamLevel_Params
{
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.ToggleWidget
struct US3CheatManager_ToggleWidget_Params
{
};

// Function Shenmue3.S3CheatManager.ToggleMemoryUsage
struct US3CheatManager_ToggleMemoryUsage_Params
{
};

// Function Shenmue3.S3CheatManager.ToggleDebugCameraYu
struct US3CheatManager_ToggleDebugCameraYu_Params
{
	bool                                               bCollision;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.ToggleDebugCameraEx
struct US3CheatManager_ToggleDebugCameraEx_Params
{
	bool                                               bCollision;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.TeleportToNPC
struct US3CheatManager_TeleportToNPC_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.StreamOutTextureData
struct US3CheatManager_StreamOutTextureData_Params
{
	int                                                RequiredMemorySize;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SkyLightSwapAndRecapture
struct US3CheatManager_SkyLightSwapAndRecapture_Params
{
};

// Function Shenmue3.S3CheatManager.SkyLightRecapture
struct US3CheatManager_SkyLightRecapture_Params
{
};

// Function Shenmue3.S3CheatManager.SkyLightBlendFraction
struct US3CheatManager_SkyLightBlendFraction_Params
{
	float                                              BlendFraction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.ShowNPCStreamingInfo
struct US3CheatManager_ShowNPCStreamingInfo_Params
{
};

// Function Shenmue3.S3CheatManager.ShowLightInfo
struct US3CheatManager_ShowLightInfo_Params
{
};

// Function Shenmue3.S3CheatManager.ShowLightCount
struct US3CheatManager_ShowLightCount_Params
{
};

// Function Shenmue3.S3CheatManager.ShowItemSpawnerHints
struct US3CheatManager_ShowItemSpawnerHints_Params
{
};

// Function Shenmue3.S3CheatManager.SetMoney
struct US3CheatManager_SetMoney_Params
{
	int                                                Money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SetGraphicQuality
struct US3CheatManager_SetGraphicQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SetEventStep
struct US3CheatManager_SetEventStep_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SetEventFlag
struct US3CheatManager_SetEventFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SetDemoType
struct US3CheatManager_SetDemoType_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SetBetMoney
struct US3CheatManager_SetBetMoney_Params
{
	int                                                Money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.SetAllItem
struct US3CheatManager_SetAllItem_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.ResetAchievements
struct US3CheatManager_ResetAchievements_Params
{
};

// Function Shenmue3.S3CheatManager.RemoveAllWidgets
struct US3CheatManager_RemoveAllWidgets_Params
{
};

// Function Shenmue3.S3CheatManager.PreloadBattle
struct US3CheatManager_PreloadBattle_Params
{
};

// Function Shenmue3.S3CheatManager.OnShowLightInfoEvent
struct US3CheatManager_OnShowLightInfoEvent_Params
{
};

// Function Shenmue3.S3CheatManager.OnMiniGameWinEvent
struct US3CheatManager_OnMiniGameWinEvent_Params
{
};

// Function Shenmue3.S3CheatManager.OnMiniGameLoseEvent
struct US3CheatManager_OnMiniGameLoseEvent_Params
{
};

// Function Shenmue3.S3CheatManager.NpcDebugMode
struct US3CheatManager_NpcDebugMode_Params
{
	struct FName                                       Mode;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.MocapUI
struct US3CheatManager_MocapUI_Params
{
};

// Function Shenmue3.S3CheatManager.MocapCalibration
struct US3CheatManager_MocapCalibration_Params
{
	int                                                UserId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNPose;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSymmetry;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.MiniGameSuccess
struct US3CheatManager_MiniGameSuccess_Params
{
};

// Function Shenmue3.S3CheatManager.MiniGameFail
struct US3CheatManager_MiniGameFail_Params
{
};

// Function Shenmue3.S3CheatManager.LoadAutoSave
struct US3CheatManager_LoadAutoSave_Params
{
};

// Function Shenmue3.S3CheatManager.LaunchDebugBattle
struct US3CheatManager_LaunchDebugBattle_Params
{
};

// Function Shenmue3.S3CheatManager.KillAllNPC
struct US3CheatManager_KillAllNPC_Params
{
};

// Function Shenmue3.S3CheatManager.GetVisibleLightCount
struct US3CheatManager_GetVisibleLightCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.GetOuterPlayerController
struct US3CheatManager_GetOuterPlayerController_Params
{
	class AS3PlayerController*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CheatManager.EnableNPCTriggerOverlaps
struct US3CheatManager_EnableNPCTriggerOverlaps_Params
{
};

// Function Shenmue3.S3CheatManager.DisableWalkOnlyTrigger
struct US3CheatManager_DisableWalkOnlyTrigger_Params
{
};

// Function Shenmue3.S3CheatManager.DisableNPCTriggerOverlaps
struct US3CheatManager_DisableNPCTriggerOverlaps_Params
{
};

// Function Shenmue3.S3CheatManager.ClearPeakMemoryUsage
struct US3CheatManager_ClearPeakMemoryUsage_Params
{
};

// Function Shenmue3.S3CheatManager.CleanupGCArrayPool
struct US3CheatManager_CleanupGCArrayPool_Params
{
};

// Function Shenmue3.S3ClipperReader.SetVolumeInterpretor
struct US3ClipperReader_SetVolumeInterpretor_Params
{
	class US3ClipperVolumeInterpretor*                 InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.SetFrameRate
struct US3ClipperReader_SetFrameRate_Params
{
	float                                              InFrameRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.SetData
struct US3ClipperReader_SetData_Params
{
	struct FString                                     InData;                                                   // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3ClipperReader.IsTimeInRange
struct US3ClipperReader_IsTimeInRange_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.IsFrameInRange
struct US3ClipperReader_IsFrameInRange_Params
{
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetVolumeInterpretor
struct US3ClipperReader_GetVolumeInterpretor_Params
{
	class US3ClipperVolumeInterpretor*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetTime
struct US3ClipperReader_GetTime_Params
{
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetSourceType
struct US3ClipperReader_GetSourceType_Params
{
	EClipperSourceType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetSample
struct US3ClipperReader_GetSample_Params
{
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3ClipperSample                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetFrameRate
struct US3ClipperReader_GetFrameRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetFrameNum
struct US3ClipperReader_GetFrameNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetFrameAsFloat
struct US3ClipperReader_GetFrameAsFloat_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClipperReader.GetFrame
struct US3ClipperReader_GetFrame_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothInterface.GetClothMeshComponent
struct US3ClothInterface_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.UpdateClothParts
struct AS3ClothManager_UpdateClothParts_Params
{
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.UnlockMesh
struct AS3ClothManager_UnlockMesh_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.UnlockClothParts
struct AS3ClothManager_UnlockClothParts_Params
{
	EClothPartsType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.SetSheMeshType
struct AS3ClothManager_SetSheMeshType_Params
{
	ES3CharaMeshType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.SetRyoMeshType
struct AS3ClothManager_SetRyoMeshType_Params
{
	ES3CharaMeshType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.SetEditMeshId
struct AS3ClothManager_SetEditMeshId_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.IsUnlockedClothParts
struct AS3ClothManager_IsUnlockedClothParts_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.IsTemporaryMesh
struct AS3ClothManager_IsTemporaryMesh_Params
{
	ES3CharaMeshType                                   MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    PartsType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.IsFitting
struct AS3ClothManager_IsFitting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.IsCompleteStreaming
struct AS3ClothManager_IsCompleteStreaming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetWearClothPartsCustom
struct AS3ClothManager_GetWearClothPartsCustom_Params
{
	TMap<EClothPartsType, struct FName>                WearParts;                                                // (Parm, OutParm, ZeroConstructor)
	ES3CharaMeshType                                   MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetWearClothParts
struct AS3ClothManager_GetWearClothParts_Params
{
	TMap<EClothPartsType, struct FName>                WearParts;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetUnlockedMeshes
struct AS3ClothManager_GetUnlockedMeshes_Params
{
	TArray<struct FName>                               UnlockedMeshes;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetUnlockedClothParts
struct AS3ClothManager_GetUnlockedClothParts_Params
{
	TArray<struct FName>                               UnlockedParts;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetTagCharaName
struct AS3ClothManager_GetTagCharaName_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetMeshAndParts
struct AS3ClothManager_GetMeshAndParts_Params
{
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3ClothesChangeInfo                        Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetCurrentMeshID
struct AS3ClothManager_GetCurrentMeshID_Params
{
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.GetCacheInfo
struct AS3ClothManager_GetCacheInfo_Params
{
	bool                                               TargetRyo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3ClothesCacheInfo>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3ClothManager.FindCache
struct AS3ClothManager_FindCache_Params
{
	TArray<struct FS3ClothesCacheInfo>                 Cache;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.CreateMeshCacheID
struct AS3ClothManager_CreateMeshCacheID_Params
{
	struct FName                                       MeshID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.ChangeClothes
struct AS3ClothManager_ChangeClothes_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ES3CharaMeshType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothManager.CacheObject
struct AS3ClothManager_CacheObject_Params
{
	struct FName                                       PartsID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    PartsType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ClothPartsDataAsset.SetMaterial
struct US3ClothPartsDataAsset_SetMaterial_Params
{
	class UMaterialInstance*                           InMaterial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneLibrary.FindCutscenePlayer
struct US3CutsceneLibrary_FindCutscenePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3CutscenePlayer*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.UnloadCutsceneLevel
struct AS3CutsceneManager_UnloadCutsceneLevel_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.StartCutscene
struct AS3CutsceneManager_StartCutscene_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFadeOut;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.RequestUnloadLevel
struct AS3CutsceneManager_RequestUnloadLevel_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.RequestLoadLevel
struct AS3CutsceneManager_RequestLoadLevel_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.OnFinishedUnloadCutsceneLevel
struct AS3CutsceneManager_OnFinishedUnloadCutsceneLevel_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.OnFinishedLoadCutsceneLevel
struct AS3CutsceneManager_OnFinishedLoadCutsceneLevel_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.LoadCutsceneLevel
struct AS3CutsceneManager_LoadCutsceneLevel_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.IsUsingForceWeather
struct AS3CutsceneManager_IsUsingForceWeather_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.IsUsingForceTimeOfDay
struct AS3CutsceneManager_IsUsingForceTimeOfDay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.IsUnloadingLevel
struct AS3CutsceneManager_IsUnloadingLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.IsPlaying
struct AS3CutsceneManager_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.IsLoadingLevel
struct AS3CutsceneManager_IsLoadingLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.IsExistLevelData
struct AS3CutsceneManager_IsExistLevelData_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.GetRequiredUnloadLevelList
struct AS3CutsceneManager_GetRequiredUnloadLevelList_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3CutsceneManager.GetRequiredLoadLevelList
struct AS3CutsceneManager_GetRequiredLoadLevelList_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3CutsceneManager.GetLastCutsceneQTEResult
struct AS3CutsceneManager_GetLastCutsceneQTEResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneManager.GetForceTimeOfDayValue
struct AS3CutsceneManager_GetForceTimeOfDayValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutscenePlayer.StartCutscene
struct AS3CutscenePlayer_StartCutscene_Params
{
};

// Function Shenmue3.S3CutscenePlayer.EndCutscene
struct AS3CutscenePlayer_EndCutscene_Params
{
};

// Function Shenmue3.S3CutsceneSkeletalMeshActor.SetupMesh
struct AS3CutsceneSkeletalMeshActor_SetupMesh_Params
{
};

// Function Shenmue3.S3CutsceneSkeletalMeshActor.GetTagCharaName
struct AS3CutsceneSkeletalMeshActor_GetTagCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneSkeletalMeshActor.GetConvertedCharaName
struct AS3CutsceneSkeletalMeshActor_GetConvertedCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3CutsceneSkeletalMeshActor.GetClothCharaName
struct AS3CutsceneSkeletalMeshActor_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DebugCameraController.SetFOV
struct AS3DebugCameraController_SetFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DebugCameraController.SetCameraSpeed
struct AS3DebugCameraController_SetCameraSpeed_Params
{
	float                                              NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DebugCameraController.GetOriginalPlayer
struct AS3DebugCameraController_GetOriginalPlayer_Params
{
	class UPlayer*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DebugMenu.CloseDebugMenu
struct US3DebugMenu_CloseDebugMenu_Params
{
};

// Function Shenmue3.S3DerivedPlayerLevel.GetMaxLevelDelta
struct US3DerivedPlayerLevel_GetMaxLevelDelta_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetMaxLevel
struct US3DerivedPlayerLevel_GetMaxLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetLevelRange
struct US3DerivedPlayerLevel_GetLevelRange_Params
{
	int                                                Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetLevelNormalizedTo
struct US3DerivedPlayerLevel_GetLevelNormalizedTo_Params
{
	int                                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetLevelNormalized
struct US3DerivedPlayerLevel_GetLevelNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetLevelDelta
struct US3DerivedPlayerLevel_GetLevelDelta_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetLevelAndProgress
struct US3DerivedPlayerLevel_GetLevelAndProgress_Params
{
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NextLevelProgress;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.GetLevel
struct US3DerivedPlayerLevel_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DerivedPlayerLevel.Configure
struct US3DerivedPlayerLevel_Configure_Params
{
	int                                                InInputCountPerLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InStartLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InEarnableLevels;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.UpdateOverlapActors
struct AS3DetectAction_UpdateOverlapActors_Params
{
};

// Function Shenmue3.S3DetectAction.UpdateButton
struct AS3DetectAction_UpdateButton_Params
{
};

// Function Shenmue3.S3DetectAction.UpdateBSActors
struct AS3DetectAction_UpdateBSActors_Params
{
};

// Function Shenmue3.S3DetectAction.UnregisterOverlapActor
struct AS3DetectAction_UnregisterOverlapActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.UnregisterDetectActor
struct AS3DetectAction_UnregisterDetectActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.RegisterOverlapActor
struct AS3DetectAction_RegisterOverlapActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.RegisterDetectActor
struct AS3DetectAction_RegisterDetectActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.PermitIconAll
struct AS3DetectAction_PermitIconAll_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.PermitIcon
struct AS3DetectAction_PermitIcon_Params
{
	TArray<ES3ActionIconType>                          Icons;                                                    // (Parm, ZeroConstructor)
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.PermitActionSensor
struct AS3DetectAction_PermitActionSensor_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.OnStartBS
struct AS3DetectAction_OnStartBS_Params
{
	class AS3Character*                                TalkableActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.OnEndPlay_ForbidActor
struct AS3DetectAction_OnEndPlay_ForbidActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.OnEndPlay_DetectActor
struct AS3DetectAction_OnEndPlay_DetectActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.IsRegisterDetectActor
struct AS3DetectAction_IsRegisterDetectActor_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.IsDetectTarget
struct AS3DetectAction_IsDetectTarget_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.IsActionSensorEnabled
struct AS3DetectAction_IsActionSensorEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.IsActionGlobalForbidden
struct AS3DetectAction_IsActionGlobalForbidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.IsActionForbidden
struct AS3DetectAction_IsActionForbidden_Params
{
	ES3ActionIconType                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreGlobal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.GetDefaultButtonIndex
struct AS3DetectAction_GetDefaultButtonIndex_Params
{
	ES3ActionIconType                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.ForbidIcon
struct AS3DetectAction_ForbidIcon_Params
{
	TArray<ES3ActionIconType>                          Icons;                                                    // (Parm, ZeroConstructor)
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.ForbidActionSensor
struct AS3DetectAction_ForbidActionSensor_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.FindStackIndex
struct AS3DetectAction_FindStackIndex_Params
{
	struct FS3DetectActionParam                        InParam;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectAction.CanStartBS
struct AS3DetectAction_CanStartBS_Params
{
	class AS3Character*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectActionInterface.GetPriority
struct US3DetectActionInterface_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DetectActionInterface.GetDetectAction
struct US3DetectActionInterface_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3DetectActionInterface.DecideDetectAction
struct US3DetectActionInterface_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.TeleportToNPC
struct US3DevelopBlueprintFunctionLibrary_TeleportToNPC_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NPCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.SetVirtualPlatform
struct US3DevelopBlueprintFunctionLibrary_SetVirtualPlatform_Params
{
	ES3Platform                                        Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.SetPostProcessAnimBlueprint
struct US3DevelopBlueprintFunctionLibrary_SetPostProcessAnimBlueprint_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBlueprint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.SetPhysicsAsset
struct US3DevelopBlueprintFunctionLibrary_SetPhysicsAsset_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               NewPhysicsAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.MarkPackageDirty
struct US3DevelopBlueprintFunctionLibrary_MarkPackageDirty_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsWeGame
struct US3DevelopBlueprintFunctionLibrary_IsWeGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsVirtualPS4
struct US3DevelopBlueprintFunctionLibrary_IsVirtualPS4_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsVirtualPlatformOverriden
struct US3DevelopBlueprintFunctionLibrary_IsVirtualPlatformOverriden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsTestBuild
struct US3DevelopBlueprintFunctionLibrary_IsTestBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsSimulateInEditor
struct US3DevelopBlueprintFunctionLibrary_IsSimulateInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsShippingBuild
struct US3DevelopBlueprintFunctionLibrary_IsShippingBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsPS4
struct US3DevelopBlueprintFunctionLibrary_IsPS4_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsPlayInEditor
struct US3DevelopBlueprintFunctionLibrary_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsMouseSupported
struct US3DevelopBlueprintFunctionLibrary_IsMouseSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsEditor
struct US3DevelopBlueprintFunctionLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsDLCProjectVersion
struct US3DevelopBlueprintFunctionLibrary_IsDLCProjectVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsDebugMouseSupported
struct US3DevelopBlueprintFunctionLibrary_IsDebugMouseSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsDebugBuild
struct US3DevelopBlueprintFunctionLibrary_IsDebugBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsAlpha2
struct US3DevelopBlueprintFunctionLibrary_IsAlpha2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.IsAlpha1
struct US3DevelopBlueprintFunctionLibrary_IsAlpha1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.GetWorldStreamingLevels
struct US3DevelopBlueprintFunctionLibrary_GetWorldStreamingLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ULevelStreaming*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.GetVirtualPlatformEnum
struct US3DevelopBlueprintFunctionLibrary_GetVirtualPlatformEnum_Params
{
	ES3Platform                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.GetPlatformEnum
struct US3DevelopBlueprintFunctionLibrary_GetPlatformEnum_Params
{
	ES3Platform                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.GetOnlineServiceName
struct US3DevelopBlueprintFunctionLibrary_GetOnlineServiceName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3DevelopBlueprintFunctionLibrary.DisableVirtualPlatformOverride
struct US3DevelopBlueprintFunctionLibrary_DisableVirtualPlatformOverride_Params
{
};

// Function Shenmue3.S3DoorFunctionLibrary.GetDoorData2
struct US3DoorFunctionLibrary_GetDoorData2_Params
{
	class US3DoorData*                                 DoorData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class US3DoorDataBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DoorFunctionLibrary.GetDoorData
struct US3DoorFunctionLibrary_GetDoorData_Params
{
	struct FString                                     State;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FName                                       NPCName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     compulsionPath;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	class US3DoorDataBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DownloadableContentManager.MountDLCAsync
struct US3DownloadableContentManager_MountDLCAsync_Params
{
};

// Function Shenmue3.S3DownloadableContentManager.IsInstalled
struct US3DownloadableContentManager_IsInstalled_Params
{
	ES3DownloadableContentId                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3DownloadableContentManager.GetGameInstance
struct US3DownloadableContentManager_GetGameInstance_Params
{
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3EnergyManager.IsLowEnergy
struct AS3EnergyManager_IsLowEnergy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3EnergyManager.DrainRunEnergy
struct AS3EnergyManager_DrainRunEnergy_Params
{
};

// Function Shenmue3.S3UserWidget.UpdateFontFacetype
struct US3UserWidget_UpdateFontFacetype_Params
{
};

// Function Shenmue3.S3UserWidget.GetOwningComponent
struct US3UserWidget_GetOwningComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3UserWidget.GetOwningActor
struct US3UserWidget_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3UserWidget.GetHUD
struct US3UserWidget_GetHUD_Params
{
	class AS3HUD*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3UserWidget.FindText
struct US3UserWidget_FindText_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3UserWidget.ChooseFontFacetype
struct US3UserWidget_ChooseFontFacetype_Params
{
	struct FSlateFontInfo                              InFont;                                                   // (Parm)
	struct FSlateFontInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3EyecatchWidget.ShowEyecatchTexture
struct US3EyecatchWidget_ShowEyecatchTexture_Params
{
	class UTexture*                                    LogoImage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFade;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3EyecatchWidget.ShowEyecatchText2
struct US3EyecatchWidget_ShowEyecatchText2_Params
{
	struct FText                                       MainTitle1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       SubTitle1;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       MainTitle2;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       SubTitle2;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bUseFade;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3EyecatchWidget.ShowEyecatch
struct US3EyecatchWidget_ShowEyecatch_Params
{
	struct FText                                       MainTitle;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Subtitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bUseFade;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3EyecatchWidget.HideEyecatch
struct US3EyecatchWidget_HideEyecatch_Params
{
	bool                                               bUseFade;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.UpdateCharacterName
struct US3FaceAnimInstance_UpdateCharacterName_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.SetHeadScale
struct US3FaceAnimInstance_SetHeadScale_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.SetClipperByGameMode
struct US3FaceAnimInstance_SetClipperByGameMode_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.ResetFluctuationEmotion
struct US3FaceAnimInstance_ResetFluctuationEmotion_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.ResetClipperMorph
struct US3FaceAnimInstance_ResetClipperMorph_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.PlayEmotionMorph
struct US3FaceAnimInstance_PlayEmotionMorph_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.PlayClipperMorph
struct US3FaceAnimInstance_PlayClipperMorph_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.IsUseFluctuationEmotion
struct US3FaceAnimInstance_IsUseFluctuationEmotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.IsEnableLookAt
struct US3FaceAnimInstance_IsEnableLookAt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.FindEmotionMorphMapKey
struct US3FaceAnimInstance_FindEmotionMorphMapKey_Params
{
	struct FName                                       InEmotionId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterEmotion                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.FindClipperMorphMapKey
struct US3FaceAnimInstance_FindClipperMorphMapKey_Params
{
	struct FName                                       InClipperId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMouseShape                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.ConvertEmotionId
struct US3FaceAnimInstance_ConvertEmotionId_Params
{
	struct FString                                     InEmotionId;                                              // (Parm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.CheckTalking
struct US3FaceAnimInstance_CheckTalking_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.CalcLookAt
struct US3FaceAnimInstance_CalcLookAt_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.CalcFluctuationEmotion
struct US3FaceAnimInstance_CalcFluctuationEmotion_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.CalcEyeBlink
struct US3FaceAnimInstance_CalcEyeBlink_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.CalcEmotionBlend
struct US3FaceAnimInstance_CalcEmotionBlend_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.CalcEmotion
struct US3FaceAnimInstance_CalcEmotion_Params
{
};

// Function Shenmue3.S3FaceAnimInstance.CalcClipperBlend
struct US3FaceAnimInstance_CalcClipperBlend_Params
{
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FaceAnimInstance.CalcClipper
struct US3FaceAnimInstance_CalcClipper_Params
{
};

// Function Shenmue3.S3FaceLegacyAnimInstance.UpdateClipperFlag
struct US3FaceLegacyAnimInstance_UpdateClipperFlag_Params
{
};

// Function Shenmue3.S3FaceLegacyAnimInstance.GetClipperRate
struct US3FaceLegacyAnimInstance_GetClipperRate_Params
{
	bool                                               bConditionOpenFlag;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FadeCharacterCapsule.SetUseWhitelist
struct US3FadeCharacterCapsule_SetUseWhitelist_Params
{
	bool                                               bNewSetting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FadeCharacterCapsule.RemoveFromWhitelist
struct US3FadeCharacterCapsule_RemoveFromWhitelist_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FadeCharacterCapsule.OnOverlapEnd
struct US3FadeCharacterCapsule_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FadeCharacterCapsule.OnOverlapBegin
struct US3FadeCharacterCapsule_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3FadeCharacterCapsule.AddToWhitelist
struct US3FadeCharacterCapsule_AddToWhitelist_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3FadeMaterialDataAsset.MakeFadeMaterial
struct US3FadeMaterialDataAsset_MakeFadeMaterial_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FindSecretRoom.GetClothCharaName
struct AS3FindSecretRoom_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3TextDataManagerNative
struct US3FrameworkLibrary_GetS3TextDataManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3TextDataManagerBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3TalkScriptManagerNative
struct US3FrameworkLibrary_GetS3TalkScriptManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3TalkScriptManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3TalkEventManagerNative
struct US3FrameworkLibrary_GetS3TalkEventManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3TalkEventManagerBase*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3SoundManagerNative
struct US3FrameworkLibrary_GetS3SoundManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3SoundManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3SkyManagerNative
struct US3FrameworkLibrary_GetS3SkyManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3SkyManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3SaveLoadManagerNative
struct US3FrameworkLibrary_GetS3SaveLoadManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3SaveLoadManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3RewardManagerNative
struct US3FrameworkLibrary_GetS3RewardManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3RewardManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3NPCLeadManagerNative
struct US3FrameworkLibrary_GetS3NPCLeadManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3NPCLeadManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3MiniGameManagerNative
struct US3FrameworkLibrary_GetS3MiniGameManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3MiniGameManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3LiveStreamingManagerNative
struct US3FrameworkLibrary_GetS3LiveStreamingManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3LiveStreamingManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3InputDeviceManagerNative
struct US3FrameworkLibrary_GetS3InputDeviceManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3InputDeviceManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3HUDNative
struct US3FrameworkLibrary_GetS3HUDNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3HUD*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3HintTalkManagerNative
struct US3FrameworkLibrary_GetS3HintTalkManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3HintTalkManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3GimmickManagerNative
struct US3FrameworkLibrary_GetS3GimmickManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3GimmickManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3GameTimeManagerNative
struct US3FrameworkLibrary_GetS3GameTimeManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3GameTimeManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3GameModeNative
struct US3FrameworkLibrary_GetS3GameModeNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3GameMode*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3GameInstanceNative
struct US3FrameworkLibrary_GetS3GameInstanceNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3DownloadableContentManagerNative
struct US3FrameworkLibrary_GetS3DownloadableContentManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3DownloadableContentManager*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3DetectActionNative
struct US3FrameworkLibrary_GetS3DetectActionNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3DetectAction*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3DebugMenuNative
struct US3FrameworkLibrary_GetS3DebugMenuNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3DebugMenu*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3CutsceneManagerNative
struct US3FrameworkLibrary_GetS3CutsceneManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3CutsceneManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3ClothManagerNative
struct US3FrameworkLibrary_GetS3ClothManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3ClothManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3ClipperManagerNative
struct US3FrameworkLibrary_GetS3ClipperManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Clipper*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3CheatManagerNative
struct US3FrameworkLibrary_GetS3CheatManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3CheatManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3CharaLightingManagerNative
struct US3FrameworkLibrary_GetS3CharaLightingManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3CharaLightingManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3BgmManagerNative
struct US3FrameworkLibrary_GetS3BgmManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3BgmManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3BattleSpawnerNative
struct US3FrameworkLibrary_GetS3BattleSpawnerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABTL_BattleSpawner*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3AssetChunkManagerNative
struct US3FrameworkLibrary_GetS3AssetChunkManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3AssetChunkManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3AreaManagerNative
struct US3FrameworkLibrary_GetS3AreaManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3AreaManager*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3AdventurePlayerControllerNative
struct US3FrameworkLibrary_GetS3AdventurePlayerControllerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3AdventurePlayerController*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3FrameworkLibrary.GetS3AchievementManagerNative
struct US3FrameworkLibrary_GetS3AchievementManagerNative_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class US3AchievementManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.UpdateTlGametime
struct AS3GameTimeManager_UpdateTlGametime_Params
{
};

// Function Shenmue3.S3GameTimeManager.UpdateNextDay
struct AS3GameTimeManager_UpdateNextDay_Params
{
};

// Function Shenmue3.S3GameTimeManager.UpdateCurrentGameTimeShop
struct AS3GameTimeManager_UpdateCurrentGameTimeShop_Params
{
};

// Function Shenmue3.S3GameTimeManager.UpdateCurrentGameTimeDay
struct AS3GameTimeManager_UpdateCurrentGameTimeDay_Params
{
};

// Function Shenmue3.S3GameTimeManager.UpdateCurrentGameTimeCustom
struct AS3GameTimeManager_UpdateCurrentGameTimeCustom_Params
{
	float                                              OldGameTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.StopGameTime
struct AS3GameTimeManager_StopGameTime_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.StartGameTime
struct AS3GameTimeManager_StartGameTime_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.SetGameTime
struct AS3GameTimeManager_SetGameTime_Params
{
	float                                              NewGameTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNextDay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.SetGameDateTime
struct AS3GameTimeManager_SetGameDateTime_Params
{
	struct FDateTime                                   NewDate;                                                  // (Parm)
};

// Function Shenmue3.S3GameTimeManager.SetDeltaTimeBias
struct AS3GameTimeManager_SetDeltaTimeBias_Params
{
	float                                              InDeltaTimeBias;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.ReleaseForceStopTime
struct AS3GameTimeManager_ReleaseForceStopTime_Params
{
};

// Function Shenmue3.S3GameTimeManager.registCustomTimeEvent
struct AS3GameTimeManager_registCustomTimeEvent_Params
{
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                registIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.IsStopGameTime
struct AS3GameTimeManager_IsStopGameTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.InitDataTime
struct AS3GameTimeManager_InitDataTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.GetGameDateTime
struct AS3GameTimeManager_GetGameDateTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3GameTimeManager.GetEventTimeShop
struct AS3GameTimeManager_GetEventTimeShop_Params
{
	ES3ShopTimeEvent                                   InEventType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.GetEventTimeDay
struct AS3GameTimeManager_GetEventTimeDay_Params
{
	ES3DayTimeEvent                                    InEventType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.DetectTimeEventPositon
struct AS3GameTimeManager_DetectTimeEventPositon_Params
{
	int                                                cateId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameTimeManager.DetectCustomEventPositon
struct AS3GameTimeManager_DetectCustomEventPositon_Params
{
	float                                              NewTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldTime;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Indexes;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GameTimeManager.AppendGameTime
struct AS3GameTimeManager_AppendGameTime_Params
{
	float                                              DeltaGameTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNextDay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GameViewportClient.ShowTitleSafeAreaMinimum
struct US3GameViewportClient_ShowTitleSafeAreaMinimum_Params
{
};

// Function Shenmue3.S3GimmickChair.OnChanged
struct AS3GimmickChair_OnChanged_Params
{
};

// Function Shenmue3.S3GimmickChair.ModeChangeRequest
struct AS3GimmickChair_ModeChangeRequest_Params
{
	struct FS3ChairResultStruct                        Result;                                                   // (Parm, OutParm)
	EChairOccupied                                     Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, IsPlainOldData)
	int                                                poiIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                stIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              moveDist;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.LocationTagCheck
struct AS3GimmickChair_LocationTagCheck_Params
{
	TArray<struct FString>                             LocationTags;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.LeaveDirectionCheck
struct AS3GimmickChair_LeaveDirectionCheck_Params
{
	ELeaveDirection                                    dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.IsCharacterSitting
struct AS3GimmickChair_IsCharacterSitting_Params
{
	class AS3Character*                                Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.HasVacantSeat
struct AS3GimmickChair_HasVacantSeat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.GetNearStartPointDist
struct AS3GimmickChair_GetNearStartPointDist_Params
{
	int                                                poiIdx;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                stIdx;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Point;                                                    // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.GetChairRotator
struct AS3GimmickChair_GetChairRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.GetChairForm
struct AS3GimmickChair_GetChairForm_Params
{
	EChairForm                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickChair.ExitManager
struct AS3GimmickChair_ExitManager_Params
{
};

// Function Shenmue3.S3GimmickChair.EntryManager
struct AS3GimmickChair_EntryManager_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickManager.GetSpotLights
struct AS3GimmickManager_GetSpotLights_Params
{
	TArray<class AS3TimeSwitchSpotLight*>              OutSpotLights;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3GimmickManager.GetPointLights
struct AS3GimmickManager_GetPointLights_Params
{
	TArray<class AS3TimeSwitchPointLight*>             OutPointLights;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3NavLinkProxy.OnNavlinkStateChange
struct AS3NavLinkProxy_OnNavlinkStateChange_Params
{
	class US3PathFollowingComponent*                   PathingComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavLinkCustomComponent*                     NavComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3GimmickOpenDoor.PlayAnimation
struct AS3GimmickOpenDoor_PlayAnimation_Params
{
	class UAnimationAsset*                             NewAnimToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GimmickOpenDoor.IsNeedPositionRecovery
struct AS3GimmickOpenDoor_IsNeedPositionRecovery_Params
{
	class ACharacter*                                  SelfCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OpponentCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GimmickOpenDoor.GetRecoveryPoint
struct AS3GimmickOpenDoor_GetRecoveryPoint_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBack;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GlowTextBlock.SetOutlineColor
struct US3GlowTextBlock_SetOutlineColor_Params
{
	struct FLinearColor                                InOutlineColor;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3GlowTextBlock.SetOutlineBlurRadius
struct US3GlowTextBlock_SetOutlineBlurRadius_Params
{
	float                                              InOutlineBlurRadius;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GlowTextBlock.ForceUpdate
struct US3GlowTextBlock_ForceUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GlowTextBlock.DrawWidgetToRenderTarget
struct US3GlowTextBlock_DrawWidgetToRenderTarget_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3GraphicSettingsManager.Init
struct US3GraphicSettingsManager_Init_Params
{
};

// Function Shenmue3.S3GraphicSettingsManager.GetMaxShowNPC
struct US3GraphicSettingsManager_GetMaxShowNPC_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GraphicSettingsManager.GetMaxLoadedNPC
struct US3GraphicSettingsManager_GetMaxLoadedNPC_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3GraphicSettingsManager.GetMaxCastShadowLights
struct US3GraphicSettingsManager_GetMaxCastShadowLights_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HakkachanAwardFunctionLibrary.UnlockHakkachanCountAwards
struct US3HakkachanAwardFunctionLibrary_UnlockHakkachanCountAwards_Params
{
	class US3_BRallyAwardSystem*                       AwardSystem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HakkachanAwardFunctionLibrary.PreviewHakkachanCountAwardsV2
struct US3HakkachanAwardFunctionLibrary_PreviewHakkachanCountAwardsV2_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Owned;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3HakkachanAwardPreviewData>        OutAwards;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3HakkachanAwardFunctionLibrary.FindHakkachanCountForAward
struct US3HakkachanAwardFunctionLibrary_FindHakkachanCountForAward_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Award;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                MaxHave;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HelpInterface.UnregisterHelp
struct US3HelpInterface_UnregisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HelpInterface.RegisterHelp
struct US3HelpInterface_RegisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HelpInterface.IsActivateHelp
struct US3HelpInterface_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HelpInterface.GetHelpPriority
struct US3HelpInterface_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HelpInterface.GetHelpName
struct US3HelpInterface_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HintTalkManager.GetHintTalkScript
struct AS3HintTalkManager_GetHintTalkScript_Params
{
	struct FST_S3HintTalkData                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class AS3Character*                                TalkedNPC;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HintTalkManager.GetHintTalkData
struct AS3HintTalkManager_GetHintTalkData_Params
{
	struct FName                                       NPC_ID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FST_S3HintTalkData                          Data;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HintTalkManager.CreateKey
struct AS3HintTalkManager_CreateKey_Params
{
	EHintTarget                                        HintTalkKind;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAnswer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3CharacterGender>                    Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3HintTalkManager.AgeToIndex
struct AS3HintTalkManager_AgeToIndex_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.ToggleWidget
struct AS3HUD_ToggleWidget_Params
{
};

// Function Shenmue3.S3HUD.ShowWidget
struct AS3HUD_ShowWidget_Params
{
};

// Function Shenmue3.S3HUD.ShowRewardNotice
struct AS3HUD_ShowRewardNotice_Params
{
	ES3RewardCategory                                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.ShowLoading
struct AS3HUD_ShowLoading_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.ScreenFadeOut
struct AS3HUD_ScreenFadeOut_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.ScreenFadeInAutoColor
struct AS3HUD_ScreenFadeInAutoColor_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.ScreenFadeIn
struct AS3HUD_ScreenFadeIn_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.PermitWindowUI
struct AS3HUD_PermitWindowUI_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.PermitDetectAction
struct AS3HUD_PermitDetectAction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.OpenCommonDialog
struct AS3HUD_OpenCommonDialog_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Labels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ES3DialogType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.IsVisibleDialog
struct AS3HUD_IsVisibleDialog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.IsLoading
struct AS3HUD_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.HideWidget
struct AS3HUD_HideWidget_Params
{
};

// Function Shenmue3.S3HUD.HideLoading
struct AS3HUD_HideLoading_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3HUD.GetWidgets
struct AS3HUD_GetWidgets_Params
{
	TArray<class US3UserWidget*>                       ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3HUD.ForbidWindowUI
struct AS3HUD_ForbidWindowUI_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.ForbidDetectAction
struct AS3HUD_ForbidDetectAction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.CloseDialog
struct AS3HUD_CloseDialog_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3HUD.AddUserWidget
struct AS3HUD_AddUserWidget_Params
{
	class US3UserWidget*                               Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.UnPause
struct US3InputBufferComponent_UnPause_Params
{
};

// Function Shenmue3.S3InputBufferComponent.RecordInput
struct US3InputBufferComponent_RecordInput_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.PopNextInputAction
struct US3InputBufferComponent_PopNextInputAction_Params
{
	struct FBufferedInputData                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3InputBufferComponent.Pause
struct US3InputBufferComponent_Pause_Params
{
};

// Function Shenmue3.S3InputBufferComponent.Num
struct US3InputBufferComponent_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.IsRecordingEnabled
struct US3InputBufferComponent_IsRecordingEnabled_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.IsPaused
struct US3InputBufferComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.EnableRecordingIdentifier
struct US3InputBufferComponent_EnableRecordingIdentifier_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.EnableAllIdentifiers
struct US3InputBufferComponent_EnableAllIdentifiers_Params
{
};

// Function Shenmue3.S3InputBufferComponent.DisableRecordingIdentifier
struct US3InputBufferComponent_DisableRecordingIdentifier_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.DisableAllIdentifiers
struct US3InputBufferComponent_DisableAllIdentifiers_Params
{
};

// Function Shenmue3.S3InputBufferComponent.ContainsRecent
struct US3InputBufferComponent_ContainsRecent_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimePast;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.Contains
struct US3InputBufferComponent_Contains_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.ClearRecords
struct US3InputBufferComponent_ClearRecords_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3InputBufferComponent.ClearAllRecords
struct US3InputBufferComponent_ClearAllRecords_Params
{
};

// Function Shenmue3.S3InputDeviceManager.IsGamepadAttached
struct US3InputDeviceManager_IsGamepadAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.ShouldShowListItemDetails
struct US3ItemFunctionLibrary_ShouldShowListItemDetails_Params
{
	int                                                InId;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemListMenuType                                MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.IsItemListAdd
struct US3ItemFunctionLibrary_IsItemListAdd_Params
{
	ES3ItemListMenuType                                MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataRarity                                  Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableRowNamesByGroup
struct US3ItemFunctionLibrary_GetItemTableRowNamesByGroup_Params
{
	ES3ItemDataGroup                                   Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableRowNames
struct US3ItemFunctionLibrary_GetItemTableRowNames_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableName
struct US3ItemFunctionLibrary_GetItemTableName_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableMeshReference
struct US3ItemFunctionLibrary_GetItemTableMeshReference_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableMesh
struct US3ItemFunctionLibrary_GetItemTableMesh_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableLength
struct US3ItemFunctionLibrary_GetItemTableLength_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableDescription
struct US3ItemFunctionLibrary_GetItemTableDescription_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableDataNoText
struct US3ItemFunctionLibrary_GetItemTableDataNoText_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3ItemDataTable                            OutItemData;                                              // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableDataFromNumber
struct US3ItemFunctionLibrary_GetItemTableDataFromNumber_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3ItemDataTable                            OutItemData;                                              // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemTableData
struct US3ItemFunctionLibrary_GetItemTableData_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3ItemDataTable                            OutItemData;                                              // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemIndex
struct US3ItemFunctionLibrary_GetItemIndex_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               bStrict;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.GetItemDataTable
struct US3ItemFunctionLibrary_GetItemDataTable_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.FormatItemId
struct US3ItemFunctionLibrary_FormatItemId_Params
{
	struct FString                                     InId;                                                     // (Parm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.EnableItemCacheData
struct US3ItemFunctionLibrary_EnableItemCacheData_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ItemFunctionLibrary.DisableItemCacheData
struct US3ItemFunctionLibrary_DisableItemCacheData_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ItemManager.GetItemNum
struct US3ItemManager_GetItemNum_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemManager.GetItemLength
struct US3ItemManager_GetItemLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemManager.GetItemFlag
struct US3ItemManager_GetItemFlag_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemManager.GetItemCheckFlag
struct US3ItemManager_GetItemCheckFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemSpawner.GetUniqueName
struct AS3ItemSpawner_GetUniqueName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ItemSpawner.DelayedInitialize
struct AS3ItemSpawner_DelayedInitialize_Params
{
};

// Function Shenmue3.S3ItemSpawnerManager.UpdateDelayedInitialize
struct AS3ItemSpawnerManager_UpdateDelayedInitialize_Params
{
};

// Function Shenmue3.S3ItemSpawnerManager.RemoveItemSpawner
struct AS3ItemSpawnerManager_RemoveItemSpawner_Params
{
	class AS3ItemSpawner*                              ItemSpawner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ItemSpawnerManager.RemoveDelayedInitializeSpawner
struct AS3ItemSpawnerManager_RemoveDelayedInitializeSpawner_Params
{
	class AS3ItemSpawner*                              ItemSpawner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ItemSpawnerManager.AddItemSpawner
struct AS3ItemSpawnerManager_AddItemSpawner_Params
{
	class AS3ItemSpawner*                              ItemSpawner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ItemSpawnerManager.AddDelayedInitializeSpawner
struct AS3ItemSpawnerManager_AddDelayedInitializeSpawner_Params
{
	class AS3ItemSpawner*                              ItemSpawner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3KartPawnBase.GetClothCharaName
struct AS3KartPawnBase_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KeyConfigFunctionLibrary.RemoveActionMapping
struct US3KeyConfigFunctionLibrary_RemoveActionMapping_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3KeyConfigFunctionLibrary.IsKeyGamepadInput
struct US3KeyConfigFunctionLibrary_IsKeyGamepadInput_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KeyConfigFunctionLibrary.GetUIInputDevice
struct US3KeyConfigFunctionLibrary_GetUIInputDevice_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ES3InputDeviceModel                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KeyConfigFunctionLibrary.AddActionMapping
struct US3KeyConfigFunctionLibrary_AddActionMapping_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3InteractionComponent.SetBoxExtent
struct US3InteractionComponent_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                              // (Parm, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3InteractionComponent.GetUnscaledBoxExtent
struct US3InteractionComponent_GetUnscaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InteractionComponent.GetScaledBoxExtent
struct US3InteractionComponent_GetScaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3InteractionComponent.CaptureMovement
struct US3InteractionComponent_CaptureMovement_Params
{
	class AS3PlayerController*                         PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureMovement;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3KismetPlayerLibrary.GetAxisZ
struct US3KismetPlayerLibrary_GetAxisZ_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetPlayerLibrary.GetAxisY
struct US3KismetPlayerLibrary_GetAxisY_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetPlayerLibrary.GetAxisX
struct US3KismetPlayerLibrary_GetAxisX_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.Vector2DLengthSquared
struct US3KismetMathLibrary_Vector2DLengthSquared_Params
{
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.S3SegmentIntersection2D
struct US3KismetMathLibrary_S3SegmentIntersection2D_Params
{
	struct FVector                                     SegmentStartA;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentEndA;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentStartB;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentEndB;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutIntersectionPoint;                                     // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.RotateVectorXY
struct US3KismetMathLibrary_RotateVectorXY_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, IsPlainOldData)
	float                                              RotDeg;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.NormalizeAngle
struct US3KismetMathLibrary_NormalizeAngle_Params
{
	float                                              RotDeg;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.LerpAngleSigned
struct US3KismetMathLibrary_LerpAngleSigned_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AlphaWithSign;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.LerpAngle
struct US3KismetMathLibrary_LerpAngle_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.InverseLerpLegacy
struct US3KismetMathLibrary_InverseLerpLegacy_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.InterpolateAngleConstantSigned
struct US3KismetMathLibrary_InterpolateAngleConstantSigned_Params
{
	float                                              Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionSignedDegrees;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.InterpolateAngleConstantNear
struct US3KismetMathLibrary_InterpolateAngleConstantNear_Params
{
	float                                              Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.GetTriangleNormal
struct US3KismetMathLibrary_GetTriangleNormal_Params
{
	struct FVector                                     V0;                                                       // (Parm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (Parm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.GetSplineAreaAtPointVector3D
struct US3KismetMathLibrary_GetSplineAreaAtPointVector3D_Params
{
	TArray<struct FVector>                             PointVector;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.DifferenceAngle
struct US3KismetMathLibrary_DifferenceAngle_Params
{
	float                                              RotDeg1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotDeg2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.ConvertAngleToSignDegrees
struct US3KismetMathLibrary_ConvertAngleToSignDegrees_Params
{
	float                                              AngleDegrees;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sign;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.AngleVector2DSignedDegrees
struct US3KismetMathLibrary_AngleVector2DSignedDegrees_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Source;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.AngleDifferenceSignedDegrees
struct US3KismetMathLibrary_AngleDifferenceSignedDegrees_Params
{
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3KismetMathLibrary.Add_RotatorRotator
struct US3KismetMathLibrary_Add_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LiveStreamingManager.SetEnableStreaming
struct US3LiveStreamingManager_SetEnableStreaming_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LiveStreamingManager.OnLevelChanged
struct US3LiveStreamingManager_OnLevelChanged_Params
{
};

// Function Shenmue3.S3LiveStreamingManager.OnGameStepChanged
struct US3LiveStreamingManager_OnGameStepChanged_Params
{
	int                                                SetSteps;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LiveStreamingManager.GetGameInstance
struct US3LiveStreamingManager_GetGameInstance_Params
{
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LoadingFlipBookImage.SetFlipBookAnimFlg
struct US3LoadingFlipBookImage_SetFlipBookAnimFlg_Params
{
	bool                                               Flg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LoadingWidget.SetLoadingType
struct US3LoadingWidget_SetLoadingType_Params
{
	ES3LoadingType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LoadingWidget.GetProgressBarImage
struct US3LoadingWidget_GetProgressBarImage_Params
{
	class US3LoadingProgressImage*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3LoadingWidget.GetCharaImageIndex
struct US3LoadingWidget_GetCharaImageIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LoadingWidget.GetBackImageIndex
struct US3LoadingWidget_GetBackImageIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.SetTargetOffset
struct US3LookAtFSMComponent_SetTargetOffset_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.SetTargetActorDelay
struct US3LookAtFSMComponent_SetTargetActorDelay_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.SetTargetActor
struct US3LookAtFSMComponent_SetTargetActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.SetFaceAnimDataAsset
struct US3LookAtFSMComponent_SetFaceAnimDataAsset_Params
{
	class US3FaceAnimDataAsset*                        Original;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class US3FaceAnimDataAsset*                        Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.SetEnableLookAt
struct US3LookAtFSMComponent_SetEnableLookAt_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.ResetTargetOffset
struct US3LookAtFSMComponent_ResetTargetOffset_Params
{
};

// Function Shenmue3.S3LookAtFSMComponent.ResetRotationInterpSpeed
struct US3LookAtFSMComponent_ResetRotationInterpSpeed_Params
{
};

// Function Shenmue3.S3LookAtFSMComponent.ResetLookAtIKCorrectionWeight
struct US3LookAtFSMComponent_ResetLookAtIKCorrectionWeight_Params
{
};

// Function Shenmue3.S3LookAtFSMComponent.ResetLookAtBlendedWeight
struct US3LookAtFSMComponent_ResetLookAtBlendedWeight_Params
{
};

// Function Shenmue3.S3LookAtFSMComponent.ModifyLookAtRangeParamaterCheck
struct US3LookAtFSMComponent_ModifyLookAtRangeParamaterCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.IsProcessingLookAt
struct US3LookAtFSMComponent_IsProcessingLookAt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.GetOwnerTagCharaName
struct US3LookAtFSMComponent_GetOwnerTagCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.GetOwnerCharaTag
struct US3LookAtFSMComponent_GetOwnerCharaTag_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3LookAtFSMComponent.GetLookAtTargetLocation
struct US3LookAtFSMComponent_GetLookAtTargetLocation_Params
{
	struct FVector                                     OutTargetLocation;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.GetLookAtIKCorrectionWeightInfo
struct US3LookAtFSMComponent_GetLookAtIKCorrectionWeightInfo_Params
{
	struct FS3CharacterLookAtIKCorrectionWeight        OutInfo;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.GetLookAtClampInfo
struct US3LookAtFSMComponent_GetLookAtClampInfo_Params
{
	struct FS3CharacterLookAtWholeBodyParamater        OutInfo;                                                  // (Parm, OutParm)
};

// Function Shenmue3.S3LookAtFSMComponent.GetLookAtBlendedWeightInfo
struct US3LookAtFSMComponent_GetLookAtBlendedWeightInfo_Params
{
	struct FS3CharacterLookAtBlendedWeight             OutInfo;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function Shenmue3.S3LookAtFSMComponent.CopyPreModifyLookAtRangeParamater
struct US3LookAtFSMComponent_CopyPreModifyLookAtRangeParamater_Params
{
};

// Function Shenmue3.S3LookAtFSMComponent.ClearTargetActorDelay
struct US3LookAtFSMComponent_ClearTargetActorDelay_Params
{
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetTabFlagUnread
struct US3MemoFlagManager_SetTabFlagUnread_Params
{
	TArray<bool>                                       TabUnreadArray;                                           // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoTabIndex
struct US3MemoFlagManager_SetMemoTabIndex_Params
{
	int                                                memoTabNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoMapMask
struct US3MemoFlagManager_SetMemoMapMask_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoLatestMotivationIndex_Tab
struct US3MemoFlagManager_SetMemoLatestMotivationIndex_Tab_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TabIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoLatestMotivationIndex
struct US3MemoFlagManager_SetMemoLatestMotivationIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoLatestIndex
struct US3MemoFlagManager_SetMemoLatestIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoDataArrayUnderline
struct US3MemoFlagManager_SetMemoDataArrayUnderline_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoDataArrayPage
struct US3MemoFlagManager_SetMemoDataArrayPage_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.SetMemoDataArrayIdentifer
struct US3MemoFlagManager_SetMemoDataArrayIdentifer_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                identifer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.RemoveMemoSubEventOrder
struct US3MemoFlagManager_RemoveMemoSubEventOrder_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.IsMemoUnread
struct US3MemoFlagManager_IsMemoUnread_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.InitMemo
struct US3MemoFlagManager_InitMemo_Params
{
	int                                                ArrayLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetTabFlagUnread
struct US3MemoFlagManager_GetTabFlagUnread_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoUnreadNum
struct US3MemoFlagManager_GetMemoUnreadNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoSubEventOrder
struct US3MemoFlagManager_GetMemoSubEventOrder_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoMapMask
struct US3MemoFlagManager_GetMemoMapMask_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoLatestMotivationIndexs
struct US3MemoFlagManager_GetMemoLatestMotivationIndexs_Params
{
	TArray<int>                                        MotivationIndexs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoLatestMotivationIndex_Tab
struct US3MemoFlagManager_GetMemoLatestMotivationIndex_Tab_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TabIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoLatestMotivationIndex
struct US3MemoFlagManager_GetMemoLatestMotivationIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoLatestIndex
struct US3MemoFlagManager_GetMemoLatestIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoFlagLength
struct US3MemoFlagManager_GetMemoFlagLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoFlagLastindex
struct US3MemoFlagManager_GetMemoFlagLastindex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoFlag
struct US3MemoFlagManager_GetMemoFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Already;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemoFlagManager.GetMemoDataArray
struct US3MemoFlagManager_GetMemoDataArray_Params
{
	TArray<struct FMemoData>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3MemoFlagManager.AddMemoSubEventOrder
struct US3MemoFlagManager_AddMemoSubEventOrder_Params
{
	int                                                MemoId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemopadPageWidget.SetSlotHiddenFlag
struct US3MemopadPageWidget_SetSlotHiddenFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MemopadPageWidget.SetSlotContent
struct US3MemopadPageWidget_SetSlotContent_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class US3MemopadTextWidget*                        Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3MemopadPageWidget.AddPhoto
struct US3MemopadPageWidget_AddPhoto_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, IsPlainOldData)
	struct FVector2D                                   ScreenSize;                                               // (Parm, IsPlainOldData)
	class UCanvasPanelSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3MemoTextureDataManagerBase.GetMemoTextureDataObjectByLabel
struct AS3MemoTextureDataManagerBase_GetMemoTextureDataObjectByLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class US3MemoTextureDataBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameBase.SetTalkScriptLoadTimer
struct AS3MiniGameBase_SetTalkScriptLoadTimer_Params
{
};

// Function Shenmue3.S3MiniGameBase.GetTagCharaName
struct AS3MiniGameBase_GetTagCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameBase.GetTagCharaComponent
struct AS3MiniGameBase_GetTagCharaComponent_Params
{
	class US3TagCharaComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameBase.GetSightCheckLocation
struct AS3MiniGameBase_GetSightCheckLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameBase.GetClothCharaName
struct AS3MiniGameBase_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameBase.DelayedInitialize
struct AS3MiniGameBase_DelayedInitialize_Params
{
};

// Function Shenmue3.S3MiniGameBase.ClearTalkScriptLoadTimer
struct AS3MiniGameBase_ClearTalkScriptLoadTimer_Params
{
};

// Function Shenmue3.S3MiniGameFunctionLibrary.RemoveDelayFromWidget
struct US3MiniGameFunctionLibrary_RemoveDelayFromWidget_Params
{
	class UUserWidget*                                 pUserWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.RemoveDelayFromComponent
struct US3MiniGameFunctionLibrary_RemoveDelayFromComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.RemoveDelayFromActor
struct US3MiniGameFunctionLibrary_RemoveDelayFromActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.OutputPunchResult
struct US3MiniGameFunctionLibrary_OutputPunchResult_Params
{
	Enum_QTETitlePlayList                              PlaylistItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<Enum_QTETitlePlayList>                      InPlayList;                                               // (Parm, ZeroConstructor)
	TArray<Enum_QTETitlePlayList>                      OutPlaylist;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FQTECommandCheckStruct>              InCommandStructArray;                                     // (Parm, ZeroConstructor)
	TArray<struct FQTECommandCheckStruct>              OutCommandStructArray;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               bNeedPlaySequencer;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHitSuccessfully;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.OutputCSVData
struct US3MiniGameFunctionLibrary_OutputCSVData_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     outputFolderName;                                         // (Parm, ZeroConstructor)
	struct FString                                     outStr;                                                   // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRowByNameQTECommandsTable
struct US3MiniGameFunctionLibrary_GetRowByNameQTECommandsTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FQTETitleCommandTableRowBase                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRowByNameODGiftTable
struct US3MiniGameFunctionLibrary_GetRowByNameODGiftTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FODGiftDataTableRowBase                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRowByNameMiniGameNPCLinkData
struct US3MiniGameFunctionLibrary_GetRowByNameMiniGameNPCLinkData_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                NPC;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bOutResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS3MiniGameNPCLinkData                      OutData;                                                  // (Parm, OutParm)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRowByNameCMDataTable
struct US3MiniGameFunctionLibrary_GetRowByNameCMDataTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FCupMagicDataTableRowBase                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRowByNameAnimalRaceSpeedTable
struct US3MiniGameFunctionLibrary_GetRowByNameAnimalRaceSpeedTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAnimalRaceSpeedTableRowBase                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRandomValueInRange
struct US3MiniGameFunctionLibrary_GetRandomValueInRange_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetRandomIntValueInRange
struct US3MiniGameFunctionLibrary_GetRandomIntValueInRange_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetLastScoreKey
struct US3MiniGameFunctionLibrary_GetLastScoreKey_Params
{
	class AS3MiniGameBase*                             MiniGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.GetHighScoreKey
struct US3MiniGameFunctionLibrary_GetHighScoreKey_Params
{
	class AS3MiniGameBase*                             MiniGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameFunctionLibrary.CalculateTotalScore
struct US3MiniGameFunctionLibrary_CalculateTotalScore_Params
{
	int                                                HitScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ComboScore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ComboMaxScore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameManager.UpdateMiniGameWinRate
struct AS3MiniGameManager_UpdateMiniGameWinRate_Params
{
};

// Function Shenmue3.S3MiniGameManager.RemoveMiniGameActor
struct AS3MiniGameManager_RemoveMiniGameActor_Params
{
	class AS3MiniGameBase*                             Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameManager.RemoveDelayedInitializeActor
struct AS3MiniGameManager_RemoveDelayedInitializeActor_Params
{
	class AS3MiniGameBase*                             Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameManager.GetMiniGameActorByTagCharaName
struct AS3MiniGameManager_GetMiniGameActorByTagCharaName_Params
{
	struct FName                                       TagCharaName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3MiniGameBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameManager.GetCharacterLinkMiniGames
struct AS3MiniGameManager_GetCharacterLinkMiniGames_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              MiniGameActors;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3MiniGameManager.AddMiniGameActor
struct AS3MiniGameManager_AddMiniGameActor_Params
{
	class AS3MiniGameBase*                             Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.SetupMiniGameProgressInfoArray
struct US3MiniGameProgressManager_SetupMiniGameProgressInfoArray_Params
{
	TArray<struct FS3MiniGameProgressSaveData>         SaveDataArray;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3MiniGameProgressManager.SetProgressValueAsStringArray
struct US3MiniGameProgressManager_SetProgressValueAsStringArray_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FString>                             Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3MiniGameProgressManager.SetProgressValueAsString
struct US3MiniGameProgressManager_SetProgressValueAsString_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3MiniGameProgressManager.SetProgressValueAsIntArray
struct US3MiniGameProgressManager_SetProgressValueAsIntArray_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<int>                                        Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3MiniGameProgressManager.SetProgressValueAsInt
struct US3MiniGameProgressManager_SetProgressValueAsInt_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.SetProgressValueAsFloatArray
struct US3MiniGameProgressManager_SetProgressValueAsFloatArray_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<float>                                      Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3MiniGameProgressManager.SetProgressValueAsFloat
struct US3MiniGameProgressManager_SetProgressValueAsFloat_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.SetLastScore
struct US3MiniGameProgressManager_SetLastScore_Params
{
	class AS3MiniGameBase*                             MiniGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.SetHighScore
struct US3MiniGameProgressManager_SetHighScore_Params
{
	class AS3MiniGameBase*                             MiniGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.Initialize
struct US3MiniGameProgressManager_Initialize_Params
{
	int                                                MiniGameCategoryNum;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetProgressValueAsStringArray
struct US3MiniGameProgressManager_GetProgressValueAsStringArray_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FString>                             OutValues;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetProgressValueAsString
struct US3MiniGameProgressManager_GetProgressValueAsString_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     OutValue;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetProgressValueAsIntArray
struct US3MiniGameProgressManager_GetProgressValueAsIntArray_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<int>                                        OutValues;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetProgressValueAsInt
struct US3MiniGameProgressManager_GetProgressValueAsInt_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetProgressValueAsFloatArray
struct US3MiniGameProgressManager_GetProgressValueAsFloatArray_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<float>                                      OutValues;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetProgressValueAsFloat
struct US3MiniGameProgressManager_GetProgressValueAsFloat_Params
{
	unsigned char                                      MiniGameCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetLastScore
struct US3MiniGameProgressManager_GetLastScore_Params
{
	class AS3MiniGameBase*                             MiniGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.GetHighScore
struct US3MiniGameProgressManager_GetHighScore_Params
{
	class AS3MiniGameBase*                             MiniGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameProgressManager.CreateProgressSaveDataArray
struct US3MiniGameProgressManager_CreateProgressSaveDataArray_Params
{
	TArray<struct FS3MiniGameProgressSaveData>         OutSaveDataArray;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3MovementModeRequestHandler.UnrequestMovementMode
struct US3MovementModeRequestHandler_UnrequestMovementMode_Params
{
	class UObject*                                     Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MovementModeRequestHandler.RequestMovementMode
struct US3MovementModeRequestHandler_RequestMovementMode_Params
{
	class UObject*                                     Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3MovementModeRequestHandler.CheckInvalidUProperties
struct US3MovementModeRequestHandler_CheckInvalidUProperties_Params
{
};

// Function Shenmue3.S3NarrowPassageActor.RequestIgnoreCollision
struct AS3NarrowPassageActor_RequestIgnoreCollision_Params
{
	class AS3Character*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NarrowPassageActor.OnOverlapEnd
struct AS3NarrowPassageActor_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NarrowPassageActor.OnOverlapBegin
struct AS3NarrowPassageActor_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3MiniGameCharacter.GetClothCharaName
struct AS3MiniGameCharacter_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NavigationFunctionLibrary.TestPathExists
struct US3NavigationFunctionLibrary_TestPathExists_Params
{
	class UObject*                                     Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NavigationFunctionLibrary.GetRecastNavmesh
struct US3NavigationFunctionLibrary_GetRecastNavmesh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ARecastNavMesh*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NavigationFunctionLibrary.FindDistanceToWall
struct US3NavigationFunctionLibrary_FindDistanceToWall_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ARecastNavMesh*                              NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutClosestPointOnWall;                                    // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NavLinkCustomComponent.IsNavLinkEnabled
struct US3NavLinkCustomComponent_IsNavLinkEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimDataAsset.GetFaceMontagesInstance
struct US3NPCAnimDataAsset_GetFaceMontagesInstance_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3FaceMontageData                          Data;                                                     // (Parm, OutParm)
};

// Function Shenmue3.S3NPCAnimDataAsset.GetFaceMontages
struct US3NPCAnimDataAsset_GetFaceMontages_Params
{
	TArray<struct FS3FaceMontageData>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3NPCAnimInstance.UpdateTraceLocation
struct US3NPCAnimInstance_UpdateTraceLocation_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.UpdatePreciseTarget
struct US3NPCAnimInstance_UpdatePreciseTarget_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.UpdateDominantFoot
struct US3NPCAnimInstance_UpdateDominantFoot_Params
{
	bool                                               bNewRightDominant;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.StopRequestedAnimation
struct US3NPCAnimInstance_StopRequestedAnimation_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.StartUsingStairs
struct US3NPCAnimInstance_StartUsingStairs_Params
{
	bool                                               upflag;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetWalkSequences
struct US3NPCAnimInstance_SetWalkSequences_Params
{
	class UAnimSequence*                               Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Loop;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Stop;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetUseHandMotion
struct US3NPCAnimInstance_SetUseHandMotion_Params
{
	bool                                               bUse;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetTalkStart
struct US3NPCAnimInstance_SetTalkStart_Params
{
	bool                                               bStart;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetPelvisBoneFixed
struct US3NPCAnimInstance_SetPelvisBoneFixed_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetOpenDoorPause
struct US3NPCAnimInstance_SetOpenDoorPause_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3GimmickOpenDoor*                          pGimmickOpenDoor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetNamePlate
struct US3NPCAnimInstance_SetNamePlate_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetLookAtBody
struct US3NPCAnimInstance_SetLookAtBody_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetLocomotionStateAnim
struct US3NPCAnimInstance_SetLocomotionStateAnim_Params
{
	class UAnimSequence*                               AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetLocomotionState
struct US3NPCAnimInstance_SetLocomotionState_Params
{
	TEnumAsByte<ELocomotionState>                      NewLocomotionState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPathChanges;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetHaveItemShowHide
struct US3NPCAnimInstance_SetHaveItemShowHide_Params
{
	bool                                               bShow;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetHaveItemCondition
struct US3NPCAnimInstance_SetHaveItemCondition_Params
{
	bool                                               enableFlag;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetHaveItemAttach
struct US3NPCAnimInstance_SetHaveItemAttach_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.SetForceLookAtTarget
struct US3NPCAnimInstance_SetForceLookAtTarget_Params
{
	class AActor*                                      pTarget;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetFootPlanting
struct US3NPCAnimInstance_SetFootPlanting_Params
{
	bool                                               bRightFoot;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlanted;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SetFingerPointingType
struct US3NPCAnimInstance_SetFingerPointingType_Params
{
	EFingerPointingType                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.SaveAnimatingInfo
struct US3NPCAnimInstance_SaveAnimatingInfo_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.ResetOverwriteLookAtParameters
struct US3NPCAnimInstance_ResetOverwriteLookAtParameters_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.ResetFurimuki
struct US3NPCAnimInstance_ResetFurimuki_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.ResetFingerPointingType
struct US3NPCAnimInstance_ResetFingerPointingType_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.RequestTurnInPlace
struct US3NPCAnimInstance_RequestTurnInPlace_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.RequestTalkMotion
struct US3NPCAnimInstance_RequestTalkMotion_Params
{
	bool                                               bNewTalking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.RequestReactionChange
struct US3NPCAnimInstance_RequestReactionChange_Params
{
	TEnumAsByte<EReactionOnTalk>                       NewTalkReaction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.RequestAnimation
struct US3NPCAnimInstance_RequestAnimation_Params
{
	class UAnimSequence*                               Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.OutputAttachLog
struct US3NPCAnimInstance_OutputAttachLog_Params
{
	struct FName                                       soketName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bOn;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.OnTalkStart
struct US3NPCAnimInstance_OnTalkStart_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.OnFSMStateChanged
struct US3NPCAnimInstance_OnFSMStateChanged_Params
{
	TEnumAsByte<ELocomotionState>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.OnEncounteredDoor
struct US3NPCAnimInstance_OnEncounteredDoor_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.OnAdjustComplete
struct US3NPCAnimInstance_OnAdjustComplete_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.MeshChangedInRange
struct US3NPCAnimInstance_MeshChangedInRange_Params
{
	bool                                               bNear;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.LoadAnimatingInfo
struct US3NPCAnimInstance_LoadAnimatingInfo_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.LeftWalkingToIdle
struct US3NPCAnimInstance_LeftWalkingToIdle_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.LeftStepBack
struct US3NPCAnimInstance_LeftStepBack_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.IsWalking
struct US3NPCAnimInstance_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsTurnArounding
struct US3NPCAnimInstance_IsTurnArounding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsStairsUp
struct US3NPCAnimInstance_IsStairsUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsStairsSkip
struct US3NPCAnimInstance_IsStairsSkip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsReadyTalk_Implementation
struct US3NPCAnimInstance_IsReadyTalk_Implementation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsLookAtBody
struct US3NPCAnimInstance_IsLookAtBody_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsForceLookAt
struct US3NPCAnimInstance_IsForceLookAt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.IsFarAndHidden
struct US3NPCAnimInstance_IsFarAndHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetVelocityFromStopMetaData
struct US3NPCAnimInstance_GetVelocityFromStopMetaData_Params
{
	class UAnimSequence*                               Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetTalkBlendTime
struct US3NPCAnimInstance_GetTalkBlendTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetStartTraceLocationZ
struct US3NPCAnimInstance_GetStartTraceLocationZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetMotionTrans
struct US3NPCAnimInstance_GetMotionTrans_Params
{
	TEnumAsByte<ELocomotionState>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                opt;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  trans;                                                    // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetGreetingMontage
struct US3NPCAnimInstance_GetGreetingMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetEndTraceLocationZ
struct US3NPCAnimInstance_GetEndTraceLocationZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetAttachMeshSocketTransform
struct US3NPCAnimInstance_GetAttachMeshSocketTransform_Params
{
	class UMeshComponent*                              pMeshComp;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OffsetRotator;                                            // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.GetAttachMeshObjectOffset
struct US3NPCAnimInstance_GetAttachMeshObjectOffset_Params
{
	class UMeshComponent*                              pMeshComp;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.FullyBlendedWalkingToSit
struct US3NPCAnimInstance_FullyBlendedWalkingToSit_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.FriendshipGreetingEnd
struct US3NPCAnimInstance_FriendshipGreetingEnd_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.ForceIdlePose
struct US3NPCAnimInstance_ForceIdlePose_Params
{
	bool                                               bSittingIdle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.ExitUsingStairs
struct US3NPCAnimInstance_ExitUsingStairs_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.EndTurningInPlace
struct US3NPCAnimInstance_EndTurningInPlace_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.CoupleBenchActionEnd
struct US3NPCAnimInstance_CoupleBenchActionEnd_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.CoupleBenchActionBegin
struct US3NPCAnimInstance_CoupleBenchActionBegin_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.ConsumeResetFSMFlag
struct US3NPCAnimInstance_ConsumeResetFSMFlag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.ChangeNPCScriptState
struct US3NPCAnimInstance_ChangeNPCScriptState_Params
{
	int                                                NewScriptState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.ChangeNPCAnimSet
struct US3NPCAnimInstance_ChangeNPCAnimSet_Params
{
	class US3NPCMovementAnimationSet*                  NewAnimSet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.CanTalk
struct US3NPCAnimInstance_CanTalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.CanAnimationCansel
struct US3NPCAnimInstance_CanAnimationCansel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.BeginOpenDoorBP
struct US3NPCAnimInstance_BeginOpenDoorBP_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.Attach_HaveItem
struct US3NPCAnimInstance_Attach_HaveItem_Params
{
	struct FHaveItemAttachSetting                      HaveItemSetting;                                          // (Parm)
};

// Function Shenmue3.S3NPCAnimInstance.AnimNotify_StartFingerPointing
struct US3NPCAnimInstance_AnimNotify_StartFingerPointing_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.AnimNotify_EndTurningInPlace
struct US3NPCAnimInstance_AnimNotify_EndTurningInPlace_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.AnimNotify_EndTurnAround
struct US3NPCAnimInstance_AnimNotify_EndTurnAround_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.AnimNotify_EndFingerPointing
struct US3NPCAnimInstance_AnimNotify_EndFingerPointing_Params
{
};

// Function Shenmue3.S3NPCAnimInstance.AnimationCompleteEnd
struct US3NPCAnimInstance_AnimationCompleteEnd_Params
{
	bool                                               bAnimSequenceA;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAnimInstance.AnimationCompleteBegin
struct US3NPCAnimInstance_AnimationCompleteBegin_Params
{
	bool                                               bAnimSequenceA;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NavLink_Stairs.SetStairParam
struct AS3NavLink_Stairs_SetStairParam_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStairDirection>                       dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ext;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.SetMeshVisibility
struct AS3NPCAttachmentActor_SetMeshVisibility_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.RequestActionName
struct AS3NPCAttachmentActor_RequestActionName_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.Notify_HiddenInGame
struct AS3NPCAttachmentActor_Notify_HiddenInGame_Params
{
	bool                                               _bHidden;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.Notify_FadeOut
struct AS3NPCAttachmentActor_Notify_FadeOut_Params
{
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.Notify_FadeIn
struct AS3NPCAttachmentActor_Notify_FadeIn_Params
{
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.IsMeshVisibility
struct AS3NPCAttachmentActor_IsMeshVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.InitializeAttachNative
struct AS3NPCAttachmentActor_InitializeAttachNative_Params
{
	int                                                Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.InitializeAttach
struct AS3NPCAttachmentActor_InitializeAttach_Params
{
	int                                                Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.GetStaticMeshComp
struct AS3NPCAttachmentActor_GetStaticMeshComp_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.GetSkeletalMeshComp
struct AS3NPCAttachmentActor_GetSkeletalMeshComp_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentActor.CallDelayEndTalk
struct AS3NPCAttachmentActor_CallDelayEndTalk_Params
{
};

// Function Shenmue3.S3NPCAttachmentAnimInstance.SetPerBoneMotionBlur
struct US3NPCAttachmentAnimInstance_SetPerBoneMotionBlur_Params
{
	bool                                               bBlur;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentAnimInstance.ResetTransitionFlag
struct US3NPCAttachmentAnimInstance_ResetTransitionFlag_Params
{
};

// Function Shenmue3.S3NPCAttachmentAnimInstance.RequestAnimationName
struct US3NPCAttachmentAnimInstance_RequestAnimationName_Params
{
	struct FName                                       AnimationName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentAnimInstance.RequestAnimationIndex
struct US3NPCAttachmentAnimInstance_RequestAnimationIndex_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentAnimInstance.RequestActionName
struct US3NPCAttachmentAnimInstance_RequestActionName_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCAttachmentAnimInstance.InitializeAttach
struct US3NPCAttachmentAnimInstance_InitializeAttach_Params
{
	int                                                Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCController.GetS3PathFollowingComponent
struct AS3NPCController_GetS3PathFollowingComponent_Params
{
	class US3PathFollowingComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3NPCLeadManager.IsQuickSkipTestOn
struct AS3NPCLeadManager_IsQuickSkipTestOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCLeadManager.GetTalkLocation
struct AS3NPCLeadManager_GetTalkLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCLeadManager.GetNPCCharater
struct AS3NPCLeadManager_GetNPCCharater_Params
{
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCLeadManager.FindSpawnLocation
struct AS3NPCLeadManager_FindSpawnLocation_Params
{
	class ACharacter*                                  PlayerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OffsetLS;                                                 // (Parm, IsPlainOldData)
	bool                                               FacePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	float                                              OutYaw;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCDefinition.SetTagCharaName
struct US3NPCDefinition_SetTagCharaName_Params
{
	struct FName                                       NewName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCDefinition.SetLegLength
struct US3NPCDefinition_SetLegLength_Params
{
	float                                              NewLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCDefinition.SetFacialAnimationData
struct US3NPCDefinition_SetFacialAnimationData_Params
{
	class US3FaceAnimDataAsset*                        DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCLoadTrigger.OnEndOverlap
struct AS3NPCLoadTrigger_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCLoadTrigger.OnBeginOverlap
struct AS3NPCLoadTrigger_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.UpdateTimeManual
struct AS3NPCManager_UpdateTimeManual_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUpdate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.UpdateTime
struct AS3NPCManager_UpdateTime_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.UpdateDistanceFromPlayer
struct AS3NPCManager_UpdateDistanceFromPlayer_Params
{
};

// Function Shenmue3.S3NPCManager.UnspawnNPCFromID
struct AS3NPCManager_UnspawnNPCFromID_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.TeleportOpenedDoorNPC
struct AS3NPCManager_TeleportOpenedDoorNPC_Params
{
	class AS3GimmickOpenDoor*                          pGimmickOpenDoor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.SpawnNPCFromID
struct AS3NPCManager_SpawnNPCFromID_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	struct FBox                                        ActionBounds;                                             // (Parm, IsPlainOldData)
	bool                                               FastFadein;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.ShowNPC
struct AS3NPCManager_ShowNPC_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                TargetNPC;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.SetShenfaSpawnTransform
struct AS3NPCManager_SetShenfaSpawnTransform_Params
{
	struct FTransform                                  _transform;                                               // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.SetNPCHighPriorityShow
struct AS3NPCManager_SetNPCHighPriorityShow_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	bool                                               bHighPriorityShow;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.SetForceStreamNPC
struct AS3NPCManager_SetForceStreamNPC_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.OnStepChanged
struct AS3NPCManager_OnStepChanged_Params
{
	int                                                NewStep;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.OnPlayerBehaviorIdChanged
struct AS3NPCManager_OnPlayerBehaviorIdChanged_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.OnNPCDestroyed
struct AS3NPCManager_OnNPCDestroyed_Params
{
	class AActor*                                      DestroyedNPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.OnFlagChanged
struct AS3NPCManager_OnFlagChanged_Params
{
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.NPCEvent
struct AS3NPCManager_NPCEvent_Params
{
	ENpcManagerEventMessage                            Message;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.IsNPCSchedulePaused
struct AS3NPCManager_IsNPCSchedulePaused_Params
{
	class AS3Character*                                Char;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.IsDebugDisableNPC
struct AS3NPCManager_IsDebugDisableNPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.HideNPC
struct AS3NPCManager_HideNPC_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                TargetNPC;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetNPCFromString
struct AS3NPCManager_GetNPCFromString_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetNPCFromID
struct AS3NPCManager_GetNPCFromID_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetNPCFadeInCount
struct AS3NPCManager_GetNPCFadeInCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetNPCDefinitionFromString
struct AS3NPCManager_GetNPCDefinitionFromString_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	class US3NPCDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetNPCDefinitionFromID
struct AS3NPCManager_GetNPCDefinitionFromID_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	class US3NPCDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetNPCControllerFromID
struct AS3NPCManager_GetNPCControllerFromID_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	class AS3NPCController*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetInstance
struct AS3NPCManager_GetInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3NPCManager*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetCurrentMesh
struct AS3NPCManager_GetCurrentMesh_Params
{
	class US3NPCDefinition*                            inNPCDef;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetAnyNPCFadeInProgress
struct AS3NPCManager_GetAnyNPCFadeInProgress_Params
{
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.GetAllNPC
struct AS3NPCManager_GetAllNPC_Params
{
	TArray<class AS3Character*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3NPCManager.ForceAllPendingTasks
struct AS3NPCManager_ForceAllPendingTasks_Params
{
};

// Function Shenmue3.S3NPCManager.FindAppropriateLocation
struct AS3NPCManager_FindAppropriateLocation_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.ExitChair
struct AS3NPCManager_ExitChair_Params
{
	class AS3GimmickChair*                             gimmick;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.EntryChair
struct AS3NPCManager_EntryChair_Params
{
	class AS3GimmickChair*                             gimmick;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.DestroyNPCCameraCollision
struct AS3NPCManager_DestroyNPCCameraCollision_Params
{
};

// Function Shenmue3.S3NPCManager.CreateNPCCameraCollision
struct AS3NPCManager_CreateNPCCameraCollision_Params
{
	float                                              Distance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.ClearAllScheduleNPCs
struct AS3NPCManager_ClearAllScheduleNPCs_Params
{
};

// Function Shenmue3.S3NPCManager.CheckNPCState
struct AS3NPCManager_CheckNPCState_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	ENpcCheckState                                     State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.ChangeMesh
struct AS3NPCManager_ChangeMesh_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.CanSpawnNPC
struct AS3NPCManager_CanSpawnNPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCManager.BlueprintInitializeNPC
struct AS3NPCManager_BlueprintInitializeNPC_Params
{
	class AS3Character*                                NewNPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3NPCController*                            NewAI;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class US3NPCDefinition*                            NPCDef;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCPathFollowingComponent.ResumePathMove
struct US3NPCPathFollowingComponent_ResumePathMove_Params
{
};

// Function Shenmue3.S3NPCPathFollowingComponent.PausePathMove
struct US3NPCPathFollowingComponent_PausePathMove_Params
{
	bool                                               bResetVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCPathFollowingComponent.GetPathPoints
struct US3NPCPathFollowingComponent_GetPathPoints_Params
{
	TArray<struct FVector>                             OutPoints;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3NPCPathFollowingComponent.GetDistanceToGoal
struct US3NPCPathFollowingComponent_GetDistanceToGoal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCPathFollowingComponent.AbortPathMove
struct US3NPCPathFollowingComponent_AbortPathMove_Params
{
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	bool                                               bResetVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCPOIScheduler.OnOverlapBegin
struct AS3NPCPOIScheduler_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCSchedule.ChangeAnimSequences
struct US3NPCSchedule_ChangeAnimSequences_Params
{
	struct FGameplayTag                                NPCID;                                                    // (Parm)
	class UAnimSequence*                               srcAnim;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               distAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNPCAll;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask.CheckHighPriorityShow
struct US3NPCScheduleTask_CheckHighPriorityShow_Params
{
};

// Function Shenmue3.S3NPCScheduleTask_Animation.AnimCompleteEnd
struct US3NPCScheduleTask_Animation_AnimCompleteEnd_Params
{
	bool                                               bAnimSequenceA;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Animation.AnimCompleteBegin
struct US3NPCScheduleTask_Animation_AnimCompleteBegin_Params
{
	bool                                               bAnimSequenceA;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.StartNextMoveAfterRandomDelay
struct US3NPCScheduleTask_Move_StartNextMoveAfterRandomDelay_Params
{
};

// Function Shenmue3.S3NPCScheduleTask_Move.StartNextMove
struct US3NPCScheduleTask_Move_StartNextMove_Params
{
};

// Function Shenmue3.S3NPCScheduleTask_Move.SearchChair
struct US3NPCScheduleTask_Move_SearchChair_Params
{
	bool                                               bForceSit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.OnSuccess
struct US3NPCScheduleTask_Move_OnSuccess_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.OnPOIWait
struct US3NPCScheduleTask_Move_OnPOIWait_Params
{
};

// Function Shenmue3.S3NPCScheduleTask_Move.OnPOIMoveSuccess
struct US3NPCScheduleTask_Move_OnPOIMoveSuccess_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.OnPOIMoveFailure
struct US3NPCScheduleTask_Move_OnPOIMoveFailure_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.OnPOIAnimComplete
struct US3NPCScheduleTask_Move_OnPOIAnimComplete_Params
{
	bool                                               bAnimSequenceA;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.OnFailure
struct US3NPCScheduleTask_Move_OnFailure_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.MoveComplete
struct US3NPCScheduleTask_Move_MoveComplete_Params
{
};

// Function Shenmue3.S3NPCScheduleTask_Move.LeavedChair
struct US3NPCScheduleTask_Move_LeavedChair_Params
{
};

// Function Shenmue3.S3NPCScheduleTask_Move.IsTargetGimmick
struct US3NPCScheduleTask_Move_IsTargetGimmick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.GetSitDirection
struct US3NPCScheduleTask_Move_GetSitDirection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.GetSeatedChair
struct US3NPCScheduleTask_Move_GetSeatedChair_Params
{
	class AS3GimmickChair*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.GetGimmickChair
struct US3NPCScheduleTask_Move_GetGimmickChair_Params
{
	class AS3GimmickChair*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.GetChairTransform
struct US3NPCScheduleTask_Move_GetChairTransform_Params
{
	struct FTransform                                  trans;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCScheduleTask_Move.GetChairLeavePoint
struct US3NPCScheduleTask_Move_GetChairLeavePoint_Params
{
	struct FTransform                                  trans;                                                    // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3NPCStreamingComponent.OnTriggerDestroyed
struct US3NPCStreamingComponent_OnTriggerDestroyed_Params
{
	class AActor*                                      DestroyedTrigger;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCStreamingComponent.OnNPCDestroyed
struct US3NPCStreamingComponent_OnNPCDestroyed_Params
{
	class AActor*                                      DestroyedNPC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3NPCStreamingComponent.ClothesChanged
struct US3NPCStreamingComponent_ClothesChanged_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.ResumePathMove
struct US3PathFollowingComponent_ResumePathMove_Params
{
};

// Function Shenmue3.S3PathFollowingComponent.PausePathMove
struct US3PathFollowingComponent_PausePathMove_Params
{
	bool                                               bResetVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.IsUsingStairs
struct US3PathFollowingComponent_IsUsingStairs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.IsNearStairs
struct US3PathFollowingComponent_IsNearStairs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.HasDoorOnCurrentPath
struct US3PathFollowingComponent_HasDoorOnCurrentPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetTargetRotation
struct US3PathFollowingComponent_GetTargetRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetTargetLocation
struct US3PathFollowingComponent_GetTargetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetStrideInfo
struct US3PathFollowingComponent_GetStrideInfo_Params
{
	float                                              InRemainingSteps;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustedRemainingStrides;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RequiredAdjustment;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetRemainingSteps
struct US3PathFollowingComponent_GetRemainingSteps_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetPathPoints
struct US3PathFollowingComponent_GetPathPoints_Params
{
	TArray<struct FVector>                             OutPoints;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3PathFollowingComponent.GetPathLength
struct US3PathFollowingComponent_GetPathLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetNextTurnAngle
struct US3PathFollowingComponent_GetNextTurnAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetNextPathLocation
struct US3PathFollowingComponent_GetNextPathLocation_Params
{
	struct FVector                                     InNextPathLocation;                                       // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetNextLocationNormal
struct US3PathFollowingComponent_GetNextLocationNormal_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetNearStairsNavLinkPos
struct US3PathFollowingComponent_GetNearStairsNavLinkPos_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetNearStairsNavLinkNextPos
struct US3PathFollowingComponent_GetNearStairsNavLinkNextPos_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetNearStairsNavLinkActor
struct US3PathFollowingComponent_GetNearStairsNavLinkActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetDistanceToNextTurn
struct US3PathFollowingComponent_GetDistanceToNextTurn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetDistanceToGoal
struct US3PathFollowingComponent_GetDistanceToGoal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetDirectionToGoal
struct US3PathFollowingComponent_GetDirectionToGoal_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.GetAngleToGoal
struct US3PathFollowingComponent_GetAngleToGoal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.DidLastMoveReachGoal
struct US3PathFollowingComponent_DidLastMoveReachGoal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PathFollowingComponent.AbortPathMove
struct US3PathFollowingComponent_AbortPathMove_Params
{
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	bool                                               bResetVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraLibrary.GetNearRotCamera
struct US3PlayerCameraLibrary_GetNearRotCamera_Params
{
	float                                              Rot1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rot2;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerCameraGetNearRotResult               ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraLibrary.CalcCameraCenter
struct US3PlayerCameraLibrary_CalcCameraCenter_Params
{
	struct FVector                                     CameraC;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     CameraP;                                                  // (Parm, IsPlainOldData)
	float                                              CameraDis;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Z_AttentionFlag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z_AttentionRot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotAdd;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerCameraCalcCenterResult               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3PlayerCameraManager.SetNotInterpSearchZoom
struct AS3PlayerCameraManager_SetNotInterpSearchZoom_Params
{
	bool                                               bSeachZoom;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.SetCameraState
struct AS3PlayerCameraManager_SetCameraState_Params
{
	ECameraState                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.IsAutoCameraRotationEnabled
struct AS3PlayerCameraManager_IsAutoCameraRotationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.GetSearchCameraFOV
struct AS3PlayerCameraManager_GetSearchCameraFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.GetIsZoomingInFOV
struct AS3PlayerCameraManager_GetIsZoomingInFOV_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.GetDesiredZoomFOV
struct AS3PlayerCameraManager_GetDesiredZoomFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.GetDefaultViewTarget
struct AS3PlayerCameraManager_GetDefaultViewTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.GetCameraState
struct AS3PlayerCameraManager_GetCameraState_Params
{
	ECameraState                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.GetBaseFOV
struct AS3PlayerCameraManager_GetBaseFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerCameraManager.ChangedCameraState
struct AS3PlayerCameraManager_ChangedCameraState_Params
{
	ECameraState                                       OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECameraState                                       NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.SetAttributePoints
struct US3PlayerExpCollection_SetAttributePoints_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.SetAttributePointRatio
struct US3PlayerExpCollection_SetAttributePointRatio_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.SetAttributeLevel
struct US3PlayerExpCollection_SetAttributeLevel_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.ListUpValidAttributes
struct US3PlayerExpCollection_ListUpValidAttributes_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3PlayerExpCollection.IsValidAttribute
struct US3PlayerExpCollection_IsValidAttribute_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.GetMaxAttributePoints
struct US3PlayerExpCollection_GetMaxAttributePoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.GetAttributeRatio
struct US3PlayerExpCollection_GetAttributeRatio_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.GetAttributePoints
struct US3PlayerExpCollection_GetAttributePoints_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.GetAttributeMinLevel
struct US3PlayerExpCollection_GetAttributeMinLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.GetAttributeMaxLevel
struct US3PlayerExpCollection_GetAttributeMaxLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.GetAttributeLevel
struct US3PlayerExpCollection_GetAttributeLevel_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutNextRatio;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.Debug_SetTotalEarnedAttributeLevels
struct US3PlayerExpCollection_Debug_SetTotalEarnedAttributeLevels_Params
{
	int                                                Levels;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.CountAttributeLevels
struct US3PlayerExpCollection_CountAttributeLevels_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.ConfigureFixedLevel
struct US3PlayerExpCollection_ConfigureFixedLevel_Params
{
	int                                                InAttributeLevel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.ConfigureByTotalXp
struct US3PlayerExpCollection_ConfigureByTotalXp_Params
{
	int                                                InMinAttributeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMaxAttributeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalXpToMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InXpDifficultyRamp;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.Configure
struct US3PlayerExpCollection_Configure_Params
{
	int                                                InMinAttributeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMaxAttributeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAttributePointsToLevel;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.AddAttributePoints
struct US3PlayerExpCollection_AddAttributePoints_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerExpCollection.AddAttributePointRatio
struct US3PlayerExpCollection_AddAttributePointRatio_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.SetExecCountPerformMovement
struct US3PlayerMovementComponent_SetExecCountPerformMovement_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.PauseAvoidance
struct US3PlayerMovementComponent_PauseAvoidance_Params
{
	bool                                               IsPaused;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetVelocityTarget
struct US3PlayerMovementComponent_GetVelocityTarget_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetRequestedVelocity
struct US3PlayerMovementComponent_GetRequestedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetNPCAnimRotateMode
struct US3PlayerMovementComponent_GetNPCAnimRotateMode_Params
{
	TEnumAsByte<ENPCAnimRotateMode>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetNPCAnimMoveMode
struct US3PlayerMovementComponent_GetNPCAnimMoveMode_Params
{
	TEnumAsByte<ENPCAnimMoveMode>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetForwardVelocityProjection
struct US3PlayerMovementComponent_GetForwardVelocityProjection_Params
{
	struct FVector                                     Original;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetEffectiveNPCAnimRotateMode
struct US3PlayerMovementComponent_GetEffectiveNPCAnimRotateMode_Params
{
	TEnumAsByte<ENPCAnimRotateMode>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.GetEffectiveNPCAnimMoveMode
struct US3PlayerMovementComponent_GetEffectiveNPCAnimMoveMode_Params
{
	TEnumAsByte<ENPCAnimMoveMode>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerMovementComponent.CalculateDeltaLocationForDeltaRotation
struct US3PlayerMovementComponent_CalculateDeltaLocationForDeltaRotation_Params
{
	float                                              FromYawDegrees;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ToYawDegrees;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerObstacleSensorComponent.CheckForNPCObstacles
struct US3PlayerObstacleSensorComponent_CheckForNPCObstacles_Params
{
	TArray<class AS3Character*>                        Chars;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AS3Character*                                PreviousChar;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InDirection;                                              // (Parm, IsPlainOldData)
	float                                              PreviousCharRadiusPad;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReactDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              OutDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerObstacleSensorComponent.CalculateStopParameters
struct US3PlayerObstacleSensorComponent_CalculateStopParameters_Params
{
	float                                              WalkCycleTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WalkCycleDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WalkCycleSpeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WalkStopMarkerA;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WalkStopMarkerB;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StopAnimDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToStopPoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutStrideScale;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutQueueStopAnim;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerObstacleSensorComponent.CalculateStopGap
struct US3PlayerObstacleSensorComponent_CalculateStopGap_Params
{
	class AS3Character*                                Char;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerInput.UpdateKeyBinding
struct US3PlayerInput_UpdateKeyBinding_Params
{
};

// Function Shenmue3.S3PostProcessAnimInstance.SetEarringPattern
struct US3PostProcessAnimInstance_SetEarringPattern_Params
{
	EEarringParttern                                   Pattern;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PostProcessAnimInstance.IsNeedSupportHem
struct US3PostProcessAnimInstance_IsNeedSupportHem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PostProcessAnimInstance.IsDisablePhysics
struct US3PostProcessAnimInstance_IsDisablePhysics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerSteeringComponent.UpdateTestCache
struct US3PlayerSteeringComponent_UpdateTestCache_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3PlayerSteeringComponent.SteerTowardsPartnerSpline
struct US3PlayerSteeringComponent_SteerTowardsPartnerSpline_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	float                                              InputYaw;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputMagnitude;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputYaw;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutputMagnitude;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3PlayerSteeringComponent.CheckTalkToNPCWithCache
struct US3PlayerSteeringComponent_CheckTalkToNPCWithCache_Params
{
	class US3TalkComponentBase*                        NPCTalkComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ProceduralAnimBlendComponent.Stop
struct US3ProceduralAnimBlendComponent_Stop_Params
{
};

// Function Shenmue3.S3ProceduralAnimBlendComponent.SampleStep
struct US3ProceduralAnimBlendComponent_SampleStep_Params
{
	float                                              NormalizedTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ProceduralAnimBlendComponent.IsRunning
struct US3ProceduralAnimBlendComponent_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3ProceduralAnimBlendComponent.BeginStep
struct US3ProceduralAnimBlendComponent_BeginStep_Params
{
	struct FTransform                                  TargetActorTransform;                                     // (Parm, IsPlainOldData)
	struct FTransform                                  TargetFootTransform;                                      // (Parm, IsPlainOldData)
	bool                                               LeadWithRight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ProceduralAnimBlendComponent.BeginBlend
struct US3ProceduralAnimBlendComponent_BeginBlend_Params
{
	class UAnimSequenceBase*                           EndSequence;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndSequenceTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ProgressManager.UpdateMainFlowWork
struct US3ProgressManager_UpdateMainFlowWork_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3ProgressManager.UpdateACPlayDateTime
struct US3ProgressManager_UpdateACPlayDateTime_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   NewDateTime;                                              // (Parm)
};

// Function Shenmue3.S3ProgressManager.RemoveMainFlowWork
struct US3ProgressManager_RemoveMainFlowWork_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ProgressManager.InitProgress
struct US3ProgressManager_InitProgress_Params
{
	int                                                flag_array_length;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3ProgressManager.GetMainFlowWork
struct US3ProgressManager_GetMainFlowWork_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3ProgressManager.GetACPlayDateTime
struct US3ProgressManager_GetACPlayDateTime_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   DateTime;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3RainManager.SetEnabled
struct AS3RainManager_SetEnabled_Params
{
	bool                                               NewEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3RainManager.NavigationRaincast
struct AS3RainManager_NavigationRaincast_Params
{
	struct FVector                                     RayStart;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RayEnd;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3RainManager.GetNavData
struct AS3RainManager_GetNavData_Params
{
	class ANavigationData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveGame.GetEventFlag
struct US3SaveGame_GetEventFlag_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SceneAndWidgetCapture2D.OnInterpToggle
struct AS3SceneAndWidgetCapture2D_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.ToggleCamera
struct AS3SearchArea_ToggleCamera_Params
{
};

// Function Shenmue3.S3SearchArea.StopSearch
struct AS3SearchArea_StopSearch_Params
{
	class AS3PlayerController*                         PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.StartSearch
struct AS3SearchArea_StartSearch_Params
{
	class AS3PlayerController*                         PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.StartGrabSubAnim
struct AS3SearchArea_StartGrabSubAnim_Params
{
};

// Function Shenmue3.S3SearchArea.StartCheckCameraTransition
struct AS3SearchArea_StartCheckCameraTransition_Params
{
	float                                              TransitionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.StartACEvent
struct AS3SearchArea_StartACEvent_Params
{
	class UTalkScript*                                 ACEventScript;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.SetLocked
struct AS3SearchArea_SetLocked_Params
{
	bool                                               bNewLocked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.SetEnabledSearchCount
struct AS3SearchArea_SetEnabledSearchCount_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.SetCurrentSearch
struct AS3SearchArea_SetCurrentSearch_Params
{
	class US3SearchComponent*                          Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.SetCurrentFocus
struct AS3SearchArea_SetCurrentFocus_Params
{
	class US3SearchComponent*                          NewForcus;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.SetBusyLockOnChangeFlag
struct AS3SearchArea_SetBusyLockOnChangeFlag_Params
{
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.SelectCameraTransitionComplete
struct AS3SearchArea_SelectCameraTransitionComplete_Params
{
};

// Function Shenmue3.S3SearchArea.ResumeCurrentMontage
struct AS3SearchArea_ResumeCurrentMontage_Params
{
};

// Function Shenmue3.S3SearchArea.RestoreCamera
struct AS3SearchArea_RestoreCamera_Params
{
};

// Function Shenmue3.S3SearchArea.ResetDetailParam
struct AS3SearchArea_ResetDetailParam_Params
{
};

// Function Shenmue3.S3SearchArea.ReleasedItem
struct AS3SearchArea_ReleasedItem_Params
{
};

// Function Shenmue3.S3SearchArea.PlayGetSound
struct AS3SearchArea_PlayGetSound_Params
{
};

// Function Shenmue3.S3SearchArea.PlayCutscene
struct AS3SearchArea_PlayCutscene_Params
{
	struct FName                                       CutsceneId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.PauseCurrentMontage
struct AS3SearchArea_PauseCurrentMontage_Params
{
};

// Function Shenmue3.S3SearchArea.OnStopSearch
struct AS3SearchArea_OnStopSearch_Params
{
};

// Function Shenmue3.S3SearchArea.OnStartSearch
struct AS3SearchArea_OnStartSearch_Params
{
};

// Function Shenmue3.S3SearchArea.OnInteracted
struct AS3SearchArea_OnInteracted_Params
{
	class AActor*                                      InteractingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class US3SearchComponent*                          SearchComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.OnBack
struct AS3SearchArea_OnBack_Params
{
	class AActor*                                      InteractingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.OnAction
struct AS3SearchArea_OnAction_Params
{
	class AActor*                                      InteractingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.MoveGrabedItem
struct AS3SearchArea_MoveGrabedItem_Params
{
};

// Function Shenmue3.S3SearchArea.LookingItem
struct AS3SearchArea_LookingItem_Params
{
};

// Function Shenmue3.S3SearchArea.KillTransitionEvent
struct AS3SearchArea_KillTransitionEvent_Params
{
};

// Function Shenmue3.S3SearchArea.IsValidComponent
struct AS3SearchArea_IsValidComponent_Params
{
	class US3GameInstance*                             GameIns;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class US3SearchComponent*                          Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.IsTransitionBusy
struct AS3SearchArea_IsTransitionBusy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.IsStartSeach
struct AS3SearchArea_IsStartSeach_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.IsShowBackIcon
struct AS3SearchArea_IsShowBackIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.IsLocked
struct AS3SearchArea_IsLocked_Params
{
	bool                                               bForDescription;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.IsEnabledPlaySubTitle
struct AS3SearchArea_IsEnabledPlaySubTitle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.IsDetailTransition
struct AS3SearchArea_IsDetailTransition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.InitializeGather
struct AS3SearchArea_InitializeGather_Params
{
};

// Function Shenmue3.S3SearchArea.GrabCompleted
struct AS3SearchArea_GrabCompleted_Params
{
};

// Function Shenmue3.S3SearchArea.GrabbedItem
struct AS3SearchArea_GrabbedItem_Params
{
};

// Function Shenmue3.S3SearchArea.GetTagCharaName
struct AS3SearchArea_GetTagCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetSearchComponentByName
struct AS3SearchArea_GetSearchComponentByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class US3SearchComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetMoveMotionValue
struct AS3SearchArea_GetMoveMotionValue_Params
{
	bool                                               bReturnMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetLastChildSearch
struct AS3SearchArea_GetLastChildSearch_Params
{
	class US3SearchComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetItem
struct AS3SearchArea_GetItem_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetDetailBackRequest
struct AS3SearchArea_GetDetailBackRequest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetCurrentSearch
struct AS3SearchArea_GetCurrentSearch_Params
{
	class US3SearchComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetCurrentFocus
struct AS3SearchArea_GetCurrentFocus_Params
{
	class US3SearchComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetCurrentCamera
struct AS3SearchArea_GetCurrentCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetClothCharaName
struct AS3SearchArea_GetClothCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetCamera
struct AS3SearchArea_GetCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.GetActionIconType
struct AS3SearchArea_GetActionIconType_Params
{
	ESearchActionIcon                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.FreeSearchLock
struct AS3SearchArea_FreeSearchLock_Params
{
};

// Function Shenmue3.S3SearchArea.ForceUnlock
struct AS3SearchArea_ForceUnlock_Params
{
};

// Function Shenmue3.S3SearchArea.FinishedSearchPoint
struct AS3SearchArea_FinishedSearchPoint_Params
{
};

// Function Shenmue3.S3SearchArea.ExitSearchMode
struct AS3SearchArea_ExitSearchMode_Params
{
};

// Function Shenmue3.S3SearchArea.ExitSearch
struct AS3SearchArea_ExitSearch_Params
{
};

// Function Shenmue3.S3SearchArea.EndGrabSubAnim
struct AS3SearchArea_EndGrabSubAnim_Params
{
};

// Function Shenmue3.S3SearchArea.EndCheckCameraTransition
struct AS3SearchArea_EndCheckCameraTransition_Params
{
};

// Function Shenmue3.S3SearchArea.CheckAction
struct AS3SearchArea_CheckAction_Params
{
	ESearchTiming                                      Timing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.CanOpenMemopad
struct AS3SearchArea_CanOpenMemopad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchArea.CameraTransitionComplete
struct AS3SearchArea_CameraTransitionComplete_Params
{
};

// Function Shenmue3.S3SearchArea.AttachGrabActor
struct AS3SearchArea_AttachGrabActor_Params
{
};

// Function Shenmue3.S3SaveLoadManager.ShowNotInstallDLCDialog
struct US3SaveLoadManager_ShowNotInstallDLCDialog_Params
{
};

// Function Shenmue3.S3SaveLoadManager.SetOverrideSaveParam
struct US3SaveLoadManager_SetOverrideSaveParam_Params
{
	struct FS3SaveOverrideParam                        Param;                                                    // (Parm)
};

// Function Shenmue3.S3SaveLoadManager.SetLoadingScreen
struct US3SaveLoadManager_SetLoadingScreen_Params
{
	ES3LoadingType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.SetLoadedData
struct US3SaveLoadManager_SetLoadedData_Params
{
	class US3SaveGame*                                 SaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ResetSaveData
struct US3SaveLoadManager_ResetSaveData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.OpenSaveWidget
struct US3SaveLoadManager_OpenSaveWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.OpenSaveLoadWidget
struct US3SaveLoadManager_OpenSaveLoadWidget_Params
{
};

// Function Shenmue3.S3SaveLoadManager.OpenLoadWidget
struct US3SaveLoadManager_OpenLoadWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.OpenLevel
struct US3SaveLoadManager_OpenLevel_Params
{
	ES3Where                                           LocationId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventStep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.MakeSlotName
struct US3SaveLoadManager_MakeSlotName_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SaveLoadManager.MakeNewGameData
struct US3SaveLoadManager_MakeNewGameData_Params
{
	class US3SaveGame*                                 SaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ES3Where                                           ClearRestartLevel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.IsIgnoreStep
struct US3SaveLoadManager_IsIgnoreStep_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.IsExistAutoSaveData
struct US3SaveLoadManager_IsExistAutoSaveData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.IsClearData
struct US3SaveLoadManager_IsClearData_Params
{
	class US3SaveGame*                                 SaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.GetUniquePlayerId
struct US3SaveLoadManager_GetUniquePlayerId_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3SaveLoadManager.GetTitleName
struct US3SaveLoadManager_GetTitleName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SaveLoadManager.GetLoadingData
struct US3SaveLoadManager_GetLoadingData_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class US3SaveGame*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.GetGameInstance
struct US3SaveLoadManager_GetGameInstance_Params
{
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ExecSaveSystem
struct US3SaveLoadManager_ExecSaveSystem_Params
{
	bool                                               bAutoSave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ExecSaveIgnore
struct US3SaveLoadManager_ExecSaveIgnore_Params
{
	struct FString                                     SaveLabel;                                                // (Parm, ZeroConstructor)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ExecSave
struct US3SaveLoadManager_ExecSave_Params
{
	struct FString                                     SaveLabel;                                                // (Parm, ZeroConstructor)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ExecLoadSystemAsync
struct US3SaveLoadManager_ExecLoadSystemAsync_Params
{
};

// Function Shenmue3.S3SaveLoadManager.ExecLoad
struct US3SaveLoadManager_ExecLoad_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class US3SaveGame*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ExecAutoSave
struct US3SaveLoadManager_ExecAutoSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.DateTimeToString
struct US3SaveLoadManager_DateTimeToString_Params
{
	struct FDateTime                                   DateTime;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SaveLoadManager.CreateSaveProgressText
struct US3SaveLoadManager_CreateSaveProgressText_Params
{
	ES3Where                                           Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SaveLoadManager.CreateMoneyChipName
struct US3SaveLoadManager_CreateMoneyChipName_Params
{
	int                                                Money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                chip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SaveLoadManager.CreateDifficultyAndKungFuName
struct US3SaveLoadManager_CreateDifficultyAndKungFuName_Params
{
	struct FS3BattleStatsSaveData                      BattleStats;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SaveLoadManager.ClearOverrideSaveParam
struct US3SaveLoadManager_ClearOverrideSaveParam_Params
{
};

// Function Shenmue3.S3SaveLoadManager.BeginLoadData
struct US3SaveLoadManager_BeginLoadData_Params
{
	class US3SaveGame*                                 SaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRetryData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SaveLoadManager.ApplyIniSaveData
struct US3SaveLoadManager_ApplyIniSaveData_Params
{
};

// Function Shenmue3.S3SearchComponent.SetUniqueItemName
struct US3SearchComponent_SetUniqueItemName_Params
{
	struct FString                                     UniqueName;                                               // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3SearchComponent.SetIconColor
struct US3SearchComponent_SetIconColor_Params
{
	struct FLinearColor                                NormalColor;                                              // (Parm, IsPlainOldData)
	struct FLinearColor                                DisableColor;                                             // (Parm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.SetCharacterWorldTransform
struct US3SearchComponent_SetCharacterWorldTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (Parm, IsPlainOldData)
	float                                              AdjustRight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.IsMoveItem
struct US3SearchComponent_IsMoveItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.IsDeleteItem
struct US3SearchComponent_IsDeleteItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.InitializePreGrabActorLocation
struct US3SearchComponent_InitializePreGrabActorLocation_Params
{
};

// Function Shenmue3.S3SearchComponent.InitializePreComponentLocation
struct US3SearchComponent_InitializePreComponentLocation_Params
{
};

// Function Shenmue3.S3SearchComponent.InitializeLocationBackUp
struct US3SearchComponent_InitializeLocationBackUp_Params
{
};

// Function Shenmue3.S3SearchComponent.GetUniqueItemName
struct US3SearchComponent_GetUniqueItemName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SearchComponent.GetSearchEnableRadius
struct US3SearchComponent_GetSearchEnableRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetNextSearchStep
struct US3SearchComponent_GetNextSearchStep_Params
{
	struct FS3SearchStep                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3SearchComponent.GetGrabMotionTypeName
struct US3SearchComponent_GetGrabMotionTypeName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SearchComponent.GetFirstActionIconType
struct US3SearchComponent_GetFirstActionIconType_Params
{
	ESearchActionIcon                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetEditedStep
struct US3SearchComponent_GetEditedStep_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetCurrentTextDisplayTimeOverride
struct US3SearchComponent_GetCurrentTextDisplayTimeOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetCurrentSearchStep
struct US3SearchComponent_GetCurrentSearchStep_Params
{
	struct FS3SearchStep                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3SearchComponent.GetCurrentScriptLabel
struct US3SearchComponent_GetCurrentScriptLabel_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetCurrentPreviewSequence
struct US3SearchComponent_GetCurrentPreviewSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetCurrentMontage
struct US3SearchComponent_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetCharacterWorldTransform
struct US3SearchComponent_GetCharacterWorldTransform_Params
{
	bool                                               bForArmMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.GetCameraTransform
struct US3SearchComponent_GetCameraTransform_Params
{
	float                                              InterpTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOVOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewModeFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.FinalizeComponent
struct US3SearchComponent_FinalizeComponent_Params
{
	bool                                               bActionComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SearchComponent.AdvanceSearch
struct US3SearchComponent_AdvanceSearch_Params
{
	bool                                               bReverse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnAll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SearchPamphletComponent.UpdateFlagCount
struct US3SearchPamphletComponent_UpdateFlagCount_Params
{
};

// Function Shenmue3.S3ShopDataManagerBase.GetShopData
struct AS3ShopDataManagerBase_GetShopData_Params
{
	class US3ShopData*                                 ShopData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class US3ShopDataBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SkyManager.CalcMoonPhase
struct AS3SkyManager_CalcMoonPhase_Params
{
};

// Function Shenmue3.S3SoundPlayer.Stop
struct AS3SoundPlayer_Stop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SoundPlayer.SetVoiceFlag
struct AS3SoundPlayer_SetVoiceFlag_Params
{
	bool                                               bNewFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SoundPlayer.SetSystemVolume
struct AS3SoundPlayer_SetSystemVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SoundPlayer.Restart
struct AS3SoundPlayer_Restart_Params
{
};

// Function Shenmue3.S3SoundPlayer.PermitPlay
struct AS3SoundPlayer_PermitPlay_Params
{
};

// Function Shenmue3.S3SoundPlayer.Pause
struct AS3SoundPlayer_Pause_Params
{
};

// Function Shenmue3.S3SoundPlayer.GetPlaybackTime
struct AS3SoundPlayer_GetPlaybackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SpectatorPawn.InputY
struct AS3SpectatorPawn_InputY_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SpectatorPawn.InputX
struct AS3SpectatorPawn_InputX_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SplineMoveActor.SplineInit
struct AS3SplineMoveActor_SplineInit_Params
{
};

// Function Shenmue3.S3SplineMoveActor.IsLocationWithinSplineWidth
struct AS3SplineMoveActor_IsLocationWithinSplineWidth_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SplineMoveActor.GetWidthAtDistanceAlongSpline
struct AS3SplineMoveActor_GetWidthAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SplineMoveActor.FindSplineDistanceAndForward
struct AS3SplineMoveActor_FindSplineDistanceAndForward_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              DistanceAlongSpline;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SplineMoveActor.FindSplineDistance
struct AS3SplineMoveActor_FindSplineDistance_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3StaticMeshWithLights.UpdateLight
struct AS3StaticMeshWithLights_UpdateLight_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StaticMeshWithLights.OnSetLightEnable
struct AS3StaticMeshWithLights_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StaticMeshWithLights.OnSetLightCastShadow
struct AS3StaticMeshWithLights_OnSetLightCastShadow_Params
{
	bool                                               bNewLightCastShadow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.UpdateClothParts
struct US3StatusManager_UpdateClothParts_Params
{
	TMap<EClothPartsType, struct FName>                WearParts;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.UnlockClothParts
struct US3StatusManager_UnlockClothParts_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.SetRedemptionPoint
struct US3StatusManager_SetRedemptionPoint_Params
{
	int                                                NewPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.IsUnlockedClothParts
struct US3StatusManager_IsUnlockedClothParts_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.InitStatus
struct US3StatusManager_InitStatus_Params
{
};

// Function Shenmue3.S3StatusManager.GetWearClothParts
struct US3StatusManager_GetWearClothParts_Params
{
	TMap<EClothPartsType, struct FName>                WearParts;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.GetUnlockedClothParts
struct US3StatusManager_GetUnlockedClothParts_Params
{
	TArray<struct FName>                               UnlockedParts;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               bRyo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.GetRedemptionPoint
struct US3StatusManager_GetRedemptionPoint_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3StatusManager.AddRedemptionPoint
struct US3StatusManager_AddRedemptionPoint_Params
{
	int                                                AddPoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StopAnimMetaData.SetYawMinMax
struct US3StopAnimMetaData_SetYawMinMax_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StopAnimMetaData.MassageCurves
struct US3StopAnimMetaData_MassageCurves_Params
{
};

// Function Shenmue3.S3StopAnimMetaData.GetYawAtDistance
struct US3StopAnimMetaData_GetYawAtDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3StopAnimMetaData.AddYawDataPoint
struct US3StopAnimMetaData_AddYawDataPoint_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StopAnimMetaData.AddSpeedDataPoint
struct US3StopAnimMetaData_AddSpeedDataPoint_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3StopAnimMetaData.AddDataPoint
struct US3StopAnimMetaData_AddDataPoint_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SpringArmComponent.ZoomFlagOn
struct US3SpringArmComponent_ZoomFlagOn_Params
{
};

// Function Shenmue3.S3SpringArmComponent.ZoomFlagOff
struct US3SpringArmComponent_ZoomFlagOff_Params
{
};

// Function Shenmue3.S3SpringArmComponent.IsHitUp
struct US3SpringArmComponent_IsHitUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SpringArmComponent.IsHit
struct US3SpringArmComponent_IsHit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3StreetFightTrigger.GetNextFighter
struct AS3StreetFightTrigger_GetNextFighter_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SoundManager.Stop
struct AS3SoundManager_Stop_Params
{
	struct FName                                       InId;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SoundManager.SetTalkVolume
struct AS3SoundManager_SetTalkVolume_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SoundManager.SetEnableFadePause
struct AS3SoundManager_SetEnableFadePause_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SoundManager.Play
struct AS3SoundManager_Play_Params
{
	class USoundAtomCue*                               Cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SoundManager.GetPlayerById
struct AS3SoundManager_GetPlayerById_Params
{
	struct FName                                       InId;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3SoundPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SoundManager.CreateAtomComponent
struct AS3SoundManager_CreateAtomComponent_Params
{
	class UAtomComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3SubmissionConfig.SetDemoType
struct US3SubmissionConfig_SetDemoType_Params
{
	ES3DemoType                                        NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.UpdateKeyConfig
struct US3SystemManager_UpdateKeyConfig_Params
{
	ES3KeyConfigType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.UpdateCulture
struct US3SystemManager_UpdateCulture_Params
{
};

// Function Shenmue3.S3SystemManager.SetWindowParam
struct US3SystemManager_SetWindowParam_Params
{
	ES3WindowType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InResolution;                                             // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3SystemManager.SetVSync
struct US3SystemManager_SetVSync_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetVoiceVolume
struct US3SystemManager_SetVoiceVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetVoiceLanguage
struct US3SystemManager_SetVoiceLanguage_Params
{
	ES3VoiceLanguage                                   InVoiceLanguage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetSEVolume
struct US3SystemManager_SetSEVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetLocale
struct US3SystemManager_SetLocale_Params
{
	ES3Locale                                          InLocale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetDisplayGamma
struct US3SystemManager_SetDisplayGamma_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetBGMVolume
struct US3SystemManager_SetBGMVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.SetBattleRallyInfo
struct US3SystemManager_SetBattleRallyInfo_Params
{
	struct FS3BattleRallySaveData                      Info;                                                     // (Parm)
};

// Function Shenmue3.S3SystemManager.GetWindowParam
struct US3SystemManager_GetWindowParam_Params
{
	ES3WindowType                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutResolution;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3SystemManager.GetVSync
struct US3SystemManager_GetVSync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetVoiceVolume
struct US3SystemManager_GetVoiceVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetVoiceLanguage
struct US3SystemManager_GetVoiceLanguage_Params
{
	ES3VoiceLanguage                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetSEVolume
struct US3SystemManager_GetSEVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetRewardPasswords
struct US3SystemManager_GetRewardPasswords_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3SystemManager.GetLocale
struct US3SystemManager_GetLocale_Params
{
	ES3Locale                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetKeyConfigValue
struct US3SystemManager_GetKeyConfigValue_Params
{
	ES3KeyConfigType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetDisplayGamma
struct US3SystemManager_GetDisplayGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetBGMVolume
struct US3SystemManager_GetBGMVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3SystemManager.GetBattleRallyInfo
struct US3SystemManager_GetBattleRallyInfo_Params
{
	struct FS3BattleRallySaveData                      Info;                                                     // (Parm, OutParm)
};

// Function Shenmue3.S3SystemManager.ClearRewardPasswords
struct US3SystemManager_ClearRewardPasswords_Params
{
};

// Function Shenmue3.S3SystemManager.AddRewardPassword
struct US3SystemManager_AddRewardPassword_Params
{
	struct FName                                       Password;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponent.IsValidMiniGame
struct US3TalkComponent_IsValidMiniGame_Params
{
	class UTalkScript*                                 Script;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponent.IsLineSight
struct US3TalkComponent_IsLineSight_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponent.IsInTalkAngle
struct US3TalkComponent_IsInTalkAngle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponent.GetInteractionAngle
struct US3TalkComponent_GetInteractionAngle_Params
{
	struct FVector                                     RefLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     RefDirection;                                             // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponent.GetEyeLocation
struct US3TalkComponent_GetEyeLocation_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkComponent.CheckLineOfSight
struct US3TalkComponent_CheckLineOfSight_Params
{
	struct FVector                                     PlayerLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     NPCLocation;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.SetTalkScriptProgressIndex
struct AS3TalkEventManagerBase_SetTalkScriptProgressIndex_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 TalkScript;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.SetJoinedThisTalkActors
struct AS3TalkEventManagerBase_SetJoinedThisTalkActors_Params
{
	TArray<class AActor*>                              NewActors;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3TalkEventManagerBase.SetBetweenVolumeUnloadRequestsMinTime
struct AS3TalkEventManagerBase_SetBetweenVolumeUnloadRequestsMinTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.SetActorsTextureForceResidentFlag
struct AS3TalkEventManagerBase_SetActorsTextureForceResidentFlag_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.ResetBetweenVolumeUnloadRequestsMinTime
struct AS3TalkEventManagerBase_ResetBetweenVolumeUnloadRequestsMinTime_Params
{
};

// Function Shenmue3.S3TalkEventManagerBase.RequestStepChange
struct AS3TalkEventManagerBase_RequestStepChange_Params
{
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.RemoveJoinedThisTalkActors
struct AS3TalkEventManagerBase_RemoveJoinedThisTalkActors_Params
{
	class AActor*                                      RemoveActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.OnVoiceFinished
struct AS3TalkEventManagerBase_OnVoiceFinished_Params
{
};

// Function Shenmue3.S3TalkEventManagerBase.OnTalkStart
struct AS3TalkEventManagerBase_OnTalkStart_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.OnFinishedSubEvent
struct AS3TalkEventManagerBase_OnFinishedSubEvent_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.OnFinished
struct AS3TalkEventManagerBase_OnFinished_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.OnActivate
struct AS3TalkEventManagerBase_OnActivate_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.IsTalking
struct AS3TalkEventManagerBase_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.IsMultipleTalking
struct AS3TalkEventManagerBase_IsMultipleTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.IsMiniGameTalk
struct AS3TalkEventManagerBase_IsMiniGameTalk_Params
{
	bool                                               bStrictly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.IsJoinTalk
struct AS3TalkEventManagerBase_IsJoinTalk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.Initialize
struct AS3TalkEventManagerBase_Initialize_Params
{
	class AActor*                                      InTalkedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsBS;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 InTalkScript;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class US3TalkComponent*                            InTalkComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENPCTalkState                                      InTalkState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.GetTalkScriptProgressIndex
struct AS3TalkEventManagerBase_GetTalkScriptProgressIndex_Params
{
	bool                                               bCanSkip;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 TalkScript;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.GetMultipleTalkCanterLocation2D
struct AS3TalkEventManagerBase_GetMultipleTalkCanterLocation2D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.GetJoinTalkActorFromType
struct AS3TalkEventManagerBase_GetJoinTalkActorFromType_Params
{
	ES3CharacterType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.GetJoinedThisTalkActors
struct AS3TalkEventManagerBase_GetJoinedThisTalkActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TalkEventManagerBase.GetActorUniqueName
struct AS3TalkEventManagerBase_GetActorUniqueName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TalkEventManagerBase.Finalize
struct AS3TalkEventManagerBase_Finalize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.DumpCallStack
struct AS3TalkEventManagerBase_DumpCallStack_Params
{
	struct FString                                     ScriptName;                                               // (Parm, ZeroConstructor)
	struct FString                                     outputFolderName;                                         // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3TalkEventManagerBase.ClearJoinedThisTalkActors
struct AS3TalkEventManagerBase_ClearJoinedThisTalkActors_Params
{
};

// Function Shenmue3.S3TalkEventManagerBase.ClearCallStack
struct AS3TalkEventManagerBase_ClearCallStack_Params
{
};

// Function Shenmue3.S3TalkEventManagerBase.ChangeBoundsScale
struct AS3TalkEventManagerBase_ChangeBoundsScale_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.AddJoinedThisTalkActors
struct AS3TalkEventManagerBase_AddJoinedThisTalkActors_Params
{
	class AActor*                                      AddActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.ActivateSubEvent
struct AS3TalkEventManagerBase_ActivateSubEvent_Params
{
	TArray<class UTalkEventTaskBase*>                  EventData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerBase.ActivateEvent
struct AS3TalkEventManagerBase_ActivateEvent_Params
{
	TArray<class UTalkEventTaskBase*>                  EventData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerFunctionLibrary.TalkEvent_IsJoinTalk
struct US3TalkEventManagerFunctionLibrary_TalkEvent_IsJoinTalk_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerFunctionLibrary.IsSight
struct US3TalkEventManagerFunctionLibrary_IsSight_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  FromChara;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  ToChara;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerFunctionLibrary.IsRunningSubQuest
struct US3TalkEventManagerFunctionLibrary_IsRunningSubQuest_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubQuestGlobalFlagIndex;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerFunctionLibrary.GetS3CharacterAll
struct US3TalkEventManagerFunctionLibrary_GetS3CharacterAll_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3TalkEventManagerFunctionLibrary.GetNPCTalkState
struct US3TalkEventManagerFunctionLibrary_GetNPCTalkState_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ENPCTalkState                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkEventManagerFunctionLibrary.BreakInt32Range
struct US3TalkEventManagerFunctionLibrary_BreakInt32Range_Params
{
	struct FInt32Range                                 Range;                                                    // (Parm)
	TEnumAsByte<ERangeBoundTypes>                      LowerType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LowerValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERangeBoundTypes>                      UpperType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                UpperValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkAvoidanceComponent.MakeRadialLocations
struct US3TalkAvoidanceComponent_MakeRadialLocations_Params
{
	float                                              BaseDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DistanceDiv;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AngleDiv;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutLocations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3TalkAvoidanceComponent.MakeCircularSurroundLocations
struct US3TalkAvoidanceComponent_MakeCircularSurroundLocations_Params
{
	class ACharacter*                                  SurroundChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutLocations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3TalkAvoidanceComponent.IsDebugDrawingEnabled
struct US3TalkAvoidanceComponent_IsDebugDrawingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkInterface.Screen_Player
struct US3TalkInterface_Screen_Player_Params
{
};

// Function Shenmue3.S3TalkInterface.Screen_NPC
struct US3TalkInterface_Screen_NPC_Params
{
};

// Function Shenmue3.S3TalkInterface.OnTalkStart
struct US3TalkInterface_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3TalkInterface.OnTalkFinished
struct US3TalkInterface_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkInterface.IsTalking
struct US3TalkInterface_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.SetProgressIndex
struct US3TalkScriptManager_SetProgressIndex_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.SetLoadData
struct US3TalkScriptManager_SetLoadData_Params
{
	TArray<struct FTalkScriptData>                     talkScriptIndexData;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, struct FNPCTalkData>          NPCTalkData;                                              // (Parm, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     PcData;                                                   // (Parm, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     BsData;                                                   // (Parm, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     MiniGameData;                                             // (Parm, ZeroConstructor)
	TMap<struct FString, struct FTalkScheduleData>     ShopData;                                                 // (Parm, ZeroConstructor)
	TMap<struct FString, int>                          ACData;                                                   // (Parm, ZeroConstructor)
	TArray<struct FName>                               CutsceneIds;                                              // (Parm, ZeroConstructor)
	TMap<int, struct FDateTime>                        StartTimer;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.SetIsFirstContactState
struct US3TalkScriptManager_SetIsFirstContactState_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	bool                                               newParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.OnGameTimeEvent
struct US3TalkScriptManager_OnGameTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.OnGameDateNext
struct US3TalkScriptManager_OnGameDateNext_Params
{
};

// Function Shenmue3.S3TalkScriptManager.IsPlayedCutscene
struct US3TalkScriptManager_IsPlayedCutscene_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.Init
struct US3TalkScriptManager_Init_Params
{
};

// Function Shenmue3.S3TalkScriptManager.GetTalkScriptIndexData
struct US3TalkScriptManager_GetTalkScriptIndexData_Params
{
	TArray<struct FTalkScriptData>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TalkScriptManager.GetProgressStep
struct US3TalkScriptManager_GetProgressStep_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.GetProgressIndex
struct US3TalkScriptManager_GetProgressIndex_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.GetIsFirstContactState
struct US3TalkScriptManager_GetIsFirstContactState_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.GetGameInstance
struct US3TalkScriptManager_GetGameInstance_Params
{
	class US3GameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.GetACPlayCount
struct US3TalkScriptManager_GetACPlayCount_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.CreateKeyFromNpcIdAndScrinptName
struct US3TalkScriptManager_CreateKeyFromNpcIdAndScrinptName_Params
{
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ScriptName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TalkScriptManager.AddCutsceneId
struct US3TalkScriptManager_AddCutsceneId_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TalkScriptManager.AddACPlayCount
struct US3TalkScriptManager_AddACPlayCount_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function Shenmue3.S3TextDataTalk.GetClipperString
struct US3TextDataTalk_GetClipperString_Params
{
	ES3VoiceLanguage                                   VoiceLanguage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TalkCameraManagerBase.SetGameCameraCutThisFrame
struct AS3TalkCameraManagerBase_SetGameCameraCutThisFrame_Params
{
	bool                                               newParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchPointLight.UpdateLight
struct AS3TimeSwitchPointLight_UpdateLight_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchPointLight.SetVisibleTime
struct AS3TimeSwitchPointLight_SetVisibleTime_Params
{
	bool                                               bNewVisibleTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchPointLight.SetLimitLightArea
struct AS3TimeSwitchPointLight_SetLimitLightArea_Params
{
	bool                                               bNewLimitLightArea;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchPointLight.OnSetLightEnable
struct AS3TimeSwitchPointLight_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchPointLight.OnSetLightCastShadow
struct AS3TimeSwitchPointLight_OnSetLightCastShadow_Params
{
	bool                                               bNewLightCastShadow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchPointLight.InitialDisable
struct AS3TimeSwitchPointLight_InitialDisable_Params
{
};

// Function Shenmue3.S3TimeSwitchSpotLight.UpdateLight
struct AS3TimeSwitchSpotLight_UpdateLight_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchSpotLight.SetVisibleTime
struct AS3TimeSwitchSpotLight_SetVisibleTime_Params
{
	bool                                               bNewVisibleTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchSpotLight.SetLimitLightArea
struct AS3TimeSwitchSpotLight_SetLimitLightArea_Params
{
	bool                                               bNewLimitLightArea;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchSpotLight.OnSetLightEnable
struct AS3TimeSwitchSpotLight_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TimeSwitchSpotLight.OnSetLightCastShadow
struct AS3TimeSwitchSpotLight_OnSetLightCastShadow_Params
{
	bool                                               bNewLightCastShadow;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TextDataLibrary.StringLengthConvertTime
struct US3TextDataLibrary_StringLengthConvertTime_Params
{
	struct FString                                     S;                                                        // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataLibrary.ShouldSplitTextData
struct US3TextDataLibrary_ShouldSplitTextData_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataLibrary.RemoveRuby
struct US3TextDataLibrary_RemoveRuby_Params
{
	struct FString                                     CheckString;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.GetVoiceLanguageCueSheetPostfix
struct US3TextDataLibrary_GetVoiceLanguageCueSheetPostfix_Params
{
	ES3VoiceLanguage                                   VoiceLanguage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.GetVoiceLanguageAbbreviation
struct US3TextDataLibrary_GetVoiceLanguageAbbreviation_Params
{
	ES3VoiceLanguage                                   VoiceLanguage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.GetVoiceAssetPath
struct US3TextDataLibrary_GetVoiceAssetPath_Params
{
	ES3TextPathType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.GetTextDataAssets
struct US3TextDataLibrary_GetTextDataAssets_Params
{
	ES3TextPathType                                    PathType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ES3Locale                                          Locale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LabelKeyword;                                             // (Parm, ZeroConstructor)
	TArray<class US3TextDataAsset*>                    OutAssets;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Shenmue3.S3TextDataLibrary.GetTextDataAssetPath
struct US3TextDataLibrary_GetTextDataAssetPath_Params
{
	ES3TextPathType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.GetSplitAssetName
struct US3TextDataLibrary_GetSplitAssetName_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.GetLocaleAbbreviation
struct US3TextDataLibrary_GetLocaleAbbreviation_Params
{
	ES3Locale                                          Locale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.ConvertFullWidthCharacter
struct US3TextDataLibrary_ConvertFullWidthCharacter_Params
{
	struct FString                                     ConvertString;                                            // (Parm, ZeroConstructor)
	ES3Locale                                          Locale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataLibrary.AddSimpleLineBreak
struct US3TextDataLibrary_AddSimpleLineBreak_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                MinLengthToBreak;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRatio;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.Initialize
struct US3TextDataManagerBase_Initialize_Params
{
	ES3Locale                                          InLocale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ES3VoiceLanguage                                   InVoiceLanguage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetVoiceByLabel
struct US3TextDataManagerBase_GetVoiceByLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	struct FName                                       CharaName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetTextDataObjectByLabel
struct US3TextDataManagerBase_GetTextDataObjectByLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	ES3TextDataType                                    OutType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputErrorLog;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetTextDataByLabelAndLocale
struct US3TextDataManagerBase_GetTextDataByLabelAndLocale_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ES3Locale                                          InLocale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	ES3TextDataType                                    OutType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputErrorLog;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3TextData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.GetTextDataByLabel
struct US3TextDataManagerBase_GetTextDataByLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	ES3TextDataType                                    OutType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputErrorLog;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FS3TextData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.GetTextDataAssetByLabelAndLocale
struct US3TextDataManagerBase_GetTextDataAssetByLabelAndLocale_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ES3Locale                                          InLocale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	bool                                               bOutputErrorLog;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class US3TextDataAsset*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetTextDataAssetByLabel
struct US3TextDataManagerBase_GetTextDataAssetByLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RootAssetPath;                                            // (Parm, ZeroConstructor)
	bool                                               bOutputErrorLog;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class US3TextDataAsset*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetTextByLabel
struct US3TextDataManagerBase_GetTextByLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.GetOuterGameMode
struct US3TextDataManagerBase_GetOuterGameMode_Params
{
	class AS3GameMode*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetItemNameAndDescription
struct US3TextDataManagerBase_GetItemNameAndDescription_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutName;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     OutDescription;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetItemName
struct US3TextDataManagerBase_GetItemName_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.GetItemDescription
struct US3TextDataManagerBase_GetItemDescription_Params
{
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.GetFolderName
struct US3TextDataManagerBase_GetFolderName_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Out;                                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.GetCueSheetAssetPath
struct US3TextDataManagerBase_GetCueSheetAssetPath_Params
{
	struct FString                                     BaseSheetName;                                            // (Parm, ZeroConstructor)
	ES3TextPathType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shenmue3.S3TextDataManagerBase.FixupTextPathType
struct US3TextDataManagerBase_FixupTextPathType_Params
{
	ES3TextPathType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3TextDataManagerBase.EnableCacheData
struct US3TextDataManagerBase_EnableCacheData_Params
{
};

// Function Shenmue3.S3TextDataManagerBase.DisableCacheData
struct US3TextDataManagerBase_DisableCacheData_Params
{
};

// Function Shenmue3.S3WalkOnlyTrigger.SetEnable
struct AS3WalkOnlyTrigger_SetEnable_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3WalkOnlyTrigger.GetEnable
struct AS3WalkOnlyTrigger_GetEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WaveActor.SnapAttachedActorsToWave
struct AS3WaveActor_SnapAttachedActorsToWave_Params
{
};

// Function Shenmue3.S3WaveActor.ProjectPointToWave
struct AS3WaveActor_ProjectPointToWave_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
	bool                                               bZOnly;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WaveActor.ExitArea
struct AS3WaveActor_ExitArea_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3WaveActor.EnterArea
struct AS3WaveActor_EnterArea_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shenmue3.S3WeatherDataAsset.GetDefaultHour
struct US3WeatherDataAsset_GetDefaultHour_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WeatherFunctionLibrary.TestInRainShelter
struct US3WeatherFunctionLibrary_TestInRainShelter_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WeatherFunctionLibrary.GetRainNavData
struct US3WeatherFunctionLibrary_GetRainNavData_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AS3RainNavData*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WetnessComponent.SimulateTimeSkip
struct US3WetnessComponent_SimulateTimeSkip_Params
{
};

// Function Shenmue3.S3WetnessComponent.SetRoughWetnessValue
struct US3WetnessComponent_SetRoughWetnessValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3WetnessComponent.SetMeshComponents
struct US3WetnessComponent_SetMeshComponents_Params
{
	TArray<class UMeshComponent*>                      Components;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shenmue3.S3WetnessComponent.SetMeshComponent
struct US3WetnessComponent_SetMeshComponent_Params
{
	class UMeshComponent*                              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Shenmue3.S3WetnessComponent.SetIsInShelter
struct US3WetnessComponent_SetIsInShelter_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3WetnessComponent.ResetWetnessValue
struct US3WetnessComponent_ResetWetnessValue_Params
{
};

// Function Shenmue3.S3WetnessComponent.IsInShelter
struct US3WetnessComponent_IsInShelter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WetnessComponent.GetWetnessValue
struct US3WetnessComponent_GetWetnessValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WetnessComponent.EnableAutomaticShelterUpdate
struct US3WetnessComponent_EnableAutomaticShelterUpdate_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.S3WheeledVehicle.SetLinearDriveVelocity
struct AS3WheeledVehicle_SetLinearDriveVelocity_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WheeledVehicle.SetLinearDrivePosition
struct AS3WheeledVehicle_SetLinearDrivePosition_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WheeledVehicle.GetLinearDriveVelocity
struct AS3WheeledVehicle_GetLinearDriveVelocity_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WheeledVehicle.GetLinearDrivePosition
struct AS3WheeledVehicle_GetLinearDrivePosition_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.S3WidgetToRenderTargetComponent.DrawWidgetToRenderTarget
struct US3WidgetToRenderTargetComponent_DrawWidgetToRenderTarget_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ScriptFunctionLibrary.GetNPCDefinition
struct UScriptFunctionLibrary_GetNPCDefinition_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NPCID;                                                    // (Parm, ZeroConstructor)
	class US3NPCDefinition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.ScriptFunctionLibrary.CreateTaskWithClass
struct UScriptFunctionLibrary_CreateTaskWithClass_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TaskClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shenmue3.TalkCameraFunctionLibrary.TakeScreenShotWithCompression
struct UTalkCameraFunctionLibrary_TakeScreenShotWithCompression_Params
{
	struct FString                                     fineName;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EImageFormatType>                      inFormat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInsertTimeStampToFileName;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInShowUI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddFilenameSuffix;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.TalkCameraFunctionLibrary.TakeScreenShot
struct UTalkCameraFunctionLibrary_TakeScreenShot_Params
{
	struct FString                                     fineName;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EImageFormatType>                      Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInsertTimeStampToFileName;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInShowUI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddFilenameSuffix;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.TalkCameraFunctionLibrary.PrintTalkCameraLog
struct UTalkCameraFunctionLibrary_PrintTalkCameraLog_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	bool                                               bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.TalkEventProcessBase.Update
struct UTalkEventProcessBase_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.TalkEventProcessBase.Initialize
struct UTalkEventProcessBase_Initialize_Params
{
	class UTalkEventTaskBase*                          Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AS3TalkEventManagerBase*                     TalkManager;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shenmue3.TalkEventProcessBase.Finalize
struct UTalkEventProcessBase_Finalize_Params
{
};

// Function Shenmue3.TalkEventProcessBase.Activate
struct UTalkEventProcessBase_Activate_Params
{
};

// Function Shenmue3.ShopTask.SetCancelLabelIndex
struct UShopTask_SetCancelLabelIndex_Params
{
};

// Function Shenmue3.ShopTask.SetBuyLabelIndex
struct UShopTask_SetBuyLabelIndex_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
