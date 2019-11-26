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

// UserDefinedStruct ST_CJ_CupCipher.ST_CJ_CupCipher
// 0x0027
struct FST_CJ_CupCipher
{
	TEnumAsByte<EN_CJ_CupPos>                          CupPos1_3_B3666F364B9DB761412A1E9639A6308F;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CJ_CupPos>                          CupPos2_7_CF3120C44EA5099057D0D5AB937EF27B;               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CJ_CupPos>                          CupPos3_8_431AB0374B362BDDB2A12BA6D345ECE2;               // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CJ_CupPos>                          CupPos4_9_BEB6A9FB418F467E2FA506AE58CD2706;               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheckFlagNo_16_3A7DFFC44F8615136E21709FFFA6E5F6;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagValueMin_17_E004364F4022E95FEB626893167C9C2A;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagValueMax_18_549442084EB37072172C7597E0C85D0F;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     GetItemID_21_657CF48F42198016722D7E86F2FF9774;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemAcquisitionFlagID_31_06148E544D5DAA9AA6AC9190D542E215;// 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForcedFailure_24_649ED82D48142CF34D5423939B8885BB;        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               QuestProgress_27_3E1CB9764378DDE04AA5E4813DEBE470;        // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CJ_ItemGiveingPerson>               ItemGiviingPerson_34_DBC64448411C49FC0B53A28A2FD9241F;    // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
