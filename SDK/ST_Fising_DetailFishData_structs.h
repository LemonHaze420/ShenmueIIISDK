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

// UserDefinedStruct ST_Fising_DetailFishData.ST_Fising_DetailFishData
// 0x0071
struct FST_Fising_DetailFishData
{
	struct FName                                       id_22_055616764B16872E68C46692FDD21629;                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               name_25_2CF7D2D547AFECB0D4DD3D836A9A7A1F;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_Fising_DetailFishData.ST_Fising_DetailFishData.skeletal_mesh_36_F7E7C9134CBA21C59EA06BB41ADA6B9D
	class UAnimSequence*                               result_anim_29_DDB933D64061FC7BA74073A5AB139FFA;          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       fook_bone_32_61ABC8214337481E729D6CB03CA5B218;            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sell_scale_23_CC085399476A0D11478D79BD970C65EB;           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FST_Fising_FishScaleRange>           scale_range_17_415B62C84CDEBFF9BDFADC82CFBCE6EC;          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GramCoefficientValue_35_BF51A31B4C08F6C5FF6C8C9FDB22799A; // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResultRotate_39_99FF1FFD465E6A9F248A0095550DD3F2;         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRotateAngleAnim_42_B2770DE24D5581364EDEE6824FE456B2;    // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
