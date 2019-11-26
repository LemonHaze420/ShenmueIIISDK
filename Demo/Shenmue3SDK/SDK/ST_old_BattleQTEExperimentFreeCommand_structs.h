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

// UserDefinedStruct ST_old_BattleQTEExperimentFreeCommand.ST_old_BattleQTEExperimentFreeCommand
// 0x0058
struct FST_old_BattleQTEExperimentFreeCommand
{
	TArray<struct FName>                               Command_3_3E44C48D4F6C959E3ED68A8D8BB75686;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text0_14_CE23FDA74D321D5E76501386D4453E11;                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text1_17_5102C6AC4E5AE70E9DF2718770FB45A8;                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text2_18_851F186748509A3A622C5B9F04877CF2;                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpecialBookID_21_656CDBD9463F54B3416ADEB8C3C1BE60;        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class ULevelSequence*                              MainSequence_24_D5234ED147EF75997509E388FAC74B1A;         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              SubSequence_26_4FE0BF9E4D8C0725C897B28E132D06FC;          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
