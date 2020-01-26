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

// UserDefinedStruct ST_DebugCutscenePlayAreaDispInfo.ST_DebugCutscenePlayAreaDispInfo
// 0x0020
struct FST_DebugCutscenePlayAreaDispInfo
{
	struct FString                                     CutsceneID_8_0DFA5DC3404B387CFFBD3AA770E9484B;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          AreaPointList_7_4889663A4132806001DB8FAC84423FAE;         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
