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

// UserDefinedStruct ST_SelectSellItem.ST_SelectSellItem
// 0x0024
struct FST_SelectSellItem
{
	TArray<int>                                        SelectSellItemID_3_C1B12BE4411158B84085D0B5886035B3;      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ItemNum_7_E1F8B2104A5B0D3222F3CE98C8246FA0;               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PageTotalPrice_10_FFD9EF754419C943508FE5A235CE7170;       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
