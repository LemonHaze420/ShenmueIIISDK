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

// BlueprintGeneratedClass BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C
// 0x0028 (0x0118 - 0x00F0)
class UBPC_BattleSoftlockSettings_C : public UActorComponent
{
public:
	bool                                               UseSoftlock;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                MinLevelDifference;                                       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentPerlevel;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentBonus;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnderlevelMultiplier;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverlevelMultiplier;                                      // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentCapUnder;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentCapOver;                                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AIStepUpThreshold;                                        // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AIStepDownThreshold;                                      // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C");
		return ptr;
	}


	int AdjustForDifficultySetting(int PlayerLevelsAbove);
	void CalcEnemyTeamAdjust(int LevelRef, int* MaxSimultaneousAttacks);
	void CalcEnemyAdjust(int PlayerLevelAbove, int* AIStep);
	struct FString DebugPrintEffects(int RelativeLevel, float InDamage, float OutDamage, int Adjust, bool Short);
	void PrintExampleStats();
	void CalcPlayerAdjust(int PlayerLevelsAbove, bool* Apply, float* InDamageRatio, float* OutDamageRatio);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
