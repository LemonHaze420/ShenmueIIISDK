
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.Activate
// (Net, NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBP_TalkProcess_Shop_C::STATIC_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.Activate");

	UBP_TalkProcess_Shop_C_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.BindShopEvents
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBP_TalkProcess_Shop_C::STATIC_BindShopEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.BindShopEvents");

	UBP_TalkProcess_Shop_C_BindShopEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnFinishedShop
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBP_TalkProcess_Shop_C::STATIC_OnFinishedShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnFinishedShop");

	UBP_TalkProcess_Shop_C_OnFinishedShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.UnbindShopEvents
// (Net, Exec, Native, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_ShopEventManager_C*  ShopManager                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Shop_C::STATIC_UnbindShopEvents(class ABP_ShopEventManager_C* ShopManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.UnbindShopEvents");

	UBP_TalkProcess_Shop_C_UnbindShopEvents_Params params;
	params.ShopManager = ShopManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndBuyShop
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBP_TalkProcess_Shop_C::STATIC_OnEndBuyShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndBuyShop");

	UBP_TalkProcess_Shop_C_OnEndBuyShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndNoBuyShop
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBP_TalkProcess_Shop_C::STATIC_OnEndNoBuyShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndNoBuyShop");

	UBP_TalkProcess_Shop_C_OnEndNoBuyShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.ExecuteUbergraph_BP_TalkProcess_Shop
// (Net, NetMulticast, MulticastDelegate, Public, Protected, DLLImport, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Shop_C::ExecuteUbergraph_BP_TalkProcess_Shop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.ExecuteUbergraph_BP_TalkProcess_Shop");

	UBP_TalkProcess_Shop_C_ExecuteUbergraph_BP_TalkProcess_Shop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
