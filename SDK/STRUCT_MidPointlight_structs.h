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

// UserDefinedStruct STRUCT_MidPointlight.STRUCT_MidPointlight
// 0x0025
struct FSTRUCT_MidPointlight
{
	bool                                               Use_15_3E1040EE4832CD377D3C75844D315D10;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Pointlight_35_3ED40BFC452F428490C6C0BD5F7C1DA0;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MeshID_5_1AD49D1C47C8F35C79978F8A95283F7B;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale_18_FEDE39A341EED2F4E2D9BAAF675EB82F;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity_32_7D3F395745F1D69C95136E8053E2F773;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius_33_E75D134642366738E6977885D6D21F63;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature_29_2A04A34C4B33DEDB9780EA81125522A6;          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallOff_31_F8F26A614A7995F7D9FBF1A9C64B5811;              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerConeAngle_38_F65EC0E342C89E29302F8784AEA667D5;       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle_40_E19F2FB34FB04A3B03119285E27BFAF5;       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTransformRotation_43_56C9EAF941358DED3C98239B65AD36DB; // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
