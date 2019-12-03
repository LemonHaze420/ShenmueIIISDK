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
	void STATIC_DestroyNPC(const struct FGameplayTag& NPCID);
	void SpawnNPC(const struct FGameplayTag& NPCID, const struct FTransform& Transform);
	void STATIC_SetLocationNPC(const struct FGameplayTag& NPCID, const struct FVector& Location, bool EnableCollision);
	void STATIC_ShenfaActionIrori_Amimono();
	void STATIC_ShenfaActionYouIrori();
	void STATIC_ShenfaSpawnDoor2();
	void STATIC_ShenfaSpawnDoor1();
	void STATIC_ShenfaActionDaidokoro();
	void STATIC_ShenfaActionIsu();
	void STATIC_ShenfaActionIrori();
	void STATIC_SHE_Move();
	void STATIC_SHE_Hide();
	void STATIC_ShenfaDestroy();
	void STATIC_ShenfaSpawn();
	void ExecuteUbergraph_SL_Hakkason_NPC04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
