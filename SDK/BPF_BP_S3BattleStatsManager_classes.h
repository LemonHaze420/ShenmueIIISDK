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

// BlueprintGeneratedClass BPF_BP_S3BattleStatsManager.BPF_BP_S3BattleStatsManager_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_BP_S3BattleStatsManager_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_BP_S3BattleStatsManager.BPF_BP_S3BattleStatsManager_C");
		return ptr;
	}


	void STATIC_BPF_GetBPS3BattleStatsManager(class UObject* __WorldContext, class UBP_S3BattleStatsManager_C** BPManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
