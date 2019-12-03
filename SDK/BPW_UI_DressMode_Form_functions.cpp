
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

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.ScrollSetting
// (NetReliable, NetRequest, Native, NetResponse, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Form_C::ScrollSetting(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.ScrollSetting");

	UBPW_UI_DressMode_Form_C_ScrollSetting_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.SetButtonFocusAndSelect
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Form_C::STATIC_SetButtonFocusAndSelect(int Index, bool IsFocus, bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.SetButtonFocusAndSelect");

	UBPW_UI_DressMode_Form_C_SetButtonFocusAndSelect_Params params;
	params.Index = Index;
	params.IsFocus = IsFocus;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.InitButton
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Form_C::InitButton(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.InitButton");

	UBPW_UI_DressMode_Form_C_InitButton_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.Construct
// (Net, NetReliable, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UBPW_UI_DressMode_Form_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.Construct");

	UBPW_UI_DressMode_Form_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.Tick
// (Net, NetRequest, Exec, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Form_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.Tick");

	UBPW_UI_DressMode_Form_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.ExecuteUbergraph_BPW_UI_DressMode_Form
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_Form_C::ExecuteUbergraph_BPW_UI_DressMode_Form(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.ExecuteUbergraph_BPW_UI_DressMode_Form");

	UBPW_UI_DressMode_Form_C_ExecuteUbergraph_BPW_UI_DressMode_Form_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
