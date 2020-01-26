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

// UserDefinedStruct ST_ShopName.ST_ShopName
// 0x0028
struct FST_ShopName
{
	struct FString                                     ShopID_3_6EB4DF064A09FC590860D5BDF606921E;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Kanzi_Label_12_F3B8D36745E3B3026640C2A37981C191;          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Localize_Label_11_EFB980304863B9F6CC2C479F01C8102C;       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
