
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

// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.CheckTiming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJust                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsEx                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::CheckTiming(bool* IsJust, bool* IsEx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.CheckTiming");

	ABP_MiniGame_Sunken_3DUI_C_CheckTiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJust != nullptr)
		*IsJust = params.IsJust;
	if (IsEx != nullptr)
		*IsEx = params.IsEx;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.SetJustTiming
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJustTiming                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::SetJustTiming(bool IsJustTiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.SetJustTiming");

	ABP_MiniGame_Sunken_3DUI_C_SetJustTiming_Params params;
	params.IsJustTiming = IsJustTiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateToMaxDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::UpdateToMaxDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateToMaxDistance");

	ABP_MiniGame_Sunken_3DUI_C_UpdateToMaxDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::UpdateBar(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UpdateBar");

	ABP_MiniGame_Sunken_3DUI_C_UpdateBar_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.UserConstructionScript");

	ABP_MiniGame_Sunken_3DUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_FlashCenterBar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_FlashCenterBar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_FlashCenterBar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_FlashCenterBar__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_FlashCenterBar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::TimeLine_SideBar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_TimeLine_SideBar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::TimeLine_SideBar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.TimeLine_SideBar__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_TimeLine_SideBar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ScaleChangeBack__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ScaleChangeBack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ScaleChangeBack__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ScaleChangeBack__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ScaleChangeBack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__FinishedFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__UpdateFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndJust__EventFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__EndJust__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndJust__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__EndJust__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndEx__EventFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__EndEx__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__EndEx__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__EndEx__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartEx__EventFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__StartEx__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartEx__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__StartEx__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartJust__EventFunc
// (BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Timeline_ActionTiming__StartJust__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Timeline_ActionTiming__StartJust__EventFunc");

	ABP_MiniGame_Sunken_3DUI_C_Timeline_ActionTiming__StartJust__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ReceiveBeginPlay");

	ABP_MiniGame_Sunken_3DUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_FlashCenterBar
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::Event_FlashCenterBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_FlashCenterBar");

	ABP_MiniGame_Sunken_3DUI_C_Event_FlashCenterBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_EnabledSideBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::Event_EnabledSideBar(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_EnabledSideBar");

	ABP_MiniGame_Sunken_3DUI_C_Event_EnabledSideBar_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_ForceSideBarEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::Event_ForceSideBarEnabled(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.Event_ForceSideBarEnabled");

	ABP_MiniGame_Sunken_3DUI_C_Event_ForceSideBarEnabled_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.StartActionTiming
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_Sunken_3DUI_C::StartActionTiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.StartActionTiming");

	ABP_MiniGame_Sunken_3DUI_C_StartActionTiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ExecuteUbergraph_BP_MiniGame_Sunken_3DUI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_Sunken_3DUI_C::ExecuteUbergraph_BP_MiniGame_Sunken_3DUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_Sunken_3DUI.BP_MiniGame_Sunken_3DUI_C.ExecuteUbergraph_BP_MiniGame_Sunken_3DUI");

	ABP_MiniGame_Sunken_3DUI_C_ExecuteUbergraph_BP_MiniGame_Sunken_3DUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
