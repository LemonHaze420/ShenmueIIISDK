#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

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
struct FBTL_AttackCommandsInfo
{
	TArray<TEnumAsByte<SDK::EBattleAttackInput>>            Commands_3_4BEE966F44749044515042B652717E04;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
