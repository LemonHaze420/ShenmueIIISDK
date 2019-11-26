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

// UserDefinedStruct ST_Fishing_FishSetting.ST_Fishing_FishSetting
// 0x0018
struct FST_Fishing_FishSetting
{
	TEnumAsByte<E_MiniGame_FishType>                   FishType_2_5EC34F304D6D2254C470DBAC9B85DA1F;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RareScale_6_6BBB998C400853AE1A306295048C17F8;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_FishAdditiveRareScale>           AddScaleList_14_198D7EE24836B2117853BEBAEC171EFE;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
