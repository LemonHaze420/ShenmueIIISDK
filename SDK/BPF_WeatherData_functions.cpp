
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

// Function BPF_WeatherData.BPF_WeatherData_C.GetRainNavData
// (Net, NetRequest, Exec, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3RainNavData*          NavData                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_WeatherData_C::GetRainNavData(class UObject* __WorldContext, class AS3RainNavData** NavData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_WeatherData.BPF_WeatherData_C.GetRainNavData");

	UBPF_WeatherData_C_GetRainNavData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavData != nullptr)
		*NavData = params.NavData;
}


// Function BPF_WeatherData.BPF_WeatherData_C.GetWeatherData
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Private, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3WeatherDataAsset*     WeatherData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_WeatherData_C::GetWeatherData(class UObject* __WorldContext, class US3WeatherDataAsset** WeatherData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_WeatherData.BPF_WeatherData_C.GetWeatherData");

	UBPF_WeatherData_C_GetWeatherData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherData != nullptr)
		*WeatherData = params.WeatherData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
