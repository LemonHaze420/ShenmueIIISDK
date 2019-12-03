
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

// Function BP_ShopEventManager.BP_ShopEventManager_C.CheckBGM
// (Net, Exec, Native, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void ABP_ShopEventManager_C::CheckBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.CheckBGM");

	ABP_ShopEventManager_C_CheckBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.UserConstructionScript
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_ShopEventManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.UserConstructionScript");

	ABP_ShopEventManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveTick
// (Net, NetReliable, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveTick");

	ABP_ShopEventManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopping
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShopEventManager_C::STATIC_FinishShopping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopping");

	ABP_ShopEventManager_C_FinishShopping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.DispKS
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShopEventManager_C::STATIC_DispKS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.DispKS");

	ABP_ShopEventManager_C_DispKS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShopEventManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveBeginPlay");

	ABP_ShopEventManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopNoBuy
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShopEventManager_C::STATIC_FinishShopNoBuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopNoBuy");

	ABP_ShopEventManager_C_FinishShopNoBuy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Shop
// (NetReliable, Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::STATIC_SwitchDoBuy_Shop(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Shop");

	ABP_ShopEventManager_C_SwitchDoBuy_Shop_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Pawnsh
// (NetReliable, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::STATIC_SwitchDoBuy_Pawnsh(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Pawnsh");

	ABP_ShopEventManager_C_SwitchDoBuy_Pawnsh_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Exchange
// (Net, NetRequest, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::STATIC_SwitchDoBuy_Exchange(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Exchange");

	ABP_ShopEventManager_C_SwitchDoBuy_Exchange_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.buyEnd
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShopEventManager_C::STATIC_buyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.buyEnd");

	ABP_ShopEventManager_C_buyEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.noBuyEnd
// (Net, Exec, NetResponse, Static, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_ShopEventManager_C::STATIC_noBuyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.noBuyEnd");

	ABP_ShopEventManager_C_noBuyEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_SetEchange
// (Exec, Native, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::STATIC_SwitchDoBuy_SetEchange(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_SetEchange");

	ABP_ShopEventManager_C_SwitchDoBuy_SetEchange_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.ExecuteUbergraph_BP_ShopEventManager
// (Public, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::ExecuteUbergraph_BP_ShopEventManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.ExecuteUbergraph_BP_ShopEventManager");

	ABP_ShopEventManager_C_ExecuteUbergraph_BP_ShopEventManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.endBuy__DelegateSignature
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_ShopEventManager_C::endBuy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.endBuy__DelegateSignature");

	ABP_ShopEventManager_C_endBuy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.endNoBuy__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_ShopEventManager_C::endNoBuy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.endNoBuy__DelegateSignature");

	ABP_ShopEventManager_C_endNoBuy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.EndShopping__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ShopEventManager_C::EndShopping__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.EndShopping__DelegateSignature");

	ABP_ShopEventManager_C_EndShopping__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
