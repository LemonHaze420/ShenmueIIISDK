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

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C._dbgPrint
struct Uwgt_S3actionSelect_timer_C__dbgPrint_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.registTimerEvent
struct Uwgt_S3actionSelect_timer_C_registTimerEvent_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_startTimer
struct Uwgt_S3actionSelect_timer_C_doCmd_startTimer_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.updateProgress
struct Uwgt_S3actionSelect_timer_C_updateProgress_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_resetTimer
struct Uwgt_S3actionSelect_timer_C_doCmd_resetTimer_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_pauseTimer
struct Uwgt_S3actionSelect_timer_C_doCmd_pauseTimer_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.getProgress(percent)
struct Uwgt_S3actionSelect_timer_C_getProgress_percent__Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.getProgress(second)
struct Uwgt_S3actionSelect_timer_C_getProgress_second__Params
{
	float                                              Second;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_cancel
struct Uwgt_S3actionSelect_timer_C_doCmd_cancel_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_fadeOut
struct Uwgt_S3actionSelect_timer_C_doCmd_fadeOut_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_fadeIn
struct Uwgt_S3actionSelect_timer_C_doCmd_fadeIn_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.updateOpacity(imageTimer)
struct Uwgt_S3actionSelect_timer_C_updateOpacity_imageTimer__Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.Construct
struct Uwgt_S3actionSelect_timer_C_Construct_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.OnAnimationFinished
struct Uwgt_S3actionSelect_timer_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.PauseTimer
struct Uwgt_S3actionSelect_timer_C_PauseTimer_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.UnpauseTimer
struct Uwgt_S3actionSelect_timer_C_UnpauseTimer_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.Tick
struct Uwgt_S3actionSelect_timer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.endFadeIn(hiddenParent)
struct Uwgt_S3actionSelect_timer_C_endFadeIn_hiddenParent__Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.endFadeOut(hiddenParent)
struct Uwgt_S3actionSelect_timer_C_endFadeOut_hiddenParent__Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.ExecuteUbergraph_wgt_S3actionSelect_timer
struct Uwgt_S3actionSelect_timer_C_ExecuteUbergraph_wgt_S3actionSelect_timer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onTimeover__DelegateSignature
struct Uwgt_S3actionSelect_timer_C_onTimeover__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onEndFadeOut__DelegateSignature
struct Uwgt_S3actionSelect_timer_C_onEndFadeOut__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onEndFadeIn__DelegateSignature
struct Uwgt_S3actionSelect_timer_C_onEndFadeIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
