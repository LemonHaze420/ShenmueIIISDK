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

// UserDefinedStruct ST_MG_FishData.ST_MG_FishData
// 0x0028
struct FST_MG_FishData
{
	struct FName                                       fish_id_20_68E90C10449516E7447043BDCBD20B7C;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               name_23_30C4A34946AFCC64BE0405BF1E8B40CB;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                min_scale_13_1F18DE994CC9275AC9F157A599750488;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_scale_14_245CE7084A6221DDD9DD4680B9E215A8;            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               fish_model_22_446FA1024658142CDE9043BAE5974FC6;           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
