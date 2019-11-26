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

// Function BW_IntegerProperty.BW_IntegerProperty_C.SetValue
struct UBW_IntegerProperty_C_SetValue_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.GetIntToFloatConvertValue
struct UBW_IntegerProperty_C_GetIntToFloatConvertValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.Reset
struct UBW_IntegerProperty_C_Reset_Params
{
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.ClampNewValue
struct UBW_IntegerProperty_C_ClampNewValue_Params
{
	int                                                InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.OnAnalogValueChanged
struct UBW_IntegerProperty_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.SetIntegerParameterValue
struct UBW_IntegerProperty_C_SetIntegerParameterValue_Params
{
	int                                                NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CallDispatcher;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.GetIntegerParameterValue
struct UBW_IntegerProperty_C_GetIntegerParameterValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.GetParameterName
struct UBW_IntegerProperty_C_GetParameterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.Construct
struct UBW_IntegerProperty_C_Construct_Params
{
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.Tick
struct UBW_IntegerProperty_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
struct UBW_IntegerProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.GetMinMax
struct UBW_IntegerProperty_C_GetMinMax_Params
{
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_IntegerProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.PropertyChanged
struct UBW_IntegerProperty_C_PropertyChanged_Params
{
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.ExecuteUbergraph_BW_IntegerProperty
struct UBW_IntegerProperty_C_ExecuteUbergraph_BW_IntegerProperty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.IntegerPropertyChangedWithData__DelegateSignature
struct UBW_IntegerProperty_C_IntegerPropertyChangedWithData__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBW_IntegerProperty_C*                       Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_IntegerProperty.BW_IntegerProperty_C.IntegerPropertyChanged__DelegateSignature
struct UBW_IntegerProperty_C_IntegerPropertyChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
