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

// UserDefinedStruct STRUCT_EdgeSpotlight.STRUCT_EdgeSpotlight
// 0x0014
struct FSTRUCT_EdgeSpotlight
{
	bool                                               Use_15_3E1040EE4832CD377D3C75844D315D10;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count_12_9F9A59E84549EC56FCEF50B2419B39A4;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeshID_5_1AD49D1C47C8F35C79978F8A95283F7B;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z_Offset_17_FEDE39A341EED2F4E2D9BAAF675EB82F;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spacing_16_09214A654F66744EC68069A3F3308D35;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
