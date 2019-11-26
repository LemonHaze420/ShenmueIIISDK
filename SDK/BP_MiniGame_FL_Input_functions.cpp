
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

// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InputLeftStickHorizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Input_C::InputLeftStickHorizontal(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InputLeftStickHorizontal");

	ABP_MiniGame_FL_Input_C_InputLeftStickHorizontal_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InputTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Input_C::InputTrigger(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InputTrigger");

	ABP_MiniGame_FL_Input_C_InputTrigger_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_FL_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.UserConstructionScript");

	ABP_MiniGame_FL_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_18");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_17");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_16");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_15");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_14");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_13");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_Top_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_11");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_FL_Input_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_10");

	ABP_MiniGame_FL_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_13
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Input_C::InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_13(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_13");

	ABP_MiniGame_FL_Input_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_13_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_102
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Input_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_102(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_102");

	ABP_MiniGame_FL_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_102_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.ExecuteUbergraph_BP_MiniGame_FL_Input
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FL_Input_C::ExecuteUbergraph_BP_MiniGame_FL_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FL_Input.BP_MiniGame_FL_Input_C.ExecuteUbergraph_BP_MiniGame_FL_Input");

	ABP_MiniGame_FL_Input_C_ExecuteUbergraph_BP_MiniGame_FL_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
