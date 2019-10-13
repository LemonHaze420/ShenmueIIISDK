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

// BlueprintGeneratedClass BP_MiniGame_Maho.BP_MiniGame_Maho_C
// 0x0111 (0x083A - 0x0729)
class ABP_MiniGame_Maho_C : public ABP_MiniGame_KungFuBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Collision;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ChickenRunCollisionRyo;                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ChickenRunCollisionPartner;                               // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           RyoCollision;                                             // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PartnerCollision;                                         // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MahoMesh;                                                 // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             MahoDecal;                                                // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Stick;                                                    // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SafeLineInside;                                           // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SafeLineRoot;                                             // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PartnerMesh;                                              // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mokujin;                                                  // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timiline_SafeBar_Alpha_DC5D6AB54A855F697FEE4098690EB6C5;  // 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timiline_SafeBar__Direction_DC5D6AB54A855F697FEE4098690EB6C5;// 0x079C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timiline_SafeBar;                                         // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PowerRate;                                                // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendSinNum;                                              // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSafeRange;                                             // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ButtonValue;                                              // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SinSpeed;                                                 // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddPowerRate;                                             // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowAnimBeginRate;                                         // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFallDown;                                               // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              HeartCountValue;                                          // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsePartner;                                             // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugPlayStandalone;                                     // 0x07CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnZoomCamera;                                            // 0x07CE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x07CF(0x0001) MISSED OFFSET
	struct FVector                                     CameraInitialLocation;                                    // 0x07D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               SafeBarEnabled;                                           // 0x07DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UCurveFloat*                                 EmphasisCurve;                                            // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            RefSafeBarMaterialList;                                   // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                SafeLineList;                                             // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     NormalCameraPos;                                          // 0x0808(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PartnerCameraPos;                                         // 0x0814(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UABP_MiniGame_Maho_Partner_C*                RefPartnerAnimInstance;                                   // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderWarningStartRate;                                    // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledGameUpdate;                                       // 0x082C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	float                                              MinSafeRange;                                             // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseSafeRate;                                             // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFirst;                                                   // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTalkingNPC;                                             // 0x0839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Maho.BP_MiniGame_Maho_C");
		return ptr;
	}


	void InitAsyncLoad(bool* dummy);
	void UpdateMahoAccumulation();
	void SetDifficulty(int Level);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState>* State, struct FName* labelName);
	bool CanGameUpdate();
	void UpdateUILine();
	void SetNPCVisible(bool Visible);
	void UpdateAnim();
	void UserConstructionScript();
	void Timiline_SafeBar__FinishedFunc();
	void Timiline_SafeBar__UpdateFunc();
	void StartMiniGame();
	void EndMiniGame();
	void InputAction_ButtonRight();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UpdateElapsedTime(float* DeltaSeconds);
	void ReStartPlaying();
	void TransEndFallDown();
	void InitializeAnimValue();
	void StartGame();
	void AfterFadeInEvent();
	void SetEnabledSafeLine(bool Enabled);
	void Event_OnChangeAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State);
	void SetKungFuDifficulty(int* Level);
	void TimeUpEvent();
	void OnTimeUp();
	void PlayScriptMaho();
	void ExecuteUbergraph_BP_MiniGame_Maho(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
