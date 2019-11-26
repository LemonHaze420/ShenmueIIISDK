
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
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::CheckVisibleArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.CheckVisibleArrow");

	UBPW_UI_DressMode_C_CheckVisibleArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetCloth
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::ResetCloth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetCloth");

	UBPW_UI_DressMode_C_ResetCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::ResetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ResetRotation");

	UBPW_UI_DressMode_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.RotationModel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::RotationModel(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.RotationModel");

	UBPW_UI_DressMode_C_RotationModel_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.UpdateCharaCloth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Apply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::UpdateCharaCloth(bool Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.UpdateCharaCloth");

	UBPW_UI_DressMode_C_UpdateCharaCloth_Params params;
	params.Apply = Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.Fitting
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::Fitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.Fitting");

	UBPW_UI_DressMode_C_Fitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeFittingInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FST_ClothesFittingInfo> FittingInfo                    (Parm, OutParm, ZeroConstructor)

void UBPW_UI_DressMode_C::MakeFittingInfo(TArray<struct FST_ClothesFittingInfo>* FittingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeFittingInfo");

	UBPW_UI_DressMode_C_MakeFittingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FittingInfo != nullptr)
		*FittingInfo = params.FittingInfo;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.InitCloth
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::InitCloth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.InitCloth");

	UBPW_UI_DressMode_C_InitCloth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::MakeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.MakeList");

	UBPW_UI_DressMode_C_MakeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.SetCaptureCharaClothing
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::SetCaptureCharaClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.SetCaptureCharaClothing");

	UBPW_UI_DressMode_C_SetCaptureCharaClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushDownButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::PushDownButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushDownButton");

	UBPW_UI_DressMode_C_PushDownButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ChangeClothing
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::ChangeClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.ChangeClothing");

	UBPW_UI_DressMode_C_ChangeClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightLeftCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::PushRightLeftCursor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightLeftCursor");

	UBPW_UI_DressMode_C_PushRightLeftCursor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_DressMode_C::PushRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushRightButton");

	UBPW_UI_DressMode_C_PushRightButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushUpDownCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::PushUpDownCursor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.PushUpDownCursor");

	UBPW_UI_DressMode_C_PushUpDownCursor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_DressMode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.Construct");

	UBPW_UI_DressMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ClothChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::ClothChanged(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
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
// (BlueprintEvent)

void UBPW_UI_DressMode_C::BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_DressMode.BPW_UI_DressMode_C.BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UBPW_UI_DressMode_C_BndEvt__FadeAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_DressMode.BPW_UI_DressMode_C.ExecuteUbergraph_BPW_UI_DressMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_DressMode_C::ExecuteUbergraph_BPW_UI_DressMode(int EntryPoint)
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
