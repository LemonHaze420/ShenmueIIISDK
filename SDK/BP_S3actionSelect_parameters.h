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

// Function BP_S3actionSelect.BP_S3actionSelect_C.Disable_StickIn
struct ABP_S3actionSelect_C_Disable_StickIn_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_TimeOver
struct ABP_S3actionSelect_C_doCmd_TimeOver_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.degreeToPadinput
struct ABP_S3actionSelect_C_degreeToPadinput_Params
{
	float                                              degree;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_padSwitch>                          Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_cancelTimer
struct ABP_S3actionSelect_C_doCmd_cancelTimer_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onTimeover
struct ABP_S3actionSelect_C_catch_onTimeover_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_pauseTimer
struct ABP_S3actionSelect_C_doCmd_pauseTimer_Params
{
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_startTimer
struct ABP_S3actionSelect_C_doCmd_startTimer_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_sendInput
struct ABP_S3actionSelect_C_doCmd_sendInput_Params
{
	TEnumAsByte<EN_padSwitch>                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Press;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_setText
struct ABP_S3actionSelect_C_doCmd_setText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_changeText
struct ABP_S3actionSelect_C_doCmd_changeText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_addItem
struct ABP_S3actionSelect_C_doCmd_addItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_cancelSelection
struct ABP_S3actionSelect_C_doCmd_cancelSelection_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_startSelection
struct ABP_S3actionSelect_C_doCmd_startSelection_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onEndFinishSelection
struct ABP_S3actionSelect_C_catch_onEndFinishSelection_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onEndStartSelection
struct ABP_S3actionSelect_C_catch_onEndStartSelection_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onSelected
struct ABP_S3actionSelect_C_catch_onSelected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.UserConstructionScript
struct ABP_S3actionSelect_C_UserConstructionScript_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
struct ABP_S3actionSelect_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7
struct ABP_S3actionSelect_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6
struct ABP_S3actionSelect_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5
struct ABP_S3actionSelect_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_S3actionSelect_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
struct ABP_S3actionSelect_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveBeginPlay
struct ABP_S3actionSelect_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedUp
struct ABP_S3actionSelect_C_OnPressedUp_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedLeft
struct ABP_S3actionSelect_C_OnPressedLeft_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedRight
struct ABP_S3actionSelect_C_OnPressedRight_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedDown
struct ABP_S3actionSelect_C_OnPressedDown_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.OnAnimationFinished
struct ABP_S3actionSelect_C_OnAnimationFinished_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveEndPlay
struct ABP_S3actionSelect_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveTick
struct ABP_S3actionSelect_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.EvtSizeSetEnd
struct ABP_S3actionSelect_C_EvtSizeSetEnd_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.ExecuteUbergraph_BP_S3actionSelect
struct ABP_S3actionSelect_C_ExecuteUbergraph_BP_S3actionSelect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.onTimerover__DelegateSignature
struct ABP_S3actionSelect_C_onTimerover__DelegateSignature_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.command_startSelection__DelegateSignature
struct ABP_S3actionSelect_C_command_startSelection__DelegateSignature_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.onEndStartSelection__DelegateSignature
struct ABP_S3actionSelect_C_onEndStartSelection__DelegateSignature_Params
{
};

// Function BP_S3actionSelect.BP_S3actionSelect_C.onSelected__DelegateSignature
struct ABP_S3actionSelect_C_onSelected__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
