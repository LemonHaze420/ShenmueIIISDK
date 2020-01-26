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

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.OnFocusReceived
struct UBW_DebugInputCategory_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryColor
struct UBW_DebugInputCategory_C_GetCategoryColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.GetCategoryName
struct UBW_DebugInputCategory_C_GetCategoryName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.AddWidgetToCategory
struct UBW_DebugInputCategory_C_AddWidgetToCategory_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.Tick
struct UBW_DebugInputCategory_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugInputCategory_C_BndEvt__Button_393_K2Node_ComponentBoundEvent_282_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugInputCategory.BW_DebugInputCategory_C.ExecuteUbergraph_BW_DebugInputCategory
struct UBW_DebugInputCategory_C_ExecuteUbergraph_BW_DebugInputCategory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
