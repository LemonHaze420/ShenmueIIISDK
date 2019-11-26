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

// UserDefinedStruct ST_GeneralWindow_Button.ST_GeneralWindow_Button
// 0x0011
struct FST_GeneralWindow_Button
{
	bool                                               Visible_8_A5D9D91D4D4B61B1610F179310C12CEC;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       TextLabel_2_1323730F4D9B7B12BE933887E60584AA;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_GeneralWindow_Button>               ButtonIcon_9_0284C97140629A7438D4E6AFA9CFF0BB;            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
