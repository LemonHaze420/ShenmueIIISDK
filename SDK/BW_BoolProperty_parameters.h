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

// Function BW_BoolProperty.BW_BoolProperty_C.GetCheckedState
struct UBW_BoolProperty_C_GetCheckedState_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_BoolProperty.BW_BoolProperty_C.GetParameterName
struct UBW_BoolProperty_C_GetParameterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_BoolProperty.BW_BoolProperty_C.Tick
struct UBW_BoolProperty_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_BoolProperty.BW_BoolProperty_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBW_BoolProperty_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_BoolProperty.BW_BoolProperty_C.BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
struct UBW_BoolProperty_C_BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_BoolProperty.BW_BoolProperty_C.PreConstruct
struct UBW_BoolProperty_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_BoolProperty.BW_BoolProperty_C.ExecuteUbergraph_BW_BoolProperty
struct UBW_BoolProperty_C_ExecuteUbergraph_BW_BoolProperty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_BoolProperty.BW_BoolProperty_C.BoolPropertyChanged__DelegateSignature
struct UBW_BoolProperty_C_BoolPropertyChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
