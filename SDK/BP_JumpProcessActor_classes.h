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

// BlueprintGeneratedClass BP_JumpProcessActor.BP_JumpProcessActor_C
// 0x005C (0x0384 - 0x0328)
class ABP_JumpProcessActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // 0x0338(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PlayerRotation;                                           // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NotUseEyecatch;                                           // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FName                                       ForceEyecatchName;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FST_JumpTimeOptions                         GameTimeOptions;                                          // 0x0358(0x0008) (Edit, BlueprintVisible)
	class ABP_S3_Character_Adventure_C*                Character_Adventure;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                State;                                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MIN_EYECATCH_TIME;                                        // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameplayTag>                        NPCTags;                                                  // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WaitTime;                                                 // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JumpProcessActor.BP_JumpProcessActor_C");
		return ptr;
	}


	void AddGameTime(float Time);
	void STATIC_CheckNPCSpawn(bool* Success);
	void STATIC_UserConstructionScript();
	void BindNPCSpawn();
	void STATIC_SpawnNPC(const struct FGameplayTag& NPCID);
	void STATIC_UnspawnNPC(const struct FGameplayTag& NPCID);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_JumpProcessActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
