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

// BlueprintGeneratedClass BP_CameraFadeCollision.BP_CameraFadeCollision_C
// 0x00A8 (0x03E8 - 0x0340)
class ABP_CameraFadeCollision_C : public AS3CameraFadeCollisionActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            DoorTrigger;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PlayerTrigger;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            NPCTrigger;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PlayerOverlapCount;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class AS3Character*                                PlayerCharacter;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               WaitAndDisableFadeCollision;                              // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class AS3GimmickOpenDoor*                          FadedOutDoor;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDoorFading;                                         // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URequestCounter_C*                           DisablePlayerFade;                                        // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AS3Character*>                        FadedNPCs;                                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AS3Character*>                        OverlappingNPCs;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               CanHideOverlappedNPCs;                                    // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              FadeInTimeNPC;                                            // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTimeNPC;                                           // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class URequestCounter_C*                           DisableNPCAndDoorFade;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFadeOutTimeNPC;                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastPlayerFadeReq;                                       // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              FadeInTimePC;                                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTimePC;                                            // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraFadeCollision.BP_CameraFadeCollision_C");
		return ptr;
	}


	void UpdatePlayerFaderState();
	float SelectFadeTime(float NonInstant);
	bool ShouldAllFadesBeInstant();
	void EnableNPCFadeCollision(bool Enable, class UObject* Requester);
	bool GetCollidedDoor(class AActor* Actor, class UPrimitiveComponent* Primitive, class AS3GimmickOpenDoor** Door);
	void FadeDoor(class AS3GimmickOpenDoor* Door);
	bool ShouldHideOverlappingNPCs();
	void OverlapNPC(class AS3Character* NPC, bool Overlap);
	void EnablePlayerFadeCollision(bool Enable, class UObject* Requester);
	bool WantsToHidePlayer();
	void FadeCharacter(class AS3Character* Character, bool FadeOut);
	bool IsPlayerMeshCollision(class USceneComponent* Target);
	void UserConstructionScript();
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature();
	void BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature();
	void BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature();
	void ReceiveBeginPlay();
	void ResumeNormalNPCFadeMode();
	void StartFastNPCFadeMode();
	void ExecuteUbergraph_BP_CameraFadeCollision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
