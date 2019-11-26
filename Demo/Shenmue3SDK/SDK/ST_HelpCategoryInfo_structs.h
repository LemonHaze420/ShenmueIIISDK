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

// UserDefinedStruct ST_HelpCategoryInfo.ST_HelpCategoryInfo
// 0x0078
struct FST_HelpCategoryInfo
{
	struct FString                                     name_9_E72D524D41F00028C97FFE85AE13CA41;                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     id_13_04040FB5478C24371E0167837D68AA40;                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Help_Label_15_A020C0334834BDD79E6F69B8554E1267;           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0024(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_HelpCategoryInfo.ST_HelpCategoryInfo.Img_PS4_16_B362BF2041655A3881631A909CC2097A
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_HelpCategoryInfo.ST_HelpCategoryInfo.Img_PC_19_6BF81514401AF48D454F179C682EDADF
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
