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

// UserDefinedStruct GlowMatLights.GlowMatLights
// 0x0050
struct FGlowMatLights
{
	int                                                MatID_2_77FE0F3C4A1FEB6425C55799F6273EF6;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius_12_8CE3D3F24B07526827AB318894941473;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity_15_78D91FE942CA109874C111A34957AF15;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform_9_1C3EDE864F06BC4596F689A20B402F01;             // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UPointLightComponent*                        Light_19_285A607D426D3F498161EFB547ACA03C;                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UArrowComponent*                             Arrow_18_D6ABBDA447D71CC93C38769F0F4ABD96;                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
