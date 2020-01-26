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

// UserDefinedStruct ST_CameraInitialProperty.ST_CameraInitialProperty
// 0x002B
struct FST_CameraInitialProperty
{
	float                                              CameraDistance_2_CD9A1FF042003A5572A1E4A0F63C020D;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookPointOffset_23_6A985B29458C5D1F0162CC8F30CF0BF4;      // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    InitialRotation_25_9B61FD8D427F5EA50D31968A8E8EE529;      // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       SocketName_11_113BF7E04E857DD77E7970AAAC2D5973;           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Pair_20_D5C2F7994A257317F6810A9646B7D669;                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Shoulder_30_7DF87E224B7A54F97498219FCCC7AF05;             // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustCameraDistance_35_EFF0238849CC4E1B7A89DDA35AAF03F6; // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
