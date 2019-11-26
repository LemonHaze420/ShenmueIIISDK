#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.GetMainLightIntensity
struct ABP_TimeSwitchPointLight_C_GetMainLightIntensity_Params
{
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.isLightOnTimezone
struct ABP_TimeSwitchPointLight_C_isLightOnTimezone_Params
{
	bool                                               Light;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.UserConstructionScript
struct ABP_TimeSwitchPointLight_C_UserConstructionScript_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Flashing__FinishedFunc
struct ABP_TimeSwitchPointLight_C_Flashing__FinishedFunc_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Flashing__UpdateFunc
struct ABP_TimeSwitchPointLight_C_Flashing__UpdateFunc_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Timeline__FinishedFunc
struct ABP_TimeSwitchPointLight_C_Timeline__FinishedFunc_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.Timeline__UpdateFunc
struct ABP_TimeSwitchPointLight_C_Timeline__UpdateFunc_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ReceiveBeginPlay
struct ABP_TimeSwitchPointLight_C_ReceiveBeginPlay_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.DayTimeEvent
struct ABP_TimeSwitchPointLight_C_DayTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ShopTimeEvent
struct ABP_TimeSwitchPointLight_C_ShopTimeEvent_Params
{
	ES3ShopTimeEvent                                   EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.catch_onTimeJump
struct ABP_TimeSwitchPointLight_C_catch_onTimeJump_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.OnSetLightEnable
struct ABP_TimeSwitchPointLight_C_OnSetLightEnable_Params
{
	bool                                               bNewLightEnable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.OnSetLightCastShadow
struct ABP_TimeSwitchPointLight_C_OnSetLightCastShadow_Params
{
	bool                                               bNewLightCastShadow;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.UpdateIntensityRate
struct ABP_TimeSwitchPointLight_C_UpdateIntensityRate_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.ExecuteUbergraph_BP_TimeSwitchPointLight
struct ABP_TimeSwitchPointLight_C_ExecuteUbergraph_BP_TimeSwitchPointLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.LightDeactivated__DelegateSignature
struct ABP_TimeSwitchPointLight_C_LightDeactivated__DelegateSignature_Params
{
};

// Function BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C.LightActivated__DelegateSignature
struct ABP_TimeSwitchPointLight_C_LightActivated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
