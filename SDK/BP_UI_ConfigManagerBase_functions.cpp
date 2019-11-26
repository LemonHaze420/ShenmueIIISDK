
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

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetRowTrialSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPW_UI_Config_Row_C*    Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EN_ConfigParam>    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::SetRowTrialSetting(class UBPW_UI_Config_Row_C* Row, TEnumAsByte<EN_ConfigParam> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetRowTrialSetting");

	ABP_UI_ConfigManagerBase_C_SetRowTrialSetting_Params params;
	params.Row = Row;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ChangeLanguage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::ChangeLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ChangeLanguage");

	ABP_UI_ConfigManagerBase_C_ChangeLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetCanUseLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ConfigParam>    ConfigParam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::SetCanUseLocal(TEnumAsByte<EN_ConfigParam> ConfigParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetCanUseLocal");

	ABP_UI_ConfigManagerBase_C_SetCanUseLocal_Params params;
	params.ConfigParam = ConfigParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushRightStick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushRightStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushRightStick");

	ABP_UI_ConfigManagerBase_C_PushRightStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.LeanRightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::LeanRightStick(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.LeanRightStick");

	ABP_UI_ConfigManagerBase_C_LeanRightStick_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.IsSaveLoadWidgetVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::IsSaveLoadWidgetVisible(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.IsSaveLoadWidgetVisible");

	ABP_UI_ConfigManagerBase_C_IsSaveLoadWidgetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CanDecideInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::CanDecideInput(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CanDecideInput");

	ABP_UI_ConfigManagerBase_C_CanDecideInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.IsPlaySound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Play                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::IsPlaySound(bool* Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.IsPlaySound");

	ABP_UI_ConfigManagerBase_C_IsPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play != nullptr)
		*Play = params.Play;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetActionIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::SetActionIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetActionIconVisibility");

	ABP_UI_ConfigManagerBase_C_SetActionIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CheckFocusConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ConfigManagerBase_C::CheckFocusConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CheckFocusConfig");

	ABP_UI_ConfigManagerBase_C_CheckFocusConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CanInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::CanInput(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CanInput");

	ABP_UI_ConfigManagerBase_C_CanInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushCancelButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushCancelButton");

	ABP_UI_ConfigManagerBase_C_PushCancelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushDressDecide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushDressDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushDressDecide");

	ABP_UI_ConfigManagerBase_C_PushDressDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InputConfigUpDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::InputConfigUpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InputConfigUpDown");

	ABP_UI_ConfigManagerBase_C_InputConfigUpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushDown");

	ABP_UI_ConfigManagerBase_C_PushDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushUp");

	ABP_UI_ConfigManagerBase_C_PushUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushRight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushRight");

	ABP_UI_ConfigManagerBase_C_PushRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushLeft
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::PushLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushLeft");

	ABP_UI_ConfigManagerBase_C_PushLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.FinishDressMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Apply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::FinishDressMode(bool Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.FinishDressMode");

	ABP_UI_ConfigManagerBase_C_FinishDressMode_Params params;
	params.Apply = Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CreateDressModeWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::CreateDressModeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CreateDressModeWidget");

	ABP_UI_ConfigManagerBase_C_CreateDressModeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CreatePasswordWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::CreatePasswordWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CreatePasswordWidget");

	ABP_UI_ConfigManagerBase_C_CreatePasswordWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelKeyConfigWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::CancelKeyConfigWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelKeyConfigWidget");

	ABP_UI_ConfigManagerBase_C_CancelKeyConfigWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelPasswordWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::CancelPasswordWidget(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelPasswordWidget");

	ABP_UI_ConfigManagerBase_C_CancelPasswordWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelDressWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::CancelDressWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelDressWidget");

	ABP_UI_ConfigManagerBase_C_CancelDressWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.DestroyConfigManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDestroy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::DestroyConfigManager(bool* IsDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.DestroyConfigManager");

	ABP_UI_ConfigManagerBase_C_DestroyConfigManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDestroy != nullptr)
		*IsDestroy = params.IsDestroy;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetConfigName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::SetConfigName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetConfigName");

	ABP_UI_ConfigManagerBase_C_SetConfigName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.UserConstructionScript");

	ABP_UI_ConfigManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18");

	ABP_UI_ConfigManagerBase_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17");

	ABP_UI_ConfigManagerBase_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16");

	ABP_UI_ConfigManagerBase_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15");

	ABP_UI_ConfigManagerBase_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14");

	ABP_UI_ConfigManagerBase_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_MenuPageRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_13");

	ABP_UI_ConfigManagerBase_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_12");

	ABP_UI_ConfigManagerBase_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11");

	ABP_UI_ConfigManagerBase_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ConfigManagerBase_C::InpActEvt_ResetCamera_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_10");

	ABP_UI_ConfigManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ReceiveBeginPlay");

	ABP_UI_ConfigManagerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ReceiveEndPlay");

	ABP_UI_ConfigManagerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ChnageCloth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Apply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::ChnageCloth(bool Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ChnageCloth");

	ABP_UI_ConfigManagerBase_C_ChnageCloth_Params params;
	params.Apply = Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.FinishFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManagerBase_C::FinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.FinishFadeOut");

	ABP_UI_ConfigManagerBase_C_FinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::CloseDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CloseDialog");

	ABP_UI_ConfigManagerBase_C_CloseDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1");

	ABP_UI_ConfigManagerBase_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33");

	ABP_UI_ConfigManagerBase_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9");

	ABP_UI_ConfigManagerBase_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ExecuteUbergraph_BP_UI_ConfigManagerBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManagerBase_C::ExecuteUbergraph_BP_UI_ConfigManagerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ExecuteUbergraph_BP_UI_ConfigManagerBase");

	ABP_UI_ConfigManagerBase_C_ExecuteUbergraph_BP_UI_ConfigManagerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
