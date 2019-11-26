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

// Function BW_FloatProperty.BW_FloatProperty_C.ClampNewValue
struct UBW_FloatProperty_C_ClampNewValue_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.OnAnalogValueChanged
struct UBW_FloatProperty_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_FloatProperty.BW_FloatProperty_C.SetFloatParameterValue
struct UBW_FloatProperty_C_SetFloatParameterValue_Params
{
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CallDispatcher;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.GetFloatParameterValue
struct UBW_FloatProperty_C_GetFloatParameterValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.GetParameterName
struct UBW_FloatProperty_C_GetParameterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
struct UBW_FloatProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.Tick
struct UBW_FloatProperty_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.GetMinMax
struct UBW_FloatProperty_C_GetMinMax_Params
{
};

// Function BW_FloatProperty.BW_FloatProperty_C.Construct
struct UBW_FloatProperty_C_Construct_Params
{
};

// Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_FloatProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.PropertyChanged
struct UBW_FloatProperty_C_PropertyChanged_Params
{
};

// Function BW_FloatProperty.BW_FloatProperty_C.ExecuteUbergraph_BW_FloatProperty
struct UBW_FloatProperty_C_ExecuteUbergraph_BW_FloatProperty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_FloatProperty.BW_FloatProperty_C.FloatPropertyChanged__DelegateSignature
struct UBW_FloatProperty_C_FloatPropertyChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
