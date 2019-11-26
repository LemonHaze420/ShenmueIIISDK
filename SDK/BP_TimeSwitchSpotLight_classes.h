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

// BlueprintGeneratedClass BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C
// 0x0038 (0x03E8 - 0x03B0)
class ABP_TimeSwitchSpotLight_C : public AS3TimeSwitchSpotLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_IntensityRate_1006D6D949D01485F20D758905AF9BF5;  // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline__Direction_1006D6D949D01485F20D758905AF9BF5;     // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	ES3GameTimeMode                                    timeMode;                                                 // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class ABP_AnisotropicFlare_C*                      Flare;                                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               LightEvening;                                             // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DISABLE_FADE;                                             // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET
	class AS3GameTimeManager*                          GameTimeManager;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeSwitchSpotLight.BP_TimeSwitchSpotLight_C");
		return ptr;
	}


	void isLightOnTimezone(bool* Light);
	void UserConstructionScript();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void DayTimeEvent(ES3DayTimeEvent EventType);
	void ShopTimeEvent(ES3ShopTimeEvent EventType);
	void catch_onTimeJump(float jumpTime);
	void ToggleLight();
	void OnSetLightEnable(bool bNewLightEnable);
	void OnSetLightCastShadow(bool bNewLightCastShadow);
	void ExecuteUbergraph_BP_TimeSwitchSpotLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
