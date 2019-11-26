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

// Function WBP_QTESingle.WBP_QTESingle_C.UpdateAnimationState
struct UWBP_QTESingle_C_UpdateAnimationState_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.GetInAnimationLength
struct UWBP_QTESingle_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.SetButtonImageFromInputName
struct UWBP_QTESingle_C_SetButtonImageFromInputName_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.SetAutoOutOkAfterInputSuccess
struct UWBP_QTESingle_C_SetAutoOutOkAfterInputSuccess_Params
{
	bool                                               IsAutoOut;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.SetTimeGaugeRate
struct UWBP_QTESingle_C_SetTimeGaugeRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingOut
struct UWBP_QTESingle_C_IsPlayingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingIn
struct UWBP_QTESingle_C_IsPlayingIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.PlayOutNg
struct UWBP_QTESingle_C_PlayOutNg_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.PlayOutOk
struct UWBP_QTESingle_C_PlayOutOk_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.StartAnimationPlayList
struct UWBP_QTESingle_C_StartAnimationPlayList_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.PlayAnimationPlayList
struct UWBP_QTESingle_C_PlayAnimationPlayList_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.InitializeAnimationSet
struct UWBP_QTESingle_C_InitializeAnimationSet_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.PlayIn
struct UWBP_QTESingle_C_PlayIn_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingInputSuccess
struct UWBP_QTESingle_C_IsPlayingInputSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.ResetAllButtonZOrder
struct UWBP_QTESingle_C_ResetAllButtonZOrder_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.ResetButtonZOrder
struct UWBP_QTESingle_C_ResetButtonZOrder_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.SetButtonZOrderToFront
struct UWBP_QTESingle_C_SetButtonZOrderToFront_Params
{
	class UWBP_QTEFreeCommandButton_C*                 TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.GetButtonImage
struct UWBP_QTESingle_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.PlayInputSuccess
struct UWBP_QTESingle_C_PlayInputSuccess_Params
{
	bool                                               IsAutoHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.Reset
struct UWBP_QTESingle_C_Reset_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.Construct
struct UWBP_QTESingle_C_Construct_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnButtonInputAnimationFinished
struct UWBP_QTESingle_C_OnButtonInputAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnFinishedCurrentAnimation
struct UWBP_QTESingle_C_OnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.BindOnFinishedCurrentAnimation
struct UWBP_QTESingle_C_BindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnFinishedCurrentAnimation
struct UWBP_QTESingle_C_UnbindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.BindOnInAnimationFinished
struct UWBP_QTESingle_C_BindOnInAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnInAnimationFinished
struct UWBP_QTESingle_C_OnInAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnInAnimationFinished
struct UWBP_QTESingle_C_UnbindOnInAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.BindOnOutAnimationFinished
struct UWBP_QTESingle_C_BindOnOutAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnOutAnimationFinished
struct UWBP_QTESingle_C_OnOutAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnOutAnimationFinished
struct UWBP_QTESingle_C_UnbindOnOutAnimationFinished_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.ExecuteUbergraph_WBP_QTESingle
struct UWBP_QTESingle_C_ExecuteUbergraph_WBP_QTESingle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnOutAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTESingle_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnInAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTESingle_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTESingle.WBP_QTESingle_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
struct UWBP_QTESingle_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
