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

// BlueprintGeneratedClass BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C
// 0x0070 (0x0420 - 0x03B0)
class ABP_TimeSwitchPointLight_C : public AS3TimeSwitchPointLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_IntensityRate_98519EA44743FE0D9C0F658F92E106E4;  // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline__Direction_98519EA44743FE0D9C0F658F92E106E4;     // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Flashing_Flashing_7B2093B14A30C55BD7950694B2EF583D;       // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Flashing_IntensityRate_7B2093B14A30C55BD7950694B2EF583D;  // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Flashing__Direction_7B2093B14A30C55BD7950694B2EF583D;     // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Flashing;                                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsFluorescentLamp;                                        // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3GameTimeMode                                    timeMode;                                                 // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	class ABP_AnisotropicFlare_C*                      Flare;                                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    LightActivated;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LightDeactivated;                                         // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               LightEvening;                                             // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DISABLE_FADE;                                             // 0x0411(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	float                                              IntensityRate;                                            // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AS3GameTimeManager*                          GameTimeManager;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeSwitchPointLight.BP_TimeSwitchPointLight_C");
		return ptr;
	}


	void GetMainLightIntensity(float* Intensity);
	void isLightOnTimezone(bool* Light);
	void UserConstructionScript();
	void STATIC_Flashing__FinishedFunc();
	void STATIC_Flashing__UpdateFunc();
	void STATIC_Timeline__FinishedFunc();
	void STATIC_Timeline__UpdateFunc();
	void STATIC_ReceiveBeginPlay();
	void DayTimeEvent(ES3DayTimeEvent EventType);
	void ShopTimeEvent(ES3ShopTimeEvent EventType);
	void catch_onTimeJump(float jumpTime);
	void OnSetLightEnable(bool bNewLightEnable);
	void OnSetLightCastShadow(bool bNewLightCastShadow);
	void STATIC_UpdateIntensityRate();
	void ExecuteUbergraph_BP_TimeSwitchPointLight(int EntryPoint);
	void LightDeactivated__DelegateSignature();
	void LightActivated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
