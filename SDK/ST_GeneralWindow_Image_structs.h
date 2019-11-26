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

// UserDefinedStruct ST_GeneralWindow_Image.ST_GeneralWindow_Image
// 0x0038
struct FST_GeneralWindow_Image
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_GeneralWindow_Image.ST_GeneralWindow_Image.Image_3_DBC47387498B0B4AFC5288877D4EBA53
	struct FVector2D                                   ImageSize_6_D54CD824425A13E21E1B98AFFBB8BC0E;             // 0x0028(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ImagePosition_8_ED8AED3740397526E89C1086A2160B57;         // 0x0030(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
