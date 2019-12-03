
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

// Function BP_CheatManager.BP_CheatManager_C.SetForceNPCVisible
// (MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheatManager_C::SetForceNPCVisible(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.SetForceNPCVisible");

	UBP_CheatManager_C_SetForceNPCVisible_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.Init_DebugItemPrice
// (Native, Event, Static, Public, Protected, Delegate, NetServer, NetClient, DLLImport)

void UBP_CheatManager_C::STATIC_Init_DebugItemPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.Init_DebugItemPrice");

	UBP_CheatManager_C_Init_DebugItemPrice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.DisplayLightCount
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UBP_CheatManager_C::STATIC_DisplayLightCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DisplayLightCount");

	UBP_CheatManager_C_DisplayLightCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ToggleDispDevelopText
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_CheatManager_C::ToggleDispDevelopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ToggleDispDevelopText");

	UBP_CheatManager_C_ToggleDispDevelopText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ToggleDispCutscenePlayArea
// (Native, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_CheatManager_C::ToggleDispCutscenePlayArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ToggleDispCutscenePlayArea");

	UBP_CheatManager_C_ToggleDispCutscenePlayArea_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.BatchAddPropertyWatch
// (Net, NetReliable, NetRequest, NetResponse, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ObjectDisplayName              (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FBatchPropertyWatchInfo> Properties                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheatManager_C::BatchAddPropertyWatch(const struct FText& ObjectDisplayName, class UObject* Object, TArray<struct FBatchPropertyWatchInfo>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.BatchAddPropertyWatch");

	UBP_CheatManager_C_BatchAddPropertyWatch_Params params;
	params.ObjectDisplayName = ObjectDisplayName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function BP_CheatManager.BP_CheatManager_C.DisplayWorkMap
// (NetReliable, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::DisplayWorkMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DisplayWorkMap");

	UBP_CheatManager_C_DisplayWorkMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.DisplayLightInfo
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_CheatManager_C::STATIC_DisplayLightInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DisplayLightInfo");

	UBP_CheatManager_C_DisplayLightInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.DebugAddMoney
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheatManager_C::DebugAddMoney(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DebugAddMoney");

	UBP_CheatManager_C_DebugAddMoney_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.DisplayNPCNum
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_CheatManager_C::DisplayNPCNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DisplayNPCNum");

	UBP_CheatManager_C_DisplayNPCNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.dbgCalcAddtime
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          Base                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Bias                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           signed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CheatManager_C::STATIC_dbgCalcAddtime(float Base, float Bias, bool Signed, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.dbgCalcAddtime");

	UBP_CheatManager_C_dbgCalcAddtime_Params params;
	params.Base = Base;
	params.Bias = Bias;
	params.Signed = Signed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CheatManager.BP_CheatManager_C.UserConstructionScript
// (NetReliable, Native, NetResponse, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_CheatManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.UserConstructionScript");

	UBP_CheatManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ReceiveInitCheatManager
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::ReceiveInitCheatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ReceiveInitCheatManager");

	UBP_CheatManager_C_ReceiveInitCheatManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Cmd_Insert
// (Net, NetReliable, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_Cmd_Insert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Cmd_Insert");

	UBP_CheatManager_C_OnInputKey_Cmd_Insert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdShiftPageUp
// (NetReliable, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_CmdShiftPageUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdShiftPageUp");

	UBP_CheatManager_C_OnInputKey_CmdShiftPageUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdShiftPageDown
// (NetReliable, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_CmdShiftPageDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdShiftPageDown");

	UBP_CheatManager_C_OnInputKey_CmdShiftPageDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdPageUp
// (Net, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_CmdPageUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdPageUp");

	UBP_CheatManager_C_OnInputKey_CmdPageUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdPageDown
// (Net, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_CmdPageDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdPageDown");

	UBP_CheatManager_C_OnInputKey_CmdPageDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdAltPageUp
// (Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_CmdAltPageUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdAltPageUp");

	UBP_CheatManager_C_OnInputKey_CmdAltPageUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdAltPageDown
// (Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_CmdAltPageDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_CmdAltPageDown");

	UBP_CheatManager_C_OnInputKey_CmdAltPageDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_3
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_3");

	UBP_CheatManager_C_OnKeyInput_3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_2
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_2");

	UBP_CheatManager_C_OnKeyInput_2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Num+
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_Num_Plus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Num+");

	UBP_CheatManager_C_OnKeyInput_Num_Plus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Num-
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_Num_Minus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Num-");

	UBP_CheatManager_C_OnKeyInput_Num_Minus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Alt L
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_Alt_L()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Alt L");

	UBP_CheatManager_C_OnInputKey_Alt_L_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Alt+Shift L
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_Alt_Shift_L()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_Alt+Shift L");

	UBP_CheatManager_C_OnInputKey_Alt_Shift_L_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_F9Ctrl
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_F9Ctrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_F9Ctrl");

	UBP_CheatManager_C_OnKeyInput_F9Ctrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInput_DpadLeft
// (Net, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInput_DpadLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInput_DpadLeft");

	UBP_CheatManager_C_OnInput_DpadLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_E
// (Net, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_E");

	UBP_CheatManager_C_OnKeyInput_E_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_T
// (Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_T()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_T");

	UBP_CheatManager_C_OnKeyInput_T_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnMiniGameWinEvent
// (NetReliable, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::OnMiniGameWinEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnMiniGameWinEvent");

	UBP_CheatManager_C_OnMiniGameWinEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnMiniGameLoseEvent
// (NetReliable, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::OnMiniGameLoseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnMiniGameLoseEvent");

	UBP_CheatManager_C_OnMiniGameLoseEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_U
// (Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_U()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_U");

	UBP_CheatManager_C_OnKeyInput_U_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.InitAdventureDebugMenus
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3CharacterBase_C*   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheatManager_C::InitAdventureDebugMenus(class ABP_S3CharacterBase_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.InitAdventureDebugMenus");

	UBP_CheatManager_C_InitAdventureDebugMenus_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.LevelStreamingDebug
// (Exec, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::LevelStreamingDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.LevelStreamingDebug");

	UBP_CheatManager_C_LevelStreamingDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_L
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_L()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_L");

	UBP_CheatManager_C_OnKeyInput_L_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnShowLightInfoEvent
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::OnShowLightInfoEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnShowLightInfoEvent");

	UBP_CheatManager_C_OnShowLightInfoEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnInputKey_V
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnInputKey_V()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnInputKey_V");

	UBP_CheatManager_C_OnInputKey_V_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_F
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_F()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_F");

	UBP_CheatManager_C_OnKeyInput_F_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_CtrlT
// (Net, NetRequest, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_CtrlT()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_CtrlT");

	UBP_CheatManager_C_OnKeyInput_CtrlT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Z
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_Z()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_Z");

	UBP_CheatManager_C_OnKeyInput_Z_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInputSemicolon
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInputSemicolon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInputSemicolon");

	UBP_CheatManager_C_OnKeyInputSemicolon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ShowLightCount
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::ShowLightCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ShowLightCount");

	UBP_CheatManager_C_ShowLightCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.DecideButton
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::DecideButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DecideButton");

	UBP_CheatManager_C_DecideButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.EnableRecodingMode
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::EnableRecodingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.EnableRecodingMode");

	UBP_CheatManager_C_EnableRecodingMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_AltB
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_AltB()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_AltB");

	UBP_CheatManager_C_OnKeyInput_AltB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.LaunchDebugBattle
// (Net, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::LaunchDebugBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.LaunchDebugBattle");

	UBP_CheatManager_C_LaunchDebugBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.DisableNPCTriggerOverlaps
// (Net, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::DisableNPCTriggerOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.DisableNPCTriggerOverlaps");

	UBP_CheatManager_C_DisableNPCTriggerOverlaps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.EnableNPCTriggerOverlaps
// (NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::EnableNPCTriggerOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.EnableNPCTriggerOverlaps");

	UBP_CheatManager_C_EnableNPCTriggerOverlaps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_SpecialRight
// (Net, NetRequest, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CheatManager_C::OnKeyInput_SpecialRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.OnKeyInput_SpecialRight");

	UBP_CheatManager_C_OnKeyInput_SpecialRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ShowNPCStreamingInfo
// (NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::ShowNPCStreamingInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ShowNPCStreamingInfo");

	UBP_CheatManager_C_ShowNPCStreamingInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ShowItemSpawnerHints
// (Net, NetReliable, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::ShowItemSpawnerHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ShowItemSpawnerHints");

	UBP_CheatManager_C_ShowItemSpawnerHints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.NPCVisible
// (Net, NetReliable, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_CheatManager_C::NPCVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.NPCVisible");

	UBP_CheatManager_C_NPCVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CheatManager.BP_CheatManager_C.ExecuteUbergraph_BP_CheatManager
// (NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CheatManager_C::ExecuteUbergraph_BP_CheatManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CheatManager.BP_CheatManager_C.ExecuteUbergraph_BP_CheatManager");

	UBP_CheatManager_C_ExecuteUbergraph_BP_CheatManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
