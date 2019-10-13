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

// Function BP_eyecatch.BP_eyecatch_C.UpdateDateTime
struct ABP_eyecatch_C_UpdateDateTime_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.HideWidget
struct ABP_eyecatch_C_HideWidget_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.IsVisible
struct ABP_eyecatch_C_IsVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_eyecatch.BP_eyecatch_C.SetVisibility
struct ABP_eyecatch_C_SetVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_eyecatch.BP_eyecatch_C.setTitle
struct ABP_eyecatch_C_setTitle_Params
{
	struct FText                                       main1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       sub1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_eyecatch.BP_eyecatch_C.setWaitTime
struct ABP_eyecatch_C_setWaitTime_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_eyecatch.BP_eyecatch_C.UpdateWidget
struct ABP_eyecatch_C_UpdateWidget_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.ShowEyecatch
struct ABP_eyecatch_C_ShowEyecatch_Params
{
	struct FText                                       main1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       sub1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_eyecatch.BP_eyecatch_C.UserConstructionScript
struct ABP_eyecatch_C_UserConstructionScript_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.ReceiveBeginPlay
struct ABP_eyecatch_C_ReceiveBeginPlay_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.catchFadeInFinished
struct ABP_eyecatch_C_catchFadeInFinished_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.waitEasy
struct ABP_eyecatch_C_waitEasy_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.catchEndWaitEasy
struct ABP_eyecatch_C_catchEndWaitEasy_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.endEasy
struct ABP_eyecatch_C_endEasy_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.catchFadeOutFinished
struct ABP_eyecatch_C_catchFadeOutFinished_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.finishEasy
struct ABP_eyecatch_C_finishEasy_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeIn
struct ABP_eyecatch_C_BindFinishFadeIn_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.branch_easy(in)
struct ABP_eyecatch_C_branch_easy_in__Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeOut
struct ABP_eyecatch_C_BindFinishFadeOut_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.branch_easy(out)
struct ABP_eyecatch_C_branch_easy_out__Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.startEasy
struct ABP_eyecatch_C_startEasy_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.ExecuteUbergraph_BP_eyecatch
struct ABP_eyecatch_C_ExecuteUbergraph_BP_eyecatch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_eyecatch.BP_eyecatch_C.onFadeStart(out)__DelegateSignature
struct ABP_eyecatch_C_onFadeStart_out___DelegateSignature_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.onFadeStart(in)__DelegateSignature
struct ABP_eyecatch_C_onFadeStart_in___DelegateSignature_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(out)__DelegateSignature
struct ABP_eyecatch_C_onFadeFinish_out___DelegateSignature_Params
{
};

// Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(in)__DelegateSignature
struct ABP_eyecatch_C_onFadeFinish_in___DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
