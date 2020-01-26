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

// UserDefinedStruct ST_FishAdditiveRareScale.ST_FishAdditiveRareScale
// 0x0008
struct FST_FishAdditiveRareScale
{
	TEnumAsByte<E_AdditiveRareScaleType>               Type_2_871A58CE48D2B0F5F49CB69DBFC937F2;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AddRareScale_7_F24B425C47D5A125CB962E837DF20445;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
