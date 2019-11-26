#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BTL_AttackCommandsInfo.BTL_AttackCommandsInfo
// 0x0010

	enum class EBattleAttackInput : uint8_t
	{
		EBattleAttackInput__NewEnumerator6 = 0,
		EBattleAttackInput__NewEnumerator0 = 1,
		EBattleAttackInput__NewEnumerator1 = 2,
		EBattleAttackInput__NewEnumerator7 = 3,
		EBattleAttackInput__NewEnumerator8 = 4,
		EBattleAttackInput__EBattleAttackInput_MAX = 5
	};

struct FBTL_AttackCommandsInfo
{
	TArray<TEnumAsByte<EBattleAttackInput>>            Commands_3_4BEE966F44749044515042B652717E04;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
