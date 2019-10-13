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

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.IsNeedTimer
struct ABP_DemoPlayTimer_C_IsNeedTimer_Params
{
	bool                                               Need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.CanShowDialog
struct ABP_DemoPlayTimer_C_CanShowDialog_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.MakeDialogParam
struct ABP_DemoPlayTimer_C_MakeDialogParam_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_GeneralWindowParam                      Param;                                                    // (Parm, OutParm)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.UserConstructionScript
struct ABP_DemoPlayTimer_C_UserConstructionScript_Params
{
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_10
struct ABP_DemoPlayTimer_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9
struct ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8
struct ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7
struct ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6
struct ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveBeginPlay
struct ABP_DemoPlayTimer_C_ReceiveBeginPlay_Params
{
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveTick
struct ABP_DemoPlayTimer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.CloseDialog
struct ABP_DemoPlayTimer_C_CloseDialog_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ResultDemoPlay
struct ABP_DemoPlayTimer_C_ResultDemoPlay_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.WaitStartDialog
struct ABP_DemoPlayTimer_C_WaitStartDialog_Params
{
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.StartDialog
struct ABP_DemoPlayTimer_C_StartDialog_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.WaitEndDialog
struct ABP_DemoPlayTimer_C_WaitEndDialog_Params
{
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.DialogDecede
struct ABP_DemoPlayTimer_C_DialogDecede_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.DialogCancel
struct ABP_DemoPlayTimer_C_DialogCancel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveEndPlay
struct ABP_DemoPlayTimer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ChangePlayer
struct ABP_DemoPlayTimer_C_ChangePlayer_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ChangeStep
struct ABP_DemoPlayTimer_C_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ExecuteUbergraph_BP_DemoPlayTimer
struct ABP_DemoPlayTimer_C_ExecuteUbergraph_BP_DemoPlayTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
