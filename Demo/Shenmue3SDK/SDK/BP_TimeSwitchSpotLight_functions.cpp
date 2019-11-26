
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::isLightOnTimezone(bool* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone");

	ABP_TimeSwitchSpotLight_C_isLightOnTimezone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript");

	ABP_TimeSwitchSpotLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc");

	ABP_TimeSwitchSpotLight_C_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc");

	ABP_TimeSwitchSpotLight_C_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay");

	ABP_TimeSwitchSpotLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.DayTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::DayTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.DayTimeEvent");

	ABP_TimeSwitchSpotLight_C_DayTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ShopTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ShopTimeEvent               EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::ShopTimeEvent(ES3ShopTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ShopTimeEvent");

	ABP_TimeSwitchSpotLight_C_ShopTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.catch_onTimeJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::catch_onTimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.catch_onTimeJump");

	ABP_TimeSwitchSpotLight_C_catch_onTimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ToggleLight
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchSpotLight_C::ToggleLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ToggleLight");

	ABP_TimeSwitchSpotLight_C_ToggleLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::OnSetLightEnable(bool* bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightEnable");

	ABP_TimeSwitchSpotLight_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightCastShadow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewLightCastShadow            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchSpotLight_C::OnSetLightCastShadow(bool* bNewLightCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightCastShadow");

	ABP_TimeSwitchSpotLight_C_OnSetLightCastShadow_Params params;
	params.bNewLightCastShadow = bNewLightCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ExecuteUbergraph_BP_TimeSwitchSpotLight
// ()
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
