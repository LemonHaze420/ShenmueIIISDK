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

// Function wgt_eyecatch.wgt_eyecatch_C.updateDate
struct Uwgt_eyecatch_C_updateDate_Params
{
};

// Function wgt_eyecatch.wgt_eyecatch_C.checkHour
struct Uwgt_eyecatch_C_checkHour_Params
{
	int                                                Time_hour_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeHour;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(logo)
struct Uwgt_eyecatch_C_updateDatas_logo__Params
{
	class UTexture*                                    LogoImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(text2)
struct Uwgt_eyecatch_C_updateDatas_text2__Params
{
	struct FText                                       main1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       sub1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       main2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       sub2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(text1)
struct Uwgt_eyecatch_C_updateDatas_text1__Params
{
	struct FText                                       Main;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       sub;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_eyecatch.wgt_eyecatch_C.OnAnimationFinished
struct Uwgt_eyecatch_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(text1)
struct Uwgt_eyecatch_C_fadeOut_Event_text1__Params
{
	bool                                               fadeFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(text2)
struct Uwgt_eyecatch_C_fadeOut_Event_text2__Params
{
	bool                                               fadeFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(logo)
struct Uwgt_eyecatch_C_fadeOut_Event_logo__Params
{
	bool                                               fadeFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.fade_Event
struct Uwgt_eyecatch_C_fade_Event_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fadeFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatch
struct Uwgt_eyecatch_C_ShowEyecatch_Params
{
	struct FText*                                      MainTitle;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Subtitle;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bUseFade;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatchText2
struct Uwgt_eyecatch_C_ShowEyecatchText2_Params
{
	struct FText*                                      MainTitle1;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      SubTitle1;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      MainTitle2;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      SubTitle2;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bUseFade;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatchTexture
struct Uwgt_eyecatch_C_ShowEyecatchTexture_Params
{
	class UTexture**                                   LogoImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseFade;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.HideEyecatch
struct Uwgt_eyecatch_C_HideEyecatch_Params
{
	bool*                                              bUseFade;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.ExecuteUbergraph_wgt_eyecatch
struct Uwgt_eyecatch_C_ExecuteUbergraph_wgt_eyecatch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_eyecatch.wgt_eyecatch_C.onFadeFinish(out)__DelegateSignature
struct Uwgt_eyecatch_C_onFadeFinish_out___DelegateSignature_Params
{
};

// Function wgt_eyecatch.wgt_eyecatch_C.onFadeFinish(in)__DelegateSignature
struct Uwgt_eyecatch_C_onFadeFinish_in___DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
