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

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetPriority
struct ABP_S3MemopadManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetDetectAction
struct ABP_S3MemopadManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.CheckOpenMainEventPage
struct ABP_S3MemopadManager_C_CheckOpenMainEventPage_Params
{
	bool                                               IsOpenMainEventPage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsUnreadMainEvent
struct ABP_S3MemopadManager_C_GetIsUnreadMainEvent_Params
{
	bool                                               IsUnreadMainEvent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsNowSubEventPage
struct ABP_S3MemopadManager_C_GetIsNowSubEventPage_Params
{
	bool                                               IsNowSubEventPage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsSubEventOngoing
struct ABP_S3MemopadManager_C_GetIsSubEventOngoing_Params
{
	bool                                               IsSubEventOngoing;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.CursoFade
struct ABP_S3MemopadManager_C_CursoFade_Params
{
	bool                                               FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InitMemoPage
struct ABP_S3MemopadManager_C_InitMemoPage_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.CheckCanUSeMemopad
struct ABP_S3MemopadManager_C_CheckCanUSeMemopad_Params
{
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetBlink
struct ABP_S3MemopadManager_C_SetBlink_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.IsDetected
struct ABP_S3MemopadManager_C_IsDetected_Params
{
	bool                                               IsDetected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbg_print(memoFlags)
struct ABP_S3MemopadManager_C__dbg_print_memoFlags__Params
{
	bool                                               Already;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbg_check(memoFlags)
struct ABP_S3MemopadManager_C__dbg_check_memoFlags__Params
{
	bool                                               Already;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Flags;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.checkEvent
struct ABP_S3MemopadManager_C_checkEvent_Params
{
	bool                                               nowDisableMemopadEvent;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetDenyFlag
struct ABP_S3MemopadManager_C_SetDenyFlag_Params
{
	bool                                               Deny;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.firstAttach
struct ABP_S3MemopadManager_C_firstAttach_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbgPrint(location)
struct ABP_S3MemopadManager_C__dbgPrint_location__Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.UserConstructionScript
struct ABP_S3MemopadManager_C_UserConstructionScript_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveTick
struct ABP_S3MemopadManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveBeginPlay
struct ABP_S3MemopadManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.delayedFirstAttach
struct ABP_S3MemopadManager_C_delayedFirstAttach_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.doCmd_FirstDetectRetain(memopadManager)
struct ABP_S3MemopadManager_C_doCmd_FirstDetectRetain_memopadManager__Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.delayedRegistCheck(detector)
struct ABP_S3MemopadManager_C_delayedRegistCheck_detector__Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.catch_onEndScreenIn
struct ABP_S3MemopadManager_C_catch_onEndScreenIn_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.Finalize
struct ABP_S3MemopadManager_C_Finalize_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15
struct ABP_S3MemopadManager_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19
struct ABP_S3MemopadManager_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ForceDestroy
struct ABP_S3MemopadManager_C_ForceDestroy_Params
{
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1
struct ABP_S3MemopadManager_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3
struct ABP_S3MemopadManager_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.StartMemopad
struct ABP_S3MemopadManager_C_StartMemopad_Params
{
	int                                                OpenPageIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_CancelButton
struct ABP_S3MemopadManager_C_SetEnable_CancelButton_Params
{
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_NewPageButton
struct ABP_S3MemopadManager_C_SetEnable_NewPageButton_Params
{
	bool                                               Use;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5
struct ABP_S3MemopadManager_C_InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_StartEndButton
struct ABP_S3MemopadManager_C_SetEnable_StartEndButton_Params
{
	bool                                               Active_StartPage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active_EndPage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.DecideDetectAction
struct ABP_S3MemopadManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveEndPlay
struct ABP_S3MemopadManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ExecuteUbergraph_BP_S3MemopadManager
struct ABP_S3MemopadManager_C_ExecuteUbergraph_BP_S3MemopadManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ED_MemoFinish__DelegateSignature
struct ABP_S3MemopadManager_C_ED_MemoFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
