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

// BlueprintGeneratedClass BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C
// 0x0651 (0x0999 - 0x0348)
class ABP_S3BuildingStaticMeshActor_C : public AS3BuildingStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       HousePostProcess2;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       HousePostProcess3;                                        // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HouseBox3;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         LeavePoint;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HouseBox2;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       HousePostProcess1;                                        // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HouseBox1;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AutoVolumeSize;                                           // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterShenfa;                                           // 0x0391(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnablePostProcess;                                        // 0x0392(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0393(0x0005) MISSED OFFSET
	class US3PostProcessSettingsDataAsset*             PostProcessDataAsset;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicGamma;                                            // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 GammaCurve;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicGammaDebug;                                       // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x03B1(0x000F) MISSED OFFSET
	struct FPostProcessSettings                        PP_Setting;                                               // 0x03C0(0x0530) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPostProcessComponent*>               PP_Volumes;                                               // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RefreshPostProcess;                                       // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicGain;                                             // 0x0901(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0902(0x0006) MISSED OFFSET
	class UCurveLinearColor*                           GainCurve;                                                // 0x0908(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DynamicShadowGain;                                        // 0x0910(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0911(0x0007) MISSED OFFSET
	class UCurveLinearColor*                           ShadowGainCurve;                                          // 0x0918(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               BGM_Cue;                                                  // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3BgmChangeInfo>                    BGM_ChangeInfoArray;                                      // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundAtomCue*                               CurrentCue;                                               // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingBGM;                                               // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingSE;                                                // 0x0941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0942(0x0006) MISSED OFFSET
	TArray<class ABP_S3SoundPlayer_C*>                 PlayerArray;                                              // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               SE_ID_Array;                                              // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FS3BuildingSEParam>                  SE_InfoArray;                                             // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               OwnerCharacteres;                                         // 0x0978(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AS3GameTimeManager*                          GameTimeManager;                                          // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CutsceneBuilding;                                         // 0x0998(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C");
		return ptr;
	}


	void GetBGM(class USoundAtomCue** BGM);
	void IsOverlappingCutsceneActor(const struct FName& CharacterName, bool* IsOverlap);
	void OverlapPlayer_Impl();
	void GetCurrentBGM(class USoundAtomCue** Sound);
	void InitTick();
	void StopSE();
	void PlaySE();
	void JudgeBgm(bool Play);
	void IsNeedCheckSound(bool* Need);
	void UpdatePostProcess();
	void IsPlayerInVolume(bool* In);
	void CheckSound();
	void SetBGM(bool Play);
	void SetShadowGain();
	void SetGain();
	void SetGamma();
	void SetPostProcessSetting(bool Play);
	void GetLeavePoint(struct FVector* Location, struct FRotator* Rotation);
	void IsOverlappingActorByName(const struct FName& CharacterName, bool* IsOverlap);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ChangeGameTimeEvent(ES3DayTimeEvent EventType);
	void OverlapPlayer(class AActor* Actor, class UPrimitiveComponent* Component, bool bin);
	void StartCutscene();
	void EndCutscene();
	void ExecuteUbergraph_BP_S3BuildingStaticMeshActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
