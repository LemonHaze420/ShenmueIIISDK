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

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.SetFocusToButton
struct UBW_DebugPerfMenuLevelItem_C_SetFocusToButton_Params
{
};

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnAddedToFocusPath
struct UBW_DebugPerfMenuLevelItem_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.Construct
struct UBW_DebugPerfMenuLevelItem_C_Construct_Params
{
};

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugPerfMenuLevelItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.ExecuteUbergraph_BW_DebugPerfMenuLevelItem
struct UBW_DebugPerfMenuLevelItem_C_ExecuteUbergraph_BW_DebugPerfMenuLevelItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnFocused__DelegateSignature
struct UBW_DebugPerfMenuLevelItem_C_OnFocused__DelegateSignature_Params
{
	class US3Button*                                   Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnLevelClicked__DelegateSignature
struct UBW_DebugPerfMenuLevelItem_C_OnLevelClicked__DelegateSignature_Params
{
	class ULevelStreaming*                             Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
