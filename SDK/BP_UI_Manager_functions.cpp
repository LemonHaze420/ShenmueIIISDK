
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

// Function BP_UI_Manager.BP_UI_Manager_C.GetPriority
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_UI_Manager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.GetPriority");

	ABP_UI_Manager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_Manager.BP_UI_Manager_C.GetDetectAction
// (Net, MulticastDelegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_UI_Manager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.GetDetectAction");

	ABP_UI_Manager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_Manager.BP_UI_Manager_C.SetRotateIconVisiblity
// (Net, NetResponse, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::SetRotateIconVisiblity(bool Visible, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.SetRotateIconVisiblity");

	ABP_UI_Manager_C_SetRotateIconVisiblity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_UI_Manager.BP_UI_Manager_C.PlaySE
// (Exec, NetResponse, Static, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_ShopSE_List>    SE                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_PlaySE(TEnumAsByte<EN_ShopSE_List> SE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.PlaySE");

	ABP_UI_Manager_C_PlaySE_Params params;
	params.SE = SE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.GetText
// (Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutString                      (Parm, OutParm)

void ABP_UI_Manager_C::GetText(const struct FName& Label, ES3TextPathType Type, struct FText* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.GetText");

	ABP_UI_Manager_C_GetText_Params params;
	params.Label = Label;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function BP_UI_Manager.BP_UI_Manager_C.PushUp_ItemList
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPW_UI_BaseWindow_C*    UI_Widget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_UI_Manager_C::PushUp_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.PushUp_ItemList");

	ABP_UI_Manager_C_PushUp_ItemList_Params params;
	params.UI_Widget = UI_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.PushDown_ItemList
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPW_UI_BaseWindow_C*    UI_Widget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_PushDown_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.PushDown_ItemList");

	ABP_UI_Manager_C_PushDown_ItemList_Params params;
	params.UI_Widget = UI_Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.PushLeft_ItemList
// (NetRequest, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBPW_UI_BaseWindow_C*    UI_Widget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_UI_Manager_C::PushLeft_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.PushLeft_ItemList");

	ABP_UI_Manager_C_PushLeft_ItemList_Params params;
	params.UI_Widget = UI_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.PushRight_ItemList
// (NetRequest, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBPW_UI_BaseWindow_C*    UI_Widget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_UI_Manager_C::PushRight_ItemList(class UBPW_UI_BaseWindow_C* UI_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.PushRight_ItemList");

	ABP_UI_Manager_C_PushRight_ItemList_Params params;
	params.UI_Widget = UI_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.MakeItemList
// (Native, Event, Static, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ItemIDList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FST_ItemList>    itemList                       (Parm, OutParm, ZeroConstructor)

void ABP_UI_Manager_C::STATIC_MakeItemList(TArray<int>* ItemIDList, TArray<struct FST_ItemList>* itemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.MakeItemList");

	ABP_UI_Manager_C_MakeItemList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIDList != nullptr)
		*ItemIDList = params.ItemIDList;
	if (itemList != nullptr)
		*itemList = params.itemList;
}


// Function BP_UI_Manager.BP_UI_Manager_C.IsRegistDetectAction
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Regist                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::IsRegistDetectAction(bool Regist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.IsRegistDetectAction");

	ABP_UI_Manager_C_IsRegistDetectAction_Params params;
	params.Regist = Regist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.UserConstructionScript
// (NetResponse, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_UI_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.UserConstructionScript");

	ABP_UI_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_Manager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8");

	ABP_UI_Manager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_Manager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7");

	ABP_UI_Manager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_Manager_C::STATIC_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6");

	ABP_UI_Manager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_Manager_C::STATIC_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5");

	ABP_UI_Manager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.PushButton
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_UI_Button>      newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_PushButton(TEnumAsByte<EN_UI_Button> newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.PushButton");

	ABP_UI_Manager_C_PushButton_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1");

	ABP_UI_Manager_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2");

	ABP_UI_Manager_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1");

	ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2");

	ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4");

	ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7");

	ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Public, Private, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.ReceiveBeginPlay");

	ABP_UI_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.ReceiveDestroyed
// (NetReliable, NetRequest, Native, Event, NetResponse, Public, Private, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_Manager_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.ReceiveDestroyed");

	ABP_UI_Manager_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.DecideDetectAction
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.DecideDetectAction");

	ABP_UI_Manager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_Manager.BP_UI_Manager_C.ExecuteUbergraph_BP_UI_Manager
// (NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_Manager_C::STATIC_ExecuteUbergraph_BP_UI_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_Manager.BP_UI_Manager_C.ExecuteUbergraph_BP_UI_Manager");

	ABP_UI_Manager_C_ExecuteUbergraph_BP_UI_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
