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

// BlueprintGeneratedClass BPC_BattleConditions.BPC_BattleConditions_C
// 0x0063 (0x0153 - 0x00F0)
class UBPC_BattleConditions_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              PlayerLoseHP_;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerLoseTama;                                           // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyLoseHP_;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnemyLoseTama;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KOEnemyCount;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<struct FName>                               KoEnemyIds;                                               // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class ABP_BTL_CharacterSpawnerBase_C*>      KOEnemies;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              TimeLimit;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBattleWinLoseResult>                  TimeoutResult;                                            // 0x0134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	int                                                WinByOneHit;                                              // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WinByOneKnockdown;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ForbidFlags;                                              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPlayerKnockdown;                                     // 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	int                                                DelayHPCheck;                                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPCheckDelayTime;                                         // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowHealing;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_BTL_PlayerStrafeSetting>            PlayerMovement;                                           // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_BTL_GoalTriggerRuleCombination>     DefeatEnemyWinRule;                                       // 0x0152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BattleConditions.BPC_BattleConditions_C");
		return ptr;
	}


	bool ShouldDelayHPCheckFor(TEnumAsByte<EBattleWinLoseResult> Result);
	void ConvertActorsToIDs();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_BattleConditions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
