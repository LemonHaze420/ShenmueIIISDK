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

// Function WBP_QTECommand.WBP_QTECommand_C.GetInAnimationLength
struct UWBP_QTECommand_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.StartWaitTime
struct UWBP_QTECommand_C_StartWaitTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.Update
struct UWBP_QTECommand_C_Update_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.SetUseRealTime
struct UWBP_QTECommand_C_SetUseRealTime_Params
{
	bool                                               UseRealTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.InstantHideBack
struct UWBP_QTECommand_C_InstantHideBack_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.IsPlayingInputSuccess
struct UWBP_QTECommand_C_IsPlayingInputSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.IsPlayingInstructions
struct UWBP_QTECommand_C_IsPlayingInstructions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.ResetAllButtonZOrder
struct UWBP_QTECommand_C_ResetAllButtonZOrder_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.ResetButtonZOrder
struct UWBP_QTECommand_C_ResetButtonZOrder_Params
{
	class UWBP_QTECommandButton_C*                     TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.SetButtonZOrderToFront
struct UWBP_QTECommand_C_SetButtonZOrderToFront_Params
{
	class UWBP_QTECommandButton_C*                     TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.SetupButton
struct UWBP_QTECommand_C_SetupButton_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.GetButtonImage
struct UWBP_QTECommand_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.PlayInputSuccess
struct UWBP_QTECommand_C_PlayInputSuccess_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.PlayOutBack
struct UWBP_QTECommand_C_PlayOutBack_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.GetCurrentInstructionButton
struct UWBP_QTECommand_C_GetCurrentInstructionButton_Params
{
	class UWBP_QTECommandButton_C*                     Button;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.PlayInstructions
struct UWBP_QTECommand_C_PlayInstructions_Params
{
	TArray<struct FName>                               Inputs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_QTECommand.WBP_QTECommand_C.Reset
struct UWBP_QTECommand_C_Reset_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.GetButtonFromInputName
struct UWBP_QTECommand_C_GetButtonFromInputName_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_QTECommandButton_C*                     Button;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.Construct
struct UWBP_QTECommand_C_Construct_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.Tick
struct UWBP_QTECommand_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnButtonInstructionAnimationFinished
struct UWBP_QTECommand_C_OnButtonInstructionAnimationFinished_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnButtonInputAnimationFinished
struct UWBP_QTECommand_C_OnButtonInputAnimationFinished_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnOutbackAnimationFinished
struct UWBP_QTECommand_C_OnOutbackAnimationFinished_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.PlayFirstInstruction
struct UWBP_QTECommand_C_PlayFirstInstruction_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinishedAfterPlayAnim
struct UWBP_QTECommand_C_OnWaitTimeFinishedAfterPlayAnim_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinishedBeforeOutBack
struct UWBP_QTECommand_C_OnWaitTimeFinishedBeforeOutBack_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.ExecuteUbergraph_WBP_QTECommand
struct UWBP_QTECommand_C_ExecuteUbergraph_WBP_QTECommand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinished__DelegateSignature
struct UWBP_QTECommand_C_OnWaitTimeFinished__DelegateSignature_Params
{
};

// Function WBP_QTECommand.WBP_QTECommand_C.OnInstructionFinished__DelegateSignature
struct UWBP_QTECommand_C_OnInstructionFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
