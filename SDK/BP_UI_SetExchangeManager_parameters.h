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

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.IsVisibleRStickCenterPos
struct ABP_UI_SetExchangeManager_C_IsVisibleRStickCenterPos_Params
{
	bool                                               IsCenter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.IsVisibleRStickOnlyViewMode
struct ABP_UI_SetExchangeManager_C_IsVisibleRStickOnlyViewMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MakeAreaItemIdList
struct ABP_UI_SetExchangeManager_C_MakeAreaItemIdList_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.GetItem
struct ABP_UI_SetExchangeManager_C_GetItem_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.SetRightWindow
struct ABP_UI_SetExchangeManager_C_SetRightWindow_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.SetExchangeChangePage
struct ABP_UI_SetExchangeManager_C_SetExchangeChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MakeItemIdList
struct ABP_UI_SetExchangeManager_C_MakeItemIdList_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.UserConstructionScript
struct ABP_UI_SetExchangeManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ReceiveBeginPlay
struct ABP_UI_SetExchangeManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ReceiveTick
struct ABP_UI_SetExchangeManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MoveCategoryFocusAfter
struct ABP_UI_SetExchangeManager_C_MoveCategoryFocusAfter_Params
{
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ChangePage
struct ABP_UI_SetExchangeManager_C_ChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.PushCheckDialog
struct ABP_UI_SetExchangeManager_C_PushCheckDialog_Params
{
	TEnumAsByte<EN_UI_Button>                          PushButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ExecuteUbergraph_BP_UI_SetExchangeManager
struct ABP_UI_SetExchangeManager_C_ExecuteUbergraph_BP_UI_SetExchangeManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
