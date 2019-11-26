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

// BlueprintGeneratedClass BP_HighwayStar.BP_HighwayStar_C
// 0x0237 (0x0841 - 0x060A)
class ABP_HighwayStar_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameGetKihudaFlow_C*                BPC_MiniGameGetKihudaFlow;                                // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         PatLight1;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         PatLight0;                                                // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor1;                                              // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               life_check_00;                                            // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               life_check_01;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        handle;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        needle;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Body;                                                     // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             needle_scene;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               LeftMoveStop;                                             // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RightMoveStop;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Handle_Scene;                                             // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Lamp_Flashing__Direction_612DC26740A65F7E2A0150811E6432CD;// 0x06A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Lamp_Flashing;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightFlickerTimeline_LightMultiplier_AB8144BF42FCFA6BC55DE28AD5B7C646;// 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFlickerTimeline__Direction_AB8144BF42FCFA6BC55DE28AD5B7C646;// 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFlickerTimeline;                                     // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _______0_FOV_B763085E4A668793E8440AADBCC3DC69;            // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______0__Direction_B763085E4A668793E8440AADBCC3DC69;     // 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar01;                                           // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnd;                                                    // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               right_hit;                                                // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               left_hit;                                                 // 0x06D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              right_axis;                                               // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              left_axis;                                                // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Score;                                                    // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                point_count;                                              // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseIntensity;                                            // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rotation_speed;                                           // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UClass*                                      create_car;                                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              handle_rot_rate;                                          // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              car_rot_rate;                                             // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              car_move_rate;                                            // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                bgm_index;                                                // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                old_bgm_index;                                            // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                life_point;                                               // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_drum_reset;                                            // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_debug;                                                 // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x0712(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0713(0x0005) MISSED OFFSET
	class UWBP_HighwayStar_Debug_C*                    wbp_debug;                                                // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               is_car_pos_reset;                                         // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_car_rot_reset;                                         // 0x0721(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_reset_end;                                             // 0x0722(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0723(0x0001) MISSED OFFSET
	float                                              init_drum_rot;                                            // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     init_car_pos;                                             // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              init_car_rot;                                             // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DRUM_POINT_COUNT;                                         // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lamp_index;                                               // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 body_mesh;                                                // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3LevelSequencePlayer*                      use_coin;                                                 // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      game_start;                                               // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              start_sequence_offset;                                    // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	class UDataTable*                                  point_tbl;                                                // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_away_dot;                                           // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EXTEND_SCORE;                                             // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      arrow_rot_tbl;                                            // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ADD_DRUM_SPEED;                                           // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              default_rot_speed;                                        // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_debug_easy;                                            // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0789(0x0003) MISSED OFFSET
	int                                                LIMIT_SCORE;                                              // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                my_score_light;                                           // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                enemy_score_light;                                        // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DEF_BGMID_HWS_NORMAL;                                     // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         se_reel_player;                                           // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_HW_ScoreLight_C*                         ScoreLightActor;                                          // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              reset_end_timer;                                          // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	TArray<class ABP_DrivePoint_C*>                    DrivePointList;                                           // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       USE_COIN_SEQUENCE_ID;                                     // 0x07E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x28];                                      // 0x07E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_HighwayStar.BP_HighwayStar_C.UseCoinSequence
	class UWBP_MiniGameHighWayStar_C*                  RefWidget;                                                // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_MiniGame_QteTriangleSpawnLowerRight_C*   QteTriangleLeft;                                          // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MiniGame_QteTriangleSpawnLowerRight_C*   QteTriangleRight;                                         // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                last_score;                                               // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDispMyLightIndex;                                  // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDispEnemyLightIndex;                               // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	class UCurveFloat*                                 EnemySpeedCurve;                                          // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPerfect;                                                // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HighwayStar.BP_HighwayStar_C");
		return ptr;
	}


	void LoadScore();
	void SaveScore();
	void UpdateQte();
	void MakeQteTriangle();
	void RemoveQte();
	void InitAsyncLoad(bool* dummy);
	void DeleteScoreLightActor();
	void CreateScoreLightActor();
	void SettingSEPlayer(bool IsDestroy);
	void UpdatePatLight();
	void StopPatLight();
	void StartPatLight();
	void DebugSetting();
	void SetCarOffset();
	void GetNowArrowRot(float* RetRot);
	void ScoreLightAllOff();
	void GetScoreLIghtBlinkIndex(bool ArgMy, int* RetIndex);
	void UpdateDispScoreLight(bool ArgOn);
	void ScoreCheck();
	void ParamSetting();
	void ItemGetCheck(int* item_count1);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void CreateRootPoint();
	void AddScore(bool InputPin, int AddNum);
	void updateLocation();
	void setCarRotation();
	void UserConstructionScript();
	void UnknownFunc01();
	void LightFlickerTimeline__FinishedFunc();
	void LightFlickerTimeline__UpdateFunc();
	void Lamp_Flashing__FinishedFunc();
	void Lamp_Flashing__UpdateFunc();
	void Lamp_Flashing__on__EventFunc();
	void Lamp_Flashing__off__EventFunc();
	void Initialize_Event();
	void Finalize_Event();
	void StartMiniGame();
	void EndMiniGame();
	void RestartMiniGame();
	void BGMPlay(int Index);
	void BGMStop(int Index);
	void Reset_Start();
	void Reset_Info_Save();
	void SE_LampPlay(bool IsEnemy);
	void WinMiniGame();
	void LoseMiniGame();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Zoom();
	void Unzoom();
	void BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131(float AxisValue);
	void Right_Stick_X(float InputPin);
	void LightFlicker();
	void LightStop();
	void PushUp();
	void PushDown();
	void BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void RestartTick();
	void LapsCheck();
	void RotateArrow();
	void Play_Use_Coin();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void OnEndKihudaFlow();
	void UsedCoin();
	void GameStartEnd();
	void CancelMiniGame();
	void OnFinishedFadeEndGame();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void QteWidgetUpdate();
	void OnEndGameOver();
	void OnEndPerfect();
	void PlayForceFeedBack();
	void StartGame();
	void Event_EndMiniGame();
	void ExecuteUbergraph_BP_HighwayStar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
