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

// Function BW_ProgressController.BW_ProgressController_C.SetEventStep
struct UBW_ProgressController_C_SetEventStep_Params
{
	int                                                NewStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_ProgressController.BW_ProgressController_C.ValueCommitted
struct UBW_ProgressController_C_ValueCommitted_Params
{
	class USpinBox*                                    SpinBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           Method;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_ProgressController.BW_ProgressController_C.CheckFocus
struct UBW_ProgressController_C_CheckFocus_Params
{
	class USpinBox*                                    SpinBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_ProgressController.BW_ProgressController_C.OnAnalogValueChanged
struct UBW_ProgressController_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_ProgressController.BW_ProgressController_C.JointValue_Short
struct UBW_ProgressController_C_JointValue_Short_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.Tick
struct UBW_ProgressController_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_ProgressController.BW_ProgressController_C.ChangeStep_Short
struct UBW_ProgressController_C_ChangeStep_Short_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.ChangeLevel
struct UBW_ProgressController_C_ChangeLevel_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.ChangeLanguage
struct UBW_ProgressController_C_ChangeLanguage_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_ProgressController_C_BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_ProgressController.BW_ProgressController_C.BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UBW_ProgressController_C_BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_ProgressController.BW_ProgressController_C.Construct
struct UBW_ProgressController_C_Construct_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.BndEvt__HakkasonButton_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
struct UBW_ProgressController_C_BndEvt__HakkasonButton_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.BndEvt__ChobuButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
struct UBW_ProgressController_C_BndEvt__ChobuButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.ChangeStep
struct UBW_ProgressController_C_ChangeStep_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.ChangeVoiceLanguage
struct UBW_ProgressController_C_ChangeVoiceLanguage_Params
{
};

// Function BW_ProgressController.BW_ProgressController_C.ExecuteUbergraph_BW_ProgressController
struct UBW_ProgressController_C_ExecuteUbergraph_BW_ProgressController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
