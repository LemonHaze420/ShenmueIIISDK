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

// UserDefinedStruct ST_AutoCameraAnalizedInfo.ST_AutoCameraAnalizedInfo
// 0x0020
struct FST_AutoCameraAnalizedInfo
{
	int                                                CameraInfo_14_B54E1BD14C648D3919354FA7D4DD52CA;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      CameraClass_12_DA7F447F4124BFA35A33168BFE37EB6A;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FRotator                                    Rot_20_8BDB360940E72E1670E181B508568B40;                  // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Count_24_FBF042D84B27778F89FCF693438B567E;                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
