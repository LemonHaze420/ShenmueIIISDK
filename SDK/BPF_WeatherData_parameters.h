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

// Function BPF_WeatherData.BPF_WeatherData_C.GetRainNavData
struct UBPF_WeatherData_C_GetRainNavData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3RainNavData*                              NavData;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_WeatherData.BPF_WeatherData_C.GetWeatherData
struct UBPF_WeatherData_C_GetWeatherData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3WeatherDataAsset*                         WeatherData;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
