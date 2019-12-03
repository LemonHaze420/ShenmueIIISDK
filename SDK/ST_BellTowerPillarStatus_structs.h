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

// UserDefinedStruct ST_BellTowerPillarStatus.ST_BellTowerPillarStatus
// 0x0080
struct FST_BellTowerPillarStatus
{
	struct FName                                       ActorTag_6_678639C74BFD3531076B718E3396219D;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3AttentionComponent*                       AttentionComponent_9_F2414B5C4527FDE64F20BA900F36D39D;    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       UsedItemID_12_782A0CC04EAF63D2391A4EB405FD982A;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  CameraSelectingTransform_15_05E7C7C64C70A20D667AB0B5C2AECCC3;// 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  CameraInsertPerformanceTransform_17_802B7FCF4E02277E540D319DDD93BF1D;// 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
