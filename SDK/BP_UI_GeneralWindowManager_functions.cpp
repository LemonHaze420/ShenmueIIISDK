
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
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// struct FST_GeneralWindow_Button InParam                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_GeneralWindow_Button ReturnValue                    (Parm, OutParm, ReturnParm)

struct FST_GeneralWindow_Button ABP_UI_GeneralWindowManager_C::STATIC_MakeHiddenParam(const struct FST_GeneralWindow_Button& InParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.MakeHiddenParam");

	ABP_UI_GeneralWindowManager_C_MakeHiddenParam_Params params;
	params.InParam = InParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.HideInput
// (Native, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::STATIC_HideInput(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.HideInput");

	ABP_UI_GeneralWindowManager_C_HideInput_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.JudgeButton
// (Net, NetRequest, Static, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_GeneralWindow_Button> Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::STATIC_JudgeButton(TEnumAsByte<EN_GeneralWindow_Button> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.JudgeButton");

	ABP_UI_GeneralWindowManager_C_JudgeButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.CloseWindow
// (Net, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::STATIC_CloseWindow(class AActor* Actor, bool* Success)
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
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::STATIC_SetButtonFlag(bool* Result)
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
// (Net, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void ABP_UI_GeneralWindowManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.UserConstructionScript");

	ABP_UI_GeneralWindowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8
// (NetRequest, Native, Event, Public, Private, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchTopButton_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7
// (NetRequest, Native, Event, Public, Private, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6
// (Net, NetReliable, Native, Event, Public, Private, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5
// (NetReliable, Native, Event, Public, Private, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_GeneralWindowManager_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5");

	ABP_UI_GeneralWindowManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_UI_GeneralWindowManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveBeginPlay");

	ABP_UI_GeneralWindowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveDestroyed
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_UI_GeneralWindowManager_C::STATIC_ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveDestroyed");

	ABP_UI_GeneralWindowManager_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ExecuteUbergraph_BP_UI_GeneralWindowManager
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_GeneralWindowManager_C::STATIC_ExecuteUbergraph_BP_UI_GeneralWindowManager(int EntryPoint)
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
