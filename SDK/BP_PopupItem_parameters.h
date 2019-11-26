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

// Function BP_PopupItem.BP_PopupItem_C.IsNextStock
struct ABP_PopupItem_C_IsNextStock_Params
{
	struct FName                                       CheckId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAvailable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.GetPopupInfoByID
struct ABP_PopupItem_C_GetPopupInfoByID_Params
{
	int                                                PopupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_PopupItemInfo                           Info;                                                     // (Parm, OutParm)
	int                                                ArrayIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.CanPopupUI
struct ABP_PopupItem_C_CanPopupUI_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.IsCheckBet
struct ABP_PopupItem_C_IsCheckBet_Params
{
	struct FName                                       CheckId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAvailable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.IsCheckMoney
struct ABP_PopupItem_C_IsCheckMoney_Params
{
	struct FName                                       CheckId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAvailable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.ForceHidePopup
struct ABP_PopupItem_C_ForceHidePopup_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.ShowPopupItem
struct ABP_PopupItem_C_ShowPopupItem_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutoHide;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PopupId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.HidePopup
struct ABP_PopupItem_C_HidePopup_Params
{
	int                                                PopupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.FinishUI
struct ABP_PopupItem_C_FinishUI_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.StartPopup
struct ABP_PopupItem_C_StartPopup_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.StepWaitForEndEvent
struct ABP_PopupItem_C_StepWaitForEndEvent_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.StepShowUI
struct ABP_PopupItem_C_StepShowUI_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.StepWaitTimeCheck
struct ABP_PopupItem_C_StepWaitTimeCheck_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.StepStackCheck
struct ABP_PopupItem_C_StepStackCheck_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.IsCheckItemId
struct ABP_PopupItem_C_IsCheckItemId_Params
{
	struct FName                                       CheckId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAvailable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.IncrementPopupId
struct ABP_PopupItem_C_IncrementPopupId_Params
{
	int                                                PopupId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.ShowPopupMoney
struct ABP_PopupItem_C_ShowPopupMoney_Params
{
	int                                                IncreaseOrDecreaseMoney;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAutoHide;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_ValueType>                          ValueType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PopupId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.UserConstructionScript
struct ABP_PopupItem_C_UserConstructionScript_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.SetupItemUI
struct ABP_PopupItem_C_SetupItemUI_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoClose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.SetupMoneyUI
struct ABP_PopupItem_C_SetupMoneyUI_Params
{
	int                                                HaveMoney;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IncreaseOrDecreaseMoney;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoClose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_ValueType>                          ValueType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.OnClosedItemNameDisp
struct ABP_PopupItem_C_OnClosedItemNameDisp_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.OnFinishedUI
struct ABP_PopupItem_C_OnFinishedUI_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.ClearHandle_OnFinishedUI
struct ABP_PopupItem_C_ClearHandle_OnFinishedUI_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.Evt_StartAnmEnd
struct ABP_PopupItem_C_Evt_StartAnmEnd_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.ReceiveBeginPlay
struct ABP_PopupItem_C_ReceiveBeginPlay_Params
{
};

// Function BP_PopupItem.BP_PopupItem_C.ReceiveTick
struct ABP_PopupItem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.ExecuteUbergraph_BP_PopupItem
struct ABP_PopupItem_C_ExecuteUbergraph_BP_PopupItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.OnFinishedPopupDispatcher__DelegateSignature
struct ABP_PopupItem_C_OnFinishedPopupDispatcher__DelegateSignature_Params
{
	int                                                PopupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PopupItem.BP_PopupItem_C.OnAllFinishedPopupDispatcher__DelegateSignature
struct ABP_PopupItem_C_OnAllFinishedPopupDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
