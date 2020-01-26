
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_NewST_Input.BP_NewST_Input_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NewST_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.UserConstructionScript");

	ABP_NewST_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NewST_Input_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2");

	ABP_NewST_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_15
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewST_Input_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_15(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_15");

	ABP_NewST_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_15_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_17
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewST_Input_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_17(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_17");

	ABP_NewST_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_17_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewST_Input_C::InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21");

	ABP_NewST_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewST_Input_C::InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24");

	ABP_NewST_Input_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewST_Input_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.ReceiveTick");

	ABP_NewST_Input_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NewST_Input.BP_NewST_Input_C.ExecuteUbergraph_BP_NewST_Input
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NewST_Input_C::ExecuteUbergraph_BP_NewST_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NewST_Input.BP_NewST_Input_C.ExecuteUbergraph_BP_NewST_Input");

	ABP_NewST_Input_C_ExecuteUbergraph_BP_NewST_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
