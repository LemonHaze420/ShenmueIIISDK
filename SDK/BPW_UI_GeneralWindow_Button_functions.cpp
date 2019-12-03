
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

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.Hide
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, BlueprintPure)

void UBPW_UI_GeneralWindow_Button_C::STATIC_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.Hide");

	UBPW_UI_GeneralWindow_Button_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.AnimateIn
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)

void UBPW_UI_GeneralWindow_Button_C::STATIC_AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.AnimateIn");

	UBPW_UI_GeneralWindow_Button_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetButtonIcon
// (NetReliable, Exec, Event, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_GeneralWindow_Button> Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::STATIC_SetButtonIcon(TEnumAsByte<EN_GeneralWindow_Button> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetButtonIcon");

	UBPW_UI_GeneralWindow_Button_C_SetButtonIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetLocalizedText
// (NetRequest, Public, Private, DLLImport, BlueprintPure)
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
// (Net, Event, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_GeneralWindow_Button_C::STATIC_SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetText");

	UBPW_UI_GeneralWindow_Button_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.GetButtonIcon
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_GeneralWindow_Button> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::STATIC_GetButtonIcon(bool IsDesignTime, TEnumAsByte<EN_GeneralWindow_Button> Type, class UTexture2D** Texture)
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
// (Exec, Native, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FST_GeneralWindow_Button Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_UI_GeneralWindow_Button_C::SetData(const struct FST_GeneralWindow_Button& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetData");

	UBPW_UI_GeneralWindow_Button_C_SetData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.PreConstruct
// (Event, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.PreConstruct");

	UBPW_UI_GeneralWindow_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UBPW_UI_GeneralWindow_Button_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_GeneralWindow_Button_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Button
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_GeneralWindow_Button_C::STATIC_ExecuteUbergraph_BPW_UI_GeneralWindow_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Button");

	UBPW_UI_GeneralWindow_Button_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.OnFinishFadingIn__DelegateSignature
// (NetReliable, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

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
