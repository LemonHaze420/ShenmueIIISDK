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

// UserDefinedStruct ST_ClothesReferenceInfo.ST_ClothesReferenceInfo
// 0x0038
struct FST_ClothesReferenceInfo
{
	struct FName                                       PartsID_6_CD6D39C54726F507536A8983A5563FAF;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    PartsType_13_9CAE8E1146411AEDB11100B7DD0CC8C9;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ST_ClothesReferenceInfo.ST_ClothesReferenceInfo.Reference_8_3C0C678D43AF8087DB5C49B85624A0B9
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
