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

// Function WBP_QTESelect.WBP_QTESelect_C.StopLoopAnimation
struct UWBP_QTESelect_C_StopLoopAnimation_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingLoopAnimation
struct UWBP_QTESelect_C_IsPlayingLoopAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.PlayLoopAnimation
struct UWBP_QTESelect_C_PlayLoopAnimation_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.UpdateAnimationState
struct UWBP_QTESelect_C_UpdateAnimationState_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.GetInAnimationLength
struct UWBP_QTESelect_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.SetButtonImageFromInputName
struct UWBP_QTESelect_C_SetButtonImageFromInputName_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.SetAutoOutOkAfterInputSuccess
struct UWBP_QTESelect_C_SetAutoOutOkAfterInputSuccess_Params
{
	bool                                               IsAutoOut;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.SetTimeGaugeRate
struct UWBP_QTESelect_C_SetTimeGaugeRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.InitializeAnimationSet
struct UWBP_QTESelect_C_InitializeAnimationSet_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingOut
struct UWBP_QTESelect_C_IsPlayingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.PlayOutNg
struct UWBP_QTESelect_C_PlayOutNg_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.PlayOutOk
struct UWBP_QTESelect_C_PlayOutOk_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingIn
struct UWBP_QTESelect_C_IsPlayingIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.PlayIn
struct UWBP_QTESelect_C_PlayIn_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingInputSuccess
struct UWBP_QTESelect_C_IsPlayingInputSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.PlayInputSuccess
struct UWBP_QTESelect_C_PlayInputSuccess_Params
{
	bool                                               IsAutoHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.Reset
struct UWBP_QTESelect_C_Reset_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.StartAnimationPlayList
struct UWBP_QTESelect_C_StartAnimationPlayList_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.PlayAnimationPlayList
struct UWBP_QTESelect_C_PlayAnimationPlayList_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.ResetAllButtonZOrder
struct UWBP_QTESelect_C_ResetAllButtonZOrder_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.ResetButtonZOrder
struct UWBP_QTESelect_C_ResetButtonZOrder_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.SetButtonZOrderToFront
struct UWBP_QTESelect_C_SetButtonZOrderToFront_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.GetButtonImage
struct UWBP_QTESelect_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.Construct
struct UWBP_QTESelect_C_Construct_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnButtonInputAnimationFinished
struct UWBP_QTESelect_C_OnButtonInputAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.BindOnFinishedCurrentAnimation
struct UWBP_QTESelect_C_BindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnFinishedCurrentAnimation
struct UWBP_QTESelect_C_OnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnFinishedCurrentAnimation
struct UWBP_QTESelect_C_UnbindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.BindOnInAnimationFinished
struct UWBP_QTESelect_C_BindOnInAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnInAnimationFinished
struct UWBP_QTESelect_C_OnInAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnInAnimationFinished
struct UWBP_QTESelect_C_UnbindOnInAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.BindOnOutAnimationFinished
struct UWBP_QTESelect_C_BindOnOutAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnOutAnimationFinished
struct UWBP_QTESelect_C_OnOutAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnOutAnimationFinished
struct UWBP_QTESelect_C_UnbindOnOutAnimationFinished_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.ExecuteUbergraph_WBP_QTESelect
struct UWBP_QTESelect_C_ExecuteUbergraph_WBP_QTESelect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnOutAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTESelect_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnInAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTESelect_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTESelect.WBP_QTESelect_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
struct UWBP_QTESelect_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
