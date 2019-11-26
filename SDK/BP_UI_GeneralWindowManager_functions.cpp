
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

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.MakeHiddenParam
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_GeneralWindow_Button InParam                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_GeneralWindow_Button ReturnValue                    (Parm, OutParm, ReturnParm)

struct FST_GeneralWindow_Button ABP_UI_GeneralWindowManager_C::MakeHiddenParam(const struct FST_GeneralWindow_Button& InParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.MakeHiddenParam");

	ABP_UI_GeneralWindowManager_C_MakeHiddenParam_Params params;
	params.InParam = InParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.HideInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::HideInput(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.HideInput");

	ABP_UI_GeneralWindowManager_C_HideInput_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.JudgeButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_GeneralWindow_Button> Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::JudgeButton(TEnumAsByte<EN_GeneralWindow_Button> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.JudgeButton");

	ABP_UI_GeneralWindowManager_C_JudgeButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.CloseWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::CloseWindow(class AActor* Actor, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.CloseWindow");

	ABP_UI_GeneralWindowManager_C_CloseWindow_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.SetButtonFlag
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::SetButtonFlag(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.SetButtonFlag");

	ABP_UI_GeneralWindowManager_C_SetButtonFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_GeneralWindowManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.UserConstructionScript");

	ABP_UI_GeneralWindowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchTopButton_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_GeneralWindowManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveBeginPlay");

	ABP_UI_GeneralWindowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_UI_GeneralWindowManager_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveDestroyed");

	ABP_UI_GeneralWindowManager_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ExecuteUbergraph_BP_UI_GeneralWindowManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::ExecuteUbergraph_BP_UI_GeneralWindowManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ExecuteUbergraph_BP_UI_GeneralWindowManager");

	ABP_UI_GeneralWindowManager_C_ExecuteUbergraph_BP_UI_GeneralWindowManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
