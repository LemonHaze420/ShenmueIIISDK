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

// BlueprintGeneratedClass BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C
// 0x006A (0x03DA - 0x0370)
class ABP_SkillDisplayScene_Battle_C : public ABP_SkillDisplayScene_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundCube;                                           // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyContainer_C*                      AnimNotifyContainer;                                      // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_BTL_TrailRenderer_C*                    BPC_BTL_TrailRenderer;                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_BTL_CommandSolverBase_C*                CommandSolver;                                            // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       LastPlayAttack;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UABP_BTL_SkillDisplayCharacter_C*            ABP;                                                      // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBTL_AttackDBAsset*                          AttackDBAsset;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaitForLoad;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHadOneFrame;                                             // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bQueuedSnapshot;                                          // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C");
		return ptr;
	}


	class APawn* GetOwningPlayerPawn();
	bool STATIC_IsLoading();
	void STATIC_SetGuardMode(bool Enabled);
	float STATIC_CalculateCoolStartPosition(class UAnimMontage* InputPin);
	float STATIC_CalculateSnapshotPosition(class UAnimMontage* InputPin);
	void CaptureSingleFrame(const struct FName& Item, bool* Success);
	void ResetRotation();
	void STATIC_StopMotion(bool* bSuccess);
	void PlayMotionForItem(const struct FName& Skill, bool* bSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_SkillDisplayScene_Battle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
