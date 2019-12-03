
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

// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.StartLoad
// (NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_StartLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.StartLoad");

	ABP_SaveLoadInputManager_C_StartLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.UserConstructionScript
// (NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.UserConstructionScript");

	ABP_SaveLoadInputManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12
// (Net, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveLoadInputManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12");

	ABP_SaveLoadInputManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_11
// (NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveLoadInputManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_11");

	ABP_SaveLoadInputManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveLoadInputManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10");

	ABP_SaveLoadInputManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_9
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveLoadInputManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_9");

	ABP_SaveLoadInputManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_8
// (NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveLoadInputManager_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_8");

	ABP_SaveLoadInputManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_7
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaveLoadInputManager_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_7");

	ABP_SaveLoadInputManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ReceiveBeginPlay
// (Net, NetReliable, Native, Event, NetResponse, Static, Private, Protected, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ReceiveBeginPlay");

	ABP_SaveLoadInputManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ReceiveTick
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaveLoadInputManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ReceiveTick");

	ABP_SaveLoadInputManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaveLoadInputManager_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33");

	ABP_SaveLoadInputManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ExecuteUbergraph_BP_SaveLoadInputManager
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Protected, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaveLoadInputManager_C::ExecuteUbergraph_BP_SaveLoadInputManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ExecuteUbergraph_BP_SaveLoadInputManager");

	ABP_SaveLoadInputManager_C_ExecuteUbergraph_BP_SaveLoadInputManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_LeftButton__DelegateSignature
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_ED_LeftButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_LeftButton__DelegateSignature");

	ABP_SaveLoadInputManager_C_ED_LeftButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_WheleMouse__DelegateSignature
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaveLoadInputManager_C::STATIC_ED_WheleMouse__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_WheleMouse__DelegateSignature");

	ABP_SaveLoadInputManager_C_ED_WheleMouse__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_DownButton__DelegateSignature
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_ED_DownButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_DownButton__DelegateSignature");

	ABP_SaveLoadInputManager_C_ED_DownButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_RightButton__DelegateSignature
// (Net, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_ED_RightButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_RightButton__DelegateSignature");

	ABP_SaveLoadInputManager_C_ED_RightButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_DownPush__DelegateSignature
// (Net, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_ED_DownPush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_DownPush__DelegateSignature");

	ABP_SaveLoadInputManager_C_ED_DownPush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_UpPush__DelegateSignature
// (Net, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)

void ABP_SaveLoadInputManager_C::STATIC_ED_UpPush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaveLoadInputManager.BP_SaveLoadInputManager_C.ED_UpPush__DelegateSignature");

	ABP_SaveLoadInputManager_C_ED_UpPush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
