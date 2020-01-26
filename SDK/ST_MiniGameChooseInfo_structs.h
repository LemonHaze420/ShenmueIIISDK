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

// UserDefinedStruct ST_MiniGameChooseInfo.ST_MiniGameChooseInfo
// 0x0019
struct FST_MiniGameChooseInfo
{
	class UClass*                                      ChooseClass_2_5B8902D245AD2E9A57B1CFA0B1677B98;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ChangeSelfCamera_5_34B73EDA43662B0E9EF73A98F9B5888E;      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              CameraBlendTime_9_1A24EE424175CBC16474D8BB1C3E319A;       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CameraViewTargetBlendFunction_19_19C6843F43AF292BF9FE4C89935751D3;// 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              CameraBlendExp_15_98C913E34526BA91FF969E880659B55B;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroyActor_18_A30BB05F4E7A8F338D07738CEADE81C8;     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
