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

// BlueprintGeneratedClass BP_S3ItemSpawner.BP_S3ItemSpawner_C
// 0x0124 (0x0454 - 0x0330)
class ABP_S3ItemSpawner_C : public AS3ItemSpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class US3SimpleNavModifierComponent*               S3SimpleNavModifier;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HelpReactCollision;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           SearchLookCollision;                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           GetCollision;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WakeupCollision;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         AdjustMark;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3SearchComponent*                          SearchComponent;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HitCollision;                                             // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemId;                                                   // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FString                                     ItemName;                                                 // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AStaticMeshActor*                            ItemActor;                                                // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SearchFlag;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              AlphaRateAngl;                                            // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlphaRateDist;                                            // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    EffectRef;                                                // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectScale;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectOffsetFront;                                        // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerCtrl_C*                               PlayerCtrl;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyOnce;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCollisionFlag;                                     // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DirectGetMode;                                            // 0x03DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GetColliFlag;                                             // 0x03DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChangeTarget;                                             // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              ANGL_ALPHA_MIN;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ANGL_ALPHA_MAX;                                           // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectOffsetHeight;                                       // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	float                                              CurrentEffectAlpha;                                       // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVisibleAfterAction;                                     // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFade;                                                 // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseItemTableMesh;                                        // 0x03F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x03F7(0x0001) MISSED OFFSET
	struct FVector                                     CameraLocationOffset;                                     // 0x03F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCameraLineVec;                                        // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSightCheck;                                           // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUniqueCameraTrans;                                    // 0x0406(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x9];                                       // 0x0407(0x0009) MISSED OFFSET
	struct FTransform                                  UniqueCameraTransform;                                    // 0x0410(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SightCheckRadius;                                         // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayOnlyLookScript;                                      // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAlreadyGet;                                             // 0x0445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0446(0x0002) MISSED OFFSET
	float                                              CameraDistance;                                           // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnSearchActor;                                        // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	int                                                ItemActorMobility;                                        // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3ItemSpawner.BP_S3ItemSpawner_C");
		return ptr;
	}


	struct FName GetHelpName();
	ES3HelpPriority GetHelpPriority();
	bool IsActivateHelp();
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool UnregisterHelp(ES3HelpRegisterTiming Timing);
	void SetAquisitionItem();
	bool IsAcquisitionItem();
	void InitializeSearchItemActor();
	void IsPlayOnlyLookScript(bool* isPlay);
	void GetUniqueCameraTransform(struct FTransform* Transform);
	void IsLooking(bool* Look);
	void GetCameraLocationOffset(struct FVector* CameraLocationOffset);
	struct FName GetItemIDAsName();
	void UniqueActionOnFind();
	void ForceFindSelf();
	void RemovalItem();
	void IsCompleted(bool* bCompleted);
	bool InFront();
	void MyDestructor();
	void CalcTargetDirection(class ABP_S3ItemSpawner_C* BP_S3ItemSpawner, struct FVector* PC_Sensor_Input_Dir_WS, float* PC_NPCSelect_Dir, bool* Result);
	void SetSearchStep();
	void SwitchTarget();
	void IsCurrentItem(bool* Result);
	void IsOverlappingPlayer(class UObject* Object, bool* RangeFlag, bool* Result);
	void OverlappingCheck();
	void UpdateEffect(float Value, bool Current);
	void CalcRelativeAngle(float* RelativeAngle, bool* CurrentItem);
	void CreateEffect();
	void CalcCameraTransform();
	void Initialize(bool* Enable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveDestroyed();
	void BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SetEnabledHelp(bool Condition);
	void BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void DelayedInitialize();
	void BeginActionVisibleAndFound();
	void ExecuteUbergraph_BP_S3ItemSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
