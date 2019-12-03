
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

// Function BP_KF_Input.BP_KF_Input_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_KF_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.UserConstructionScript");

	ABP_KF_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_10
// (Net, Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_KF_Input_C::STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_10");

	ABP_KF_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_9
// (Net, NetReliable, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_KF_Input_C::STATIC_InpActEvt_MG_Left_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_9");

	ABP_KF_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_8
// (NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_KF_Input_C::STATIC_InpActEvt_MG_Right_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_8");

	ABP_KF_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_7
// (Net, NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_KF_Input_C::STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_7");

	ABP_KF_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_6
// (Net, NetReliable, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_KF_Input_C::STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_6");

	ABP_KF_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5
// (Exec, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Input_C::STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5");

	ABP_KF_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6
// (Net, NetReliable, NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Input_C::STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6");

	ABP_KF_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.ReceiveTick
// (NetReliable, NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Input_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.ReceiveTick");

	ABP_KF_Input_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KF_Input.BP_KF_Input_C.ExecuteUbergraph_BP_KF_Input
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_KF_Input_C::STATIC_ExecuteUbergraph_BP_KF_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KF_Input.BP_KF_Input_C.ExecuteUbergraph_BP_KF_Input");

	ABP_KF_Input_C_ExecuteUbergraph_BP_KF_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
