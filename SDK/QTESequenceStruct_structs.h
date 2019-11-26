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

// UserDefinedStruct QTESequenceStruct.QTESequenceStruct
// 0x0020
struct FQTESequenceStruct
{
	class ULevelSequence*                              Play_2_DDAFC21D4233EFFF6A1924BEE71FF71B;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Success_4_DE71C56A4FC7A9604AB72DA68493D500;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Fail_6_E96B708E4678535222644996F1209710;                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SuccessAction_9_519F28CE44D1D8C7504350994317C0E9;         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
