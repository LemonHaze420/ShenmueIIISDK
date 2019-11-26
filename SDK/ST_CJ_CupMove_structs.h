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

// UserDefinedStruct ST_CJ_CupMove.ST_CJ_CupMove
// 0x0002
struct FST_CJ_CupMove
{
	TEnumAsByte<EN_CJ_CupPos>                          Up_10_B3666F364B9DB761412A1E9639A6308F;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CJ_CupPos>                          Down_11_CF3120C44EA5099057D0D5AB937EF27B;                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
