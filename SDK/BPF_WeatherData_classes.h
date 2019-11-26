#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_WeatherData.BPF_WeatherData_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_WeatherData_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_WeatherData.BPF_WeatherData_C");
		return ptr;
	}


	void STATIC_GetRainNavData(class UObject* __WorldContext, class AS3RainNavData** NavData);
	void STATIC_GetWeatherData(class UObject* __WorldContext, class US3WeatherDataAsset** WeatherData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
