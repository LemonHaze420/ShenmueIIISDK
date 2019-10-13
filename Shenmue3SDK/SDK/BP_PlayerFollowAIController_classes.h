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

// BlueprintGeneratedClass BP_PlayerFollowAIController.BP_PlayerFollowAIController_C
// 0x0030 (0x0468 - 0x0438)
class ABP_PlayerFollowAIController_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UBPC_Player_Lead_C*                          LeadComponent;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_S3_Character_Adventure_C*                PlayerPawn;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_NPCLeadManager_C*                        LeadNPCAI;                                                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PlayerFollowPawn_C*                      SpawnedPawn;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MoveTargetActor;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerFollowAIController.BP_PlayerFollowAIController_C");
		return ptr;
	}


	void SkipCurrentAutoMove();
	void StopAutoMove();
	void UnPause();
	void Pause();
	void RequestAutoMove();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Initialize(class ABP_NPCLeadManager_C* LeadNPCAI, class ABP_S3_Character_Adventure_C* PlayerPawn);
	void UnpossessAndDestroy();
	void ExecuteUbergraph_BP_PlayerFollowAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
