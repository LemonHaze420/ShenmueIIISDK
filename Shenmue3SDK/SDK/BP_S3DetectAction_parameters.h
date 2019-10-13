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

// Function BP_S3DetectAction.BP_S3DetectAction_C.NewInfoEffect
struct ABP_S3DetectAction_C_NewInfoEffect_Params
{
	ES3ActionIconType                                  ButtonImageType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.IsActionGlobalForbidden
struct ABP_S3DetectAction_C_IsActionGlobalForbidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.IsHelpIconBlink
struct ABP_S3DetectAction_C_IsHelpIconBlink_Params
{
	bool                                               isBlink;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.BlinkHelpIcon
struct ABP_S3DetectAction_C_BlinkHelpIcon_Params
{
	bool                                               End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.RestoreInputPriority
struct ABP_S3DetectAction_C_RestoreInputPriority_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.ChangeInputPriority
struct ABP_S3DetectAction_C_ChangeInputPriority_Params
{
	int                                                NewPriority;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.GetSelectedButtonActionProcess
struct ABP_S3DetectAction_C_GetSelectedButtonActionProcess_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        OutProcess;                                               // (Parm, OutParm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.GetButtonActionProcesses
struct ABP_S3DetectAction_C_GetButtonActionProcesses_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3DetectActionParam>                OutProcesses;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InputButton
struct ABP_S3DetectAction_C_InputButton_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActionSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.IsDetectedActor
struct ABP_S3DetectAction_C_IsDetectedActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.SetWidgetVisible
struct ABP_S3DetectAction_C_SetWidgetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.AttachPlayer
struct ABP_S3DetectAction_C_AttachPlayer_Params
{
	bool                                               succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.AddDetectActor
struct ABP_S3DetectAction_C_AddDetectActor_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unregister;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.PlayDetectSound
struct ABP_S3DetectAction_C_PlayDetectSound_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InitWidget
struct ABP_S3DetectAction_C_InitWidget_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.UserConstructionScript
struct ABP_S3DetectAction_C_UserConstructionScript_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10
struct ABP_S3DetectAction_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_9
struct ABP_S3DetectAction_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8
struct ABP_S3DetectAction_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_7
struct ABP_S3DetectAction_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_Menu_K2Node_InputActionEvent_6
struct ABP_S3DetectAction_C_InpActEvt_Menu_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_Ctrl+Alt_NumPadNine_K2Node_InputKeyEvent_2
struct ABP_S3DetectAction_C_InpActEvt_Ctrl_Alt_NumPadNine_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.ReceiveBeginPlay
struct ABP_S3DetectAction_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.delayedFirstAttach
struct ABP_S3DetectAction_C_delayedFirstAttach_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.UpdateButton
struct ABP_S3DetectAction_C_UpdateButton_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.OnStartBS
struct ABP_S3DetectAction_C_OnStartBS_Params
{
	class AS3Character**                               TalkableActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.OnEndTalk
struct ABP_S3DetectAction_C_OnEndTalk_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.StartInputCooldown
struct ABP_S3DetectAction_C_StartInputCooldown_Params
{
};

// Function BP_S3DetectAction.BP_S3DetectAction_C.ExecuteUbergraph_BP_S3DetectAction
struct ABP_S3DetectAction_C_ExecuteUbergraph_BP_S3DetectAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
