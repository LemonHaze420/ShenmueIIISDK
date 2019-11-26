
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

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.GetMainLightIntensity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::GetMainLightIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.GetMainLightIntensity");

	ABP_TimeSwitchPointLight_C_GetMainLightIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.isLightOnTimezone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Light                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::isLightOnTimezone(bool* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.isLightOnTimezone");

	ABP_TimeSwitchPointLight_C_isLightOnTimezone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchPointLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.UserConstructionScript");

	ABP_TimeSwitchPointLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Flashing__FinishedFunc
// (BlueprintEvent)

void ABP_TimeSwitchPointLight_C::Flashing__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Flashing__FinishedFunc");

	ABP_TimeSwitchPointLight_C_Flashing__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Flashing__UpdateFunc
// (BlueprintEvent)

void ABP_TimeSwitchPointLight_C::Flashing__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Flashing__UpdateFunc");

	ABP_TimeSwitchPointLight_C_Flashing__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_TimeSwitchPointLight_C::Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Timeline__FinishedFunc");

	ABP_TimeSwitchPointLight_C_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_TimeSwitchPointLight_C::Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Timeline__UpdateFunc");

	ABP_TimeSwitchPointLight_C_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimeSwitchPointLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ReceiveBeginPlay");

	ABP_TimeSwitchPointLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.DayTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::DayTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.DayTimeEvent");

	ABP_TimeSwitchPointLight_C_DayTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ShopTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ShopTimeEvent               EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::ShopTimeEvent(ES3ShopTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ShopTimeEvent");

	ABP_TimeSwitchPointLight_C_ShopTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.catch_onTimeJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::catch_onTimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.catch_onTimeJump");

	ABP_TimeSwitchPointLight_C_catch_onTimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.OnSetLightEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewLightEnable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::OnSetLightEnable(bool bNewLightEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.OnSetLightEnable");

	ABP_TimeSwitchPointLight_C_OnSetLightEnable_Params params;
	params.bNewLightEnable = bNewLightEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.OnSetLightCastShadow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewLightCastShadow            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::OnSetLightCastShadow(bool bNewLightCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.OnSetLightCastShadow");

	ABP_TimeSwitchPointLight_C_OnSetLightCastShadow_Params params;
	params.bNewLightCastShadow = bNewLightCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.UpdateIntensityRate
// (BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchPointLight_C::UpdateIntensityRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.UpdateIntensityRate");

	ABP_TimeSwitchPointLight_C_UpdateIntensityRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ExecuteUbergraph_BP_TimeSwitchPointLight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeSwitchPointLight_C::ExecuteUbergraph_BP_TimeSwitchPointLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ExecuteUbergraph_BP_TimeSwitchPointLight");

	ABP_TimeSwitchPointLight_C_ExecuteUbergraph_BP_TimeSwitchPointLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.LightDeactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchPointLight_C::LightDeactivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.LightDeactivated__DelegateSignature");

	ABP_TimeSwitchPointLight_C_LightDeactivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.LightActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TimeSwitchPointLight_C::LightActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.LightActivated__DelegateSignature");

	ABP_TimeSwitchPointLight_C_LightActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
