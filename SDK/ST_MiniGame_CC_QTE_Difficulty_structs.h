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

// UserDefinedStruct ST_MiniGame_CC_QTE_Difficulty.ST_MiniGame_CC_QTE_Difficulty
// 0x0020
struct FST_MiniGame_CC_QTE_Difficulty
{
	float                                              GameTime_10_3C0DD6814BB630399214F78FC4D294E4;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseTime_5_1C4C2F384314334495CE989C07D1A718;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxQTEButton_14_0394C98D4ACEE91FD55C1A8ED6592575;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReplayFailedCommand_17_3E8DBD434E750267814AC783B0DE3CB8;  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AbsolutelyChangeCommand_20_30FD1E05442C0EA86AE6CE8C409AC0D8;// 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<struct FST_MiniGame_CC_DifficultyData>      DifficultyList_6_3B5CCB04483523C9E5DD218575C1396E;        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
