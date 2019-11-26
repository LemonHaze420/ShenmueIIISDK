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

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.SetState
struct UBW_SimpleDebugToggle_C_SetState_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.GetState
struct UBW_SimpleDebugToggle_C_GetState_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.GetParameterName
struct UBW_SimpleDebugToggle_C_GetParameterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.Tick
struct UBW_SimpleDebugToggle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
struct UBW_SimpleDebugToggle_C_BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.PreConstruct
struct UBW_SimpleDebugToggle_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnAddedToFocusPath
struct UBW_SimpleDebugToggle_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.BndEvt__BoolValue_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBW_SimpleDebugToggle_C_BndEvt__BoolValue_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.ExecuteUbergraph_BW_SimpleDebugToggle
struct UBW_SimpleDebugToggle_C_ExecuteUbergraph_BW_SimpleDebugToggle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnFocused__DelegateSignature
struct UBW_SimpleDebugToggle_C_OnFocused__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnChangedByUser__DelegateSignature
struct UBW_SimpleDebugToggle_C_OnChangedByUser__DelegateSignature_Params
{
	class UBW_SimpleDebugToggle_C*                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECheckBoxState                                     NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
