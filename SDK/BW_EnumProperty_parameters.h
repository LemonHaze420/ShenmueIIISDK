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

// Function BW_EnumProperty.BW_EnumProperty_C.SetPropertyValue
struct UBW_EnumProperty_C_SetPropertyValue_Params
{
	unsigned char                                      Byte;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CallDispatcher;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_EnumProperty.BW_EnumProperty_C.GetPropertyValue
struct UBW_EnumProperty_C_GetPropertyValue_Params
{
	unsigned char                                      Byte;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_EnumProperty.BW_EnumProperty_C.OnKeyDown
struct UBW_EnumProperty_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_EnumProperty.BW_EnumProperty_C.GetParameterName
struct UBW_EnumProperty_C_GetParameterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_EnumProperty.BW_EnumProperty_C.Construct
struct UBW_EnumProperty_C_Construct_Params
{
};

// Function BW_EnumProperty.BW_EnumProperty_C.BndEvt__EnumComboBox_K2Node_ComponentBoundEvent_294_OnSelectionChangedEvent__DelegateSignature
struct UBW_EnumProperty_C_BndEvt__EnumComboBox_K2Node_ComponentBoundEvent_294_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_EnumProperty.BW_EnumProperty_C.SetStartingValue
struct UBW_EnumProperty_C_SetStartingValue_Params
{
};

// Function BW_EnumProperty.BW_EnumProperty_C.PropertyChanged
struct UBW_EnumProperty_C_PropertyChanged_Params
{
};

// Function BW_EnumProperty.BW_EnumProperty_C.ExecuteUbergraph_BW_EnumProperty
struct UBW_EnumProperty_C_ExecuteUbergraph_BW_EnumProperty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_EnumProperty.BW_EnumProperty_C.EnumPropertyChanged__DelegateSignature
struct UBW_EnumProperty_C_EnumPropertyChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
