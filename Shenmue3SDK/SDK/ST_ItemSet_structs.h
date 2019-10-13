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

// UserDefinedStruct ST_ItemSet.ST_ItemSet
// 0x0028
struct FST_ItemSet
{
	struct FString                                     SetNameLabel_13_C0ABE08F43941CBB5914EA946BA6BCD3;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SetGroup_7_8F43D58D46620DAF27CE7FA5B1677705;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExchangeSkillBookNumber_8_627B4D2E4C3AFE4895B39B8791B3399C;// 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ItemNumberList_12_3602BCBE42698B6A61B500A847BF07D9;       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
