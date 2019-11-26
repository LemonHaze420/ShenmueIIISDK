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

// UserDefinedStruct ST_LookAtCacheData.ST_LookAtCacheData
// 0x0058
struct FST_LookAtCacheData
{
	class UBPC_LookAt_C*                               TargetComponent_15_9E33D3084DBE48C963ADCE98DC54C82B;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledComponent_19_A89DCD814A4EDCF2984B17A50EB9E7DE;    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledEye_20_9165F32B4CDA669AFCF7D7A776C4BD0E;          // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledNeck_21_08225E7542C0C8BB76893E91ECDBDFF7;         // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledBody_23_72D579344A79299F5481DBA6E4B9CCBA;         // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetWorldLocationMode_42_9CC302BC45680A51E56B26A55846B28E;// 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRenderedCheck_50_72AA626B40C8EEBF109BEEA0D2507697;   // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FVector                                     LookAtWorldLocation_37_AE2FFD624B0D5C7D74FF21B180FDF395;  // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      TargetActor_48_4E58B57E46D0FA68F76E98A7FD903BD8;          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FST_LookAtEyeParameter                      EyeParameter_68_D28C21B5497C6479EDFB58B6461B5C48;         // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FST_LookAtNeckParameter                     NeckParameter_69_3E9F6FE04BCF8920EAFAA985528A76D6;        // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FST_LookAtBodyParameter                     LumbusParameter_70_DB4215C84321CD054523B1A161BE643D;      // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FST_LookAtBodyParameter                     WaistParameter_71_8D9EA1AF4564FD3ECA67FAA476F46421;       // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FST_LookAtBodyParameter                     BreastParameter_72_E1A7A9844567D66C01E6DB9B6FE3318A;      // 0x0048(0x0008) (Edit, BlueprintVisible)
	float                                              ThresholdTargetLocationDistance_75_8A21D8F34395A76B801FF58D80653982;// 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeed_78_8C59A8774BDF04068DFC7FB0DC3CA4E0;  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
