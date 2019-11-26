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

// BlueprintGeneratedClass BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C
// 0x027A (0x0884 - 0x060A)
class ABP_MiniGame_ChopWood_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             LookAtPos;                                                // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FreeModeBlockCollision;                                   // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BaseWood;                                                 // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood8;                                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood7;                                                    // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        wood6;                                                    // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood5;                                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        wood4;                                                    // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood3;                                                    // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood2;                                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood1;                                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             WoodsRoot;                                                // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_MiniGame_TestAx;                                       // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        SignHitArea;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CatchWood;                                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeltalMesh_re;                                           // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MIniGame_CW_GameScore_C*                BPC_MIniGame_CW_GameScore;                                // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_UpdatFieldOfView_CameraFOV_581B087841ED08C256D2368217AE7486;// 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_UpdatFieldOfView__Direction_581B087841ED08C256D2368217AE7486;// 0x06BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_UpdatFieldOfView;                                // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Ymove_Reset_XmoveLerp_D832F6124162C63847C5B88E946BE02A;// 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Ymove_Reset___Track_0_D832F6124162C63847C5B88E946BE02A;// 0x06CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Ymove_Reset__Direction_D832F6124162C63847C5B88E946BE02A;// 0x06D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Ymove_Reset;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Ymove_Chop_Xmovelerp_831322614840489C86009F9E95FE0A98;// 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Ymove_Chop_ChopMOve_831322614840489C86009F9E95FE0A98;// 0x06E4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Ymove_Chop__Direction_831322614840489C86009F9E95FE0A98;// 0x06E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Ymove_Chop;                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TImeline_Xmove___Track_0_AEC8F6314C8C93ED34D4D19FAEC44EFF;// 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TImeline_Xmove__Direction_AEC8F6314C8C93ED34D4D19FAEC44EFF;// 0x06FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TImeline_Xmove;                                           // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_ChopableWood2_C*                         SpawnedChoppableWood;                                     // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWBP_CW_WoodChop_C*                          WidgetChopWood;                                           // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ComboCount;                                               // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxComboCount;                                            // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count_1;                                                  // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTime;                                                 // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      EnterLevelSequencePlayer;                                 // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnWoodPosId;                                           // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	TArray<float>                                      SpawnWoodAngleList;                                       // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bJustHit;                                                 // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	int                                                JustHitCount;                                             // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResultRewardPrice;                                        // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                JustHitComboCnt;                                          // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UnbeliCount;                                              // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SEVolume;                                                 // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BGMBaseVolume;                                            // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BGMJustVolume;                                            // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BGMUnbeliVolume;                                          // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDebugVolumeType;                                   // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugInputRight;                                          // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugInputLeft;                                           // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x077A(0x0002) MISSED OFFSET
	float                                              AnimXmove;                                                // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimXmoveFromTimeline;                                    // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHitWood;                                                 // 0x0784(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0785(0x0003) MISSED OFFSET
	int                                                ChangeUnbeliComboNum;                                     // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EveryRewardNum;                                           // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExcellentRewardRate;                                      // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnbeliRewardRate;                                         // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwingAngle;                                            // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckAngle;                                               // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleRangeRate;                                           // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFeverTime;                                               // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnbeliFever;                                             // 0x07A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugSound;                                              // 0x07A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x07A7(0x0001) MISSED OFFSET
	float                                              SmallWoodRate;                                            // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoodSizeType;                                             // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_CW_HitData                              NormalWoodHitRate;                                        // 0x07B0(0x0008) (Edit, BlueprintVisible)
	struct FST_CW_HitData                              SmallWoodHitRate;                                         // 0x07B8(0x0008) (Edit, BlueprintVisible)
	bool                                               bAdjustAnimAngle;                                         // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x07C1(0x0003) MISSED OFFSET
	struct FRotator                                    BaseAngleTest;                                            // 0x07C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BaseAxAngleTest;                                          // 0x07D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UABP_Minigame_CW_re_C*                       AnimInstance;                                             // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XmoveStartTime;                                           // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GetWoodAnimPlayRate;                                      // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGameStart;                                               // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotHit;                                                  // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x07F2(0x0006) MISSED OFFSET
	class USoundAtomCue*                               BaseBGM;                                                  // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               JustBGM;                                                  // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               UnbeliBGM;                                                // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGame_CW_BGMType>                 CurrentBGMType;                                           // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class ABP_MiniGame_SupportNPC_C*                   SupportNPC;                                               // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       SUPPORT_MESH_ID;                                          // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       START_SEQUENCE_ID;                                        // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x28];                                      // 0x0830(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StartSequence
	bool                                               bSequencePlaying;                                         // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	TArray<class AActor*>                              HideMeshActorForNPC;                                      // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              MeshWetness;                                              // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshWetnessChangeValue;                                   // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EasyRewardRate;                                           // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalReawrdRate;                                         // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseRewardRate;                                           // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C");
		return ptr;
	}


	void UpdateMeshWetness();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void SetVisibleUIButtonIcon(bool Visible);
	class UMeshComponent* GetClothMeshComponent();
	void InitAsyncLoad(bool* dummy);
	void StopAllChopBGM();
	void StopChopBGM(TEnumAsByte<E_MiniGame_CW_BGMType> Index);
	void PlayChopBGMFromCue(TEnumAsByte<E_MiniGame_CW_BGMType> Type);
	void DecideWoodId();
	void UpdateChopCount();
	void SetAnimXmoveFromHit(bool JustHit, bool PlusAngle);
	void AddDebugVolumeType(int Add);
	void SetVolume(float Value);
	void CheckHitWood(bool* Hit, bool* JustHit);
	bool IsGameFinished();
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void SpawnWood();
	void UserConstructionScript();
	void TImeline_Xmove__FinishedFunc();
	void TImeline_Xmove__UpdateFunc();
	void Timeline_Ymove_Chop__FinishedFunc();
	void Timeline_Ymove_Chop__UpdateFunc();
	void Timeline_Ymove_Chop__EndHitCheck__EventFunc();
	void Timeline_Ymove_Chop__TimingOfHit__EventFunc();
	void Timeline_Ymove_Reset__FinishedFunc();
	void Timeline_Ymove_Reset__UpdateFunc();
	void Timeline_UpdatFieldOfView__FinishedFunc();
	void Timeline_UpdatFieldOfView__UpdateFunc();
	void OnFinishedFade();
	void FinalizeTalk();
	void DrawMiniGame();
	void LoseMiniGame();
	void WinMiniGame();
	void EndMiniGame();
	void OnfinishedSequence_Start();
	void PlaySEResultWood();
	void PlaySEResultMoney();
	void Event_WidgetEndMiniGame();
	void DelayedPauseAnim();
	void StartMiniGame();
	void ReceiveBeginPlay();
	void GameStart();
	void AxAction();
	void ReceiveTick(float DeltaSeconds);
	void ResetResultMenuEvent();
	void PlayGetWoodMotion(float Angle);
	void ReadyWood();
	void SetXmoveTimeLine();
	void GameStartEvent();
	void Event_EndMiniGame();
	void ExecuteUbergraph_BP_MiniGame_ChopWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
