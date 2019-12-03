
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

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.CheckTiming
// (Net, Exec, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsJust                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsEx                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::STATIC_CheckTiming(bool* IsJust, bool* IsEx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.CheckTiming");

	ABP_MiniGame_Sunken_3DUI_C_CheckTiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJust != nullptr)
		*IsJust = params.IsJust;
	if (IsEx != nullptr)
		*IsEx = params.IsEx;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.SetJustTiming
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsJustTiming                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::SetJustTiming(bool IsJustTiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.SetJustTiming");

	ABP_MiniGame_Sunken_3DUI_C_SetJustTiming_Params params;
	params.IsJustTiming = IsJustTiming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateToMaxDistance
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::STATIC_UpdateToMaxDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateToMaxDistance");

	ABP_MiniGame_Sunken_3DUI_C_UpdateToMaxDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateBar
// (NetReliable, NetRequest, Native, NetResponse, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::UpdateBar(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateBar");

	ABP_MiniGame_Sunken_3DUI_C_UpdateBar_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UserConstructionScript");

	ABP_MiniGame_Sunken_3DUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__FinishedFunc
// (Net, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_FlashCenterBar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_FlashCenterBar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__UpdateFunc
// (Net, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_FlashCenterBar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_FlashCenterBar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__FinishedFunc
// (Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::TimeLine_SideBar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_TimeLine_SideBar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__UpdateFunc
// (Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::TimeLine_SideBar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_TimeLine_SideBar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__FinishedFunc
// (Net, NetReliable, NetRequest, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ScaleChangeBack__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ScaleChangeBack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__UpdateFunc
// (Net, NetReliable, NetRequest, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ScaleChangeBack__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ScaleChangeBack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__FinishedFunc
// (NetReliable, NetRequest, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__UpdateFunc
// (NetReliable, NetRequest, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndJust__EventFunc
// (Net, NetRequest, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__EndJust__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndJust__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__EndJust__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndEx__EventFunc
// (Net, NetRequest, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__EndEx__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndEx__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__EndEx__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartEx__EventFunc
// (Net, NetRequest, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__StartEx__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartEx__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__StartEx__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartJust__EventFunc
// (Net, NetRequest, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__StartJust__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartJust__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__StartJust__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ReceiveBeginPlay
// (NetRequest, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ReceiveBeginPlay");

	ABP_MiniGame_Sunken_3DUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_FlashCenterBar
// (NetRequest, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::Event_FlashCenterBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_FlashCenterBar");

	ABP_MiniGame_Sunken_3DUI_C_Event_FlashCenterBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_EnabledSideBar
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::STATIC_Event_EnabledSideBar(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_EnabledSideBar");

	ABP_MiniGame_Sunken_3DUI_C_Event_EnabledSideBar_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_ForceSideBarEnabled
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::STATIC_Event_ForceSideBarEnabled(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_ForceSideBarEnabled");

	ABP_MiniGame_Sunken_3DUI_C_Event_ForceSideBarEnabled_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.StartActionTiming
// (NetReliable, Exec, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_Sunken_3DUI_C::StartActionTiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.StartActionTiming");

	ABP_MiniGame_Sunken_3DUI_C_StartActionTiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ExecuteUbergraph_BP_MiniGame_Sunken_3DUI
// (Exec, Native, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::ExecuteUbergraph_BP_MiniGame_Sunken_3DUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ExecuteUbergraph_BP_MiniGame_Sunken_3DUI");

	ABP_MiniGame_Sunken_3DUI_C_ExecuteUbergraph_BP_MiniGame_Sunken_3DUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
