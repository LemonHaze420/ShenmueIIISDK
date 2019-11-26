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

// BlueprintGeneratedClass SL_Hakkason_NPC04.SL_Hakkason_NPC04_C
// 0x0010 (0x0340 - 0x0330)
class ASL_Hakkason_NPC04_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	struct FName                                       CharacterID;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_NPC04.SL_Hakkason_NPC04_C");
		return ptr;
	}


	void SetRotationNPC(const struct FGameplayTag& NPCID, const struct FRotator& Rotation);
	void DestroyNPC(const struct FGameplayTag& NPCID);
	void SpawnNPC(const struct FGameplayTag& NPCID, const struct FTransform& Transform);
	void SetLocationNPC(const struct FGameplayTag& NPCID, const struct FVector& Location, bool EnableCollision);
	void ShenfaActionIrori_Amimono();
	void ShenfaActionYouIrori();
	void ShenfaSpawnDoor2();
	void ShenfaSpawnDoor1();
	void ShenfaActionDaidokoro();
	void ShenfaActionIsu();
	void ShenfaActionIrori();
	void SHE_Move();
	void SHE_Hide();
	void ShenfaDestroy();
	void ShenfaSpawn();
	void ExecuteUbergraph_SL_Hakkason_NPC04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
