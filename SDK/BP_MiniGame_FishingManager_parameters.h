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

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DisableCheckSuspendTime
struct ABP_MiniGame_FishingManager_C_DisableCheckSuspendTime_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayFishing
struct ABP_MiniGame_FishingManager_C_SetEnabledPlayFishing_Params
{
	bool                                               bEnabledPlayFishing;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetEnabledPlayFishing
struct ABP_MiniGame_FishingManager_C_GetEnabledPlayFishing_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateLimitTIme
struct ABP_MiniGame_FishingManager_C_UpdateLimitTIme_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetRentalData
struct ABP_MiniGame_FishingManager_C_ResetRentalData_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.InitializeRentalData
struct ABP_MiniGame_FishingManager_C_InitializeRentalData_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetEnabledPlayerControl
struct ABP_MiniGame_FishingManager_C_SetEnabledPlayerControl_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateReatalEndPop
struct ABP_MiniGame_FishingManager_C_CreateReatalEndPop_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetTimeLimit
struct ABP_MiniGame_FishingManager_C_ResetTimeLimit_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.StartUpdateResult
struct ABP_MiniGame_FishingManager_C_StartUpdateResult_Params
{
	TArray<struct FST_Fishing_ResultFishData>          result_fish_array;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetResultFishArray
struct ABP_MiniGame_FishingManager_C_SetResultFishArray_Params
{
	TArray<struct FST_Fishing_ResultFishData>          result_fish_array;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SetNowShopData
struct ABP_MiniGame_FishingManager_C_SetNowShopData_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.SpawnSequenceActor
struct ABP_MiniGame_FishingManager_C_SpawnSequenceActor_Params
{
	class ULevelSequence*                              Sequence;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachParent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnObj;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetSellPosition
struct ABP_MiniGame_FishingManager_C_GetSellPosition_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetResultRank
struct ABP_MiniGame_FishingManager_C_GetResultRank_Params
{
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.CreateShopResult
struct ABP_MiniGame_FishingManager_C_CreateShopResult_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UpdateShopResult
struct ABP_MiniGame_FishingManager_C_UpdateShopResult_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.IsPlayingFishing
struct ABP_MiniGame_FishingManager_C_IsPlayingFishing_Params
{
	bool                                               IsFishing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.LoadFishingACScript
struct ABP_MiniGame_FishingManager_C_LoadFishingACScript_Params
{
	int                                                ShopIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResultRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.GetCurrentShopID
struct ABP_MiniGame_FishingManager_C_GetCurrentShopID_Params
{
	int                                                shop_id;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.UserConstructionScript
struct ABP_MiniGame_FishingManager_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveBeginPlay
struct ABP_MiniGame_FishingManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReceiveTick
struct ABP_MiniGame_FishingManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ResetToolsData
struct ABP_MiniGame_FishingManager_C_ResetToolsData_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.Event_JumpToShopResult
struct ABP_MiniGame_FishingManager_C_Event_JumpToShopResult_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToShop
struct ABP_MiniGame_FishingManager_C_OnEndJumpToShop_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnEndJumpToSavePos
struct ABP_MiniGame_FishingManager_C_OnEndJumpToSavePos_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ReturnFishingTools
struct ABP_MiniGame_FishingManager_C_ReturnFishingTools_Params
{
	bool                                               UseDialog;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.DialogInputTimeOut
struct ABP_MiniGame_FishingManager_C_DialogInputTimeOut_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.EndFishing
struct ABP_MiniGame_FishingManager_C_EndFishing_Params
{
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.PlayShopAC
struct ABP_MiniGame_FishingManager_C_PlayShopAC_Params
{
	int                                                ResultRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnInputButton
struct ABP_MiniGame_FishingManager_C_OnInputButton_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnLoadACScript
struct ABP_MiniGame_FishingManager_C_OnLoadACScript_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.FlagChanged
struct ABP_MiniGame_FishingManager_C_FlagChanged_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.OnFinishedSequence
struct ABP_MiniGame_FishingManager_C_OnFinishedSequence_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C.ExecuteUbergraph_BP_MiniGame_FishingManager
struct ABP_MiniGame_FishingManager_C_ExecuteUbergraph_BP_MiniGame_FishingManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
