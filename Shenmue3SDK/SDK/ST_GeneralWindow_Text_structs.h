#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_GeneralWindow_Text.ST_GeneralWindow_Text
// 0x0015
struct FST_GeneralWindow_Text
{
	struct FName                                       TextLabel_2_927B410148FBBDFEF74892879095880B;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TextSize_5_6E3A71FA4F4385FB89E6F7AAC34C4FBC;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextPosition_8_A1ED1BC24FAC04A4A25063BB458B769B;          // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justify_12_A08818724872EB1D439D7E9500FDA70B;              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
