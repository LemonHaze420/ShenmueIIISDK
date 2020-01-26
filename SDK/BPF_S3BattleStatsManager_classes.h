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

// BlueprintGeneratedClass BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_S3BattleStatsManager_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C");
		return ptr;
	}


	class US3DerivedPlayerLevel* STATIC_BPF_GetPlayerLevelStat(class UObject* __WorldContext);
	class US3DerivedPlayerLevel* STATIC_BPF_GetPlayerAttackStat(class UObject* __WorldContext);
	bool STATIC_BPF_IsBattleStatsManagerValid(class UObject* __WorldContext);
	class US3BattleStatsManager* STATIC_BPF_GetBattleStatsManager(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
