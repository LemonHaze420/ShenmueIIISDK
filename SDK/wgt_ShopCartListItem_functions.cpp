
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

// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.SetIcon
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            item_no                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ShopCartListItem_C::STATIC_SetIcon(int item_no)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.SetIcon");

	Uwgt_ShopCartListItem_C_SetIcon_Params params;
	params.item_no = item_no;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.Reset
// (Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void Uwgt_ShopCartListItem_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.Reset");

	Uwgt_ShopCartListItem_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.Construct
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_ShopCartListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.Construct");

	Uwgt_ShopCartListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.ExecuteUbergraph_wgt_ShopCartListItem
// (NetReliable, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ShopCartListItem_C::STATIC_ExecuteUbergraph_wgt_ShopCartListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ShopCartListItem.wgt_ShopCartListItem_C.ExecuteUbergraph_wgt_ShopCartListItem");

	Uwgt_ShopCartListItem_C_ExecuteUbergraph_wgt_ShopCartListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
