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

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunAndMoonMovement
struct ABP_S3SkyManager_C_SetSunAndMoonMovement_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetForceGameTime
struct ABP_S3SkyManager_C_SetForceGameTime_Params
{
	float                                              NewTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.GetGameTime
struct ABP_S3SkyManager_C_GetGameTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcGradualWeather
struct ABP_S3SkyManager_C_CalcGradualWeather_Params
{
	EWeatherType                                       Next;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunCastShadow
struct ABP_S3SkyManager_C_SetSunCastShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.GetSunShadowDistance
struct ABP_S3SkyManager_C_GetSunShadowDistance_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunShadowDistance
struct ABP_S3SkyManager_C_SetSunShadowDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetMoonCastShadow
struct ABP_S3SkyManager_C_SetMoonCastShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.NotifyIgnoreChangeWeather
struct ABP_S3SkyManager_C_NotifyIgnoreChangeWeather_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ResetMoonPosition
struct ABP_S3SkyManager_C_ResetMoonPosition_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceMoonPosition
struct ABP_S3SkyManager_C_ForceMoonPosition_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Orbit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Release;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceCloudDensity
struct ABP_S3SkyManager_C_ForceCloudDensity_Params
{
	float                                              Density;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Release;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase_Impl
struct ABP_S3SkyManager_C_CalcMoonPhase_Impl_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindMaterialParam
struct ABP_S3SkyManager_C_SetWindMaterialParam_Params
{
	struct FVector                                     NewDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.CheckWeather
struct ABP_S3SkyManager_C_CheckWeather_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.IsRainy
struct ABP_S3SkyManager_C_IsRainy_Params
{
	bool                                               System;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Rainy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcRainParam
struct ABP_S3SkyManager_C_CalcRainParam_Params
{
	float                                              Blend;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Strength2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Strength3;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMultiplier;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.GetStepPreset
struct ABP_S3SkyManager_C_GetStepPreset_Params
{
	bool                                               Appoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Preset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ChooseWeather
struct ABP_S3SkyManager_C_ChooseWeather_Params
{
	bool                                               Appoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EWeatherType                                       Weather;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindSpeed
struct ABP_S3SkyManager_C_SetWindSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWind
struct ABP_S3SkyManager_C_ChangeWind_Params
{
	bool                                               Drastic;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainMaterial
struct ABP_S3SkyManager_C_UpdateRainMaterial_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.GetTransitionInterval
struct ABP_S3SkyManager_C_GetTransitionInterval_Params
{
	float                                              Interval;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.InitTransition
struct ABP_S3SkyManager_C_InitTransition_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ProgressTransition
struct ABP_S3SkyManager_C_ProgressTransition_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.KeepCurrentFogIntensityMin
struct ABP_S3SkyManager_C_KeepCurrentFogIntensityMin_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SetRainMaterial
struct ABP_S3SkyManager_C_SetRainMaterial_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateFogDensity
struct ABP_S3SkyManager_C_UpdateFogDensity_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ResetWeatherInterval
struct ABP_S3SkyManager_C_ResetWeatherInterval_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudy
struct ABP_S3SkyManager_C_ToggleCloudy_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateWeather
struct ABP_S3SkyManager_C_UpdateWeather_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWeather
struct ABP_S3SkyManager_C_ChangeWeather_Params
{
	bool                                               IsChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateGameTime
struct ABP_S3SkyManager_C_UpdateGameTime_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UserConstructionScript
struct ABP_S3SkyManager_C_UserConstructionScript_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__FinishedFunc
struct ABP_S3SkyManager_C_RainValueTimeline__FinishedFunc_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__UpdateFunc
struct ABP_S3SkyManager_C_RainValueTimeline__UpdateFunc_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__FinishedFunc
struct ABP_S3SkyManager_C_RainSplashValue__FinishedFunc_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__UpdateFunc
struct ABP_S3SkyManager_C_RainSplashValue__UpdateFunc_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.jumpTime
struct ABP_S3SkyManager_C_jumpTime_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.TimeGoesBy
struct ABP_S3SkyManager_C_TimeGoesBy_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ManualChangeWeather
struct ABP_S3SkyManager_C_ManualChangeWeather_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UnbindEvent
struct ABP_S3SkyManager_C_UnbindEvent_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangedStep
struct ABP_S3SkyManager_C_ChangedStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ReadyCloud
struct ABP_S3SkyManager_C_ReadyCloud_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.SwitchController
struct ABP_S3SkyManager_C_SwitchController_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.FinishedLevelLoad
struct ABP_S3SkyManager_C_FinishedLevelLoad_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveBeginPlay
struct ABP_S3SkyManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveTick
struct ABP_S3SkyManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetCloudDensity
struct ABP_S3SkyManager_C_DbgSetCloudDensity_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetMoonPhase
struct ABP_S3SkyManager_C_DbgSetMoonPhase_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.RainControl
struct ABP_S3SkyManager_C_RainControl_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.WaitCloudDensity
struct ABP_S3SkyManager_C_WaitCloudDensity_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceChangeWeather
struct ABP_S3SkyManager_C_ForceChangeWeather_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeDate
struct ABP_S3SkyManager_C_ChangeDate_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudShaow
struct ABP_S3SkyManager_C_ToggleCloudShaow_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveEndPlay
struct ABP_S3SkyManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainValue
struct ABP_S3SkyManager_C_UpdateRainValue_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.WaitDry
struct ABP_S3SkyManager_C_WaitDry_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.BindEvent
struct ABP_S3SkyManager_C_BindEvent_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase
struct ABP_S3SkyManager_C_CalcMoonPhase_Params
{
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.DelayChangeWeatherProperty
struct ABP_S3SkyManager_C_DelayChangeWeatherProperty_Params
{
	EWeatherType                                       NewWeather;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SkyManager.BP_S3SkyManager_C.ExecuteUbergraph_BP_S3SkyManager
struct ABP_S3SkyManager_C_ExecuteUbergraph_BP_S3SkyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
