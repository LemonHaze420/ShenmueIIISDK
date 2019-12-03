
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

// Function BP_CW_Input.BP_CW_Input_C.IsDebugSound
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           IsDebugSound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CW_Input_C::STATIC_IsDebugSound(bool* IsDebugSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.IsDebugSound");

	ABP_CW_Input_C_IsDebugSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDebugSound != nullptr)
		*IsDebugSound = params.IsDebugSound;
}


// Function BP_CW_Input.BP_CW_Input_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CW_Input_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.UserConstructionScript");

	ABP_CW_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14
// (Net, NetReliable, Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14");

	ABP_CW_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13
// (Net, NetReliable, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13");

	ABP_CW_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12
// (NetReliable, Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12");

	ABP_CW_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_11
// (Net, Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_Right_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_11");

	ABP_CW_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10
// (Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_Right_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10");

	ABP_CW_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_9
// (Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_Left_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_9");

	ABP_CW_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_8
// (Net, NetReliable, NetRequest, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::STATIC_InpActEvt_MG_Left_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_8");

	ABP_CW_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.ExecuteUbergraph_BP_CW_Input
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CW_Input_C::STATIC_ExecuteUbergraph_BP_CW_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.ExecuteUbergraph_BP_CW_Input");

	ABP_CW_Input_C_ExecuteUbergraph_BP_CW_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
