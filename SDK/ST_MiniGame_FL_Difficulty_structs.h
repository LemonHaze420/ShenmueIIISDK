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

// UserDefinedStruct ST_MiniGame_FL_Difficulty.ST_MiniGame_FL_Difficulty
// 0x0060
struct FST_MiniGame_FL_Difficulty
{
	float                                              LimitTime_2_72DF7477483055E05EA089BBD81158C6;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BorderNum_9_07C848804E4A55C12749D0A5BEFFD050;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LoadLevelNames_6_B0C17708498A72E0016B6782F441FD52;        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               HideLevelNames_17_050395A34DA7BF846B6822A37D950E65;       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_MiniGame_FL_Difficulty.ST_MiniGame_FL_Difficulty.MapTexture_16_9B864F0F43A8749F21B5AC80D5D87EB2
	struct FName                                       StartCutsceneID_21_8BF332C34814D21DDC719A95E2E4C627;      // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ContainerMapName_24_A2D4A48D4D546DA42DAA6D8283436B10;     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
