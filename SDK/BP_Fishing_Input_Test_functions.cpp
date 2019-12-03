
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

// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.UserConstructionScript
// (NetReliable, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Fishing_Input_Test_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.UserConstructionScript");

	ABP_Fishing_Input_Test_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Fishing_Input_Test_C::STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4");

	ABP_Fishing_Input_Test_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Fishing_Input_Test_C::STATIC_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3");

	ABP_Fishing_Input_Test_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Input_Test_C::STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1");

	ABP_Fishing_Input_Test_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_3
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Input_Test_C::STATIC_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_3");

	ABP_Fishing_Input_Test_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7
// (Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Input_Test_C::STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7");

	ABP_Fishing_Input_Test_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_13
// (Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Input_Test_C::STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_13(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_13");

	ABP_Fishing_Input_Test_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_13_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.ExecuteUbergraph_BP_Fishing_Input_Test
// (NetReliable, NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Input_Test_C::ExecuteUbergraph_BP_Fishing_Input_Test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Input_Test.BP_Fishing_Input_Test_C.ExecuteUbergraph_BP_Fishing_Input_Test");

	ABP_Fishing_Input_Test_C_ExecuteUbergraph_BP_Fishing_Input_Test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
