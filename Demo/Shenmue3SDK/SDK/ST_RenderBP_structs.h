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

// UserDefinedStruct ST_RenderBP.ST_RenderBP
// 0x0028
struct FST_RenderBP
{
	bool                                               UseFlag_14_F6D0695C4707E583D90B0C8CD187F3AB;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      RenderBP_0_7_3AD3A5AD41E6D335FD691BAE54184F1C;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      RenderBP_1_12_B013A5374DF72AB5438614A3C79818B9;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTextureRenderTarget2D*                      Texture_0_15_47FA2D8F4506A672EF53C4879F0E5D62;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Texture_1_16_220E3DED4C875C5BDFFBD699823BA133;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
