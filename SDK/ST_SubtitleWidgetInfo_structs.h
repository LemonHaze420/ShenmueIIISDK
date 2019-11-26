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

// UserDefinedStruct ST_SubtitleWidgetInfo.ST_SubtitleWidgetInfo
// 0x0044
struct FST_SubtitleWidgetInfo
{
	struct FString                                     String1Row_3_1F38515A4A41DC1311E2CABFAE96D2F3;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     String2Row_5_665AE65E470781DEEAD56CB9E590791E;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_RubyInfo                                RubyInfo1Row_12_D06519C24B5E391E8DE7EC85D3AE894C;         // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FST_RubyInfo                                RubyInfo2Row_14_9E1ED9884708C06021E4CEB47D90249E;         // 0x0030(0x0010) (Edit, BlueprintVisible)
	float                                              Time_8_62BDD10848F6D58725E7BD8B0FEF454B;                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
