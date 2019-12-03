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

// BlueprintGeneratedClass BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C
// 0x0010 (0x0120 - 0x0110)
class UBPC_BTL_CommandSolverBase_C : public UBTL_CommandSolver
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (Transient, DuplicateTransient)
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BTL_CommandSolverBase.BPC_BTL_CommandSolverBase_C");
		return ptr;
	}


	bool STATIC_FindCurrentComboInputs(const struct FName& AttackID, TArray<struct FName>* Inputs, EBTL_HoldInputType* HoldInput);
	void Init();
	void STATIC_FindAttackInputsIncludingCombo(const struct FName& Attack, TArray<struct FName>* InputEvents, bool* Found);
	void FindAttackCommand(const struct FName& Attack, TArray<TEnumAsByte<EBattleAttackInput>>* OutCommand, bool* bFound);
	void STATIC_FindAttackInputs(const struct FName& Attack, TArray<struct FName>* InputEvents, bool* Found);
	void FindSpecialAttackByItemName(const struct FName& SkillName, struct FName* Attack, bool* bFound);
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_BTL_CommandSolverBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
