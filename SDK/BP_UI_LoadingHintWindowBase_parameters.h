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

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.SHOWHP
struct ABP_UI_LoadingHintWindowBase_C_SHOWHP_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHint
struct ABP_UI_LoadingHintWindowBase_C_ShowHint_Params
{
	struct FST_LoadingHintWindowParam                  Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.NotifyLoadingDone
struct ABP_UI_LoadingHintWindowBase_C_NotifyLoadingDone_Params
{
};

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.UserConstructionScript
struct ABP_UI_LoadingHintWindowBase_C_UserConstructionScript_Params
{
};

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.OnWindowClose__DelegateSignature
struct ABP_UI_LoadingHintWindowBase_C_OnWindowClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
