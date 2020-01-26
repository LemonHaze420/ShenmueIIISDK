#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AttentionLoadLevel.BP_AttentionLoadLevel_C
// 0x0070 (0x0398 - 0x0328)
class ABP_AttentionLoadLevel_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Collision;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       LevelLoadID;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               LoadLevelNameList;                                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             AttentionPosList;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FadeTime;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              DummyVisibleActor;                                        // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     AttentionPos;                                             // 0x0380(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class ABP_S3AttentionController_C*                 AttentionController;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttentionLoadLevel.BP_AttentionLoadLevel_C");
		return ptr;
	}


	void CheckDirection(const struct FVector& HitLocation, bool* Enabled);
	void GetNearAttentionPos(const struct FVector& AttentionPos, struct FVector* NearPos);
	void SetEnabledControl(bool Enabled);
	void UserConstructionScript();
	void OnFinishedStartFadeOut();
	void OnFinishedLoadLevel(const struct FName& ID);
	void OnStartAttention(const struct FVector& AttentionPos);
	void OnFinishedLevelUnloadEndGame(const struct FName& ID);
	void OnEndAttention();
	void SetDummyActorVisible(bool Condition);
	void OnExitAttention();
	void ForceStartAttention(const struct FVector& AttentionPos);
	void ExecuteUbergraph_BP_AttentionLoadLevel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
