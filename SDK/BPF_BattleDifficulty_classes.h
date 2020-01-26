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

// BlueprintGeneratedClass BPF_BattleDifficulty.BPF_BattleDifficulty_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_BattleDifficulty_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_BattleDifficulty.BPF_BattleDifficulty_C");
		return ptr;
	}


	void STATIC_BPF_GetPlayerBattleDifficultyParams(class UObject* __WorldContext, struct FST_BattleDifficultyParams* Out_Row);
	void STATIC_BPF_StepPlayerBattleDifficulty(TEnumAsByte<EUpOrDown> Direction, class UObject* __WorldContext);
	void STATIC_BPF_SetPlayerBattleDifficulty(TEnumAsByte<EBattleDifficulty> Difficulty, class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerBattleDifficulty(class UObject* __WorldContext, TEnumAsByte<EBattleDifficulty>* Difficulty);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
