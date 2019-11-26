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

// BlueprintGeneratedClass BPF_BattleAdvice.BPF_BattleAdvice_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_BattleAdvice_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_BattleAdvice.BPF_BattleAdvice_C");
		return ptr;
	}


	void STATIC_BPF_FilterOutBattleAdvice(class UObject* __WorldContext, TArray<TEnumAsByte<EBattleAdvice>>* TargetList, TArray<TEnumAsByte<EBattleAdvice>>* Remove);
	bool STATIC_BPF_IsBattleAdviceRelevant(TEnumAsByte<EBattleAdvice> Advice, class UObject* __WorldContext);
	void STATIC_BPF_GetRelevantBattleAdvice(class UObject* __WorldContext, TArray<TEnumAsByte<EBattleAdvice>>* SortedAdvice);
	void STATIC_BPF_GetMostRelevantBattleAdvice(class UObject* __WorldContext, TEnumAsByte<EBattleAdvice>* newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
