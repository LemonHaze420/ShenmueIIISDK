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

// UserDefinedStruct ST_SubEvent_CheckShopEvent.ST_SubEvent_CheckShopEvent
// 0x0038
struct FST_SubEvent_CheckShopEvent
{
	int                                                CheckFlagNo_2_1CE86B3541DE88130731D3A952B6240A;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        CheckFlagValue_15_297A785E4C7E874572CEA6B49E331F0C;       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_SubEvent_CheckItem>              CheckSTItemList_10_73A7FBDF45FCFBFD4A8F8BAE2878D8F2;      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        UpdateMemoFlagList_9_5C82F5AB4C3C46EE8EF326918E1ABEA1;    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
