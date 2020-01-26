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

// UserDefinedStruct ST_Config.ST_Config
// 0x0039
struct FST_Config
{
	int                                                page_7_78AB7F9A4B970CB8811656A3E5B62986;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ConfigName_8_DB8AE50242341F14795140BF0140AA49;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             choice_9_22A5620A4BD4438B52FEC187971253F2;                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description_12_18ECC4124627F346BFE81D987421068E;          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EN_ConfigParam>                        Param_15_7958464E4C4207952A7333AF826FB4F1;                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
