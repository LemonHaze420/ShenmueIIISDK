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

// BlueprintGeneratedClass BP_ST_Bucket.BP_ST_Bucket_C
// 0x0064 (0x03E8 - 0x0384)
class ABP_ST_Bucket_C : public ABP_MiniGame_ThrowTargetBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule_Collision;                                        // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow_Direction;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_SB_Score_C*                             BPC_SB_Score;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFallDown;                                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              FallDownDecisionAngle;                                    // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreInpactPoint;                                           // 0x03B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IncreaseDistanceSound;                                    // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NecessaryPlaySoundVelocity;                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVolumeDistance;                                        // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVolumeDistance;                                        // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVolumeVelocity;                                        // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingGame;                                             // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	TArray<class ABP_MiniGame_ThrowObjectBase_C*>      Stones;                                                   // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ST_Bucket.BP_ST_Bucket_C");
		return ptr;
	}


	void IsInStone(class ABP_MiniGame_ThrowObjectBase_C* Stone, bool* bResult);
	void FindStone(class ABP_MiniGame_ThrowObjectBase_C* Stone, bool* bResult);
	void UserConstructionScript();
	void RestartMiniGame();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DrawMiniGame();
	void LoseMiniGame();
	void WinMiniGame();
	void EndMiniGame();
	void StartMiniGame();
	void ResetInpactPoint();
	void BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_ST_Bucket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
