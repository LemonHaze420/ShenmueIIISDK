
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

// Function BP_CW_Input.BP_CW_Input_C.IsDebugSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDebugSound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CW_Input_C::IsDebugSound(bool* IsDebugSound)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CW_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.UserConstructionScript");

	ABP_CW_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14");

	ABP_CW_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_Top_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13");

	ABP_CW_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12");

	ABP_CW_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_11");

	ABP_CW_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10");

	ABP_CW_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_9");

	ABP_CW_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CW_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CW_Input.BP_CW_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_8");

	ABP_CW_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CW_Input.BP_CW_Input_C.ExecuteUbergraph_BP_CW_Input
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CW_Input_C::ExecuteUbergraph_BP_CW_Input(int EntryPoint)
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
