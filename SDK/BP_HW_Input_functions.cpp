
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

// Function BP_HW_Input.BP_HW_Input_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_HW_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_Input.BP_HW_Input_C.UserConstructionScript");

	ABP_HW_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_Input.BP_HW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_4
// (NetReliable, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HW_Input_C::STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_Input.BP_HW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_4");

	ABP_HW_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_Input.BP_HW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_3
// (Net, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HW_Input_C::STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_Input.BP_HW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_3");

	ABP_HW_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_Input.BP_HW_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HW_Input_C::STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_Input.BP_HW_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1");

	ABP_HW_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HW_Input.BP_HW_Input_C.ExecuteUbergraph_BP_HW_Input
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HW_Input_C::ExecuteUbergraph_BP_HW_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HW_Input.BP_HW_Input_C.ExecuteUbergraph_BP_HW_Input");

	ABP_HW_Input_C_ExecuteUbergraph_BP_HW_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
