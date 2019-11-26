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

// BlueprintGeneratedClass BP_PoleWithCable.BP_PoleWithCable_C
// 0x0102 (0x042A - 0x0328)
class ABP_PoleWithCable_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_LightFlare;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Area_01;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Area_00;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightGlobe;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightCone;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CableAnchor;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UtilityPole;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableComponent*                             Cable;                                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_IntensityRate_93E3165A430B06A8678BEA81D6BAAE30;  // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline__Direction_93E3165A430B06A8678BEA81D6BAAE30;     // 0x038C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Flicker_NewTrack_0_7F8EE0344F559A0B1C1AE5AAE330BF92;      // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Flicker__Direction_7F8EE0344F559A0B1C1AE5AAE330BF92;      // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Flicker;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ActorToAttachTo;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              SlacknessMultiplier;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bManual;                                                  // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasLight;                                                 // 0x03B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFlare;                                                // 0x03B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03B7(0x0001) MISSED OFFSET
	float                                              AttenuationRadius;                                        // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseIntensity_spot_;                                      // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_Cone;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEnable;                                                // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               editorVisible;                                            // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x03CB(0x0001) MISSED OFFSET
	float                                              areaRadius_castShadow_;                                   // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              areaRadius_lightView_;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FName                                       nameParamIntensity;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseIntensity_point_;                                     // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Colour;                                                   // 0x03E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Intensity;                                                // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaterialTiling;                                           // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_Flare;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Flare_Power;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugInfo;                                               // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExtraWide;                                               // 0x0415(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0416(0x0002) MISSED OFFSET
	float                                              MAX_AREA_RADIUS;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DISABLE_FADE;                                             // 0x041C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DMI_Globe;                                                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableCollision;                                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlickerOn;                                               // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PoleWithCable.BP_PoleWithCable_C");
		return ptr;
	}


	void UpdateTimezone();
	void TurnOnPower(bool bTurnOn);
	void ConditionalInitialize();
	void setBaseIntensities(class ULightComponentBase* SpotLight, class ULightComponentBase* PointLight);
	void setShow(bool Instant);
	void UserConstructionScript();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Flicker__FinishedFunc();
	void Flicker__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void SlowlyLight(bool On);
	void toggle();
	void StartFlicker();
	void StopFlicker();
	void Manual_Stop();
	void Manual_Start();
	void catch_onTimeJump(float jumpTime);
	void BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType);
	void BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void firstBeginArea01();
	void firstBeginArea00();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PoleWithCable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
