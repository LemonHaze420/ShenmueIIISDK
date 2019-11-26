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

// UserDefinedStruct ST_SubQuestIconControl.ST_SubQuestIconControl
// 0x0090
struct FST_SubQuestIconControl
{
	int                                                MinStep_21_9218A2094898D4A89C5ABB85E7E3CFC4;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep_18_CF068A4B44473ED72ADB0884AB1FFD2F;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GlobalFlag_20_4ABA2CB84609B3A80820B79E6D6A3234;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagMin_23_502BB2E14C713EDAB3DA50AB1B07D626;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagMax_25_C2744C344C8B8D0A1772828979DD4903;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimGlobalFlag_39_4F8F76E849C910824E8C9BA144A6AC15;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimFlagMin_40_69252F2841C27231C7B8AE811F3AC1C3;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimFlagMax_41_0422042D4FCC5A9F0D96A3B44A8D4456;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimeMin_44_FC3334D54EE8989A1BE2DFB59433CD6E;              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimeMax_46_E81C43F045A9D8D03F1240BB027F3AD2;              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetNPC_28_E10D3531427AC8159C2B55BDC59589B3;            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            Items_51_7A7EF2F146DD7002A443D59272B9E4FF;                // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Comment_32_BE24E3F24D133C4A11BE069ED8EEFE70;              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
