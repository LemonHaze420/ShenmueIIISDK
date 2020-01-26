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

// UserDefinedStruct ST_CutsceneCharaMaterialData.ST_CutsceneCharaMaterialData
// 0x0018
struct FST_CutsceneCharaMaterialData
{
	struct FName                                       CharaName_2_3924D6254158096CCB02FA926A3DC1BA;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    PartsType_5_0F8B0FC3419FD62757041AA9065276A2;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UMaterialInterface*                          SourceMaterial_10_363BD26A491B98BE98B227B280A3872B;       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
