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

// UserDefinedStruct ST_CutscenePlayInfo.ST_CutscenePlayInfo
// 0x0028
struct FST_CutscenePlayInfo
{
	struct FName                                       CutsceneID_16_E243457946DFD8932D3FD3A31F6AC551;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LoadLevels_10_2DC9256B48629A42170C57A8550DB122;           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               InvisibleLevels_8_5F1FE01248F2D6D5239BE5B89A554AA5;       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
