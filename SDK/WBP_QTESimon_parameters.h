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

// Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButtonEffect
struct UWBP_QTESimon_C_GetCurrentInstructionButtonEffect_Params
{
	class UWBP_QTESimonButtonEffect_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonEffectFromInputName
struct UWBP_QTESimon_C_GetButtonEffectFromInputName_Params
{
	struct FName                                       InInputName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_QTESimonButtonEffect_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonEffectZOrder
struct UWBP_QTESimon_C_ResetAllButtonEffectZOrder_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonEffectZOrder
struct UWBP_QTESimon_C_ResetButtonEffectZOrder_Params
{
	class UWBP_QTESimonButtonEffect_C*                 TargetButtonEffect;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.SetButtonEffectZOrderToFront
struct UWBP_QTESimon_C_SetButtonEffectZOrderToFront_Params
{
	class UWBP_QTESimonButtonEffect_C*                 TargetButtonEffect;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInstruction
struct UWBP_QTESimon_C_IsPlayingInstruction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.StopInstructions
struct UWBP_QTESimon_C_StopInstructions_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutBack
struct UWBP_QTESimon_C_PlayOutBack_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.StartWaitTime
struct UWBP_QTESimon_C_StartWaitTime_Params
{
	float                                              InWaitTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.Update
struct UWBP_QTESimon_C_Update_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.SetupButton
struct UWBP_QTESimon_C_SetupButton_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButton
struct UWBP_QTESimon_C_GetCurrentInstructionButton_Params
{
	class UWBP_QTESimonButton_C*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonFromInputName
struct UWBP_QTESimon_C_GetButtonFromInputName_Params
{
	struct FName                                       InInputName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_QTESimonButton_C*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.SetInstructions
struct UWBP_QTESimon_C_SetInstructions_Params
{
	TArray<struct FName>                               InInstructions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_QTESimon.WBP_QTESimon_C.UpdateAnimationState
struct UWBP_QTESimon_C_UpdateAnimationState_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.GetInAndInstructionAnimationLength
struct UWBP_QTESimon_C_GetInAndInstructionAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.SetAutoOutOkAfterInputSuccess
struct UWBP_QTESimon_C_SetAutoOutOkAfterInputSuccess_Params
{
	bool                                               IsAutoOut;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.SetTimeGaugeRate
struct UWBP_QTESimon_C_SetTimeGaugeRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingOut
struct UWBP_QTESimon_C_IsPlayingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingIn
struct UWBP_QTESimon_C_IsPlayingIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutNg
struct UWBP_QTESimon_C_PlayOutNg_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutOk
struct UWBP_QTESimon_C_PlayOutOk_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.StartAnimationPlayList
struct UWBP_QTESimon_C_StartAnimationPlayList_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayAnimationPlayList
struct UWBP_QTESimon_C_PlayAnimationPlayList_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.InitializeAnimationSet
struct UWBP_QTESimon_C_InitializeAnimationSet_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayIn
struct UWBP_QTESimon_C_PlayIn_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInputSuccess
struct UWBP_QTESimon_C_IsPlayingInputSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonZOrder
struct UWBP_QTESimon_C_ResetAllButtonZOrder_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonZOrder
struct UWBP_QTESimon_C_ResetButtonZOrder_Params
{
	class UWBP_QTESimonButton_C*                       TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.SetButtonZOrderToFront
struct UWBP_QTESimon_C_SetButtonZOrderToFront_Params
{
	class UWBP_QTESimonButton_C*                       TargetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonImage
struct UWBP_QTESimon_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayInputSuccess
struct UWBP_QTESimon_C_PlayInputSuccess_Params
{
	struct FName                                       InInputName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoHide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.Reset
struct UWBP_QTESimon_C_Reset_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.Construct
struct UWBP_QTESimon_C_Construct_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.Tick
struct UWBP_QTESimon_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInputAnimationFinished
struct UWBP_QTESimon_C_OnButtonInputAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnFinishedCurrentAnimation
struct UWBP_QTESimon_C_OnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.BindOnFinishedCurrentAnimation
struct UWBP_QTESimon_C_BindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnFinishedCurrentAnimation
struct UWBP_QTESimon_C_UnbindOnFinishedCurrentAnimation_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.BindOnInAnimationFinished
struct UWBP_QTESimon_C_BindOnInAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinished
struct UWBP_QTESimon_C_OnInAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnInAnimationFinished
struct UWBP_QTESimon_C_UnbindOnInAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.BindOnOutAnimationFinished
struct UWBP_QTESimon_C_BindOnOutAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinished
struct UWBP_QTESimon_C_OnOutAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnOutAnimationFinished
struct UWBP_QTESimon_C_UnbindOnOutAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInstructionAnimationFinished
struct UWBP_QTESimon_C_OnButtonInstructionAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.PlayInstructions
struct UWBP_QTESimon_C_PlayInstructions_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedAfterPlayAnim
struct UWBP_QTESimon_C_OnWaitTimeFinishedAfterPlayAnim_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedBeforeOutBack
struct UWBP_QTESimon_C_OnWaitTimeFinishedBeforeOutBack_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnOutbackAnimationFinished
struct UWBP_QTESimon_C_OnOutbackAnimationFinished_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.ExecuteUbergraph_WBP_QTESimon
struct UWBP_QTESimon_C_ExecuteUbergraph_WBP_QTESimon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinished__DelegateSignature
struct UWBP_QTESimon_C_OnWaitTimeFinished__DelegateSignature_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTESimon_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinishedDispatcher__DelegateSignature
struct UWBP_QTESimon_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params
{
};

// Function WBP_QTESimon.WBP_QTESimon_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
struct UWBP_QTESimon_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
