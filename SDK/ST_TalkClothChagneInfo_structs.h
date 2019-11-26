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

// UserDefinedStruct ST_TalkClothChagneInfo.ST_TalkClothChagneInfo
// 0x0060
struct FST_TalkClothChagneInfo
{
	TMap<EClothPartsType, struct FName>                PartsInfo_26_9218A2094898D4A89C5ABB85E7E3CFC4;            // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Memo_22_B48309B14CB8926BC4A865BA9F8E7FFC;                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
