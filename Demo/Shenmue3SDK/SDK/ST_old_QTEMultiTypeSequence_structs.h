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

// UserDefinedStruct ST_old_QTEMultiTypeSequence.ST_old_QTEMultiTypeSequence
// 0x0050
struct FST_old_QTEMultiTypeSequence
{
	class ULevelSequence*                              Play_2_DDAFC21D4233EFFF6A1924BEE71FF71B;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Success_4_DE71C56A4FC7A9604AB72DA68493D500;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Fail_6_E96B708E4678535222644996F1209710;                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Fail2_22_31FEBE8A497D7D28D12B2AA88D633622;                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_old_QTEType>                        QTEType_19_4BD3781F46B523663294A99FFFD81449;              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FName>                               InputActions_13_519F28CE44D1D8C7504350994317C0E9;         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SuccessAction_16_54DD5AB54184939DF862E9AA9F309A87;        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultInputTime_25_14F18CB14BC61850C9E8408B7CB741D7;     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetryAddInputTime_27_19C1E3B949A967B925A97084171590B6;    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JustTimingStartRate_32_80FF0E4948A27C8DA46EE2A6A5F82FA9;  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JustTimingEndRate_33_EE34F08647049669D2560DBD6560D530;    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
