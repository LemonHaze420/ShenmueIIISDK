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

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowsClockOnPlayerBehavior
struct ABP_S3AdventureHUD_C_ShowsClockOnPlayerBehavior_Params
{
	ES3PlayerBehavior                                  Behavior;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.DestroyDevelopmentText
struct ABP_S3AdventureHUD_C_DestroyDevelopmentText_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideEyecatch
struct ABP_S3AdventureHUD_C_HideEyecatch_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManagerActor
struct ABP_S3AdventureHUD_C_GetMenuManagerActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitDetectAction_Impl
struct ABP_S3AdventureHUD_C_PermitDetectAction_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidDetectAction_Impl
struct ABP_S3AdventureHUD_C_ForbidDetectAction_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.PermitWindowUI_Impl
struct ABP_S3AdventureHUD_C_PermitWindowUI_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ForbidWindowUI_Impl
struct ABP_S3AdventureHUD_C_ForbidWindowUI_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UpdateClockVisibility
struct ABP_S3AdventureHUD_C_UpdateClockVisibility_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.SpawnManager
struct ABP_S3AdventureHUD_C_SpawnManager_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.HideMoneyStatus
struct ABP_S3AdventureHUD_C_HideMoneyStatus_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowMoneyStatus
struct ABP_S3AdventureHUD_C_ShowMoneyStatus_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMoneyStatus
struct ABP_S3AdventureHUD_C_GetMoneyStatus_Params
{
	class ABP_money_status_C*                          BP_MoneyStatus;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowEyecatch
struct ABP_S3AdventureHUD_C_ShowEyecatch_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       ForceId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMinimap2DManager
struct ABP_S3AdventureHUD_C_GetMinimap2DManager_Params
{
	class ABP_MiniMap2DManager_C*                      BP_MinimapManager;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowCharaName
struct ABP_S3AdventureHUD_C_ShowCharaName_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ChangeDetectIcon
struct ABP_S3AdventureHUD_C_ChangeDetectIcon_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemoTextureDataManager
struct ABP_S3AdventureHUD_C_GetMemoTextureDataManager_Params
{
	class ABP_MemoTextureDataManager_C*                BP_MemoTextureDataManager;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetPopupItem
struct ABP_S3AdventureHUD_C_GetPopupItem_Params
{
	class ABP_PopupItem_C*                             BP_PopupItem;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMenuManager
struct ABP_S3AdventureHUD_C_GetMenuManager_Params
{
	class ABP_MenuWindowManager_C*                     menuManager;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetMemopadManager
struct ABP_S3AdventureHUD_C_GetMemopadManager_Params
{
	class ABP_S3MemopadManager_C*                      AsBP_S3Memopad_Manager;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.GetDetectAction
struct ABP_S3AdventureHUD_C_GetDetectAction_Params
{
	class ABP_S3DetectAction_C*                        AsBP_S3Detect_Action;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.UserConstructionScript
struct ABP_S3AdventureHUD_C_UserConstructionScript_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveBeginPlay
struct ABP_S3AdventureHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveTick
struct ABP_S3AdventureHUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ReceiveDestroyed
struct ABP_S3AdventureHUD_C_ReceiveDestroyed_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.CastChildActor
struct ABP_S3AdventureHUD_C_CastChildActor_Params
{
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ShowRewardNotice
struct ABP_S3AdventureHUD_C_ShowRewardNotice_Params
{
	ES3RewardCategory                                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AdventureHUD.BP_S3AdventureHUD_C.ExecuteUbergraph_BP_S3AdventureHUD
struct ABP_S3AdventureHUD_C_ExecuteUbergraph_BP_S3AdventureHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
