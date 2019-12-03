
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

// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_Keiho_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.UserConstructionScript");

	ABP_MiniGame_Keiho_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_4
// (Net, NetReliable, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_Keiho_Input_C::STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_4");

	ABP_MiniGame_Keiho_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_3
// (Net, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGame_Keiho_Input_C::STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_3");

	ABP_MiniGame_Keiho_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21
// (NetReliable, NetRequest, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_Input_C::STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21");

	ABP_MiniGame_Keiho_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_21_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24
// (Net, NetRequest, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_Input_C::STATIC_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24");

	ABP_MiniGame_Keiho_Input_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_24_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_13
// (NetRequest, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_Input_C::STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_13(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_13");

	ABP_MiniGame_Keiho_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_13_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_14
// (NetRequest, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_Input_C::STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_14(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_14");

	ABP_MiniGame_Keiho_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_14_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.ExecuteUbergraph_BP_MiniGame_Keiho_Input
// (Net, NetReliable, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Keiho_Input_C::ExecuteUbergraph_BP_MiniGame_Keiho_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Keiho_Input.BP_MiniGame_Keiho_Input_C.ExecuteUbergraph_BP_MiniGame_Keiho_Input");

	ABP_MiniGame_Keiho_Input_C_ExecuteUbergraph_BP_MiniGame_Keiho_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
