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

// UserDefinedStruct ST_MiniGame_Sunken_Difficulty.ST_MiniGame_Sunken_Difficulty
// 0x0048
struct FST_MiniGame_Sunken_Difficulty
{
	class UCurveFloat*                                 TimingCurve_2_E881EDDF4AE6F0497944A69320A56B70;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowerChangeSpeedBase_39_A701900E49971F5FD341EEA9AB520A68; // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowerChangeRandomRangeMin_40_67D58758443F9069E35559B28F0A296E;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowerChangeRandomRangeMax_43_84E5712A41A1C911EF80D5876ABC5E1B;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PunchPlayRate_28_DEB262034878C95724F4159880CDC528;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnimPowerRate_8_008EA40E4131869A79EE0C8EA1ADEBA5;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitThreshold_10_5C0B54744F6CE649BF43938EB713FC79;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JustThreshold_12_EA8EFC6B43806285375B239443A212AB;        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustRate_35_62FA2E504C3F54499A3C97B7C3E0B976;           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PunchSequence_22_BA7A9EF74673EDF2CE2229BC42FCAB11;        // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PunchIdleLoopSequence_25_EAEE001441A4B5AC44B4C4916AD6DC98;// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           ReturnSequence_23_C9FB7B884DE1032B3522F6970ACFE59A;       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 UIMoveCurve_32_56FA8FBE4F155B9425B35D80A0756A77;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
