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

// UserDefinedStruct Struct_FlareItem.Struct_FlareItem
// 0x0098
struct FStruct_FlareItem
{
	struct FSlateColor                                 Color_99_F69BB0CF4C52472FC207E9BFBA82A5F3;                // 0x0000(0x0028) (Edit, BlueprintVisible)
	class UFlareWidget_C*                              FlareWidget_38_76CA7C9641CC97FC2D7B4489673481E6;          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlareLocation_54_B28F1CEA4E7BA3B4B72C92841CF8CC71;        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMaterialAdditive_112_E326DFD148AE380D74BE3BBD83173595;  // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FVector2D                                   FadoutEdgeDistance_100_9A0054B442A8E18E635FEFA305731204;  // 0x0038(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ElementMaximumDistance_101_4763888B425E3C0BA4C942B6E9638F93;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut_EnableShrinking_67_82CC2DED44A4B71BFCCD67A5260166DE;// 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut_EnableOpacityFade_69_C977DE1D430C5C8F18D8939BD0252D0B;// 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut_FlareLocation_71_7E570CDC40AF7CE6895805A6FB54E998;// 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	class UMaterialInterface*                          Material_36_5C3A208145DBD4FD00CFAFA18C8E3EF6;             // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPositionOffset_55_5B33493D4D79DCBF56E66A86288577F9; // 0x0050(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   GlobalSizeMultiplier_61_E5026E6542DB95FEEF28A395FAC668A9; // 0x0058(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              InitialSpriteAngle_60_3387DA4B429738A4BD2B2780F715B8BB;   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveRotationAmount_102_DEBC9A7C44E9301796756C9C1E703B62;// 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableOrbitRotation_103_DE4007E04E202A1482F354AC1D9EB3A9; // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnablesLocationScaling_106_756F146A4A33BF4828C16193AFFEA2E7;// 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	struct FVector2D                                   LocationScalingInfluence_107_522CE923467DEC1FEF6EE980F3CC8A70;// 0x006C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LocationScalingCenterSize_108_0AA0639F495122BD8327A3A7BF94BCEC;// 0x0074(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LocationScalingEdgeSize_109_D227BFC9459494D99A8D8090040B7AA6;// 0x007C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableLocationBasedOpacity_75_6EB56A50483B6E985B76E795224A0D88;// 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              LocOpacityCenterOpacity_85_9AC6AFD342429A825303AB8F4974FD76;// 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocOpacityEdgeOpacity_84_69B0522F47EC54B358C9038C7230FBA1;// 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LocOpacityInfluence_83_AA41AB234C9354C17FDD04AF3FE641C9;  // 0x0090(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
