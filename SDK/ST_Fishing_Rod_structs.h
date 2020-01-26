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

// UserDefinedStruct ST_Fishing_Rod.ST_Fishing_Rod
// 0x0068
struct FST_Fishing_Rod
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_Fishing_Rod.ST_Fishing_Rod.rod_mesh_15_0C6FACA5426B28B18B25DD8F5C80D0D5
	float                                              shake_8_62E11CBC49963510E72EA1A00304D36A;                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hit_time_7_A1FE957D47589F238944BF9CA4B77E22;              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBacker_10_A57049CA4656DC02E6C4A99AA76920C8;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0031(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_Fishing_Rod.ST_Fishing_Rod.UseMaterial_16_E83170E24209798A430BD48451BDB338
	float                                              WeightOffsetRate_19_90B38EEC475376F4F2C034BAE60F013E;     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BiteRate_22_24103CB5486E430A0C4D6AA22932E3AD;             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
