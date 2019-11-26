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

// BlueprintGeneratedClass BP_ST_NewBucket.BP_ST_NewBucket_C
// 0x00A4 (0x0428 - 0x0384)
class ABP_ST_NewBucket_C : public ABP_MiniGame_ThrowTargetBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Bottom_Collision;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule_Collision;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow_Direction;                                          // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_SB_Score_C*                             BPC_SB_Score;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFallDown;                                                // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              FallDownDecisionAngle;                                    // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreImpactPoint;                                           // 0x03B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IncreaseDistanceSound;                                    // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NecessaryPlaySoundVelocity;                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVolumeDistance;                                        // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVolumeDistance;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVolumeVelocity;                                        // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingGame;                                             // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TArray<class ABP_MiniGame_ThrowObjectBase_C*>      Stones;                                                   // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              MaxRotateAngle;                                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentInterpRotaion;                                     // 0x03F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GiftName;                                                 // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecial;                                                // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class USoundAtomCue*                               SuccessSound;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               GiftNameArray;                                            // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ST_NewBucket.BP_ST_NewBucket_C");
		return ptr;
	}


	void GetGiftName(struct FName* Name);
	void ClearStones();
	void IsInStone(class ABP_MiniGame_ThrowObjectBase_C* Stone, bool* bResult);
	void FindStone(class ABP_MiniGame_ThrowObjectBase_C* Stone, bool* bResult);
	void UserConstructionScript();
	void RestartMiniGame();
	void BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ResetImpactPoint();
	void BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void DrawMiniGame();
	void LoseMiniGame();
	void ReceiveTick(float* DeltaSeconds);
	void WinMiniGame();
	void FallBottom();
	void EndMiniGame();
	void StartMiniGame();
	void ExecuteUbergraph_BP_ST_NewBucket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
