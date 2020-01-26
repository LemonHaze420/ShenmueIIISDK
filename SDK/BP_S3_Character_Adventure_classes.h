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

// BlueprintGeneratedClass BP_S3_Character_Adventure.BP_S3_Character_Adventure_C
// 0x018C (0x0AC8 - 0x093C)
class ABP_S3_Character_Adventure_C : public ABP_S3Character_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	class UBP_WetnessComponent_C*                      BP_WetnessComponent;                                      // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3MovementModeRequestHandler*               S3MovementModeRequestHandler;                             // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3FadeCharacterCapsule*                     S3FadeCharacterCapsule;                                   // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3CharacterPhasingComponent*                S3CharacterPhasing;                                       // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_RadialStuckScanner_C*                   BPC_RadialStuckScanner;                                   // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        CameraFadeCollisionSpawner;                               // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_PCGroundSensor_C*                       BPC_PCGroundSensor;                                       // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_PlayerShove_C*                          BPC_PlayerShove;                                          // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_CharacterDialogPlayer_C*                BPC_CharacterDialogPlayer;                                // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3AnimNotifyComponent_C*                 BP_S3AnimNotifyComponent;                                 // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_S3PlayerStairClimber_C*                 BPC_S3PlayerStairClimber;                                 // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_ItemAttacher_C*                         BPC_ItemAttacher;                                         // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               FadeCollision_Hips;                                       // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FadeCollision_Head;                                       // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               FadeCollision_Shoulder_L;                                 // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               FadeCollision_Shoulder_R;                                 // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               FadeCollision_Chest;                                      // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3SpringArmComponent*                       S3SpringArm;                                              // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UbpS3CameraComp_C*                           Camera;                                                   // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ReferencePoint;                                           // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAtomListenerFocusPoint*                     AtomListenerFocusPoint;                                   // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            NPCSensor;                                                // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_Player_Lead_C*                          BPC_Player_Lead;                                          // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_S3PlayerSteering_C*                     BPC_S3PlayerSteering;                                     // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3PlayerSensorComponent*                    S3PlayerSensor;                                           // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_TalkAvoidancePlayer_C*                  BPC_TalkAvoidancePlayer;                                  // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShowItemLocation;                                         // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TalkStartDistance;                                        // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasTalkableTarget;                                        // 0x0A2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A2D(0x0003) MISSED OFFSET
	int                                                FaceCallId;                                               // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KnockTriggered;                                           // 0x0A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenDoorTriggered;                                        // 0x0A35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRaining;                                                // 0x0A36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0A37(0x0001) MISSED OFFSET
	TArray<class AS3Character*>                        CloseNPCs;                                                // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               FadeHidePlayer;                                           // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A49(0x0003) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AS3GimmickOpenDoor*>                  Doors;                                                    // 0x0A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bEnableIK;                                                // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A61(0x0007) MISSED OFFSET
	class ABP_S3ReflectorBoardActor_C*                 ReflectorBoard;                                           // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleported;                                              // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_SearchMode>                      SearchMode;                                               // 0x0A71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0A72(0x0002) MISSED OFFSET
	struct FVector                                     FellReturnLocation;                                       // 0x0A74(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OriginalCapsuleCollisionProfile;                          // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FIgnoreCollisionChannelRequest>      IgnoreCollisionChannelRequests;                           // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ECollisionResponse>>            OriginalChannelResponses;                                 // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsHide;                                                   // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0AA9(0x0007) MISSED OFFSET
	class URequestCounter_C*                           DisableRunningRequests;                                   // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerCtrl_C*                               PlayerCtrl;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_CameraFadeCollision_C*                   CameraFadeCollision;                                      // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3_Character_Adventure.BP_S3_Character_Adventure_C");
		return ptr;
	}


	void GetGroundFoot(TEnumAsByte<EN_FOOT_GROUND_STATE>* Grounded);
	void FootFrontLRCalc(bool* flag);
	class UBPC_S3PlayerStairClimber_C* GetStairClimber();
	bool IsTalking();
	void UpdateCollisionResponses(TEnumAsByte<ECollisionChannel> JustChangedChannel);
	void RemoveIgnoreCollisionRequests(class UObject* Requester);
	bool HasIgnoreCollisionChannelRequest(TEnumAsByte<ECollisionChannel> Channel);
	void IgnoreCollisionChannel(TEnumAsByte<ECollisionChannel> Channel, bool StartIgnore, class UObject* Requester);
	void GetEnableIK(bool* bIKEnabled);
	bool ReturnOutOfWorld();
	void GetSearchMode(TEnumAsByte<EN_PC_SearchMode>* SearchMode);
	void SetSearchMode(TEnumAsByte<EN_PC_SearchMode> Mode);
	void SetMovementMode(class UObject* Executor, TEnumAsByte<EMovementMode> MovementMode, unsigned char NewCustomMode);
	void ReactToTeleported();
	void TeleportWithCamera(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void AddReflectorBoard();
	void SetEnableIK(bool bInIKEnabled, bool* dummy);
	void UpdateDoorActor();
	void GetClosestDoor(class AS3GimmickOpenDoor** OutDoor);
	void IsInDoorTrigger(bool* bInTrigger);
	void ExpandNPCSensorDistance(float MinDistance);
	void UpdatePlayerFade();
	void AddTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void SetActorLocationAndRotationWithCamera(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool Sweep, bool Teleport);
	void ClearNotice();
	void TalkStopMotion();
	void TalkPlayMotion(bool SitFlag);
	void IsDenyInput(bool* Deny);
	void CheckInputAxis(float AxisValue, bool* bWasInput);
	void UserConstructionScript();
	void BindCutscene();
	void UnbindCutscene();
	void StartCutscene();
	void EndCutscene();
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void Screen_Player();
	void Screen_NPC();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void ReceiveDestroyed();
	void StartNock();
	void BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaEndOverlap(class AS3GimmickOpenDoor* Door);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleTeleportSucceeded(bool bIsATest);
	void CleanUpNullListEntries();
	void FinishedLevelLoad();
	void BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature();
	void BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void ExecuteUbergraph_BP_S3_Character_Adventure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
