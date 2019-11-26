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

// UserDefinedStruct ST_CameraDollyZoomProperty.ST_CameraDollyZoomProperty
// 0x000D
struct FST_CameraDollyZoomProperty
{
	float                                              FinishCameraDistanceOffset_16_BC02169244F85CCA3185F49CEC701F13;// 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime_10_486D86134A27CA11561BB08B6AB0C121;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayingTime_15_80857B824CA661B5C03538A3E6682867;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseFunction_14_C64D2F9D4E502B64E09A7699E38CD938;         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
