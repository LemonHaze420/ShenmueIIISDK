
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

// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.SetButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLoad                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestWidget_C::SetButtonEnable(class UButton* Button, int Index, bool IsLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.SetButtonEnable");

	UBP_S3SaveLoadTestWidget_C_SetButtonEnable_Params params;
	params.Button = Button;
	params.Index = Index;
	params.IsLoad = IsLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_S3SaveLoadTestWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.OnPreviewKeyDown");

	UBP_S3SaveLoadTestWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_S3SaveLoadTestWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.OnKeyDown");

	UBP_S3SaveLoadTestWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.SetButtonVisiblity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestWidget_C::SetButtonVisiblity(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.SetButtonVisiblity");

	UBP_S3SaveLoadTestWidget_C_SetButtonVisiblity_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.PressSelectButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestWidget_C::PressSelectButton(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.PressSelectButton");

	UBP_S3SaveLoadTestWidget_C_PressSelectButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.Construct");

	UBP_S3SaveLoadTestWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.Destruct");

	UBP_S3SaveLoadTestWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.Finish
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.Finish");

	UBP_S3SaveLoadTestWidget_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button1_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button1_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button1_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button1_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button2_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button2_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button2_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button2_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button3_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button3_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button3_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button3_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button4_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button4_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button4_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button4_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button5_K2Node_ComponentBoundEvent_64_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button5_K2Node_ComponentBoundEvent_64_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button5_K2Node_ComponentBoundEvent_64_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button5_K2Node_ComponentBoundEvent_64_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button6_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button6_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button6_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button6_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button7_K2Node_ComponentBoundEvent_83_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button7_K2Node_ComponentBoundEvent_83_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button7_K2Node_ComponentBoundEvent_83_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button7_K2Node_ComponentBoundEvent_83_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button8_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button8_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button8_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button8_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button9_K2Node_ComponentBoundEvent_106_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button9_K2Node_ComponentBoundEvent_106_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button9_K2Node_ComponentBoundEvent_106_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button9_K2Node_ComponentBoundEvent_106_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button10_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button10_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button10_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button10_K2Node_ComponentBoundEvent_119_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button11_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button11_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button11_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button11_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__AutoSave_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__AutoSave_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__AutoSave_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__AutoSave_K2Node_ComponentBoundEvent_149_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button12_K2Node_ComponentBoundEvent_789_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button12_K2Node_ComponentBoundEvent_789_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button12_K2Node_ComponentBoundEvent_789_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button12_K2Node_ComponentBoundEvent_789_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button13_K2Node_ComponentBoundEvent_790_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button13_K2Node_ComponentBoundEvent_790_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button13_K2Node_ComponentBoundEvent_790_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button13_K2Node_ComponentBoundEvent_790_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button14_K2Node_ComponentBoundEvent_806_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button14_K2Node_ComponentBoundEvent_806_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button14_K2Node_ComponentBoundEvent_806_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button14_K2Node_ComponentBoundEvent_806_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button15_K2Node_ComponentBoundEvent_823_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button15_K2Node_ComponentBoundEvent_823_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button15_K2Node_ComponentBoundEvent_823_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button15_K2Node_ComponentBoundEvent_823_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button16_K2Node_ComponentBoundEvent_841_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button16_K2Node_ComponentBoundEvent_841_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button16_K2Node_ComponentBoundEvent_841_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button16_K2Node_ComponentBoundEvent_841_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button17_K2Node_ComponentBoundEvent_860_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button17_K2Node_ComponentBoundEvent_860_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button17_K2Node_ComponentBoundEvent_860_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button17_K2Node_ComponentBoundEvent_860_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button18_K2Node_ComponentBoundEvent_880_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button18_K2Node_ComponentBoundEvent_880_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button18_K2Node_ComponentBoundEvent_880_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button18_K2Node_ComponentBoundEvent_880_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button19_K2Node_ComponentBoundEvent_901_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button19_K2Node_ComponentBoundEvent_901_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button19_K2Node_ComponentBoundEvent_901_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button19_K2Node_ComponentBoundEvent_901_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button20_K2Node_ComponentBoundEvent_925_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button20_K2Node_ComponentBoundEvent_925_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button20_K2Node_ComponentBoundEvent_925_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button20_K2Node_ComponentBoundEvent_925_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button21_K2Node_ComponentBoundEvent_948_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button21_K2Node_ComponentBoundEvent_948_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button21_K2Node_ComponentBoundEvent_948_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button21_K2Node_ComponentBoundEvent_948_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button22_K2Node_ComponentBoundEvent_972_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button22_K2Node_ComponentBoundEvent_972_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button22_K2Node_ComponentBoundEvent_972_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button22_K2Node_ComponentBoundEvent_972_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button23_K2Node_ComponentBoundEvent_997_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button23_K2Node_ComponentBoundEvent_997_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button23_K2Node_ComponentBoundEvent_997_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button23_K2Node_ComponentBoundEvent_997_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button24_K2Node_ComponentBoundEvent_1023_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button24_K2Node_ComponentBoundEvent_1023_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button24_K2Node_ComponentBoundEvent_1023_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button24_K2Node_ComponentBoundEvent_1023_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button25_K2Node_ComponentBoundEvent_1050_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button25_K2Node_ComponentBoundEvent_1050_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button25_K2Node_ComponentBoundEvent_1050_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button25_K2Node_ComponentBoundEvent_1050_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button26_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button26_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button26_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button26_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button27_K2Node_ComponentBoundEvent_1107_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button27_K2Node_ComponentBoundEvent_1107_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button27_K2Node_ComponentBoundEvent_1107_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button27_K2Node_ComponentBoundEvent_1107_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button28_K2Node_ComponentBoundEvent_1137_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button28_K2Node_ComponentBoundEvent_1137_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button28_K2Node_ComponentBoundEvent_1137_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button28_K2Node_ComponentBoundEvent_1137_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button29_K2Node_ComponentBoundEvent_1168_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::BndEvt__Button29_K2Node_ComponentBoundEvent_1168_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.BndEvt__Button29_K2Node_ComponentBoundEvent_1168_OnClicked__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_BndEvt__Button29_K2Node_ComponentBoundEvent_1168_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.ExecuteUbergraph_BP_S3SaveLoadTestWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadTestWidget_C::ExecuteUbergraph_BP_S3SaveLoadTestWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.ExecuteUbergraph_BP_S3SaveLoadTestWidget");

	UBP_S3SaveLoadTestWidget_C_ExecuteUbergraph_BP_S3SaveLoadTestWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.ED_Finish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadTestWidget_C::ED_Finish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadTestWidget.BP_S3SaveLoadTestWidget_C.ED_Finish__DelegateSignature");

	UBP_S3SaveLoadTestWidget_C_ED_Finish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
