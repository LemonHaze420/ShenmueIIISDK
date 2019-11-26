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

// BlueprintGeneratedClass BP_Otoshidama_Base.BP_Otoshidama_Base_C
// 0x0237 (0x0840 - 0x0609)
class ABP_Otoshidama_Base_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UChildActorComponent*                        GamblingSign;                                             // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBetSeet_C*                      BPC_MiniGameBetSeet;                                      // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WallSoundRight;                                           // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WallSoundLeft;                                            // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             bet_zoom_target;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             zoom_target;                                              // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        dummy_nail;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WoodSound;                                                // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               body_bottom;                                              // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               body_left;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               body_right;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Body;                                                     // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ball_end_pos;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             camera_start_pos;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             camera_end_pos;                                           // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             side_check;                                               // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               left_hit;                                                 // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               right_hit;                                                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ball_start_pos;                                           // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Hand_MeshRoot;                                            // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               fall_area;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             pin;                                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StandMesh;                                                // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Stand;                                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_StartCamera_LerpRate_72450F3442AFA787BAEC49B5C017CCE9;// 0x0708(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_StartCamera__Direction_72450F3442AFA787BAEC49B5C017CCE9;// 0x070C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_StartCamera;                                     // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     init_spawn_location;                                      // 0x0718(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     init_camera_location;                                     // 0x0724(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_playing;                                               // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_game_end;                                              // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_finished;                                              // 0x0732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_release;                                               // 0x0733(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               right_hit_stop;                                           // 0x0734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               left_hit_stop;                                            // 0x0735(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               right_down;                                               // 0x0736(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               left_down;                                                // 0x0737(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               up_down;                                                  // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               down_down;                                                // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x073A(0x0002) MISSED OFFSET
	int                                                hit_count;                                                // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                now_play_count;                                           // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camera_offset;                                            // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_OtoshiDamaInfo                          Info;                                                     // 0x0748(0x0030) (Edit, BlueprintVisible)
	class ABP_OD_ball_Test_C*                          current_ball;                                             // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_OD_Fence_C*>                      fence_array;                                              // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      left_axis;                                                // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_OD_Nail_C*>                       nail_list;                                                // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                hit_result;                                               // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	TArray<class ABP_OD_CenterPocket_C*>               center_pocket;                                            // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              hand_rate;                                                // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_my_create_nail;                                        // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	float                                              finish_wait_time;                                         // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_OD_Type>                             OtoshidamaType;                                           // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	float                                              CurrentMinHeight;                                         // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateCameraHeight;                                      // 0x07DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	struct FVector                                     InitBallStartPos;                                         // 0x07E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitHandMeshRootPos;                                      // 0x07EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmMoveSpeed;                                             // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStartCamera;                                            // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	int                                                HitPocketIndex;                                           // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftStick_left;                                           // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftStick_right;                                          // 0x0805(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftStick_up;                                             // 0x0806(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftStick_down;                                           // 0x0807(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 RefWidget;                                                // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     DummyNailLoadID;                                          // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCasinoType;                                             // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class UMaterialInterface*                          ChangeFenceMaterial;                                      // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstance*>                   CasinoPocketMaterialList;                                 // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Otoshidama_Base.BP_Otoshidama_Base_C");
		return ptr;
	}


	void GetRewardFeed(ES3RewardType* Type);
	void GetZoomTarget(class USceneComponent** newParam);
	void GetBetZoomTarget(class USceneComponent** newParam);
	void GetCamera(class UCameraComponent** newParam);
	void GetCasinoMaterial(int Index, class UMaterialInstance** Material);
	void SetUpDummyNailMesh();
	void InitializePocket();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void InitAsyncLoad(bool* dummy);
	class UMeshComponent* GetClothMeshComponent();
	struct FVector GetCameraPosition();
	void SetBoardMaterial();
	void GetMiniGameHelpName(struct FString* String);
	void GetBottomPocketMaterial(int Index, class UMaterialInstance** return_value);
	void GetBottomPocketCount(int* Output);
	void GetBottomPocket(int Dimension_1, int* Output);
	void UpdateHandMotion();
	void SetHandMotion(float hand_rate);
	void CenterPocektHit(int hit_result);
	void HitCheck();
	void DestroyNail();
	void CreateNail();
	void Finalize_Check();
	void BottomPocketHit(int hit_index);
	bool GetDataBaseValue(const struct FName& row_name, int* Value);
	void SpawnBall(class ABP_OD_ball_Test_C** OutputPin);
	void UserConstructionScript();
	void Timeline_StartCamera__FinishedFunc();
	void Timeline_StartCamera__UpdateFunc();
	void Action_Button_Pushed();
	void D_Right_Pushed();
	void D_Left_Pushed();
	void Back_Pushed();
	void X_Button_Pushed();
	void Input_Update();
	void D_Right_Released();
	void D_Left_Released();
	void D_Down_Released();
	void D_Down_Pushed();
	void D_Up_Released();
	void D_Up_Pushed();
	void LeftStick_X_Axis(float Axis_Value);
	void Left_Stick_Y_Axis(float Axis_Value);
	void Initialize();
	void Finalize();
	void FinalizeReset();
	void StartMiniGame();
	void RestartMiniGame();
	void EndMiniGame();
	void SetChooseCameraTransform();
	void OnFinishedFade();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void GameStart();
	void GameEnd();
	void BeginHitEvent(int hit_index);
	void bAllReset();
	void BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnTalkEnd();
	void CenterPocektHitEvent(int hit_element);
	void DestroyNailEvent(class ABP_OD_Nail_C* nail);
	void BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void BindTalkEndEvent();
	void CreateNailEvent();
	void Otoshidama_End(bool is_success);
	void Set_Body_Collision_Enable(bool is_enable);
	void BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SetEnabledPlayerEvent(bool Enabled);
	void RestartGamePlay();
	void Event_CameraUpdate();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Event_StopStartCamera();
	void CancelMiniGame();
	void ChangedClothes(TScriptInterface<class US3ClothInterface>* Interface, struct FName* CharaName);
	void DelayedGameEnd();
	void DelayedInitialize();
	void EnabledPlayerOnDecide();
	void ExecuteUbergraph_BP_Otoshidama_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
