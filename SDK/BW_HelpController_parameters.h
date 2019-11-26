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

// Function BW_HelpController.BW_HelpController_C.ChangeCheck
struct UBW_HelpController_C_ChangeCheck_Params
{
	class UCheckBox*                                   CheckBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_HelpController.BW_HelpController_C.OnAnalogValueChanged
struct UBW_HelpController_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_HelpController.BW_HelpController_C.SetHelpFlag
struct UBW_HelpController_C_SetHelpFlag_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCheckBox*                                   flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_HelpController.BW_HelpController_C.MakeHelpFlagList
struct UBW_HelpController_C_MakeHelpFlagList_Params
{
};

// Function BW_HelpController.BW_HelpController_C.UpdateHelpFlag
struct UBW_HelpController_C_UpdateHelpFlag_Params
{
};

// Function BW_HelpController.BW_HelpController_C.Construct
struct UBW_HelpController_C_Construct_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_HelpController.BW_HelpController_C.Tick
struct UBW_HelpController_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UBW_HelpController_C_BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_HelpController.BW_HelpController_C.ExecuteUbergraph_BW_HelpController
struct UBW_HelpController_C_ExecuteUbergraph_BW_HelpController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
