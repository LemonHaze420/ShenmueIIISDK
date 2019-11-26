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

// UserDefinedStruct ST_CCBattle_Set.ST_CCBattle_Set
// 0x0031
struct FST_CCBattle_Set
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_CCBattle_Set.ST_CCBattle_Set.Opponent_11_C02E68E84132F08821373C95958FDC05
	struct FName                                       StageName_9_2A8FAF904D9B05E7410EBA906CDD990B;             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CCBattleMusic>                      Music_14_51AE587E47462B81A474FA865F56643D;                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
