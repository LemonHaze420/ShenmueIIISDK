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

// UserDefinedStruct ST_ClothesLoadWait.ST_ClothesLoadWait
// 0x0030
struct FST_ClothesLoadWait
{
	struct FName                                       CharaName_3_0BAB3E734ED325D5329C58A0EDC04238;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   MeshType_15_B4932B284388A6ACC806E7819BCA7D27;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TScriptInterface<class US3ClothInterface>          Interface_16_27FB45064EEBED9F6772A4B8B818D5F2;            // 0x0010(0x0030) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_ClothesReferenceInfo>            Info_8_89EBBDF341780817A014388876FC28E0;                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
