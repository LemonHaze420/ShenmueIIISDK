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

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetPriority
struct ABP_TuriguRentalManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetDetectAction
struct ABP_TuriguRentalManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.IsHaveVipCard
struct ABP_TuriguRentalManager_C_IsHaveVipCard_Params
{
	bool                                               IsHaveVipCard;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.CheckPayButton
struct ABP_TuriguRentalManager_C_CheckPayButton_Params
{
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.EndFlow
struct ABP_TuriguRentalManager_C_EndFlow_Params
{
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.UpdNowSelSet
struct ABP_TuriguRentalManager_C_UpdNowSelSet_Params
{
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.PlaySE
struct ABP_TuriguRentalManager_C_PlaySE_Params
{
	TEnumAsByte<EN_ShopSE_List>                        SE;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetItemID
struct ABP_TuriguRentalManager_C_GetItemID_Params
{
	int                                                item_no;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ret;                                                      // (Parm, OutParm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.UserConstructionScript
struct ABP_TuriguRentalManager_C_UserConstructionScript_Params
{
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12
struct ABP_TuriguRentalManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11
struct ABP_TuriguRentalManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10
struct ABP_TuriguRentalManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_9
struct ABP_TuriguRentalManager_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8
struct ABP_TuriguRentalManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7
struct ABP_TuriguRentalManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveBeginPlay
struct ABP_TuriguRentalManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveTick
struct ABP_TuriguRentalManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveEndPlay
struct ABP_TuriguRentalManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.DecideDetectAction
struct ABP_TuriguRentalManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ExecuteUbergraph_BP_TuriguRentalManager
struct ABP_TuriguRentalManager_C_ExecuteUbergraph_BP_TuriguRentalManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.onNoBuyEnd__DelegateSignature
struct ABP_TuriguRentalManager_C_onNoBuyEnd__DelegateSignature_Params
{
};

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.onBuyEnd__DelegateSignature
struct ABP_TuriguRentalManager_C_onBuyEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
