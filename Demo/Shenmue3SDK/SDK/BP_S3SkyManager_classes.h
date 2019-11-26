#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3SkyManager.BP_S3SkyManager_C
// 0x012A (0x045A - 0x0330)
class ABP_S3SkyManager_C : public AS3SkyManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RainSplashValue_SplashValue_1E381755432D3ECFA950449C344E0611;// 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RainSplashValue__Direction_1E381755432D3ECFA950449C344E0611;// 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RainSplashValue;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RainValueTimeline_RainValue_3DF68EC54F752A8722AF28A1D9459923;// 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RainValueTimeline__Direction_3DF68EC54F752A8722AF28A1D9459923;// 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RainValueTimeline;                                        // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AS3GameTimeManager*                          TimeManager;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AUltra_Dynamic_Sky_BP_C*                     UltraDynamicSky;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveFloat*                                 Global_Time_Curve;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ACharacter*                                  PlayerCharacter;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastWeatherGameTime;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeatherType                                       GradualWeather;                                           // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChangeDate;                                             // 0x0395(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0396(0x0002) MISSED OFFSET
	float                                              ChangeWeatherInterval;                                    // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugChangeWeather;                                       // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrintLog;                                                 // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	class ABP_RainController_C*                        RainController;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              FogMin;                                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionTest;                                           // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	int                                                TRANSITION_WEATHER_MAX;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdateRain;                                               // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              RainBlendAlpha;                                           // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UParticleSystem*                             SnowEffect;                                               // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SnowEffectComponent;                                      // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_S3CharacterBase_C*                       AdventureCharacter;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AS3CutsceneManager*                          CutsceneManager;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceGameTime;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpGameTime;                                             // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCutsceceTime;                                         // 0x03ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x03EE(0x0002) MISSED OFFSET
	float                                              RainPower;                                                // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FTimerHandle                                RainWaitHandle;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                                 RainAlphaCurve;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FS3RainParam                                PrevRainParam;                                            // 0x0408(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS3RainParam                                TargetRainParam;                                          // 0x041C(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RainUpdateTime;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WindVelocityCurve;                                        // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 WindStrengthCurve;                                        // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugInterval;                                            // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstTime;                                                // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	float                                              CloudDensityValue;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StockMoonOrbitOffset;                                     // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StockMoonInclination;                                     // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceMoonPosition;                                       // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreChangeWeather;                                      // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3SkyManager.BP_S3SkyManager_C");
		return ptr;
	}


	void SetSunAndMoonMovement(bool Enable);
	void SetForceGameTime(float NewTime);
	void GetGameTime(float* Time);
	void CalcGradualWeather(EWeatherType* Next);
	void SetSunCastShadow(bool Enable);
	void GetSunShadowDistance(float* Distance);
	void SetSunShadowDistance(float Distance);
	void SetMoonCastShadow(bool Enable);
	void NotifyIgnoreChangeWeather();
	void ResetMoonPosition();
	void ForceMoonPosition(float Yaw, float Orbit, float Height, bool Release);
	void ForceCloudDensity(float Density, bool Release);
	void CalcMoonPhase_Impl();
	void SetWindMaterialParam(const struct FVector& NewDirection);
	void CheckWeather();
	void IsRainy(bool System, bool* Rainy);
	void CalcRainParam(float Blend, float* Strength1, float* Strength2, float* Strength3, float* Speed, float* OpacityMultiplier);
	void GetStepPreset(bool* Appoint, struct FName* Preset);
	void ChooseWeather(bool* Appoint, EWeatherType* Weather);
	void SetWindSpeed(float Speed);
	void ChangeWind(bool Drastic, float ForceAngle);
	void UpdateRainMaterial(float DeltaSeconds);
	void GetTransitionInterval(float* Interval);
	void InitTransition();
	void ProgressTransition(float DeltaSeconds);
	void KeepCurrentFogIntensityMin();
	void SetRainMaterial();
	void UpdateFogDensity(bool Force);
	void ResetWeatherInterval(float jumpTime);
	void ToggleCloudy(bool Force);
	void UpdateWeather();
	void ChangeWeather(bool* IsChange);
	void UpdateGameTime(float DeltaSeconds);
	void UserConstructionScript();
	void RainValueTimeline__FinishedFunc();
	void RainValueTimeline__UpdateFunc();
	void RainSplashValue__FinishedFunc();
	void RainSplashValue__UpdateFunc();
	void jumpTime(float jumpTime);
	void TimeGoesBy();
	void ManualChangeWeather();
	void UnbindEvent();
	void ChangedStep(int SetSteps);
	void ReadyCloud();
	void SwitchController(class APlayerController* PlayerController);
	void FinishedLevelLoad();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void DbgSetCloudDensity();
	void DbgSetMoonPhase();
	void RainControl();
	void WaitCloudDensity();
	void ForceChangeWeather();
	void ChangeDate();
	void ToggleCloudShaow();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UpdateRainValue(bool Reverse);
	void WaitDry();
	void BindEvent();
	void CalcMoonPhase();
	void DelayChangeWeatherProperty(EWeatherType NewWeather);
	void ExecuteUbergraph_BP_S3SkyManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
