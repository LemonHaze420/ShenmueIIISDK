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

// BlueprintGeneratedClass BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C
// 0x0085 (0x0421 - 0x039C)
class ABP_Player180ReturnTrigger_C : public ABP_StepTriggerBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PlaneBlockPlayerOnly;                                     // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CubeBlockPlayerOnly;                                      // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ForwardArrow;                                             // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MessageTime;                                              // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWaitingDialog;                                          // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	int                                                SubtitleIndex;                                            // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SaveDirectioVec;                                          // 0x03CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SaveImpactNormal;                                         // 0x03D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SaveImpactLocation;                                       // 0x03E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBack;                                                  // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EndTurnAround;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UPrimitiveComponent*                         ActivePlayerBlocker;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ShouldBeObstacle;                                         // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	class URequestCounter_C*                           DisableZoomRequest;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInEvent;                                                 // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C");
		return ptr;
	}


	void STATIC_TestPlayerState(bool* Normal);
	void STATIC_SetEventStatus(bool bStartEvent);
	bool CanActionByBehaviorState();
	bool IsSubtitleDone();
	void CheckCanBack(const struct FVector& HitLocation, bool* Back);
	void STATIC_PlayAction(bool* Success);
	void STATIC_GetPlaybackDir(const struct FVector& ImpactDir, const struct FVector& NormalDir, struct FVector* PlaybackDIr);
	void STATIC_PlayAnimation();
	void STATIC_GetTextWithRandom(int SubtitleIndex, struct FName* Text_Label);
	void ExistNextText(bool* Exist);
	void StartSubtitle();
	void UserConstructionScript();
	void STATIC_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_OnSubtitlePlayFinished();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_OnEnterStepAndTime();
	void STATIC_OnExitStepAndTime();
	void STATIC_SetShouldBeObstacle(bool Value);
	void STATIC_ExecuteUbergraph_BP_Player180ReturnTrigger(int EntryPoint);
	void STATIC_EndTurnAround__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
