#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ShopEventManager.BP_ShopEventManager_C.CheckBGM
struct ABP_ShopEventManager_C_CheckBGM_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.UserConstructionScript
struct ABP_ShopEventManager_C_UserConstructionScript_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveTick
struct ABP_ShopEventManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopping
struct ABP_ShopEventManager_C_FinishShopping_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.DispKS
struct ABP_ShopEventManager_C_DispKS_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveBeginPlay
struct ABP_ShopEventManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopNoBuy
struct ABP_ShopEventManager_C_FinishShopNoBuy_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Shop
struct ABP_ShopEventManager_C_SwitchDoBuy_Shop_Params
{
	bool                                               DoBuy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Pawnsh
struct ABP_ShopEventManager_C_SwitchDoBuy_Pawnsh_Params
{
	bool                                               DoBuy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Exchange
struct ABP_ShopEventManager_C_SwitchDoBuy_Exchange_Params
{
	bool                                               DoBuy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.buyEnd
struct ABP_ShopEventManager_C_buyEnd_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.noBuyEnd
struct ABP_ShopEventManager_C_noBuyEnd_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_SetEchange
struct ABP_ShopEventManager_C_SwitchDoBuy_SetEchange_Params
{
	bool                                               DoBuy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.ExecuteUbergraph_BP_ShopEventManager
struct ABP_ShopEventManager_C_ExecuteUbergraph_BP_ShopEventManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.endBuy__DelegateSignature
struct ABP_ShopEventManager_C_endBuy__DelegateSignature_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.endNoBuy__DelegateSignature
struct ABP_ShopEventManager_C_endNoBuy__DelegateSignature_Params
{
};

// Function BP_ShopEventManager.BP_ShopEventManager_C.EndShopping__DelegateSignature
struct ABP_ShopEventManager_C_EndShopping__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
