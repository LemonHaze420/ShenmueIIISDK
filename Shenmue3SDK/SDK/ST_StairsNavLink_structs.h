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

// UserDefinedStruct ST_StairsNavLink.ST_StairsNavLink
// 0x0010
struct FST_StairsNavLink
{
	float                                              Offset_5_F92698DC4FEABBEA1ED628AA22E222D3;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStairDirection>                       Direction_2_B83185E3411F1B50C9655CA4C68E1FD8;             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class ABP_NavLink_Stairs_C*                        NavLink_8_E1C546AE40EA07459B89B8B98E6CA23B;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
