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


	ES3HelpPriority STATIC_GetHelpPriority();
	struct FName STATIC_GetHelpName();
	bool IsActivateHelp();
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool STATIC_UnregisterHelp(ES3HelpRegisterTiming Timing);
	int STATIC_GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void STATIC_CheckRewardNotice();
	void IsDisableFootIK(bool* bDisable);
	void STATIC_DestroyCameraCollisionSub();
	void STATIC_CreateCameraCollisionSub(float Radius, float HalfHeight);
	void STATIC_IsLookAtBody(bool* Enable);
	void STATIC_SetLookAtBody(bool Enable);
	void STATIC_ResetCloseEye();
	void STATIC_SetCloseEye(bool Enable);
	bool STATIC_IsTalking();
	void STATIC_StairsIgnoreCollision(bool bIgnore);
	void STATIC_GetEnableIK(bool* bIKEnabled);
	void CalcCharaHeight();
	void STATIC_StairsSetting(bool bIsEnable);
	void UpdateStairs();
	void STATIC_SetupHaveItem();
	void STATIC_SetEnableIK(bool bInIKEnabled, bool* dummy);
	bool ReturnOutOfWorld();
	void STATIC_RemoveDebugTraceComponent();
	void AddDebugTraceComponent();
	void UpdateDoor();
	void UpdateFootIK(float DeltaSeconds);
	void STATIC_CheckNamePlate();
	void UpdateDebug();
	void STATIC_CheckCanUseDoor(bool* IsUseDoor);
	void GetS3PathFollowingComponent(class US3PathFollowingComponent** AsS3Path_Following_Component);
	void STATIC_AddTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_OpenDoor();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent);
	void STATIC_OnNPCInitialized();
	void STATIC_OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor* Door);
	void STATIC_OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor* Door);
	void STATIC_OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door);
	void STATIC_OnFriendStop(class AS3Character* Me, class AS3Character* MyFriend, float Friendliness);
	void STATIC_StartCharaFadeOut(class AActor* Executor, float FadeTime);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_StartCharaFadeIn(class AActor* Executor, float FadeTime);
	void STATIC_OnBeginOverlapStairs(class ABP_S3StaircaseBase_C* Staircase);
	void STATIC_OnEndOverlapStairs(class ABP_S3StaircaseBase_C* Staircase);
	void STATIC_DecideDetectAction(ES3ActionIconType Type);
	void STATIC_OnNPCUninitialized();
	void STATIC_OnBeginStairs(class ABP_S3StaircaseBase_C* Staircase);
	void STATIC_StairsPreSetting(class AActor* StairActor);
	void STATIC_OnEndStairs();
	void STATIC_OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void STATIC_OnTalkStart(class US3TalkComponent* TalkComponent);
	void STATIC_OnStartStairs();
	void STATIC_Screen_Player();
	void STATIC_Screen_NPC();
	void STATIC_SetAttachObjectHiddenInGame(bool bNewHidden);
	void STATIC_CreateCameraCollision(float Radius, float HalfHeight);
	void STATIC_DestroyCameraCollision();
	void ExecuteUbergraph_BP_ScheduleNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
