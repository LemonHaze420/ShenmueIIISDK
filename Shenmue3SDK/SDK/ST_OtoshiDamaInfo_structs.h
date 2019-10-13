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

// UserDefinedStruct ST_OtoshiDamaInfo.ST_OtoshiDamaInfo
// 0x0030
struct FST_OtoshiDamaInfo
{
	int                                                play_count_4_51E8F03B4E4D25721C1739ACE92C920D;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                split_width_14_474EB4544039DFE7C6BB38B79F288CF5;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 stand_mesh_8_5D725B8D456C5C53C73366B66099E380;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMG_ODDataTableHandle                       nail_tbl_30_70D2D3694ADD77C9A05907B2AC98DCC5;             // 0x0010(0x0008) (Edit, BlueprintVisible)
	TArray<int>                                        bottom_pocket_38_03FA73A04CD788322385C1B99B08DBB2;        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstance*                           board_material_42_1D9FFB3046406D73181CA895404EF504;       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
