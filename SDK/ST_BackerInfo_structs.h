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

// UserDefinedStruct ST_BackerInfo.ST_BackerInfo
// 0x00A0
struct FST_BackerInfo
{
	struct FName                                       PresetId_38_684F19214E9F82290FF197AF5CD5AF11;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OrderTierId_50_DF3CF39240D7DAC5811F91BA0611C05D;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName_18_389312A346E56E77D03CAE9EFC45045F;             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EN_DreamsComeTrue>                     DreamsComeTrue_19_D75E0937422AD590241F18A955DE4764;       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0021(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_BackerInfo.ST_BackerInfo.HanamojiMaterial_33_7290C3E341370FF1A8C47D9E56B897A3
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_BackerInfo.ST_BackerInfo.FudaMaterial_34_99DC377A484058A86235878F09A9CF1B
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_BackerInfo.ST_BackerInfo.EmaMaterial_47_B2E3F9D34E1B1FAB3E293B899B715091
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
