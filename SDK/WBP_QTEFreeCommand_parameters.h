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

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsAnyButtonAnimating
struct UWBP_QTEFreeCommand_C_IsAnyButtonAnimating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayBlinkAnimation
struct UWBP_QTEFreeCommand_C_PlayBlinkAnimation_Params
{
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetLightFromPadIndex
struct UWBP_QTEFreeCommand_C_GetLightFromPadIndex_Params
{
	ES3PadButtonIndex                                  PadIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_QTESimonLight_C*                        Light;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayLightAnimation
struct UWBP_QTEFreeCommand_C_PlayLightAnimation_Params
{
	ES3PadButtonIndex                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetButtonFromPadIndex
struct UWBP_QTEFreeCommand_C_GetButtonFromPadIndex_Params
{
	ES3PadButtonIndex                                  Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_QTEFreeCommandButton_C*                 Button;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetSuccessText
struct UWBP_QTEFreeCommand_C_SetSuccessText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetMaxOutAnimationLength
struct UWBP_QTEFreeCommand_C_GetMaxOutAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetInAnimationLength
struct UWBP_QTEFreeCommand_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetAutoOutOkAfterInputSuccess
struct UWBP_QTEFreeCommand_C_SetAutoOutOkAfterInputSuccess_Params
{
	bool                                               IsAutoOut;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetTimeGaugeRate
struct UWBP_QTEFreeCommand_C_SetTimeGaugeRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingOut
struct UWBP_QTEFreeCommand_C_IsPlayingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingIn
struct UWBP_QTEFreeCommand_C_IsPlayingIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayOutNg
struct UWBP_QTEFreeCommand_C_PlayOutNg_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayOutOk
struct UWBP_QTEFreeCommand_C_PlayOutOk_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayIn
struct UWBP_QTEFreeCommand_C_PlayIn_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingInputSuccess
struct UWBP_QTEFreeCommand_C_IsPlayingInputSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ResetAllButtonZOrder
struct UWBP_QTEFreeCommand_C_ResetAllButtonZOrder_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ResetButtonZOrder
struct UWBP_QTEFreeCommand_C_ResetButtonZOrder_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetButtonZOrderToFront
struct UWBP_QTEFreeCommand_C_SetButtonZOrderToFront_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetupButtonImages
struct UWBP_QTEFreeCommand_C_SetupButtonImages_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayInputSuccess
struct UWBP_QTEFreeCommand_C_PlayInputSuccess_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.Reset
struct UWBP_QTEFreeCommand_C_Reset_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetButtonFromInputName
struct UWBP_QTEFreeCommand_C_GetButtonFromInputName_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_QTEFreeCommandButton_C*                 Button;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.Construct
struct UWBP_QTEFreeCommand_C_Construct_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnButtonInputAnimationFinished
struct UWBP_QTEFreeCommand_C_OnButtonInputAnimationFinished_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.BndEvt__Outro_Success_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWBP_QTEFreeCommand_C_BndEvt__Outro_Success_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.BndEvt__Outro_Failure_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UWBP_QTEFreeCommand_C_BndEvt__Outro_Failure_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ExecuteUbergraph_WBP_QTEFreeCommand
struct UWBP_QTEFreeCommand_C_ExecuteUbergraph_WBP_QTEFreeCommand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnOutAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTEFreeCommand_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnInAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTEFreeCommand_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
struct UWBP_QTEFreeCommand_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
