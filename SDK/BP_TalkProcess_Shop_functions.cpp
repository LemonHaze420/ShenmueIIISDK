
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_Shop_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.Activate");

	UBP_TalkProcess_Shop_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.BindShopEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Shop_C::BindShopEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.BindShopEvents");

	UBP_TalkProcess_Shop_C_BindShopEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnFinishedShop
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Shop_C::OnFinishedShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnFinishedShop");

	UBP_TalkProcess_Shop_C_OnFinishedShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.UnbindShopEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShopEventManager_C*  ShopManager                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Shop_C::UnbindShopEvents(class ABP_ShopEventManager_C* ShopManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.UnbindShopEvents");

	UBP_TalkProcess_Shop_C_UnbindShopEvents_Params params;
	params.ShopManager = ShopManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndBuyShop
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Shop_C::OnEndBuyShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndBuyShop");

	UBP_TalkProcess_Shop_C_OnEndBuyShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndNoBuyShop
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Shop_C::OnEndNoBuyShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.OnEndNoBuyShop");

	UBP_TalkProcess_Shop_C_OnEndNoBuyShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Shop.BP_TalkProcess_Shop_C.ExecuteUbergraph_BP_TalkProcess_Shop
// (HasDefaults)
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
