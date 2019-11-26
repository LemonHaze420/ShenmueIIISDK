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

// UserDefinedStruct ST_ClothesMeshInfo.ST_ClothesMeshInfo
// 0x0100
struct FST_ClothesMeshInfo
{
	struct FName                                       CharaCode_17_3EA49689435E2AB0DFC7B7AC78D6B9F5;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Memo_73_D66A96CC43225D423AF01BB8300216F7;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_ClothesMeshInfo.ST_ClothesMeshInfo.AdventureMesh_21_80ABF9B94F390632A4AB228DB5529121
	unsigned char                                      UnknownData01[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_ClothesMeshInfo.ST_ClothesMeshInfo.IndoorMesh_30_EFAB52984AC87E17CE9379A2AB54B3D2
	unsigned char                                      UnknownData02[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_ClothesMeshInfo.ST_ClothesMeshInfo.SearchMesh_58_F00A1EFC448DAE4B99408A984609D203
	unsigned char                                      UnknownData03[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_ClothesMeshInfo.ST_ClothesMeshInfo.BattleMesh_22_FF1A44024831B0F2D20BB0B229EF8AEE
	unsigned char                                      UnknownData04[0x28];                                      // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_ClothesMeshInfo.ST_ClothesMeshInfo.HighQualityMesh_81_FBA90D5A46476536122F758531C38786
	TArray<EClothPartsType>                            AvailableTypes_55_25A9C8DE49E0A0F1DCC2468DB3E3EC15;       // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               IgnoreParts_80_631A74AD49D7F9C41AD9B4BD951BC0D7;          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
