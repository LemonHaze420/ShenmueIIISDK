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

// UserDefinedStruct ST_ChairPoint.ST_ChairPoint
// 0x0020
struct FST_ChairPoint
{
	struct FVector                                     Point_2_A524991B457191611AA6E2B6E0556833;                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Occupied_5_9DF0D3904F60F1A165F90EB1C02858A4;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          StartPoint_9_EB317CDE450166331645A58DCD648A98;            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
