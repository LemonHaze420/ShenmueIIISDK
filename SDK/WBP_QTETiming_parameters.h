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

// Function WBP_QTETiming.WBP_QTETiming_C.AdvanceActionTo
struct UWBP_QTETiming_C_AdvanceActionTo_Params
{
	float                                              InTargetTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.GetActionJustTimingTime
struct UWBP_QTETiming_C_GetActionJustTimingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.GetActionAnimationLength
struct UWBP_QTETiming_C_GetActionAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.PlayAction
struct UWBP_QTETiming_C_PlayAction_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetupActionPlaySpeed
struct UWBP_QTETiming_C_SetupActionPlaySpeed_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetActionPlayTime
struct UWBP_QTETiming_C_SetActionPlayTime_Params
{
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeBgMaterialParameter
struct UWBP_QTETiming_C_SetTimeGaugeBgMaterialParameter_Params
{
	class UImage*                                      InImage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InAngle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetJustTimingRate
struct UWBP_QTETiming_C_SetJustTimingRate_Params
{
	float                                              InStartRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InEndRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.UpdateAnimationState
struct UWBP_QTETiming_C_UpdateAnimationState_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.GetInAnimationLength
struct UWBP_QTETiming_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetButtonImageFromInputName
struct UWBP_QTETiming_C_SetButtonImageFromInputName_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetAutoOutOkAfterInputSuccess
struct UWBP_QTETiming_C_SetAutoOutOkAfterInputSuccess_Params
{
	bool                                               IsAutoOut;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeRate
struct UWBP_QTETiming_C_SetTimeGaugeRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingOut
struct UWBP_QTETiming_C_IsPlayingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingIn
struct UWBP_QTETiming_C_IsPlayingIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.PlayOutNg
struct UWBP_QTETiming_C_PlayOutNg_Params
{
	bool                                               WhetherStopAction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.PlayOutOk
struct UWBP_QTETiming_C_PlayOutOk_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.StartAnimationPlayList
struct UWBP_QTETiming_C_StartAnimationPlayList_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.PlayAnimationPlayList
struct UWBP_QTETiming_C_PlayAnimationPlayList_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.InitializeAnimationSet
struct UWBP_QTETiming_C_InitializeAnimationSet_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.PlayIn
struct UWBP_QTETiming_C_PlayIn_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingInputSuccess
struct UWBP_QTETiming_C_IsPlayingInputSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.ResetAllButtonZOrder
struct UWBP_QTETiming_C_ResetAllButtonZOrder_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.ResetButtonZOrder
struct UWBP_QTETiming_C_ResetButtonZOrder_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.SetButtonZOrderToFront
struct UWBP_QTETiming_C_SetButtonZOrderToFront_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.GetButtonImage
struct UWBP_QTETiming_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.PlayInputSuccess
struct UWBP_QTETiming_C_PlayInputSuccess_Params
{
	bool                                               IsAutoHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.Reset
struct UWBP_QTETiming_C_Reset_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.Construct
struct UWBP_QTETiming_C_Construct_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnButtonInputAnimationFinished
struct UWBP_QTETiming_C_OnButtonInputAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnFinishedCurrentAnimation
struct UWBP_QTETiming_C_OnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.BindOnFinishedCurrentAnimation
struct UWBP_QTETiming_C_BindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnFinishedCurrentAnimation
struct UWBP_QTETiming_C_UnbindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.BindOnInAnimationFinished
struct UWBP_QTETiming_C_BindOnInAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinished
struct UWBP_QTETiming_C_OnInAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnInAnimationFinished
struct UWBP_QTETiming_C_UnbindOnInAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.BindOnOutAnimationFinished
struct UWBP_QTETiming_C_BindOnOutAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinished
struct UWBP_QTETiming_C_OnOutAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnOutAnimationFinished
struct UWBP_QTETiming_C_UnbindOnOutAnimationFinished_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.ExecuteUbergraph_WBP_QTETiming
struct UWBP_QTETiming_C_ExecuteUbergraph_WBP_QTETiming_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTETiming_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTETiming_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTETiming.WBP_QTETiming_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
struct UWBP_QTETiming_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
