
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

// Function BPW_UI_DressMode.BPW_UI_DressMode_C.CheckVisibleArrow
// (Net, NetResponse, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPW_UI_DressMode_C::CheckVisibleArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.CheckVisibleArrow");

	UBPW_UI_DressMode_C_CheckVisibleArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetCloth
// (NetReliable, NetRequest, Exec, NetResponse, Static, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UBPW_UI_DressMode_C::STATIC_ResetCloth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetCloth");

	UBPW_UI_DressMode_C_ResetCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetRotation
// (Net, NetRequest, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UBPW_UI_DressMode_C::ResetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetRotation");

	UBPW_UI_DressMode_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.RotationModel
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          axis_value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::STATIC_RotationModel(float axis_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.RotationModel");

	UBPW_UI_DressMode_C_RotationModel_Params params;
	params.axis_value = axis_value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.UpdateCharaCloth
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Apply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::STATIC_UpdateCharaCloth(bool Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.UpdateCharaCloth");

	UBPW_UI_DressMode_C_UpdateCharaCloth_Params params;
	params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.Fitting
// (Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent)

void UBPW_UI_DressMode_C::STATIC_Fitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.Fitting");

	UBPW_UI_DressMode_C_Fitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeFittingInfo
// (Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FST_ClothesFittingInfo> FittingInfo                    (Parm, OutParm, ZeroConstructor)

void UBPW_UI_DressMode_C::STATIC_MakeFittingInfo(TArray<struct FST_ClothesFittingInfo>* FittingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeFittingInfo");

	UBPW_UI_DressMode_C_MakeFittingInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FittingInfo != nullptr)
		*FittingInfo = params.FittingInfo;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.InitCloth
// (NetReliable, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPW_UI_DressMode_C::STATIC_InitCloth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.InitCloth");

	UBPW_UI_DressMode_C_InitCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeList
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::MakeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeList");

	UBPW_UI_DressMode_C_MakeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.SetCaptureCharaClothing
// (Net, NetReliable, Event, NetMulticast, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_DressMode_C::SetCaptureCharaClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.SetCaptureCharaClothing");

	UBPW_UI_DressMode_C_SetCaptureCharaClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushDownButton
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, HasOutParms, DLLImport, BlueprintEvent)

void UBPW_UI_DressMode_C::STATIC_PushDownButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushDownButton");

	UBPW_UI_DressMode_C_PushDownButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ChangeClothing
// (Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPW_UI_DressMode_C::ChangeClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ChangeClothing");

	UBPW_UI_DressMode_C_ChangeClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightLeftCursor
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::PushRightLeftCursor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightLeftCursor");

	UBPW_UI_DressMode_C_PushRightLeftCursor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightButton
// (Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_DressMode_C::STATIC_PushRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightButton");

	UBPW_UI_DressMode_C_PushRightButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushUpDownCursor
// (Static, NetMulticast, MulticastDelegate, Public, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::STATIC_PushUpDownCursor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushUpDownCursor");

	UBPW_UI_DressMode_C_PushUpDownCursor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.Construct
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_DressMode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.Construct");

	UBPW_UI_DressMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ClothChanged
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::STATIC_ClothChanged(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ClothChanged");

	UBPW_UI_DressMode_C_ClothChanged_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_DressMode_C::BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_DressMode_C_BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ExecuteUbergraph_BPW_UI_DressMode
// (NetReliable, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::STATIC_ExecuteUbergraph_BPW_UI_DressMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ExecuteUbergraph_BPW_UI_DressMode");

	UBPW_UI_DressMode_C_ExecuteUbergraph_BPW_UI_DressMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
