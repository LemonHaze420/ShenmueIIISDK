
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

// Function BP_CJ_Input.BP_CJ_Input_C.ExecPrecedeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           exec                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::ExecPrecedeInput(bool* exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.ExecPrecedeInput");

	ABP_CJ_Input_C_ExecPrecedeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec != nullptr)
		*exec = params.exec;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGame_ChawanJin_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::InitSet(class ABP_MiniGame_ChawanJin_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InitSet");

	ABP_CJ_Input_C_InitSet_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CJ_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.UserConstructionScript");

	ABP_CJ_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_Input_C::InpActEvt_MG_Bottom_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12");

	ABP_CJ_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_Input_C::InpActEvt_MG_Left_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_11");

	ABP_CJ_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_Input_C::InpActEvt_MG_Right_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10");

	ABP_CJ_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_Input_C::InpActEvt_MG_Top_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_9");

	ABP_CJ_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_Input_C::InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8");

	ABP_CJ_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CJ_Input_C::InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7");

	ABP_CJ_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5");

	ABP_CJ_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6");

	ABP_CJ_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1");

	ABP_CJ_Input_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2");

	ABP_CJ_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CJ_Input_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.ReceiveBeginPlay");

	ABP_CJ_Input_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.ReceiveTick");

	ABP_CJ_Input_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.ExecuteUbergraph_BP_CJ_Input
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::ExecuteUbergraph_BP_CJ_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.ExecuteUbergraph_BP_CJ_Input");

	ABP_CJ_Input_C_ExecuteUbergraph_BP_CJ_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CJ_Input.BP_CJ_Input_C.ChangePos__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CJ_Input_C::ChangePos__DelegateSignature(const struct FName& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CJ_Input.BP_CJ_Input_C.ChangePos__DelegateSignature");

	ABP_CJ_Input_C_ChangePos__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
