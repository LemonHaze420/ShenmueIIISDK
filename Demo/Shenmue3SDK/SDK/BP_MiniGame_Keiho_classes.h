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

// BlueprintGeneratedClass BP_MiniGame_Keiho.BP_MiniGame_Keiho_C
// 0x0127 (0x0850 - 0x0729)
class ABP_MiniGame_Keiho_C : public ABP_MiniGame_KungFuBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Collision;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PartnerCollision;                                         // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             KeihoDecal;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ChikenMesh;                                               // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mokujin;                                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WoodStick;                                                // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PartnerMesh;                                              // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        _3DUI;                                                    // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationValue;                                            // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationAddValue;                                         // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputRightHorizontal;                                     // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputRightVertical;                                       // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StickRotation;                                            // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeRange;                                                // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChangeValueWaitTime;                                      // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DirFlag;                                                  // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07A9(0x0003) MISSED OFFSET
	struct FVector                                     DirVector;                                                // 0x07AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InputLeftHorizontal;                                      // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputLeftVertical;                                        // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UABP_MiniGame_Keiho_C*                       RefPlayerAnimInstance;                                    // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseGroundPos;                                            // 0x07C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetDirection;                                          // 0x07D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UWBP_MiniGameRotateIcon_C*                   RefKeihoWidget;                                           // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEnabledRyoMove;                                          // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	float                                              BaseSpeed;                                                // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RyoMoveSpeedRate;                                         // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsePartner;                                             // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class UABP_MiniGame_Maho_Partner_C*                RefPartnerAnimInstance;                                   // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeRangeAlpha;                                           // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angledifference;                                          // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentDifficulty;                                        // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	TArray<float>                                      SafeRangeList;                                            // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStartGame;                                               // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         RefSafeSEPlayer;                                          // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         RefOutSEPlayer;                                           // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHelp;                                                    // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKeihoEnd;                                                // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	class ABP_MiniGame_KeihoPlayer_C*                  RefMiniGamePlayer;                                        // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Keiho.BP_MiniGame_Keiho_C");
		return ptr;
	}


	class UMeshComponent* GetClothMeshComponent();
	void UpdateRotateAngle();
	void CalcStartTime(float DeltaSeconds);
	void InitAsyncLoad(bool* dummy);
	void UpdateSE(bool InRange);
	void UpdateKungFuAccumulation(float StickRot);
	void GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState>* State, struct FName* labelName);
	void SetNPCVisible(bool InputPin);
	void UpdatePartnerAnim(float PowerRate);
	float GetDistanceFromCenter(float Value);
	void UpdateAddValue();
	void UpdateDrawLine(float DeltaSeconds);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UpdateRyoMove();
	void UserConstructionScript();
	void Event_FootPrintL();
	void Event_FootPrintR();
	void Event_RyoUpdateFade();
	void ClothesChangedCC(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void InputRightStickHorizontal(float Value);
	void InputRightStickVertical(float Value);
	void StartGame();
	void InputLeftStickVertical(float InputLeftVertical);
	void InputLeftStickHorizontal(float InputLeftHorizontal);
	void AfterFadeInEvent();
	void StartMiniGame();
	void Event_StopRyoMoveForTurn();
	void Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State);
	void InputAction_Bottom();
	void InputAction_Top();
	void SetKungFuDifficulty(int* Level);
	void TimeUpEvent();
	void OnTimeUp();
	void PlayScriptRabel();
	void Event_OpenHelp();
	void EndMiniGame();
	void ExecuteUbergraph_BP_MiniGame_Keiho(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
