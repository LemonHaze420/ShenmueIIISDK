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

// UserDefinedStruct UseItemSetTable.UseItemSetTable
// 0x0050
struct FUseItemSetTable
{
	struct FString                                     useitem_set_id_5_54C4D00241A04F4B655B3F8C6B3482AE;        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                index_10_1EC63DA643961DD19BFBB5B18845FE35;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     item_list_3_640786E645A7CC7C07EC258E858383A8;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EN_UseItemResult>                      result_16_3DB57EC0458D3072D45DAEA652D88DF6;               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               consume_flag_19_F302777F410051166F4347AEC1552A34;         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FString                                     returnStr_7_DA75BCC14AC205A6499D918E396AC9FB;             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     UnknownVar01;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
