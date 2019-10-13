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

// UserDefinedStruct ST_LoadingHintWindowParam.ST_LoadingHintWindowParam
// 0x0038
struct FST_LoadingHintWindowParam
{
	struct FVector2D                                   Size_2_143E0F5C43FDF2537C330A808786E0AD;                  // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FST_GeneralWindow_Text>              TestList_6_B9DA91164FF5B4CF5A643AA47A573AD4;              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_GeneralWindow_Image>             ImageList_9_E305BAE84C93B8D07BB9E18680E41AB9;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_LoadingWindowInputImage>         InputImageList_13_A623BDB54A5B917F99762685660562F4;       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
