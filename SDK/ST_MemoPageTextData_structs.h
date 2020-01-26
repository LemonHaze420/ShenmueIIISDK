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

// UserDefinedStruct ST_MemoPageTextData.ST_MemoPageTextData
// 0x0020
struct FST_MemoPageTextData
{
	TArray<struct FString>                             TextArray_3_4D8B376D482E0D683B1883BF55B64A29;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_RubyInfo>                        RubyInfoArray_6_3F30A84E47101CC648F32891F47A399E;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
