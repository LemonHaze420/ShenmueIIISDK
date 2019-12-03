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

// UserDefinedStruct ST_BellTowerPillarData.ST_BellTowerPillarData
// 0x0020
struct FST_BellTowerPillarData
{
	struct FName                                       CorrectItemID_6_1583432A44DD4FA7FEF0488A33112D8D;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInsertForcibly_18_C3168BA64C14B67526E59285E6A0156E;      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     FailedResultMessage_15_B16E6A03483780AA186F08ADBE596066;  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
