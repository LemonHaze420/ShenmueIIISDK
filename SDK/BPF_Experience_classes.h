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

// BlueprintGeneratedClass BPF_Experience.BPF_Experience_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Experience_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Experience.BPF_Experience_C");
		return ptr;
	}


	bool STATIC_BPF_UpdateTrainingLevelUpData(class UObject* __WorldContext, struct FST_SparringResultLevelUpData* Player, struct FST_SparringResultLevelUpData* ATK, struct FST_SparringResultLevelUpData* VIT);
	void STATIC_BPF_InitializeTrainingLevelUpData(class UObject* __WorldContext, struct FST_SparringResultLevelUpData* Player, struct FST_SparringResultLevelUpData* ATK, struct FST_SparringResultLevelUpData* VIT);
	bool STATIC_BPF_ShouldShowExpHintPostTraining(class UObject* __WorldContext);
	void STATIC_BPF_CalcPlayerExpModifer_Energy_Lerp(float Min, float Max, class UObject* __WorldContext, float* Multiplier);
	void BPF_DebugLogPlayerExpModifier(class UObject* __WorldContext);
	void STATIC_BPF_CalcPlayerExpModifier_Energy(class UObject* __WorldContext, float* Multiplier);
	float STATIC_BPF_CalcPlayerExpModifier_Difficulty(class UObject* __WorldContext);
	float STATIC_BPF_CalcPlayerExpModifier(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
