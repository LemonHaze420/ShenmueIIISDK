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

// BlueprintGeneratedClass BP_ACTrigger.BP_ACTrigger_C
// 0x010D (0x04A9 - 0x039C)
class ABP_ACTrigger_C : public ABP_StepTriggerBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             ForwardArrow;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x03B1(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_ACTrigger.BP_ACTrigger_C.TalkScript
	int                                                MaxPlayCount;                                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseStartFadeOut;                                          // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              FadeOutTime;                                              // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeOutColor;                                             // 0x03EC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseEndFadeIn;                                             // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	struct FName                                       CameraLevelName;                                          // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StepupSheLead;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                CurrentPlayCount;                                         // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseEndSettings;                                           // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	struct FVector                                     PlayerLocation;                                           // 0x0414(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PlayerRot;                                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraRot;                                                // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExistShenfa;                                              // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	struct FTimerHandle                                CheckHandle;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FadeInTime;                                               // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeInColor;                                              // 0x043C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ETriggerResetType>                     ResetType;                                                // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	TArray<int>                                        ResetSteps;                                               // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseLeadEndSettings;                                       // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FVector                                     LeadLocation;                                             // 0x0464(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LeadRot;                                                  // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayFowardOnly;                                           // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WaitNPCSpawn;                                             // 0x0475(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitSearch;                                              // 0x0476(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0477(0x0001) MISSED OFFSET
	struct FGameplayTag                                NPCID;                                                    // 0x0478(0x0008) (Edit, BlueprintVisible)
	bool                                               IsNoChangeBehavior;                                       // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UTalkScript*                                 TalkScriptRef;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLoading;                                                // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTimeEvent;                                              // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0492(0x0002) MISSED OFFSET
	struct FVector                                     SaveTimeEventLocation;                                    // 0x0494(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_ForcedEndSerach_C*                       TempEndSerch;                                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForcedSearchEnd;                                          // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ACTrigger.BP_ACTrigger_C");
		return ptr;
	}


	void BehaviorControl(bool NoChangeBehavior);
	bool CheckSavedConditions();
	bool CheckPlayCount();
	void TriggerEnable(bool* Enable);
	void ShutDownActionFunc();
	void IsForward(const struct FVector& HitLocation, bool* Play);
	void ShouldDelayFadeIn(bool* DisableIt);
	void ShouldDisablePlayerControl(bool* DisableIt);
	void ApplyLog();
	void ResetLog();
	void CheckReset(bool* Reset);
	void SaveLog();
	void CanPlay(bool* CAN);
	void TeleportPlayer();
	void SetPlayerControl(bool Enable);
	void PlayAction(bool* Success);
	void UserConstructionScript();
	void OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811(class UObject* Loaded);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PlayACEvent();
	void CheckCanPlay();
	void CustomEvent(int SetSteps);
	void LoadTalkScript();
	void ExecuteUbergraph_BP_ACTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
