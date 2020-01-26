#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.SetIcon
struct Uwgt_ShopCartListItem_C_SetIcon_Params
{
	int                                                item_no;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.Reset
struct Uwgt_ShopCartListItem_C_Reset_Params
{
};

// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.Construct
struct Uwgt_ShopCartListItem_C_Construct_Params
{
};

// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.ExecuteUbergraph_wgt_ShopCartListItem
struct Uwgt_ShopCartListItem_C_ExecuteUbergraph_wgt_ShopCartListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
