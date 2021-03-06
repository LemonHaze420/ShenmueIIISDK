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

// BlueprintGeneratedClass BTL_CommandLibrary.BTL_CommandLibrary_C
// 0x00F1 (0x0229 - 0x0138)
class UBTL_CommandLibrary_C : public UBTL_CommandLibraryBase
{
public:
	TArray<struct FBTL_AttackTableRow>                 Attacks;                                                  // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  RegularCommandTable;                                      // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ComboTable;                                               // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBTL_ComboRow>                       Combos;                                                   // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBTL_AttackCommandsInfo>             ComboCommands;                                            // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBTL_AttackCommandsInfo>             AttackCommands;                                           // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, int>                            AttackToIndex;                                            // 0x0188(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, int>                            SkillSortValues;                                          // 0x01D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInitialized;                                             // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTL_CommandLibrary.BTL_CommandLibrary_C");
		return ptr;
	}


	TMap<unsigned char, struct FName> MakeDefaultByteToNameMap();
	bool IsAttackEquippable(struct FName* AttackID);
	void GetAllAttacks(TArray<struct FName>* Attacks);
	bool Initialize();
	void GetAllSkillitemList(TArray<struct FName>* AllItems);
	void GetSkillSortInt(const struct FName& Key, int* SortInt);
	void MakeSkillCommandSortInt(const struct FName& SkillItem, int* SortInt1);
	void FindAttackEquipSetting(const struct FName& Attack, EBTL_AutoOnOff* Setting);
	void FindMatchingCombo(TArray<struct FName> Attacks, int* FoundIndex);
	void FindAttackInputsWithCombo(const struct FName& AttackID, TArray<struct FName>* InputEvents, EBTL_HoldInputType* Hold, bool* Found);
	void FindAttackCommand(const struct FName& Attack, TArray<TEnumAsByte<EBattleAttackInput>>* OutCommand, EBTL_HoldInputType* Hold, bool* bFound);
	void FindAttackInputs(const struct FName& Attack, TArray<struct FName>* InputEvents, EBTL_HoldInputType* Hold, bool* Found);
	void FindAttackByItemName(const struct FName& SkillItem, struct FName* Attack, bool* bFound);
	void StringToCommandArray(const struct FString& S, TArray<TEnumAsByte<EBattleAttackInput>>* Commands);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
