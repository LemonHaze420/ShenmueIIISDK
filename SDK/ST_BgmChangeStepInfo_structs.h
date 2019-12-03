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

// UserDefinedStruct ST_BgmChangeStepInfo.ST_BgmChangeStepInfo
// 0x0010
struct FST_BgmChangeStepInfo
{
	class USoundAtomCue*                               Sound_2_3BB2D1EE45C4815FD86979BB336879DD;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartStep_7_556E8AC84166A6110EDEBF81CFFA6BA8;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndStep_8_935AAF174BC0305A907A0A8D57653767;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
