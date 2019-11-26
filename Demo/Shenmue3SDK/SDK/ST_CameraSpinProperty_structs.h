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

// UserDefinedStruct ST_CameraSpinProperty.ST_CameraSpinProperty
// 0x0016
struct FST_CameraSpinProperty
{
	struct FRotator                                    FinishRotationOffset_31_67032C314B2C72D5222BAB84513E9107; // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StartTime_25_E3823DA04CEA3B6E055C0ABDFA9D0132;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayingTime_30_54DF23B34A4072F96A976EA3BECAF733;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EaseFunction_29_3812049E478EFCC056885E9722934259;         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Loop_20_615FDB6D4990E3D5DFF21A8B54A77C28;                 // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
