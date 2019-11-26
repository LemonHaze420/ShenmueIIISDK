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

// BlueprintGeneratedClass BP_TimedBrazier.BP_TimedBrazier_C
// 0x0071 (0x0399 - 0x0328)
class ABP_TimedBrazier_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PFX_Fire;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Brazier;                                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Sound0to1_862225F349899ECDE912DFBDF8701415;    // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_WoodBurnGlow_862225F349899ECDE912DFBDF8701415; // 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_862225F349899ECDE912DFBDF8701415;   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_Brazier;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FTimerHandle                                delayOnTimer;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundAtomCue*                               SoundCue;                                                 // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLightOnByTime;                                           // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightEvening;                                             // 0x0391(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0392(0x0002) MISSED OFFSET
	int                                                BurnMaterialIndex;                                        // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeganPlay;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimedBrazier.BP_TimedBrazier_C");
		return ptr;
	}


	void IsLightOn(bool* lightOn);
	void PlaySound();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void catch_onTimeJump(float jumpTime);
	void delayedEveningStart();
	void Manual_Start();
	void Manual_Stop();
	void Toggle();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void SetVisible(bool Visible);
	void DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType);
	void SetVisibleBasedOnTime();
	void ReceiveBeginPlay();
	void UpdateTime();
	void SetVisibleReinit(bool Visible);
	void ExecuteUbergraph_BP_TimedBrazier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
