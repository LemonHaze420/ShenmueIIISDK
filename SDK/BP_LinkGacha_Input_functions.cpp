
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

// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.GetBPLinkGacha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_LinkGacha_C*         BPLinkGacha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_Input_C::GetBPLinkGacha(class ABP_LinkGacha_C** BPLinkGacha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.GetBPLinkGacha");

	ABP_LinkGacha_Input_C_GetBPLinkGacha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPLinkGacha != nullptr)
		*BPLinkGacha = params.BPLinkGacha;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LinkGacha_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.UserConstructionScript");

	ABP_LinkGacha_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LinkGacha_Input_C::InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_12");

	ABP_LinkGacha_Input_C_InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LinkGacha_Input_C::InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_11");

	ABP_LinkGacha_Input_C_InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LinkGacha_Input_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_10");

	ABP_LinkGacha_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LinkGacha_Input_C::InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_9");

	ABP_LinkGacha_Input_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LinkGacha_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_8");

	ABP_LinkGacha_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LinkGacha_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_7");

	ABP_LinkGacha_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.DecideDetectAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_Input_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.DecideDetectAction");

	ABP_LinkGacha_Input_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.ExecuteUbergraph_BP_LinkGacha_Input
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LinkGacha_Input_C::ExecuteUbergraph_BP_LinkGacha_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LinkGacha_Input.BP_LinkGacha_Input_C.ExecuteUbergraph_BP_LinkGacha_Input");

	ABP_LinkGacha_Input_C_ExecuteUbergraph_BP_LinkGacha_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
