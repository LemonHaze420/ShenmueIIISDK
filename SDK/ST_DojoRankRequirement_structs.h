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

// UserDefinedStruct ST_DojoRankRequirement.ST_DojoRankRequirement
// 0x0003
struct FST_DojoRankRequirement
{
	TEnumAsByte<EDojoPlace>                            Dojo_2_6BC623A743131D0689CD6698CD265B6E;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ES3DojoRank>                           Rank_5_962C03F14B0400D300FC7C8F733168E0;                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOtherDojo_13_07C6DB754AC28153AAF3ACA2F718CAE3;       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
