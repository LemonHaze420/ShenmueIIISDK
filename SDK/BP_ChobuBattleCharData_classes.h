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

// BlueprintGeneratedClass BP_ChobuBattleCharData.BP_ChobuBattleCharData_C
// 0x0068 (0x0098 - 0x0030)
class UBP_ChobuBattleCharData_C : public UPrimaryDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
	class UAnimMontage*                                Attacks;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AttackM;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AttackL;                                                  // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AirAttackS;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AirAttackM;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AirAttackL;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         BalanceTableRow;                                          // 0x0080(0x0010) (Edit, BlueprintVisible)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChobuBattleCharData.BP_ChobuBattleCharData_C");
		return ptr;
	}


	class UAnimMontage* SearchAttackMontage(EBattleAnimStrength Attack, bool Air);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
