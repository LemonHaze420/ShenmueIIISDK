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

// UserDefinedStruct ST_SparringResultLevelUpData.ST_SparringResultLevelUpData
// 0x0014
struct FST_SparringResultLevelUpData
{
	int                                                PreviousLevel_9_3F6484CA4FBD0D59C06631A6AF578CF2;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviousProgressRatio_10_D1522FF145359FC1314A93A3A91D9523;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentLevel_8_493801DA466A681E65D5AABE60B9673E;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentProgressRatio_11_7A952693478331E085757C83DEF6EEFD; // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel_13_F2C38BAB490BEAADB9E8708BAF7E1178;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
