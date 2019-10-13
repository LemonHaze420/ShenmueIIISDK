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

// Function BW_IntProperty.BW_IntProperty_C.OnKeyDown
struct UBW_IntProperty_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_IntProperty.BW_IntProperty_C.GetFloatForSpinBox
struct UBW_IntProperty_C_GetFloatForSpinBox_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.ClampNewValue
struct UBW_IntProperty_C_ClampNewValue_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.SetIntParameterValue
struct UBW_IntProperty_C_SetIntParameterValue_Params
{
	int                                                NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.GetIntParameterValue
struct UBW_IntProperty_C_GetIntParameterValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.GetParameterName
struct UBW_IntProperty_C_GetParameterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_IntProperty.BW_IntProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
struct UBW_IntProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.Tick
struct UBW_IntProperty_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.GetMinMax
struct UBW_IntProperty_C_GetMinMax_Params
{
};

// Function BW_IntProperty.BW_IntProperty_C.Construct
struct UBW_IntProperty_C_Construct_Params
{
};

// Function BW_IntProperty.BW_IntProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_IntProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.PropertyChanged
struct UBW_IntProperty_C_PropertyChanged_Params
{
};

// Function BW_IntProperty.BW_IntProperty_C.ExecuteUbergraph_BW_IntProperty
struct UBW_IntProperty_C_ExecuteUbergraph_BW_IntProperty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_IntProperty.BW_IntProperty_C.FloatPropertyChanged__DelegateSignature
struct UBW_IntProperty_C_FloatPropertyChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
