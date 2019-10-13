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

// UserDefinedStruct ST_CutsceneProgrammedAnimInfo.ST_CutsceneProgrammedAnimInfo
// 0x0011
struct FST_CutsceneProgrammedAnimInfo
{
	class ASkeletalMeshActor*                          Target_3_AF606AD241B61C410C8E3A91121931FD;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              StartTime_9_D163C0104E45DDD1AB9489B22F6DE64C;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTIme_11_13B16DDD4418AFF076C08E977099BFAC;              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsReferenced_15_E07A06B646CF13BE4F2A41A9CB5EFD71;         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
