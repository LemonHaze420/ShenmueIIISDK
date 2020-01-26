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

// UserDefinedStruct ST_MiniGameBigWheelItemData.ST_MiniGameBigWheelItemData
// 0x0040
struct FST_MiniGameBigWheelItemData
{
	struct FName                                       ItemId_3_CD07F0F44C97C5E9317EA4B1D9E21BE7;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle_6_7403F47041E834441CDCE3A2A95DF959;                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GetNum_12_5DCEC9504BE5AAB999CD918E4D66D4F0;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecial_8_4CBADFEA41CFC5A986C98E8602B102B2;             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0011(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_MiniGameBigWheelItemData.ST_MiniGameBigWheelItemData.CNTexture_15_C8F3DA1645BA545684A197A00B6137A9
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
