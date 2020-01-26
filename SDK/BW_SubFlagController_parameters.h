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

// Function BW_SubFlagController.BW_SubFlagController_C.UpdateAllWidgetFlagIds
struct UBW_SubFlagController_C_UpdateAllWidgetFlagIds_Params
{
};

// Function BW_SubFlagController.BW_SubFlagController_C.WidgetIdxToFlagIdx
struct UBW_SubFlagController_C_WidgetIdxToFlagIdx_Params
{
	int                                                WidgetIdx;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagIdx;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.UpdateWidgetValue
struct UBW_SubFlagController_C_UpdateWidgetValue_Params
{
	class UBW_IntegerProperty_C*                       Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.SetTargetFlagValue
struct UBW_SubFlagController_C_SetTargetFlagValue_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.GetTargetFlagValue
struct UBW_SubFlagController_C_GetTargetFlagValue_Params
{
	int                                                FlagIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.UpdateWidgetFlagId
struct UBW_SubFlagController_C_UpdateWidgetFlagId_Params
{
	class UBW_IntegerProperty_C*                       Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                WidgetIdx;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.Tick
struct UBW_SubFlagController_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.ChangePage
struct UBW_SubFlagController_C_ChangePage_Params
{
};

// Function BW_SubFlagController.BW_SubFlagController_C.OnFlagPropertyChanged
struct UBW_SubFlagController_C_OnFlagPropertyChanged_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBW_IntegerProperty_C*                       Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_SubFlagController.BW_SubFlagController_C.SetInitialFocus
struct UBW_SubFlagController_C_SetInitialFocus_Params
{
};

// Function BW_SubFlagController.BW_SubFlagController_C.BuildMenu
struct UBW_SubFlagController_C_BuildMenu_Params
{
};

// Function BW_SubFlagController.BW_SubFlagController_C.ExecuteUbergraph_BW_SubFlagController
struct UBW_SubFlagController_C_ExecuteUbergraph_BW_SubFlagController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
