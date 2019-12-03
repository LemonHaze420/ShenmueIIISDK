
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SetInPasswordEdit
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// bool                           bValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_SetInPasswordEdit(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SetInPasswordEdit");

	UBPW_PasswordConsoleBase_C_SetInPasswordEdit_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.GetPasswordAsLabel
// (Net, NetReliable, Event, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBPW_PasswordConsoleBase_C::STATIC_GetPasswordAsLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.GetPasswordAsLabel");

	UBPW_PasswordConsoleBase_C_GetPasswordAsLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SetWidgetText
// (NetReliable, NetRequest, Exec, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTextBlock*              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::SetWidgetText(class UTextBlock* Widget, const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SetWidgetText");

	UBPW_PasswordConsoleBase_C_SetWidgetText_Params params;
	params.Widget = Widget;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SetInitialText
// (Net, NetReliable, NetRequest, Exec, Native, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_PasswordConsoleBase_C::STATIC_SetInitialText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SetInitialText");

	UBPW_PasswordConsoleBase_C_SetInitialText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeCommonDialogParam
// (Net, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// ES3DialogType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justify                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_GeneralWindowParam  Param                          (Parm, OutParm)

void UBPW_PasswordConsoleBase_C::STATIC_MakeCommonDialogParam(class AActor* Executor, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, int FontSize, TArray<struct FName>* Labels, struct FST_GeneralWindowParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeCommonDialogParam");

	UBPW_PasswordConsoleBase_C_MakeCommonDialogParam_Params params;
	params.Executor = Executor;
	params.Type = Type;
	params.Justify = Justify;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
	if (Param != nullptr)
		*Param = params.Param;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeTextArray
// (Net, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// TArray<struct FName>           LabelList                      (Parm, OutParm, ZeroConstructor)

void UBPW_PasswordConsoleBase_C::MakeTextArray(TArray<struct FName>* LabelList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeTextArray");

	UBPW_PasswordConsoleBase_C_MakeTextArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LabelList != nullptr)
		*LabelList = params.LabelList;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.GetText
// (Exec, Event, NetResponse, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_PasswordConsoleBase_C::STATIC_GetText(const struct FName& Label, ES3TextPathType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.GetText");

	UBPW_PasswordConsoleBase_C_GetText_Params params;
	params.Label = Label;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispSecondDialog
// (Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_PasswordConsoleBase_C::STATIC_DispSecondDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispSecondDialog");

	UBPW_PasswordConsoleBase_C_DispSecondDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispFirstDialog
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_DispFirstDialog(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispFirstDialog");

	UBPW_PasswordConsoleBase_C_DispFirstDialog_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.PushRightButton
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)

void UBPW_PasswordConsoleBase_C::PushRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.PushRightButton");

	UBPW_PasswordConsoleBase_C_PushRightButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Tick
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Tick");

	UBPW_PasswordConsoleBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (Net, NetReliable, Exec, Static, MulticastDelegate, Public, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBPW_PasswordConsoleBase_C_BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.FirstDialogEnd
// (NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_FirstDialogEnd(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.FirstDialogEnd");

	UBPW_PasswordConsoleBase_C_FirstDialogEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SecondDialogEnd
// (NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_SecondDialogEnd(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SecondDialogEnd");

	UBPW_PasswordConsoleBase_C_SecondDialogEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Construct
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_PasswordConsoleBase_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Construct");

	UBPW_PasswordConsoleBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.ExecuteUbergraph_BPW_PasswordConsoleBase
// (NetRequest, Native, NetResponse, Static, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::STATIC_ExecuteUbergraph_BPW_PasswordConsoleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.ExecuteUbergraph_BPW_PasswordConsoleBase");

	UBPW_PasswordConsoleBase_C_ExecuteUbergraph_BPW_PasswordConsoleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
