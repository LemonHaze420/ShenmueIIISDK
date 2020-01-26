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

// Function BP_RewardManager.BP_RewardManager_C.InitialPassword
struct ABP_RewardManager_C_InitialPassword_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.ConvertType
struct ABP_RewardManager_C_ConvertType_Params
{
	struct FST_RewardPresetInfo                        Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	ES3RewardType                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.IsInstalledContent
struct ABP_RewardManager_C_IsInstalledContent_Params
{
	ES3RewardType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Installed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.SetEndRollPassword
struct ABP_RewardManager_C_SetEndRollPassword_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.RandomCapsulToy
struct ABP_RewardManager_C_RandomCapsulToy_Params
{
	struct FName                                       ItemId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.IsBonusPack
struct ABP_RewardManager_C_IsBonusPack_Params
{
	ES3RewardType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.GetEmaMateiral
struct ABP_RewardManager_C_GetEmaMateiral_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.ConvertCategory
struct ABP_RewardManager_C_ConvertCategory_Params
{
	ES3RewardType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3RewardCategory                                  Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.DebugResetPassword
struct ABP_RewardManager_C_DebugResetPassword_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.AddRewardItem
struct ABP_RewardManager_C_AddRewardItem_Params
{
	ES3RewardType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InItemId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       O;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.CheckRewardItem
struct ABP_RewardManager_C_CheckRewardItem_Params
{
	struct FName                                       PresetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               exec;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.SetRodAndLureFlag
struct ABP_RewardManager_C_SetRodAndLureFlag_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.CheckShowFlag
struct ABP_RewardManager_C_CheckShowFlag_Params
{
	struct FST_RewardInfo                              Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.ShowNotice
struct ABP_RewardManager_C_ShowNotice_Params
{
	ES3RewardType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.GetActivateRewards
struct ABP_RewardManager_C_GetActivateRewards_Params
{
	TArray<ES3RewardType>                              Rewards;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_RewardManager.BP_RewardManager_C.IsActivate
struct ABP_RewardManager_C_IsActivate_Params
{
	ES3RewardType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.ConvertTypeArray
struct ABP_RewardManager_C_ConvertTypeArray_Params
{
	struct FST_RewardPresetInfo                        Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<ES3RewardType>                              Types;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_RewardManager.BP_RewardManager_C.MakePresetArray
struct ABP_RewardManager_C_MakePresetArray_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<ES3RewardType>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<ES3RewardType>                              NewArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_RewardManager.BP_RewardManager_C.CheckDownloadFile
struct ABP_RewardManager_C_CheckDownloadFile_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.SetPresetId
struct ABP_RewardManager_C_SetPresetId_Params
{
	struct FName                                       PresetId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.SetDebugUpdateParam
struct ABP_RewardManager_C_SetDebugUpdateParam_Params
{
	struct FString                                     ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.GetUserName
struct ABP_RewardManager_C_GetUserName_Params
{
	struct FString                                     UserName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_RewardManager.BP_RewardManager_C.GetFudaMateiral
struct ABP_RewardManager_C_GetFudaMateiral_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.GetHanamojiMaterial
struct ABP_RewardManager_C_GetHanamojiMaterial_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.GetDebugRewardPresetId
struct ABP_RewardManager_C_GetDebugRewardPresetId_Params
{
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.GetEndCreditType
struct ABP_RewardManager_C_GetEndCreditType_Params
{
	TEnumAsByte<EN_EndCreditType>                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.GetDreamsComeTrueType
struct ABP_RewardManager_C_GetDreamsComeTrueType_Params
{
	TEnumAsByte<EN_DreamsComeTrue>                     Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.SetPassword
struct ABP_RewardManager_C_SetPassword_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_PasswordResult>                     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.UserConstructionScript
struct ABP_RewardManager_C_UserConstructionScript_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.FlagChange
struct ABP_RewardManager_C_FlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.ReceiveEndPlay
struct ABP_RewardManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.ShowItemDialog
struct ABP_RewardManager_C_ShowItemDialog_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.ChangePlayerBehavior
struct ABP_RewardManager_C_ChangePlayerBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.PushDecide
struct ABP_RewardManager_C_PushDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.ReceiveBeginPlay
struct ABP_RewardManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.CheckFreerun
struct ABP_RewardManager_C_CheckFreerun_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.FinishedDLC
struct ABP_RewardManager_C_FinishedDLC_Params
{
};

// Function BP_RewardManager.BP_RewardManager_C.ChangedItemNum
struct ABP_RewardManager_C_ChangedItemNum_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.ExecuteUbergraph_BP_RewardManager
struct ABP_RewardManager_C_ExecuteUbergraph_BP_RewardManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardManager.BP_RewardManager_C.OnChangeReward__DelegateSignature
struct ABP_RewardManager_C_OnChangeReward__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
