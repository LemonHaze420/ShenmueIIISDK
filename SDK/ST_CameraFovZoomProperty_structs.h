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

// UserDefinedStruct ST_CameraFovZoomProperty.ST_CameraFovZoomProperty
// 0x000D
struct FST_CameraFovZoomProperty
{
	float                                              FinishFieldOfView_14_F996A22B462B82227B188F9530B004CC;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime_7_DF9405D94008F5564DD3EAB137A5462F;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayingTime_12_BB353E2542D8C1C8A41E52BFBA1788C1;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseFunction_11_133969D240EC17C74EE10585F33CB9C3;         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
