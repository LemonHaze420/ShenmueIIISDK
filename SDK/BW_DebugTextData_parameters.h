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

// Function BW_DebugTextData.BW_DebugTextData_C.IsUseStepFilterPath
struct UBW_DebugTextData_C_IsUseStepFilterPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Get_DataListComboBox_bIsEnabled_1
struct UBW_DebugTextData_C_Get_DataListComboBox_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.GetEventStepToString
struct UBW_DebugTextData_C_GetEventStepToString_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BW_DebugTextData.BW_DebugTextData_C.IncrementTextDataIndex
struct UBW_DebugTextData_C_IncrementTextDataIndex_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.IsUseEventStepFilter
struct UBW_DebugTextData_C_IsUseEventStepFilter_Params
{
	bool                                               bUseFilter;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Value Committed
struct UBW_DebugTextData_C_Value_Committed_Params
{
	class USpinBox*                                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           Method;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Get_EventStepGroup_bIsEnabled_1
struct UBW_DebugTextData_C_Get_EventStepGroup_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Get_TextBlock_4_Text_1
struct UBW_DebugTextData_C_Get_TextBlock_4_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Get_CurrentTextdataIndex_Text_1
struct UBW_DebugTextData_C_Get_CurrentTextdataIndex_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Construct
struct UBW_DebugTextData_C_Construct_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.Tick
struct UBW_DebugTextData_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.Destruct
struct UBW_DebugTextData_C_Destruct_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__PathTypeProperty_K2Node_ComponentBoundEvent_175_EnumPropertyChanged__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__PathTypeProperty_K2Node_ComponentBoundEvent_175_EnumPropertyChanged__DelegateSignature_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__LocaleProperty_K2Node_ComponentBoundEvent_184_EnumPropertyChanged__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__LocaleProperty_K2Node_ComponentBoundEvent_184_EnumPropertyChanged__DelegateSignature_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.UpdateTextDataAssets
struct UBW_DebugTextData_C_UpdateTextDataAssets_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_205_OnSelectionChangedEvent__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_205_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_261_OnButtonPressedEvent__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_261_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.Finalize
struct UBW_DebugTextData_C_Finalize_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.PlaySubtitlePlayer
struct UBW_DebugTextData_C_PlaySubtitlePlayer_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.OnChangeStep
struct UBW_DebugTextData_C_OnChangeStep_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__DataListComboBox_K2Node_ComponentBoundEvent_1010_OnSelectionChangedEvent__DelegateSignature
struct UBW_DebugTextData_C_BndEvt__DataListComboBox_K2Node_ComponentBoundEvent_1010_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugTextData.BW_DebugTextData_C.UpdatePullDownTextDataList
struct UBW_DebugTextData_C_UpdatePullDownTextDataList_Params
{
};

// Function BW_DebugTextData.BW_DebugTextData_C.ExecuteUbergraph_BW_DebugTextData
struct UBW_DebugTextData_C_ExecuteUbergraph_BW_DebugTextData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
