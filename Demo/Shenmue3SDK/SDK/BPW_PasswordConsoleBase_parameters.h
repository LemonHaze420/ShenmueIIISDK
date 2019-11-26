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

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeCommonDialogParam
struct UBPW_PasswordConsoleBase_C_MakeCommonDialogParam_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ES3DialogType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_GeneralWindowParam                      Param;                                                    // (Parm, OutParm)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeTextArray
struct UBPW_PasswordConsoleBase_C_MakeTextArray_Params
{
	TArray<struct FName>                               LabelList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.GetText
struct UBPW_PasswordConsoleBase_C_GetText_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispSecondDialog
struct UBPW_PasswordConsoleBase_C_DispSecondDialog_Params
{
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispFirstDialog
struct UBPW_PasswordConsoleBase_C_DispFirstDialog_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.PushRightButton
struct UBPW_PasswordConsoleBase_C_PushRightButton_Params
{
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Construct
struct UBPW_PasswordConsoleBase_C_Construct_Params
{
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Tick
struct UBPW_PasswordConsoleBase_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBPW_PasswordConsoleBase_C_BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.FirstDialogEnd
struct UBPW_PasswordConsoleBase_C_FirstDialogEnd_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SecondDialogEnd
struct UBPW_PasswordConsoleBase_C_SecondDialogEnd_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.ExecuteUbergraph_BPW_PasswordConsoleBase
struct UBPW_PasswordConsoleBase_C_ExecuteUbergraph_BPW_PasswordConsoleBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
