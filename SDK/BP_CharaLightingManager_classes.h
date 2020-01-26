#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharaLightingManager.BP_CharaLightingManager_C
// 0x0218 (0x0808 - 0x05F0)
class ABP_CharaLightingManager_C : public AS3CharaLightingManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)
	class UFuzzySystemComponent*                       FuzzySystem_OutdoorPointLight;                            // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFuzzySystemComponent*                       FuzzySystem_OutdoorSpotLight;                             // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFuzzySystemComponent*                       FuzzySystem_RoomPointLight;                               // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFuzzySystemComponent*                       FuzzySystem_RoomSpotLight;                                // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DummyLightCollision;                                      // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_TalkEventManager_C*                      TalkEventManager;                                         // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FS3CharaLightingContainer                   ErrorLightingContainer;                                   // 0x0630(0x0118) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AUltra_Dynamic_Sky_BP_C*                     UDSky;                                                    // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_CutsceneManager_C*                       CutsceneManager;                                          // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AS3CharaLightingSequencerActor*>      CutsceneLightingActors;                                   // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              BackLightingDecisionAngle;                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugLog;                                                // 0x076C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x076D(0x0003) MISSED OFFSET
	TMap<ES3Where, struct FS3CharaLightingCurveColorParamater> LightingColorCurveTable;                                  // 0x0770(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AreaLightCheckRadius;                                     // 0x07C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CacheCollisionType;                                       // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              CheckLightHitObjectType;                                  // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              IgnoreCollisionActor;                                     // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              OutdoorLightRequiredScore;                                // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class US3AreaLightManagerComponent*                AreaLightManager;                                         // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_CutscenePlayer_C*                        CurrentCutscenePlayer;                                    // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequencePlayer*                        CachedAcCameraSequence;                                   // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharaLightingManager.BP_CharaLightingManager_C");
		return ptr;
	}


	void SetEnableLightCollision(bool Enable);
	void GetLightingColorParameter(struct FS3CharaLightingCurveColorParamater* Paramater);
	bool UpdateAllLightupActors();
	bool SetupCalculationMeshAndCameraVariable(class AActor* Actor);
	class USkeletalMeshComponent* GetTalkTargetActorMesh(class AActor* Actor);
	bool IsConditionsCheck(class AActor* Actor, class US3TagCharaComponent* TagCharaComponent, struct FS3CharaLightingContainer* Container);
	struct FS3CharaLightingContainer Evaluation(class AActor* TargetLightupActor, const struct FName& LightGroupId);
	struct FVector GetLightupTargetLocation(class AActor* InTargetActor);
	void GetAllCharaLightingActors(TArray<class AS3CharaLightingActor*>* Values);
	void GetAllTargetCharaActors(TArray<class AActor*>* CharaActors);
	void ClearLightupActors(bool CutsceneOnly);
	void SetupCutsceneLightingActors(class AS3CharaLightingSequencerActor* SeqLightingActor);
	class USkeletalMeshComponent* TryGetActorMeshComponent(class AActor* Actor);
	void IsUsableLight(class ALight* Light, bool* bUse, float* SpotDeviatedConeAngle);
	void GetMainSpotLightDesirabilityScore(float Distance, float Intensity, float DeviatedConeAngle, class UFuzzySystemComponent* SpotFuzzySystem, float* DesirabilityScore);
	void SetupEnvironmentLightParamater(class AActor* TargetActor, bool* bDummy);
	void GetMainPointLightDesirabilityScore(float Distance, float Intensity, class UFuzzySystemComponent* PointFuzzySystem, float* DesirabilityScore);
	void InitializeFuzzySystems();
	void UpdateAllCutsceneLightingActors();
	void ResetValues(bool FromCutscene);
	void SpawnCharaLightingActor(class AActor* Target);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void DebugDrawLightLineToggle();
	void DebugCharaLightOnOffToggle();
	void Editor_UpdateAllCutsceneLightingActors(class ACameraActor* Camera, class UObject* LevelSequence);
	void Editor_ResetVariable();
	void SetupTestLevel(class AS3CharaLightingActor* Target);
	void BindManagerEvents();
	void OnBeginTalk();
	void OnEndTalk();
	void OnCameraChanged();
	void onCutsceneStart();
	void onCutsceneEnd();
	void OnCameraChangedSequencer(class UObject* CameraObject);
	void UnbindCutscene();
	void OnChangedJoinActor(EJoinActorChangeEvent ChangeEvent, class AActor* Actor);
	void OnStartAcCameraSequence(class ALevelSequenceActor* PlaySequenceActor);
	void OnFinishedAcCameraSequence(class ULevelSequencePlayer* LevelSequencePlayer);
	void OnStopAcCameraSequence();
	void UnbindAcCameraSequence();
	void OnChangedACCameraCut(class UCameraComponent* CameraComponent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CharaLightingManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
