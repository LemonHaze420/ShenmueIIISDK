
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

// Function BP_ExQTE_Input.BP_ExQTE_Input_C.UserConstructionScript
// (Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ExQTE_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.UserConstructionScript");

	ABP_ExQTE_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_16
// (Net, NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_16");

	ABP_ExQTE_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_15
// (Net, NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_15");

	ABP_ExQTE_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_14
// (Net, NetReliable, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_Left_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_14");

	ABP_ExQTE_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_13
// (NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_Right_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_13");

	ABP_ExQTE_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12
// (Net, NetReliable, NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12");

	ABP_ExQTE_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_11
// (Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_11");

	ABP_ExQTE_Input_C_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_10
// (Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_10");

	ABP_ExQTE_Input_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_9
// (NetReliable, NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExQTE_Input_C::STATIC_InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_9");

	ABP_ExQTE_Input_C_InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExQTE_Input.BP_ExQTE_Input_C.ExecuteUbergraph_BP_ExQTE_Input
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExQTE_Input_C::STATIC_ExecuteUbergraph_BP_ExQTE_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExQTE_Input.BP_ExQTE_Input_C.ExecuteUbergraph_BP_ExQTE_Input");

	ABP_ExQTE_Input_C_ExecuteUbergraph_BP_ExQTE_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
