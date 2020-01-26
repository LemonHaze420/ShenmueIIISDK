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

// UserDefinedStruct CategoryItemTable.CategoryItemTable
// 0x002C
struct FCategoryItemTable
{
	int                                                id_2_FDAC09144F676EF8F931EFBBB72E2A06;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_jp_7_68A5138D4B00E916AA2A268910D5538D;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_eng_8_EDBA87B54C74CA441C6BDBB2DE5A9D84;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FColor                                      str_color_11_B8C78AAF4302077A5A99D0B2C24E5B9B;            // 0x0028(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
