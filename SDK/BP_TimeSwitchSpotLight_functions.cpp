
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

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::isLightOnTimezone(bool* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone");

	ABP_TimeSwitchSpotLight_C_isLightOnTimezone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript
// (Net, NetRequest, Exec, Static, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TimeSwitchSpotLight_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript");

	ABP_TimeSwitchSpotLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_TimeSwitchSpotLight_C::Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc");

	ABP_TimeSwitchSpotLight_C_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_TimeSwitchSpotLight_C::Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc");

	ABP_TimeSwitchSpotLight_C_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_TimeSwitchSpotLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay");

	ABP_TimeSwitchSpotLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.DayTimeEvent
// (NetRequest, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::STATIC_DayTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.DayTimeEvent");

	ABP_TimeSwitchSpotLight_C_DayTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ShopTimeEvent
// (Net, NetReliable, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ShopTimeEvent               EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::STATIC_ShopTimeEvent(ES3ShopTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ShopTimeEvent");

	ABP_TimeSwitchSpotLight_C_ShopTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.catch_onTimeJump
// (Net, NetReliable, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::STATIC_catch_onTimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.catch_onTimeJump");

	ABP_TimeSwitchSpotLight_C_catch_onTimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ToggleLight
// (Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_TimeSwitchSpotLight_C::ToggleLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ToggleLight");

	ABP_TimeSwitchSpotLight_C_ToggleLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightEnable
// (NetReliable, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::STATIC_OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightEnable");

	ABP_TimeSwitchSpotLight_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightCastShadow
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bNewLightCastShadow            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::OnSetLightCastShadow(bool bNewLightCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightCastShadow");

	ABP_TimeSwitchSpotLight_C_OnSetLightCastShadow_Params params;
	params.bNewLightCastShadow = bNewLightCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ExecuteUbergraph_BP_TimeSwitchSpotLight
// (Net, NetRequest, Exec, Event, NetMulticast, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::ExecuteUbergraph_BP_TimeSwitchSpotLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ExecuteUbergraph_BP_TimeSwitchSpotLight");

	ABP_TimeSwitchSpotLight_C_ExecuteUbergraph_BP_TimeSwitchSpotLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
