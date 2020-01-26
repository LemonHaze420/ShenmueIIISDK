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

// UserDefinedStruct ST_SubEvent_CheckItem.ST_SubEvent_CheckItem
// 0x0018
struct FST_SubEvent_CheckItem
{
	TArray<int>                                        CheckItemIDList_3_39283E7541E7BEEA51283DA8B223A7E8;       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SetValueFlagNo_10_B686CD7E4F4E0B24824B2EBEFBD1474A;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UpdateMemoFlagNo_11_DF53DEC44B02A3E262D7C0ABD4C98175;     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
