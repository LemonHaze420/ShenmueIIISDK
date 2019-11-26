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

// UserDefinedStruct ST_CutsceneChangeClothesData.ST_CutsceneChangeClothesData
// 0x0004
struct FST_CutsceneChangeClothesData
{
	bool                                               bUseChangeClothes_1_44A6906E4159B76749E822B1E463BAF3;     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRyoOnlyTShirts_8_F9DD0C864A7386A61EDD79B650337906;       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   RyoMeshType_4_44E0671B4F14EE3059DDCC8471AF9DCC;           // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   ShenfaMeshType_6_4F31C9F44D8C6184FE2A31A71E71BA2F;        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
