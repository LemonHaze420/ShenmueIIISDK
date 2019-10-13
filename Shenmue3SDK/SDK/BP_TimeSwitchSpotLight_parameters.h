#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.isLightOnTimezone
struct ABP_TimeSwitchSpotLight_C_isLightOnTimezone_Params
{
	bool                                               Light;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.UserConstructionScript
struct ABP_TimeSwitchSpotLight_C_UserConstructionScript_Params
{
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__FinishedFunc
struct ABP_TimeSwitchSpotLight_C_Timeline__FinishedFunc_Params
{
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.Timeline__UpdateFunc
struct ABP_TimeSwitchSpotLight_C_Timeline__UpdateFunc_Params
{
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ReceiveBeginPlay
struct ABP_TimeSwitchSpotLight_C_ReceiveBeginPlay_Params
{
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.DayTimeEvent
struct ABP_TimeSwitchSpotLight_C_DayTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ShopTimeEvent
struct ABP_TimeSwitchSpotLight_C_ShopTimeEvent_Params
{
	ES3ShopTimeEvent                                   EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.catch_onTimeJump
struct ABP_TimeSwitchSpotLight_C_catch_onTimeJump_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ToggleLight
struct ABP_TimeSwitchSpotLight_C_ToggleLight_Params
{
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightEnable
struct ABP_TimeSwitchSpotLight_C_OnSetLightEnable_Params
{
	bool*                                              bNewLightEnable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.OnSetLightCastShadow
struct ABP_TimeSwitchSpotLight_C_OnSetLightCastShadow_Params
{
	bool*                                              bNewLightCastShadow;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C.ExecuteUbergraph_BP_TimeSwitchSpotLight
struct ABP_TimeSwitchSpotLight_C_ExecuteUbergraph_BP_TimeSwitchSpotLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
