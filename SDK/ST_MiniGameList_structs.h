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

// UserDefinedStruct ST_MiniGameList.ST_MiniGameList
// 0x0010
struct FST_MiniGameList
{
	TArray<class ABP_MiniGameBase_C*>                  MiniGames_3_6DB408FE475378A948E930B1F1BBBDFD;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
