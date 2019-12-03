
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
// (Net, Event, Static, NetMulticast, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::STATIC_UpdateEffectsAroundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateEffectsAroundPlayer");

	ABP_S3SkyManager_C_UpdateEffectsAroundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunAndMoonMovement
// (NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SetSunAndMoonMovement(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunAndMoonMovement");

	ABP_S3SkyManager_C_SetSunAndMoonMovement_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetForceGameTime
// (Net, NetReliable, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SetForceGameTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetForceGameTime");

	ABP_S3SkyManager_C_SetForceGameTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetGameTime
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// EWeatherType                   Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_CalcGradualWeather(EWeatherType* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcGradualWeather");

	ABP_S3SkyManager_C_CalcGradualWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next != nullptr)
		*Next = params.Next;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunCastShadow
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SetSunCastShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetSunCastShadow");

	ABP_S3SkyManager_C_SetSunCastShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetSunShadowDistance
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, NetServer, BlueprintEvent, BlueprintPure)
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
// (NetRequest, Event, NetResponse, NetMulticast, Public, NetServer, BlueprintEvent, BlueprintPure)
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
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SetMoonCastShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetMoonCastShadow");

	ABP_S3SkyManager_C_SetMoonCastShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.NotifyIgnoreChangeWeather
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_NotifyIgnoreChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.NotifyIgnoreChangeWeather");

	ABP_S3SkyManager_C_NotifyIgnoreChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ResetMoonPosition
// (Exec, Event, NetResponse, Static, NetMulticast, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_S3SkyManager_C::STATIC_ResetMoonPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ResetMoonPosition");

	ABP_S3SkyManager_C_ResetMoonPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceMoonPosition
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::CalcMoonPhase_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase_Impl");

	ABP_S3SkyManager_C_CalcMoonPhase_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindMaterialParam
// (Native, NetResponse, Static, Public, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 NewDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SetWindMaterialParam(const struct FVector& NewDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindMaterialParam");

	ABP_S3SkyManager_C_SetWindMaterialParam_Params params;
	params.NewDirection = NewDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CheckWeather
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::STATIC_CheckWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CheckWeather");

	ABP_S3SkyManager_C_CheckWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.IsRainy
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           System                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rainy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_IsRainy(bool System, bool* Rainy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.IsRainy");

	ABP_S3SkyManager_C_IsRainy_Params params;
	params.System = System;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rainy != nullptr)
		*Rainy = params.Rainy;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcRainParam
// (Exec, Native, NetMulticast, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

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
// (Net, NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Appoint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Preset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::GetStepPreset(bool* Appoint, struct FName* Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.GetStepPreset");

	ABP_S3SkyManager_C_GetStepPreset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Appoint != nullptr)
		*Appoint = params.Appoint;
	if (Preset != nullptr)
		*Preset = params.Preset;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChooseWeather
// (Net, NetReliable, NetRequest, Native, Event, Static, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Appoint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EWeatherType                   Weather                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ChooseWeather(bool* Appoint, EWeatherType* Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChooseWeather");

	ABP_S3SkyManager_C_ChooseWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Appoint != nullptr)
		*Appoint = params.Appoint;
	if (Weather != nullptr)
		*Weather = params.Weather;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindSpeed
// (Net, NetRequest, Exec, Native, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SetWindSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetWindSpeed");

	ABP_S3SkyManager_C_SetWindSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWind
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_UpdateRainMaterial(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainMaterial");

	ABP_S3SkyManager_C_UpdateRainMaterial_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.GetTransitionInterval
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Interval                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::GetTransitionInterval(float* Interval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.GetTransitionInterval");

	ABP_S3SkyManager_C_GetTransitionInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interval != nullptr)
		*Interval = params.Interval;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.InitTransition
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::InitTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.InitTransition");

	ABP_S3SkyManager_C_InitTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ProgressTransition
// (Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ProgressTransition(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ProgressTransition");

	ABP_S3SkyManager_C_ProgressTransition_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.KeepCurrentFogIntensityMin
// (Net, Event, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::KeepCurrentFogIntensityMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.KeepCurrentFogIntensityMin");

	ABP_S3SkyManager_C_KeepCurrentFogIntensityMin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SetRainMaterial
// (Net, Static, MulticastDelegate, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_SetRainMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SetRainMaterial");

	ABP_S3SkyManager_C_SetRainMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateFogDensity
// (Exec, NetResponse, Static, Public, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_UpdateFogDensity(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateFogDensity");

	ABP_S3SkyManager_C_UpdateFogDensity_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ResetWeatherInterval
// (Net, NetReliable, NetRequest, Exec, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Private, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ToggleCloudy(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudy");

	ABP_S3SkyManager_C_ToggleCloudy_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateWeather
// (NetReliable, Native, Event, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateWeather");

	ABP_S3SkyManager_C_UpdateWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeWeather
// (NetReliable, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_UpdateGameTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateGameTime");

	ABP_S3SkyManager_C_UpdateGameTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UserConstructionScript
// (NetResponse, Static, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3SkyManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UserConstructionScript");

	ABP_S3SkyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__FinishedFunc
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_RainValueTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__FinishedFunc");

	ABP_S3SkyManager_C_RainValueTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__UpdateFunc
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_RainValueTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainValueTimeline__UpdateFunc");

	ABP_S3SkyManager_C_RainValueTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__FinishedFunc
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_RainSplashValue__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__FinishedFunc");

	ABP_S3SkyManager_C_RainSplashValue__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__UpdateFunc
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_RainSplashValue__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainSplashValue__UpdateFunc");

	ABP_S3SkyManager_C_RainSplashValue__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.jumpTime
// (Net, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_jumpTime(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.jumpTime");

	ABP_S3SkyManager_C_jumpTime_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.TimeGoesBy
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_TimeGoesBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.TimeGoesBy");

	ABP_S3SkyManager_C_TimeGoesBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ManualChangeWeather
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_ManualChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ManualChangeWeather");

	ABP_S3SkyManager_C_ManualChangeWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UnbindEvent
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_UnbindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UnbindEvent");

	ABP_S3SkyManager_C_UnbindEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangedStep
// (Net, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ChangedStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChangedStep");

	ABP_S3SkyManager_C_ChangedStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReadyCloud
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_ReadyCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReadyCloud");

	ABP_S3SkyManager_C_ReadyCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.SwitchController
// (Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_SwitchController(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.SwitchController");

	ABP_S3SkyManager_C_SwitchController_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.FinishedLevelLoad
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_FinishedLevelLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.FinishedLevelLoad");

	ABP_S3SkyManager_C_FinishedLevelLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveBeginPlay
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveBeginPlay");

	ABP_S3SkyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveTick
// (NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveTick");

	ABP_S3SkyManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetCloudDensity
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_DbgSetCloudDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetCloudDensity");

	ABP_S3SkyManager_C_DbgSetCloudDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetMoonPhase
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_DbgSetMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.DbgSetMoonPhase");

	ABP_S3SkyManager_C_DbgSetMoonPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.RainControl
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_RainControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.RainControl");

	ABP_S3SkyManager_C_RainControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.WaitCloudDensity
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_WaitCloudDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.WaitCloudDensity");

	ABP_S3SkyManager_C_WaitCloudDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ForceChangeWeather
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_ForceChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ForceChangeWeather");

	ABP_S3SkyManager_C_ForceChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeDate
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_ChangeDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ChangeDate");

	ABP_S3SkyManager_C_ChangeDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudShaow
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_ToggleCloudShaow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ToggleCloudShaow");

	ABP_S3SkyManager_C_ToggleCloudShaow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveEndPlay
// (NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.ReceiveEndPlay");

	ABP_S3SkyManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainValue
// (Net, NetReliable, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_UpdateRainValue(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.UpdateRainValue");

	ABP_S3SkyManager_C_UpdateRainValue_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.WaitDry
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_WaitDry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.WaitDry");

	ABP_S3SkyManager_C_WaitDry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.BindEvent
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.BindEvent");

	ABP_S3SkyManager_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3SkyManager_C::STATIC_CalcMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.CalcMoonPhase");

	ABP_S3SkyManager_C_CalcMoonPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.DelayChangeWeatherProperty
// (NetReliable, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWeatherType                   NewWeather                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_DelayChangeWeatherProperty(EWeatherType NewWeather)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SkyManager.BP_S3SkyManager_C.DelayChangeWeatherProperty");

	ABP_S3SkyManager_C_DelayChangeWeatherProperty_Params params;
	params.NewWeather = NewWeather;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SkyManager.BP_S3SkyManager_C.ExecuteUbergraph_BP_S3SkyManager
// (NetReliable, Exec, Static, NetMulticast, Public, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SkyManager_C::STATIC_ExecuteUbergraph_BP_S3SkyManager(int EntryPoint)
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
