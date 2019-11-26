
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

// Function WBP_KungFu_Result.WBP_KungFu_Result_C.GetNextButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBPW_UI_GeneralWindow_Button_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBPW_UI_GeneralWindow_Button_C* UWBP_KungFu_Result_C::GetNextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.GetNextButton");

	UWBP_KungFu_Result_C_GetNextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.NextScreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_KungFu_Result_C::NextScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.NextScreen");

	UWBP_KungFu_Result_C_NextScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.HideNextButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Result_C::HideNextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.HideNextButton");

	UWBP_KungFu_Result_C_HideNextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLocalizeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Result_C::SetLocalizeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLocalizeText");

	UWBP_KungFu_Result_C_SetLocalizeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.ShowNextButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Result_C::ShowNextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.ShowNextButton");

	UWBP_KungFu_Result_C_ShowNextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetSceneCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Result_C::SetSceneCaptureImage(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetSceneCaptureImage");

	UWBP_KungFu_Result_C_SetSceneCaptureImage_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLevelUpData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SparringResultLevelUpData Attack                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_SparringResultLevelUpData Vitality                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_SparringResultLevelUpData Player                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_KungFu_Result_C::SetLevelUpData(const struct FST_SparringResultLevelUpData& Attack, const struct FST_SparringResultLevelUpData& Vitality, const struct FST_SparringResultLevelUpData& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLevelUpData");

	UWBP_KungFu_Result_C_SetLevelUpData_Params params;
	params.Attack = Attack;
	params.Vitality = Vitality;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLevelUpTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Result_C::SetLevelUpTextVisible(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.SetLevelUpTextVisible");

	UWBP_KungFu_Result_C_SetLevelUpTextVisible_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Result_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.PreConstruct");

	UWBP_KungFu_Result_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KungFu_Result_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.Construct");

	UWBP_KungFu_Result_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.BndEvt__wgt_SkillTotals_K2Node_ComponentBoundEvent_0_OnLevelUpAnimationDone__DelegateSignature
// (BlueprintEvent)

void UWBP_KungFu_Result_C::BndEvt__wgt_SkillTotals_K2Node_ComponentBoundEvent_0_OnLevelUpAnimationDone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.BndEvt__wgt_SkillTotals_K2Node_ComponentBoundEvent_0_OnLevelUpAnimationDone__DelegateSignature");

	UWBP_KungFu_Result_C_BndEvt__wgt_SkillTotals_K2Node_ComponentBoundEvent_0_OnLevelUpAnimationDone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.DelayCallOnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Result_C::DelayCallOnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.DelayCallOnAnimFinished");

	UWBP_KungFu_Result_C_DelayCallOnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.ExecuteUbergraph_WBP_KungFu_Result
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_Result_C::ExecuteUbergraph_WBP_KungFu_Result(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.ExecuteUbergraph_WBP_KungFu_Result");

	UWBP_KungFu_Result_C_ExecuteUbergraph_WBP_KungFu_Result_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_Result.WBP_KungFu_Result_C.OnAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_KungFu_Result_C::OnAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_Result.WBP_KungFu_Result_C.OnAnimFinished__DelegateSignature");

	UWBP_KungFu_Result_C_OnAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
