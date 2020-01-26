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

// BlueprintGeneratedClass BP_ScheduleNPC.BP_ScheduleNPC_C
// 0x008D (0x09C9 - 0x093C)
class ABP_ScheduleNPC_C : public ABP_S3Character_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	class UBPC_FootIKNPC_C*                            BPC_FootIKNPC;                                            // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_NPCTalkDetectController_C*              BPC_NPCTalkDetectController;                              // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      PreviousTalkLocomotionState;                              // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0959(0x0007) MISSED OFFSET
	class ABP_Gimmick_OpenDoor_Template_C*             RefGimmickDoor;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWidgetComponent*                            NamePlate;                                                // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              NowInterpolateSeconds;                                    // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndInterpolateSeconds;                                    // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateDoor;                                              // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0979(0x0007) MISSED OFFSET
	class UBPC_NPCDebugTrace_C*                        BPC_DebugTrace;                                           // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class ABP_S3StaircaseBase_C*>               OverlappingStairs;                                        // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_S3StaircaseBase_C*                       Stairs;                                                   // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               StairsAction;                                             // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	float                                              STAIRS_HEIGHT_OFFSET;                                     // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHaveItemCreate;                                         // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09A9(0x0003) MISSED OFFSET
	float                                              MeshHeight;                                               // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TempCloseEye;                                             // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x09B1(0x0007) MISSED OFFSET
	class UCapsuleComponent*                           CameraCollision;                                          // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       BackerId;                                                 // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceUpdateAnimation;                                    // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScheduleNPC.BP_ScheduleNPC_C");
		return ptr;
	}


	ES3HelpPriority GetHelpPriority();
	struct FName GetHelpName();
	bool IsActivateHelp();
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool UnregisterHelp(ES3HelpRegisterTiming Timing);
	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CheckRewardNotice();
	void IsDisableFootIK(bool* bDisable);
	void DestroyCameraCollisionSub();
	void CreateCameraCollisionSub(float Radius, float HalfHeight);
	void IsLookAtBody(bool* Enable);
	void SetLookAtBody(bool Enable);
	void ResetCloseEye();
	void SetCloseEye(bool Enable);
	bool IsTalking();
	void StairsIgnoreCollision(bool bIgnore);
	void GetEnableIK(bool* bIKEnabled);
	void CalcCharaHeight();
	void StairsSetting(bool bIsEnable);
	void UpdateStairs();
	void SetupHaveItem();
	void SetEnableIK(bool bInIKEnabled, bool* dummy);
	bool ReturnOutOfWorld();
	void RemoveDebugTraceComponent();
	void AddDebugTraceComponent();
	void UpdateDoor();
	void UpdateFootIK(float DeltaSeconds);
	void CheckNamePlate();
	void UpdateDebug();
	void CheckCanUseDoor(bool* IsUseDoor);
	void GetS3PathFollowingComponent(class US3PathFollowingComponent** AsS3Path_Following_Component);
	void AddTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OpenDoor();
	void ReceiveBeginPlay();
	void OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent);
	void OnNPCInitialized();
	void OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor* Door);
	void OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door);
	void OnFriendStop(class AS3Character* Me, class AS3Character* MyFriend, float Friendliness);
	void StartCharaFadeOut(class AActor* Executor, float FadeTime);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartCharaFadeIn(class AActor* Executor, float FadeTime);
	void OnBeginOverlapStairs(class ABP_S3StaircaseBase_C* Staircase);
	void OnEndOverlapStairs(class ABP_S3StaircaseBase_C* Staircase);
	void DecideDetectAction(ES3ActionIconType Type);
	void OnNPCUninitialized();
	void OnBeginStairs(class ABP_S3StaircaseBase_C* Staircase);
	void StairsPreSetting(class AActor* StairActor);
	void OnEndStairs();
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void OnStartStairs();
	void Screen_Player();
	void Screen_NPC();
	void SetAttachObjectHiddenInGame(bool bNewHidden);
	void CreateCameraCollision(float Radius, float HalfHeight);
	void DestroyCameraCollision();
	void ExecuteUbergraph_BP_ScheduleNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
