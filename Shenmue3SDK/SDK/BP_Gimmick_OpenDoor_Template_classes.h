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

// BlueprintGeneratedClass BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C
// 0x01B9 (0x0579 - 0x03C0)
class ABP_Gimmick_OpenDoor_Template_C : public AS3GimmickOpenDoor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         RecoveryPoint_Back;                                       // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         RecoveryPoint_Front;                                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PlayerBlock;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CameraBlockCollision;                                     // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DetectAreaGuide;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Label_Back;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Label_Front;                                              // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_DoorSteeringHint_C*                     BackSteering;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_DoorSteeringHint_C*                     FrontSteering;                                            // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               InputTrigger_Back;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               InputTrigger_Front;                                       // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         TargetPoint_Back;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         TargetPoint_Front;                                        // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DetectAreaOutside;                                        // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_DoorTalkComponent_C*                    DoorTalk;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DetectArea;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequence*                               AS_SkeletalMeshOpenDoor_Front;                            // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AS_SkeletalMeshOpenDoor_Back;                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanOpen;                                                  // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	float                                              AngleTolerance;                                           // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    DoorEventComplete;                                        // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAnimMontage*                                AM_NPCOpenDoor_Front;                                     // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AM_NPCOpenDoor_Back;                                      // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3Character_C*                           DoorUseChara;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_DoorType>                           DoorType;                                                 // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class ABP_S3BuildingStaticMeshActor_C*             HouseStaticMeshActor;                                     // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InHouseNpcName;                                           // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    NotifyEvent;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FST_DoorTime>                        Time_Conversation;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_DoorTime>                        Time_Soliloquence;                                        // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_DoorTime>                        Time_OpenDoor;                                            // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EN_DoorState>                          DoorState;                                                // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayEvent;                                              // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x04E2(0x0006) MISSED OFFSET
	struct FString                                     HouseStaticMeshActorName;                                 // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ISPlayNow;                                                // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DispDebugData;                                            // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x04FA(0x0006) MISSED OFFSET
	TArray<class ABP_S3Character_C*>                   InAreaCharas;                                             // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              PlayerInteractRange;                                      // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_DoorGuideStrength>                  GuideStrength;                                            // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_DoorOpenType>                       DoorOpenType;                                             // 0x0515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0516(0x0002) MISSED OFFSET
	class UAnimMontage*                                MO_OpenDoor_Front;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MO_OpenDoor_Back;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLeaveOpen;                                              // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	TArray<struct FName>                               CanUseChara;                                              // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bNoData;                                                  // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_HingeSide>                          HingeSide;                                                // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0542(0x0002) MISSED OFFSET
	float                                              ReleaseCharaTimer;                                        // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorFrontAngleTolerance;                                  // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              TraceObjectTypes;                                         // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               MainFlowEvent;                                            // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DoorEventAnimFinish;                                      // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bLockedPlayerInteraction;                                 // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C");
		return ptr;
	}


	bool IsTalking();
	void LockPlayerInteraction();
	void CheckOpenDoorFromDistance(class ABP_S3Character_C* SelfCharacter, class ABP_S3Character_C* OpponentCharacter, bool* Prioritize);
	bool IsNeedPositionRecovery(class ACharacter** SelfCharacter, class ACharacter** OpponentCharacter);
	struct FTransform GetRecoveryPoint(class ACharacter** Character, bool* bBack);
	bool IsReserved();
	void SetDoorUseChara(class ABP_S3Character_C* DoorUseChara);
	void CallNotifyEvent();
	bool DoesScriptAllowPlayerInteraction();
	int GetCurrentDoorDataTime();
	void TraceToNearInteract(class ABP_S3CharacterBase_C* Chara, bool* Hit);
	struct FTransform GetNearAlignment(class ABP_S3CharacterBase_C* Chara);
	void GetAngleToDoor(const struct FVector& InLocation, const struct FVector& InDirection, float* OutAngle);
	void InitReleaseCharaCount();
	void ChangeCollision(bool bLock);
	void EndEvent();
	void PrintDebugData(float DeltaTime);
	void CheckCanUseChara(class ABP_S3Character_C* Chara, bool* CanUse);
	void RecalculatePlayerGuides();
	void CallEventComplete();
	void GetTargetDoorPoint(bool IsFront, struct FVector* Location, struct FRotator* Rotation);
	void GetLengthCharaToAdjustPoint(class ABP_S3CharacterBase_C* Chara, float* Length);
	void CheckCharaOnExtensionLine(class ABP_S3CharacterBase_C* Chara, bool* IsHit);
	void CheckNPCOpen(class ABP_S3Character_C* NPC, bool* IsRegist);
	void CheckDataTable(bool* Existance);
	void CheckCan_tKnockDoorState(bool* IsOpen);
	void SetCanPlayEvent(bool CanPlayEvent);
	void ReleaseDoorUseChara();
	void RegistDoorUseChara(class ABP_S3Character_C* Chara, bool* IsRegist);
	void CheckAfterKnockPatarn(int Time, TEnumAsByte<EN_AfterNockType>* Patarn);
	void JudgePatarnAfterKnock();
	void NPCOutOfRange();
	void CanOpenDoor_New_(class ABP_S3CharacterBase_C* Chara, bool* IsUseDoor);
	void CheckCharaIndoor(const struct FName& CharacterName, bool* Existance);
	void CheckCharaNearSide(class ACharacter* Chara, bool* IsFront);
	void FinishDoorKnock();
	void CheckPlayEvent(bool* PlayEvent);
	void JudgeDoorInOrOut(bool* IsOut);
	void FinishAdjustPosition();
	void InitDoorUseChara();
	void OpenDoor(class ABP_S3CharacterBase_C* Chara, class UAnimSequence* AnimSequence, float AnimRate);
	void CheckCanUseDoor(class ABP_S3CharacterBase_C* Chara, bool* IsUseDoor);
	void CheckNearSide(bool* IsFront);
	void IsInBackDetectionArea(bool* inArea);
	void IsInFrontDetectionArea(bool* inArea);
	void isInDetectionArea(bool* isInDetectionArea);
	void DeactivateOperation();
	void ActivateOperation();
	void UserConstructionScript();
	void OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName);
	void OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName);
	void OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName);
	void OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName);
	void OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944(const struct FName& NotifyName);
	void BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CheckFinishAnim(float Delay, bool IsFront);
	void BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveSmartLinkReached(class AActor** Agent, struct FVector* Destination);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void Screen_Player();
	void Screen_NPC();
	void ExecuteUbergraph_BP_Gimmick_OpenDoor_Template(int EntryPoint);
	void DoorEventAnimFinish__DelegateSignature();
	void NotifyEvent__DelegateSignature();
	void DoorEventComplete__DelegateSignature(class ABP_Gimmick_OpenDoor_Template_C* Door, bool Front);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
