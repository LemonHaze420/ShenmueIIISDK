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

// UserDefinedStruct ST_Chobu_AcDelegateTbl.ST_Chobu_AcDelegateTbl
// 0x0020
struct FST_Chobu_AcDelegateTbl
{
	int                                                MinStep_3_18E7E7C04DB55BBD86A14B9A50685D18;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep_5_F76A07DC46161339C6F849A1BF4EC783;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime_8_0A60690544363C903A5FC491DEC832C6;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTalkScript*                                 ExecScript_11_0F34B57B43692F3D489278A30AB55A99;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FlagSetType_15_E858AA804B47767E997FF78AE4EFF22E;          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
