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

// UserDefinedStruct ST_RewardInfo.ST_RewardInfo
// 0x0030
struct FST_RewardInfo
{
	ES3DownloadableContentId                           KeyContent_28_299998CB46F0B0FFC5D3618CB79943AD;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3RewardType                                      Type_9_CF34A4CE442243337F836197BBB53B0A;                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                FeedEventFlag_17_6AD5AE9E46B4804E3C094CAC00856A6E;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubFlag_22_3C51C78F44B059E0044578A2800295D2;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FST_RewardItemInfo>                  ItemIds_18_59956EE841E701999AAA9F9FC1DEDD36;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Memo_25_4157C6EF468C15CCF3CC6182DB45351D;                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
