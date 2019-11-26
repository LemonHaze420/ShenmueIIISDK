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

// UserDefinedStruct ST_DojoRankTableRow.ST_DojoRankTableRow
// 0x0002
struct FST_DojoRankTableRow
{
	TEnumAsByte<ES3DojoRank>                           Hakkason_2_BB7131314BB7ED03AE0E148CF9007B2C;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3DojoRank>                           Chobu_4_DA2A53914E9B47B47A6E29A1AC04E85F;                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
