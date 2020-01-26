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

// UserDefinedStruct ST_CutscenePlayEndResetData.ST_CutscenePlayEndResetData
// 0x0040
struct FST_CutscenePlayEndResetData
{
	class AActor*                                      TargetActor_11_829A5F9E45DC68A75F4DD18E5D9E2984;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ResetTransform_12_1735BE584B68DE27D6E7B5BE629BF963;       // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
