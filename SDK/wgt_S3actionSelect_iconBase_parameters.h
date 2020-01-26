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

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.doCmd_fade
struct Uwgt_S3actionSelect_iconBase_C_doCmd_fade_Params
{
	bool                                               FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.updateOpacity
struct Uwgt_S3actionSelect_iconBase_C_updateOpacity_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.Construct
struct Uwgt_S3actionSelect_iconBase_C_Construct_Params
{
};

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.OnAnimationFinished
struct Uwgt_S3actionSelect_iconBase_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.ExecuteUbergraph_wgt_S3actionSelect_iconBase
struct Uwgt_S3actionSelect_iconBase_C_ExecuteUbergraph_wgt_S3actionSelect_iconBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.onEndFade__DelegateSignature
struct Uwgt_S3actionSelect_iconBase_C_onEndFade__DelegateSignature_Params
{
	bool                                               FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
