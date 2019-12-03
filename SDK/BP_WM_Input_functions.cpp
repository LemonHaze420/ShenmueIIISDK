
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

// Function BP_WM_Input.BP_WM_Input_C.UserConstructionScript
// (NetReliable, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_WM_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.UserConstructionScript");

	ABP_WM_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_24
// (Net, NetReliable, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_24");

	ABP_WM_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_23
// (NetRequest, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_23");

	ABP_WM_Input_C_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_22
// (Net, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_22");

	ABP_WM_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_21
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_21");

	ABP_WM_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_20
// (Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Top_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_20");

	ABP_WM_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_19
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Top_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_19");

	ABP_WM_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_18
// (NetReliable, NetRequest, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_18");

	ABP_WM_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_17
// (Net, NetRequest, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_17");

	ABP_WM_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_16
// (Net, NetRequest, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_16");

	ABP_WM_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_15
// (Net, NetReliable, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::STATIC_InpActEvt_MG_Left_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_15");

	ABP_WM_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_14
// (NetRequest, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_14");

	ABP_WM_Input_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_13
// (NetReliable, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WM_Input_C::InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_13");

	ABP_WM_Input_C_InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_6
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WM_Input_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_6");

	ABP_WM_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WM_Input_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7");

	ABP_WM_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WM_Input.BP_WM_Input_C.ExecuteUbergraph_BP_WM_Input
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WM_Input_C::ExecuteUbergraph_BP_WM_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WM_Input.BP_WM_Input_C.ExecuteUbergraph_BP_WM_Input");

	ABP_WM_Input_C_ExecuteUbergraph_BP_WM_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
