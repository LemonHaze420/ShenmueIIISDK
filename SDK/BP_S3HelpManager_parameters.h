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

// Function BP_S3HelpManager.BP_S3HelpManager_C.GetPriority
struct ABP_S3HelpManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.GetDetectAction
struct ABP_S3HelpManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.SelectHelpInventoryTexture
struct ABP_S3HelpManager_C_SelectHelpInventoryTexture_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.SelectTexture
struct ABP_S3HelpManager_C_SelectTexture_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.CheckValidRegistHelp
struct ABP_S3HelpManager_C_CheckValidRegistHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpPriority
struct ABP_S3HelpManager_C_GetHelpPriority_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3HelpPriority                                    Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.SetPageButtonVisibility
struct ABP_S3HelpManager_C_SetPageButtonVisibility_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangePage
struct ABP_S3HelpManager_C_ChangePage_Params
{
	bool                                               IsNext;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.SetForceDisable
struct ABP_S3HelpManager_C_SetForceDisable_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.StartHelp
struct ABP_S3HelpManager_C_StartHelp_Params
{
	struct FName                                       HelpId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.GetHelpName
struct ABP_S3HelpManager_C_GetHelpName_Params
{
	struct FST_HelpRegisterInfo                        Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.PressDownOrUp
struct ABP_S3HelpManager_C_PressDownOrUp_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.CheckBlinkIcon
struct ABP_S3HelpManager_C_CheckBlinkIcon_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.IsActivateHelp
struct ABP_S3HelpManager_C_IsActivateHelp_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.CanOpen
struct ABP_S3HelpManager_C_CanOpen_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.EndButtonVisibility
struct ABP_S3HelpManager_C_EndButtonVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItemByActor
struct ABP_S3HelpManager_C_RemoveHelpItemByActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.RemoveHelpItem
struct ABP_S3HelpManager_C_RemoveHelpItem_Params
{
	struct FString                                     HelpName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.AddHelpItem
struct ABP_S3HelpManager_C_AddHelpItem_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HelpName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.EndMiniGame
struct ABP_S3HelpManager_C_EndMiniGame_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.makeWidget
struct ABP_S3HelpManager_C_makeWidget_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.AddCategory
struct ABP_S3HelpManager_C_AddCategory_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.makeCategoryList
struct ABP_S3HelpManager_C_makeCategoryList_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.AutoChangeCurrentOpenIndex
struct ABP_S3HelpManager_C_AutoChangeCurrentOpenIndex_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.UpdNowPosCursor
struct ABP_S3HelpManager_C_UpdNowPosCursor_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.IsNoScrollRange
struct ABP_S3HelpManager_C_IsNoScrollRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeCursorPos
struct ABP_S3HelpManager_C_ChangeCursorPos_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeHelpImage
struct ABP_S3HelpManager_C_ChangeHelpImage_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ChangeStatus
struct ABP_S3HelpManager_C_ChangeStatus_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ReturnStatus
struct ABP_S3HelpManager_C_ReturnStatus_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.UserConstructionScript
struct ABP_S3HelpManager_C_UserConstructionScript_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18
struct ABP_S3HelpManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17
struct ABP_S3HelpManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
struct ABP_S3HelpManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
struct ABP_S3HelpManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14
struct ABP_S3HelpManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13
struct ABP_S3HelpManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12
struct ABP_S3HelpManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_11
struct ABP_S3HelpManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10
struct ABP_S3HelpManager_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveBeginPlay
struct ABP_S3HelpManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ReceiveTick
struct ABP_S3HelpManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.OnHelpWindowOpen
struct ABP_S3HelpManager_C_OnHelpWindowOpen_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.EndHelpActor
struct ABP_S3HelpManager_C_EndHelpActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.DecideDetectAction
struct ABP_S3HelpManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.DownSelect
struct ABP_S3HelpManager_C_DownSelect_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.UpSelect
struct ABP_S3HelpManager_C_UpSelect_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.QuickHelp
struct ABP_S3HelpManager_C_QuickHelp_Params
{
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3
struct ABP_S3HelpManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ExecuteUbergraph_BP_S3HelpManager
struct ABP_S3HelpManager_C_ExecuteUbergraph_BP_S3HelpManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3HelpManager.BP_S3HelpManager_C.ED_HelpEnd__DelegateSignature
struct ABP_S3HelpManager_C_ED_HelpEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
