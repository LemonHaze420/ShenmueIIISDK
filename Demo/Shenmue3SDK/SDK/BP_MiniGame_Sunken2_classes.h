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

// BlueprintGeneratedClass BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C
// 0x022B (0x0834 - 0x0609)
class ABP_MiniGame_Sunken2_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Collision;                                                // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGame_KungFuFlow_C*                  BPC_MiniGame_KungFuFlow;                                  // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             SunkenDecal;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SunkenMesh;                                               // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LookAtPos;                                                // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        _3DUI;                                                    // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGame_KungFuProgress_C*              BPC_MiniGame_KungFuProgress;                              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SequenceTrans;                                            // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mokujin1;                                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MokujinRoot;                                              // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeltalMesh_re;                                           // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_EyeClose_Rate_99796E9E4A060616BDEA06AA69B82CDB;  // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_EyeClose__Direction_99796E9E4A060616BDEA06AA69B82CDB;// 0x0694(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0695(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_EyeClose;                                        // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NormalHitObjectImpact_Impact_9BD069F84C95B4583FE78E882092FCBC;// 0x06A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    NormalHitObjectImpact__Direction_9BD069F84C95B4583FE78E882092FCBC;// 0x06A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          NormalHitObjectImpact;                                    // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_UpdatFieldOfView_CameraFOV_73234E794EE17F74EF333B97EDBAF096;// 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_UpdatFieldOfView__Direction_73234E794EE17F74EF333B97EDBAF096;// 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_UpdatFieldOfView;                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ComboCount;                                               // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxComboCount;                                            // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count_1;                                                  // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTime;                                                 // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultAxRotation;                                        // 0x06D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnWoodPosId;                                           // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      SpawnWoodAngleList;                                       // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bJustHit;                                                 // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	int                                                JustHitCount;                                             // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResultRewardPrice;                                        // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                JustHitComboCnt;                                          // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UnbeliCount;                                              // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SEVolume;                                                 // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BGMBaseVolume;                                            // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BGMJustVolume;                                            // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BGMUnbeliVolume;                                          // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHitWood;                                                 // 0x071C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	int                                                ChangeUnbeliComboNum;                                     // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EveryRewardNum;                                           // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExcellentRewardRate;                                      // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnbeliRewardRate;                                         // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSwingAngle;                                            // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckAngle;                                               // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleRangeRate;                                           // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFeverTime;                                               // 0x073C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnbeliFever;                                             // 0x073D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugSound;                                              // 0x073E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x073F(0x0001) MISSED OFFSET
	float                                              SmallWoodRate;                                            // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoodSizeType;                                             // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_CW_HitData                              NormalWoodHitRate;                                        // 0x0748(0x0008) (Edit, BlueprintVisible)
	struct FST_CW_HitData                              SmallWoodHitRate;                                         // 0x0750(0x0008) (Edit, BlueprintVisible)
	bool                                               bAdjustAnimAngle;                                         // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	struct FRotator                                    BaseAngleTest;                                            // 0x075C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BaseAxAngleTest;                                          // 0x0768(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDrawAngle;                                          // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	float                                              XmoveStartTime;                                           // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GetWoodAnimPlayRate;                                      // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGameStart;                                               // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotHit;                                                  // 0x0781(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0782(0x0006) MISSED OFFSET
	class UABP_MiniGame_Sunken_C*                      RefAnimInstance;                                          // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerChangeSpeed;                                         // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinAnimPowerRate;                                         // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TimingCurve;                                              // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerRateBeforeConversion;                                // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrePowerRateBeforeConversion;                             // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DifficultyIndex;                                          // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitThreshold;                                             // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JustThreshold;                                            // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	class US3LevelSequencePlayer*                      StartLevelSequencePlayer;                                 // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGameEnd;                                                // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x07C1(0x0003) MISSED OFFSET
	float                                              ChopSEWaitTime;                                           // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      MokujinImpactValue;                                       // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 UIMoveCurve;                                              // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceForbitStart;                                        // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTimeUpEnd;                                               // 0x07E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x07E2(0x0006) MISSED OFFSET
	class UWBP_MiniGame_Sunken_C*                      RefWidget;                                                // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_MiniGame_SupportNPC_C*                   SupportNPC;                                               // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bUpdateUIInfo;                                            // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	struct FName                                       SUPPORT_MESH_ID;                                          // 0x0800(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideEnabled;                                          // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	int                                                EventFlagNumber;                                          // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMin;                                             // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMax;                                             // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableGameInput;                                        // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	float                                              AdjustProgressRate;                                       // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BarUpdateStart;                                           // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0821(0x0003) MISSED OFFSET
	float                                              BarUpdateWaitTime;                                        // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BarUpdate;                                                // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BarUpdateEnd;                                             // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3HelpPriority                                    OverrideHelpPriority;                                     // 0x082A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x082B(0x0001) MISSED OFFSET
	float                                              PowerChangeRandomRangeMin;                                // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerChangeRandomRangeMax;                                // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C");
		return ptr;
	}


	void CheckBarTiming(bool* IsJust, bool* IsEx);
	void SetIdleMotionPlayRate();
	ES3HelpPriority GetHelpPriority();
	void WaitBarUpdate(float WaitMax, bool* WaitEnd);
	void AppendPreloadLabels(TArray<struct FName>* Labels, TArray<struct FST_MG_SupportNPCAction>* Actions);
	void SetPreloadLabels();
	class UMeshComponent* GetClothMeshComponent();
	void InitAsyncLoad(bool* dummy);
	void CalcDifficulty(bool* Change);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void Enabled3DUISideBar(bool Enabled);
	void Update3DUI();
	void SetDifficultyData();
	void DecideWoodId();
	void UpdateChopCount();
	bool IsGameFinished();
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void Timeline_UpdatFieldOfView__FinishedFunc();
	void Timeline_UpdatFieldOfView__UpdateFunc();
	void NormalHitObjectImpact__FinishedFunc();
	void NormalHitObjectImpact__UpdateFunc();
	void Timeline_EyeClose__FinishedFunc();
	void Timeline_EyeClose__UpdateFunc();
	void StartMiniGame();
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void OnFinishedFade();
	void FinalizeTalk();
	void OnFinishedCoinSequence();
	void OnFinishedStart();
	void Event_TimeUp();
	void Event_SkillCountMax();
	void Event_ResultEnd();
	void ReceiveBeginPlay();
	void GameStart();
	void AxAction();
	void ReceiveTick(float* DeltaSeconds);
	void ResetResultMenuEvent();
	void GameStartEvent();
	void InputAction_ButtonRight();
	void PunchMotionEnd();
	void PlayCameraImpact();
	void InputAction_ButtonTop();
	void InputAction_ButtonBottom();
	void ImpactToObject();
	void PlayEyeCloseTimeline();
	void EndEyeCloseTimeline();
	void ExecuteUbergraph_BP_MiniGame_Sunken2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
