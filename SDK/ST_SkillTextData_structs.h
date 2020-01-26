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

// UserDefinedStruct ST_SkillTextData.ST_SkillTextData
// 0x0050
struct FST_SkillTextData
{
	struct FString                                     LocaleFriendlyName_21_AF8967A54D298A4F1CB74D9FDC967862;   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KanaName_20_4DFAC5A54E6EF894901F5CA5B2AC3DB0;             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BattleName_12_EC00EB824DA164AACC79DA85D42CC31C;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ScrollName_16_9BBA72B84B50ABC9B57A7A91ED888FC0;           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description_18_8587BE954736A8939B5911917EC0818F;          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
