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

// UserDefinedStruct ST_QTESequence.ST_QTESequence
// 0x0058
struct FST_QTESequence
{
	class ULevelSequence*                              Play_2_AFC0F6134F59DD32AA050D8E50691DBA;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Success_8_63A979414F7785D9B3CEA9A9422683B3;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Fail_10_E6DAA5AD41864F45E5B43BB74E26B0EE;                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Fail2_12_10BBD198488ADFBEDD9963996867AE42;                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_QTEType>                            QTEType_15_08C5B3E94B6CEF5E7C2834B6E53F4DB3;              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FName>                               InputActions_23_85023324484C54BE6BE97F8D3E7E7DA8;         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SuccessAction_26_D3597C3A4B6C6A1A3E6F738E591F04F7;        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultInputTime_29_42289550481ACEDDEB8B6EB3F2AFB7AD;     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetryAddInputTime_31_F400EA94493C80AA4A56F1870446BD7D;    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JustTimingStartRate_33_FF25AD8A4386F3F82B55E985C9A2B440;  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JustTimingEndRate_35_39EED83049D0C889DAE8F789D5CC67E9;    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              SubSequence_38_27E8AC85426A537ED367EDBAC640162C;          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
