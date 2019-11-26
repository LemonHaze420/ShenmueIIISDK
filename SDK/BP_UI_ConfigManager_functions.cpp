
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

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_UI_ConfigManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.GetPriority");

	ABP_UI_ConfigManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_UI_ConfigManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.GetDetectAction");

	ABP_UI_ConfigManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CanDecideInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::CanDecideInput(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CanDecideInput");

	ABP_UI_ConfigManager_C_CanDecideInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CancelPasswordWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::CancelPasswordWidget(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CancelPasswordWidget");

	ABP_UI_ConfigManager_C_CancelPasswordWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CheckFocusConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ConfigManager_C::CheckFocusConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CheckFocusConfig");

	ABP_UI_ConfigManager_C_CheckFocusConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CanInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::CanInput(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CanInput");

	ABP_UI_ConfigManager_C_CanInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.UserConstructionScript");

	ABP_UI_ConfigManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.DecideDetectAction");

	ABP_UI_ConfigManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CreateDressModeWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::CreateDressModeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CreateDressModeWidget");

	ABP_UI_ConfigManager_C_CreateDressModeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CreatePasswordWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::CreatePasswordWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CreatePasswordWidget");

	ABP_UI_ConfigManager_C_CreatePasswordWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.FinishDressMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Apply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::FinishDressMode(bool Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.FinishDressMode");

	ABP_UI_ConfigManager_C_FinishDressMode_Params params;
	params.Apply = Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CancelDressWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::CancelDressWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CancelDressWidget");

	ABP_UI_ConfigManager_C_CancelDressWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushRight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushRight");

	ABP_UI_ConfigManager_C_PushRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushLeft
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushLeft");

	ABP_UI_ConfigManager_C_PushLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.FinishFadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::FinishFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.FinishFadeIn");

	ABP_UI_ConfigManager_C_FinishFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushUp");

	ABP_UI_ConfigManager_C_PushUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushDown");

	ABP_UI_ConfigManager_C_PushDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushDressDecide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushDressDecide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushDressDecide");

	ABP_UI_ConfigManager_C_PushDressDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushCancelButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushCancelButton");

	ABP_UI_ConfigManager_C_PushCancelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.LeanRightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::LeanRightStick(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.LeanRightStick");

	ABP_UI_ConfigManager_C_LeanRightStick_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushRightStick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ConfigManager_C::PushRightStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushRightStick");

	ABP_UI_ConfigManager_C_PushRightStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.ExecuteUbergraph_BP_UI_ConfigManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ConfigManager_C::ExecuteUbergraph_BP_UI_ConfigManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.ExecuteUbergraph_BP_UI_ConfigManager");

	ABP_UI_ConfigManager_C_ExecuteUbergraph_BP_UI_ConfigManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
