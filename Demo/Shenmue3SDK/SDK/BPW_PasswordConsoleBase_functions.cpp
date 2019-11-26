
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.MakeCommonDialogParam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// ES3DialogType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Justify                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_GeneralWindowParam  Param                          (Parm, OutParm)

void UBPW_PasswordConsoleBase_C::MakeCommonDialogParam(class AActor* Executor, ES3DialogType Type, TEnumAsByte<ETextJustify> Justify, int FontSize, TArray<struct FName>* Labels, struct FST_GeneralWindowParam* Param)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_PasswordConsoleBase_C::GetText(const struct FName& Label, ES3TextPathType Type)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_PasswordConsoleBase_C::DispSecondDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispSecondDialog");

	UBPW_PasswordConsoleBase_C_DispSecondDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispFirstDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::DispFirstDialog(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.DispFirstDialog");

	UBPW_PasswordConsoleBase_C_DispFirstDialog_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.PushRightButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_PasswordConsoleBase_C::PushRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.PushRightButton");

	UBPW_PasswordConsoleBase_C_PushRightButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_PasswordConsoleBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Construct");

	UBPW_PasswordConsoleBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
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
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::BndEvt__EditableTextBox_174_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::FirstDialogEnd(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.FirstDialogEnd");

	UBPW_PasswordConsoleBase_C_FirstDialogEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SecondDialogEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::SecondDialogEnd(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.SecondDialogEnd");

	UBPW_PasswordConsoleBase_C_SecondDialogEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.ExecuteUbergraph_BPW_PasswordConsoleBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsoleBase_C::ExecuteUbergraph_BPW_PasswordConsoleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsoleBase.BPW_PasswordConsoleBase_C.ExecuteUbergraph_BPW_PasswordConsoleBase");

	UBPW_PasswordConsoleBase_C_ExecuteUbergraph_BPW_PasswordConsoleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
