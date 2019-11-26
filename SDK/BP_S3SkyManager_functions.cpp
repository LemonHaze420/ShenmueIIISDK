
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

// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateEffectsAroundPlayer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::UpdateEffectsAroundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateEffectsAroundPlayer");

	ABP_S3SkyManager_C_UpdateEffectsAroundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunAndMoonMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SetSunAndMoonMovement(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunAndMoonMovement");

	ABP_S3SkyManager_C_SetSunAndMoonMovement_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetForceGameTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SetForceGameTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetForceGameTime");

	ABP_S3SkyManager_C_SetForceGameTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetGameTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::GetGameTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.GetGameTime");

	ABP_S3SkyManager_C_GetGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcGradualWeather
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeatherType                   Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::CalcGradualWeather(EWeatherType* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcGradualWeather");

	ABP_S3SkyManager_C_CalcGradualWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next != nullptr)
		*Next = params.Next;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunCastShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SetSunCastShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunCastShadow");

	ABP_S3SkyManager_C_SetSunCastShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetSunShadowDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::GetSunShadowDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.GetSunShadowDistance");

	ABP_S3SkyManager_C_GetSunShadowDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunShadowDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SetSunShadowDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunShadowDistance");

	ABP_S3SkyManager_C_SetSunShadowDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetMoonCastShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SetMoonCastShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetMoonCastShadow");

	ABP_S3SkyManager_C_SetMoonCastShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.NotifyIgnoreChangeWeather
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::NotifyIgnoreChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.NotifyIgnoreChangeWeather");

	ABP_S3SkyManager_C_NotifyIgnoreChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ResetMoonPosition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::ResetMoonPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ResetMoonPosition");

	ABP_S3SkyManager_C_ResetMoonPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceMoonPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Orbit                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Release                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ForceMoonPosition(float Yaw, float Orbit, float Height, bool Release)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ForceMoonPosition");

	ABP_S3SkyManager_C_ForceMoonPosition_Params params;
	params.Yaw = Yaw;
	params.Orbit = Orbit;
	params.Height = Height;
	params.Release = Release;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceCloudDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Density                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Release                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ForceCloudDensity(float Density, bool Release)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ForceCloudDensity");

	ABP_S3SkyManager_C_ForceCloudDensity_Params params;
	params.Density = Density;
	params.Release = Release;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::CalcMoonPhase_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase_Impl");

	ABP_S3SkyManager_C_CalcMoonPhase_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindMaterialParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3SkyManager_C::SetWindMaterialParam(const struct FVector& NewDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindMaterialParam");

	ABP_S3SkyManager_C_SetWindMaterialParam_Params params;
	params.NewDirection = NewDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CheckWeather
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::CheckWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CheckWeather");

	ABP_S3SkyManager_C_CheckWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.IsRainy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           System                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rainy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::IsRainy(bool System, bool* Rainy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.IsRainy");

	ABP_S3SkyManager_C_IsRainy_Params params;
	params.System = System;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rainy != nullptr)
		*Rainy = params.Rainy;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcRainParam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Blend                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Strength2                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Strength3                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OpacityMultiplier              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::CalcRainParam(float Blend, float* Strength1, float* Strength2, float* Strength3, float* Speed, float* OpacityMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcRainParam");

	ABP_S3SkyManager_C_CalcRainParam_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strength1 != nullptr)
		*Strength1 = params.Strength1;
	if (Strength2 != nullptr)
		*Strength2 = params.Strength2;
	if (Strength3 != nullptr)
		*Strength3 = params.Strength3;
	if (Speed != nullptr)
		*Speed = params.Speed;
	if (OpacityMultiplier != nullptr)
		*OpacityMultiplier = params.OpacityMultiplier;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetStepPreset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Appoint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Preset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::GetStepPreset(bool* Appoint, struct FName* Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.GetStepPreset");

	ABP_S3SkyManager_C_GetStepPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Appoint != nullptr)
		*Appoint = params.Appoint;
	if (Preset != nullptr)
		*Preset = params.Preset;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChooseWeather
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Appoint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EWeatherType                   Weather                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ChooseWeather(bool* Appoint, EWeatherType* Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChooseWeather");

	ABP_S3SkyManager_C_ChooseWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Appoint != nullptr)
		*Appoint = params.Appoint;
	if (Weather != nullptr)
		*Weather = params.Weather;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SetWindSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindSpeed");

	ABP_S3SkyManager_C_SetWindSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Drastic                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ForceAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ChangeWind(bool Drastic, float ForceAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWind");

	ABP_S3SkyManager_C_ChangeWind_Params params;
	params.Drastic = Drastic;
	params.ForceAngle = ForceAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::UpdateRainMaterial(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainMaterial");

	ABP_S3SkyManager_C_UpdateRainMaterial_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetTransitionInterval
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Interval                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::GetTransitionInterval(float* Interval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.GetTransitionInterval");

	ABP_S3SkyManager_C_GetTransitionInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interval != nullptr)
		*Interval = params.Interval;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.InitTransition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::InitTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.InitTransition");

	ABP_S3SkyManager_C_InitTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ProgressTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ProgressTransition(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ProgressTransition");

	ABP_S3SkyManager_C_ProgressTransition_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.KeepCurrentFogIntensityMin
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::KeepCurrentFogIntensityMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.KeepCurrentFogIntensityMin");

	ABP_S3SkyManager_C_KeepCurrentFogIntensityMin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetRainMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::SetRainMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetRainMaterial");

	ABP_S3SkyManager_C_SetRainMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateFogDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::UpdateFogDensity(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateFogDensity");

	ABP_S3SkyManager_C_UpdateFogDensity_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ResetWeatherInterval
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ResetWeatherInterval(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ResetWeatherInterval");

	ABP_S3SkyManager_C_ResetWeatherInterval_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ToggleCloudy(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudy");

	ABP_S3SkyManager_C_ToggleCloudy_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateWeather
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateWeather");

	ABP_S3SkyManager_C_UpdateWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWeather
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ChangeWeather(bool* IsChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWeather");

	ABP_S3SkyManager_C_ChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChange != nullptr)
		*IsChange = params.IsChange;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateGameTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::UpdateGameTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateGameTime");

	ABP_S3SkyManager_C_UpdateGameTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UserConstructionScript");

	ABP_S3SkyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_S3SkyManager_C::RainValueTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__FinishedFunc");

	ABP_S3SkyManager_C_RainValueTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_S3SkyManager_C::RainValueTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__UpdateFunc");

	ABP_S3SkyManager_C_RainValueTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__FinishedFunc
// (BlueprintEvent)

void ABP_S3SkyManager_C::RainSplashValue__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__FinishedFunc");

	ABP_S3SkyManager_C_RainSplashValue__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__UpdateFunc
// (BlueprintEvent)

void ABP_S3SkyManager_C::RainSplashValue__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__UpdateFunc");

	ABP_S3SkyManager_C_RainSplashValue__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.jumpTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::jumpTime(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.jumpTime");

	ABP_S3SkyManager_C_jumpTime_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.TimeGoesBy
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::TimeGoesBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.TimeGoesBy");

	ABP_S3SkyManager_C_TimeGoesBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ManualChangeWeather
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::ManualChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ManualChangeWeather");

	ABP_S3SkyManager_C_ManualChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UnbindEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::UnbindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UnbindEvent");

	ABP_S3SkyManager_C_UnbindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangedStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ChangedStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChangedStep");

	ABP_S3SkyManager_C_ChangedStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReadyCloud
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::ReadyCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReadyCloud");

	ABP_S3SkyManager_C_ReadyCloud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SwitchController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::SwitchController(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SwitchController");

	ABP_S3SkyManager_C_SwitchController_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.FinishedLevelLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::FinishedLevelLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.FinishedLevelLoad");

	ABP_S3SkyManager_C_FinishedLevelLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3SkyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveBeginPlay");

	ABP_S3SkyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveTick");

	ABP_S3SkyManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetCloudDensity
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::DbgSetCloudDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetCloudDensity");

	ABP_S3SkyManager_C_DbgSetCloudDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetMoonPhase
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::DbgSetMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetMoonPhase");

	ABP_S3SkyManager_C_DbgSetMoonPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainControl
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::RainControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainControl");

	ABP_S3SkyManager_C_RainControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.WaitCloudDensity
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::WaitCloudDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.WaitCloudDensity");

	ABP_S3SkyManager_C_WaitCloudDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceChangeWeather
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::ForceChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ForceChangeWeather");

	ABP_S3SkyManager_C_ForceChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeDate
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::ChangeDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeDate");

	ABP_S3SkyManager_C_ChangeDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudShaow
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::ToggleCloudShaow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudShaow");

	ABP_S3SkyManager_C_ToggleCloudShaow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveEndPlay");

	ABP_S3SkyManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::UpdateRainValue(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainValue");

	ABP_S3SkyManager_C_UpdateRainValue_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.WaitDry
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::WaitDry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.WaitDry");

	ABP_S3SkyManager_C_WaitDry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.BindEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.BindEvent");

	ABP_S3SkyManager_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3SkyManager_C::CalcMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase");

	ABP_S3SkyManager_C_CalcMoonPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.DelayChangeWeatherProperty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeatherType                   NewWeather                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::DelayChangeWeatherProperty(EWeatherType NewWeather)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.DelayChangeWeatherProperty");

	ABP_S3SkyManager_C_DelayChangeWeatherProperty_Params params;
	params.NewWeather = NewWeather;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ExecuteUbergraph_BP_S3SkyManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::ExecuteUbergraph_BP_S3SkyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ExecuteUbergraph_BP_S3SkyManager");

	ABP_S3SkyManager_C_ExecuteUbergraph_BP_S3SkyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
