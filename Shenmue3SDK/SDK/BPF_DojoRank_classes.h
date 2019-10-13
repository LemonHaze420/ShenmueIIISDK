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

// BlueprintGeneratedClass BPF_DojoRank.BPF_DojoRank_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_DojoRank_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_DojoRank.BPF_DojoRank_C");
		return ptr;
	}


	void STATIC_BPF_GetDojoRankIndex(TEnumAsByte<EDojoPlace> Dojo, class UObject* __WorldContext, int* Index);
	void STATIC_BPF_GetPlayerDojoRank(TEnumAsByte<EDojoPlace> Dojo, class UObject* __WorldContext, ES3DojoRank* Rank);
	bool STATIC_BPF_PlayerDojoRankGreaterOrEqual(const struct FST_DojoRankRequirement& Requirement, class UObject* __WorldContext);
	void STATIC_BPF_SetPlayerDojoRank(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank, class UObject* __WorldContext);
	bool STATIC_BPF_RankGreaterOrEqual(const struct FST_DojoRankRequirement& Requirement, class UObject* __WorldContext, TMap<TEnumAsByte<EDojoPlace>, ES3DojoRank>* RanksEarned);
	void STATIC_BPF_CalcDojoRankAsCrossDojoInt(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank, class UObject* __WorldContext, int* ComparisonValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
