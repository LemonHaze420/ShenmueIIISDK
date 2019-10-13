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

// UserDefinedStruct ST_CutsceneReplaceActorInfo.ST_CutsceneReplaceActorInfo
// 0x0020
struct FST_CutsceneReplaceActorInfo
{
	class AActor*                                      SourceActor_2_BD8A801F4914C5626E382994CC1A2D85;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       SocketName_6_528DB2754B227DDB739048B4FCB66903;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotZOffset_8_7912E2534400DBBE95EB50A7213E831E;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       CharaName_11_B4FB5C1747B883BCFD6ADE999C516E74;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
