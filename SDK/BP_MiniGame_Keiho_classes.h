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

// BlueprintGeneratedClass BP_MiniGame_Keiho.BP_MiniGame_Keiho_C
// 0x013F (0x0880 - 0x0741)
class ABP_MiniGame_Keiho_C : public ABP_MiniGame_KungFuBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Collision;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PartnerCollision;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             KeihoDecal;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ChikenMesh;                                               // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        mokujin;                                                  // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WoodStick;                                                // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PartnerMesh;                                              // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        _3DUI;                                                     // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_InitPartnerCollision_Rate_4494E622426DB6EEF55AC4A4224B2406;// 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_InitPartnerCollision__Direction_4494E622426DB6EEF55AC4A4224B2406;// 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_InitPartnerCollision;                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationValue;                                            // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationAddValue;                                         // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputRightHorizontal;                                     // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputRightVertical;                                       // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StickRotation;                                            // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeRange;                                                // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChangeValueWaitTime;                                      // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DirFlag;                                                  // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07D1(0x0003) MISSED OFFSET
	struct FVector                                     DirVector;                                                // 0x07D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InputLeftHorizontal;                                      // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputLeftVertical;                                        // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UABP_MiniGame_Keiho_C*                       RefPlayerAnimInstance;                                    // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseGroundPos;                                            // 0x07F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetDirection;                                          // 0x07FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UWBP_MiniGameRotateIcon_C*                   RefKeihoWidget;                                           // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEnabledRyoMove;                                          // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	float                                              BaseSpeed;                                                // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RyoMoveSpeedRate;                                         // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsePartner;                                             // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	class UABP_MiniGame_Maho_Partner_C*                RefPartnerAnimInstance;                                   // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeRangeAlpha;                                           // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angledifference;                                          // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDifficulty;                                        // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	TArray<float>                                      SafeRangeList;                                            // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStartGame;                                               // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0849(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         RefSafeSEPlayer;                                          // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         RefOutSEPlayer;                                           // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHelp;                                                    // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0861(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeihoEnd;                                                // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	class ABP_MiniGame_KeihoPlayer_C*                  RefMiniGamePlayer;                                        // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PartnerCollisionRadius;                                   // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PartnerCollisionPosZ;                                     // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Keiho.BP_MiniGame_Keiho_C");
		return ptr;
	}


	class UMeshComponent* GetClothMeshComponent();
	void STATIC_UpdateRotateAngle();
	void InitAsyncLoad(bool* dummy);
	void STATIC_UpdateSE(bool InRange);
	void UpdateKungFuAccumulation(float StickRot);
	void STATIC_GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName);
	void STATIC_SetNPCVisible(bool InputPin);
	void UpdatePartnerAnim(float PowerRate);
	float GetDistanceFromCenter(float Value);
	void STATIC_UpdateAddValue();
	void UpdateDrawLine(float DeltaSeconds);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UpdateRyoMove();
	void UserConstructionScript();
	void Timeline_InitPartnerCollision__FinishedFunc();
	void Timeline_InitPartnerCollision__UpdateFunc();
	void Event_FootPrintL();
	void StartMiniGame();
	void Event_FootPrintR();
	void Event_RyoUpdateFade();
	void ClothesChangedCC(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void InitPartnerCollision();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_InputRightStickHorizontal(float Value);
	void STATIC_InputRightStickVertical(float Value);
	void StartGame();
	void STATIC_InputLeftStickVertical(float InputLeftVertical);
	void STATIC_InputLeftStickHorizontal(float InputLeftHorizontal);
	void AfterFadeInEvent();
	void Event_StopRyoMoveForTurn();
	void STATIC_Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State);
	void STATIC_SetKungFuDifficulty(int Level);
	void TimeUpEvent();
	void EndMiniGame();
	void OnTimeUp();
	void PlayScriptRabel();
	void Event_OpenHelp();
	void ExecuteUbergraph_BP_MiniGame_Keiho(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
