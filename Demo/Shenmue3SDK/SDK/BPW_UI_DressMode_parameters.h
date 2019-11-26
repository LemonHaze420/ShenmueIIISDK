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

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.CheckVisibleArrow
struct UBPW_UI_DressMode_C_CheckVisibleArrow_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetCloth
struct UBPW_UI_DressMode_C_ResetCloth_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetRotation
struct UBPW_UI_DressMode_C_ResetRotation_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.RotationModel
struct UBPW_UI_DressMode_C_RotationModel_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.UpdateCharaCloth
struct UBPW_UI_DressMode_C_UpdateCharaCloth_Params
{
	bool                                               Apply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.Fitting
struct UBPW_UI_DressMode_C_Fitting_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeFittingInfo
struct UBPW_UI_DressMode_C_MakeFittingInfo_Params
{
	TArray<struct FST_ClothesFittingInfo>              FittingInfo;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.InitCloth
struct UBPW_UI_DressMode_C_InitCloth_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeList
struct UBPW_UI_DressMode_C_MakeList_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.SetCaptureCharaClothing
struct UBPW_UI_DressMode_C_SetCaptureCharaClothing_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushDownButton
struct UBPW_UI_DressMode_C_PushDownButton_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ChangeClothing
struct UBPW_UI_DressMode_C_ChangeClothing_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightLeftCursor
struct UBPW_UI_DressMode_C_PushRightLeftCursor_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightButton
struct UBPW_UI_DressMode_C_PushRightButton_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushUpDownCursor
struct UBPW_UI_DressMode_C_PushUpDownCursor_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.Construct
struct UBPW_UI_DressMode_C_Construct_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ClothChanged
struct UBPW_UI_DressMode_C_ClothChanged_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPW_UI_DressMode_C_BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ExecuteUbergraph_BPW_UI_DressMode
struct UBPW_UI_DressMode_C_ExecuteUbergraph_BPW_UI_DressMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
