
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

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.GetMiniGameValueType
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.GetMiniGameValueType");

	ABP_MiniGameInputBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGameInputBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.UserConstructionScript");

	ABP_MiniGameInputBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_20
// (NetRequest, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_Bottom_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_20");

	ABP_MiniGameInputBase_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19
// (Net, NetReliable, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19");

	ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18
// (NetReliable, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18");

	ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17
// (NetReliable, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17");

	ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16");

	ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Left_K2Node_InputActionEvent_15
// (NetReliable, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_Left_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Left_K2Node_InputActionEvent_15");

	ABP_MiniGameInputBase_C_InpActEvt_MG_Left_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Right_K2Node_InputActionEvent_14
// (Net, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_Right_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Right_K2Node_InputActionEvent_14");

	ABP_MiniGameInputBase_C_InpActEvt_MG_Right_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13
// (Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_Top_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13");

	ABP_MiniGameInputBase_C_InpActEvt_MG_Top_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12
// (Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12");

	ABP_MiniGameInputBase_C_InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_Interruption_K2Node_InputActionEvent_11
// (Net, NetReliable, NetRequest, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameInputBase_C::STATIC_InpActEvt_Interruption_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_Interruption_K2Node_InputActionEvent_11");

	ABP_MiniGameInputBase_C_InpActEvt_Interruption_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EndMiniGame
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EndMiniGame");

	ABP_MiniGameInputBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.WinMiniGame
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.WinMiniGame");

	ABP_MiniGameInputBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.LoseMiniGame
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.LoseMiniGame");

	ABP_MiniGameInputBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.DrawMiniGame
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.DrawMiniGame");

	ABP_MiniGameInputBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EnterMiniGame
// (NetReliable, NetRequest, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EnterMiniGame");

	ABP_MiniGameInputBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.RestartMiniGame
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.RestartMiniGame");

	ABP_MiniGameInputBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.FinalizeTalk
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.FinalizeTalk");

	ABP_MiniGameInputBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.StartMiniGame
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.StartMiniGame");

	ABP_MiniGameInputBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17
// (Net, NetRequest, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17");

	ABP_MiniGameInputBase_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18
// (NetResponse, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18");

	ABP_MiniGameInputBase_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27
// (NetReliable, NetRequest, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27");

	ABP_MiniGameInputBase_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37
// (NetReliable, NetRequest, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37");

	ABP_MiniGameInputBase_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47
// (Net, NetRequest, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47");

	ABP_MiniGameInputBase_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58
// (NetRequest, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58");

	ABP_MiniGameInputBase_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EnabledMiniGameInput
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_EnabledMiniGameInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EnabledMiniGameInput");

	ABP_MiniGameInputBase_C_EnabledMiniGameInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.DisabledMiniGameInput
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameInputBase_C::STATIC_DisabledMiniGameInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.DisabledMiniGameInput");

	ABP_MiniGameInputBase_C_DisabledMiniGameInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.ExecuteUbergraph_BP_MiniGameInputBase
// (NetReliable, NetRequest, Exec, Static, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameInputBase_C::STATIC_ExecuteUbergraph_BP_MiniGameInputBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.ExecuteUbergraph_BP_MiniGameInputBase");

	ABP_MiniGameInputBase_C_ExecuteUbergraph_BP_MiniGameInputBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
