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

// UserDefinedStruct ST_DLC_CheckTrophyData.ST_DLC_CheckTrophyData
// 0x0014
struct FST_DLC_CheckTrophyData
{
	int                                                CheckValueMin_9_FF4D46D845EA01D35B4CA8A2B86A75C0;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheckValueMax_10_71B7184F4C51B9073A09AD8C7DF61C5B;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SetValue_8_E7F6E3D54E6C910570EA6298882C12C4;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3AchievementType                                 TrophyID_13_63A7BE5E4768A63D91666EB60D4260D2;             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              DelayTime_16_EA6CA6554C91C2EEF35107B4E1EAC82A;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
