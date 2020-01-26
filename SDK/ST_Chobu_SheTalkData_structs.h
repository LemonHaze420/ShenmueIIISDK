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

// UserDefinedStruct ST_Chobu_SheTalkData.ST_Chobu_SheTalkData
// 0x0050
struct FST_Chobu_SheTalkData
{
	int                                                MinStep_14_1FD1835D422C21FC01441A95CE49DAA1;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep_16_117CD7A543E144F9DFEB15981F683F80;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartFlagCheckType_17_464AA29D483F3F87E423468C209A0151;   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTalkScript*                                 ExecScript_6_83FC5BF3455A512CCC0686B4609E0D39;            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TypeCS_20_4F7DD2B745649B381515419AB07ED2AC;               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       EndFlagSet1_9_7E1AEF2E4B8667F4227CC98572DED650;           // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FText                                       EndFlagSet2_11_EECD8E7D4DA741DB991E898C9F358299;          // 0x0038(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
