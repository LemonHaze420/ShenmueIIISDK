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

// UserDefinedStruct ST_CutsceneFadeData.ST_CutsceneFadeData
// 0x0040
struct FST_CutsceneFadeData
{
	struct FLinearColor                                StartFadeColor_2_CE7AC0E74B1F3AD444F778B9E1B508E5;        // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseStartFadeOut_5_FBDBC2D743E2B130EB3F92B0E8F8D8BB;      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              StartFadeOutTime_9_5205C594407BD02EA236B1B72F0F9256;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStartFadeIn_14_66C8B5364D61878A78F5688F104B4837;      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              StartFadeInTime_13_841ECDBE457AA5D7D12A22802B5300F7;      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EndFadeColor_17_D7C0CF49499CD777AFE0E38F8CA714B6;         // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseEndFadeOut_20_C90EBA7246B85A756B0CEFB5A756963D;       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              EndFadeOutTime_23_9098637A4329F5EE0BAF0CADBD4BA109;       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEndFadeIn_27_F21786384CE7F5B1EE37FA93BFA366B8;        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              EndFadeInTime_28_58A75FF7497CD3D59F5140B18A1890E0;        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
