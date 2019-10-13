
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

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_GeneralWindow_Button_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.Hide");

	UBPW_UI_GeneralWindow_Button_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.AnimateIn
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_GeneralWindow_Button_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.AnimateIn");

	UBPW_UI_GeneralWindow_Button_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_GeneralWindow_Button> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::SetButtonIcon(TEnumAsByte<EN_GeneralWindow_Button> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetButtonIcon");

	UBPW_UI_GeneralWindow_Button_C_SetButtonIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetLocalizedText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::SetLocalizedText(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetLocalizedText");

	UBPW_UI_GeneralWindow_Button_C_SetLocalizedText_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_GeneralWindow_Button_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetText");

	UBPW_UI_GeneralWindow_Button_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.GetButtonIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_GeneralWindow_Button> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::GetButtonIcon(bool IsDesignTime, TEnumAsByte<EN_GeneralWindow_Button> Type, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.GetButtonIcon");

	UBPW_UI_GeneralWindow_Button_C_GetButtonIcon_Params params;
	params.IsDesignTime = IsDesignTime;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneralWindow_Button Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_UI_GeneralWindow_Button_C::SetData(const struct FST_GeneralWindow_Button& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetData");

	UBPW_UI_GeneralWindow_Button_C_SetData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.PreConstruct");

	UBPW_UI_GeneralWindow_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UBPW_UI_GeneralWindow_Button_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_GeneralWindow_Button_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Button
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::ExecuteUbergraph_BPW_UI_GeneralWindow_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Button");

	UBPW_UI_GeneralWindow_Button_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.OnFinishFadingIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_UI_GeneralWindow_Button_C::OnFinishFadingIn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.OnFinishFadingIn__DelegateSignature");

	UBPW_UI_GeneralWindow_Button_C_OnFinishFadingIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
