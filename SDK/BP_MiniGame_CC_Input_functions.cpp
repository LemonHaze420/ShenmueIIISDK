
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

// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.UserConstructionScript
// (Net, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_CC_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.UserConstructionScript");

	ABP_MiniGame_CC_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_8
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Input_C::STATIC_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_8");

	ABP_MiniGame_CC_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_7
// (NetReliable, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Input_C::STATIC_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_7");

	ABP_MiniGame_CC_Input_C_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_6
// (NetReliable, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Input_C::STATIC_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_6");

	ABP_MiniGame_CC_Input_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_5
// (NetReliable, NetRequest, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_CC_Input_C::STATIC_InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_5");

	ABP_MiniGame_CC_Input_C_InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_20
// (Net, NetRequest, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Input_C::STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_20(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_20");

	ABP_MiniGame_CC_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_20_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_21
// (Net, NetRequest, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Input_C::STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_21(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_21");

	ABP_MiniGame_CC_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_21_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_34
// (NetRequest, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Input_C::STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_34(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_34");

	ABP_MiniGame_CC_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_34_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.ReceiveTick
// (Net, NetReliable, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Input_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.ReceiveTick");

	ABP_MiniGame_CC_Input_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.ExecuteUbergraph_BP_MiniGame_CC_Input
// (Exec, Event, NetResponse, Static, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_CC_Input_C::STATIC_ExecuteUbergraph_BP_MiniGame_CC_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_CC_Input.BP_MiniGame_CC_Input_C.ExecuteUbergraph_BP_MiniGame_CC_Input");

	ABP_MiniGame_CC_Input_C_ExecuteUbergraph_BP_MiniGame_CC_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
