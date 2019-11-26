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

// UserDefinedStruct ST_NPC_AttachInfo.ST_NPC_AttachInfo
// 0x0060
struct FST_NPC_AttachInfo
{
	class UStaticMeshComponent*                        MeshComp_2_F57AF8F249A0C76A3537879E68B52785;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkMeshComp_11_04E289FA458AE521699E798C5F40BAB6;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor_5_A639B3F349316E28BF3C7CB55E841493;                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Before_8_BE10BD2441D47CA5CB864FA3CB1E2A73;                // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsAnimation_16_FC7026464404FB7C5EEBB5ADFCEFD063;          // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FName                                       Socket_19_AAA2B67F41D5586FD2E2A8A788E373DF;               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
