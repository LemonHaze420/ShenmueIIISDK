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

// UserDefinedStruct ST_CutPriority.ST_CutPriority
// 0x0010
struct FST_CutPriority
{
	int                                                CameraKind_8_89F016694D8FDD56866302834E09019A;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrequencyCount_9_A6A2474A4296B9B7DA165FAF0D88DB4E;        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                atLeast_15_67E01E02415A249CE6FF958487FF47FC;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                atMost_16_7A5ACCFA4E8BA3BC6EEF2CA597F05F28;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
