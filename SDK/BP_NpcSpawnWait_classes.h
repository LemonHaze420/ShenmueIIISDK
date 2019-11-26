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

// BlueprintGeneratedClass BP_NpcSpawnWait.BP_NpcSpawnWait_C
// 0x0031 (0x0359 - 0x0328)
class ABP_NpcSpawnWait_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SaveFadeTime;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FGameplayTag                                SaveNPCID;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WaitSpawnNpc;                                             // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class AS3Character*                                SaveNpcObject;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitNpcAlpha;                                             // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NpcSpawnWait.BP_NpcSpawnWait_C");
		return ptr;
	}


	void CheckNpcAlpha(bool* NPCVisible);
	void InitSet(const struct FGameplayTag& NPCID, float ChangeSpawnFadeTime, bool CheckNpcAlpha);
	void UserConstructionScript();
	void EndNpcSpawnWait();
	void NPCSpawn(const struct FGameplayTag& NPCID);
	void ExecuteUbergraph_BP_NpcSpawnWait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
