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

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.Activate
struct UBP_TalkProcess_Shop_C_Activate_Params
{
};

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.BindShopEvents
struct UBP_TalkProcess_Shop_C_BindShopEvents_Params
{
};

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnFinishedShop
struct UBP_TalkProcess_Shop_C_OnFinishedShop_Params
{
};

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.UnbindShopEvents
struct UBP_TalkProcess_Shop_C_UnbindShopEvents_Params
{
	class ABP_ShopEventManager_C*                      ShopManager;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndBuyShop
struct UBP_TalkProcess_Shop_C_OnEndBuyShop_Params
{
};

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndNoBuyShop
struct UBP_TalkProcess_Shop_C_OnEndNoBuyShop_Params
{
};

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.ExecuteUbergraph_BP_TalkProcess_Shop
struct UBP_TalkProcess_Shop_C_ExecuteUbergraph_BP_TalkProcess_Shop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
