
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::CheckBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.CheckBGM");

	ABP_ShopEventManager_C_CheckBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.UserConstructionScript");

	ABP_ShopEventManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveTick");

	ABP_ShopEventManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopping
// (BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::FinishShopping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopping");

	ABP_ShopEventManager_C_FinishShopping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.DispKS
// (BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::DispKS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.DispKS");

	ABP_ShopEventManager_C_DispKS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShopEventManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.ReceiveBeginPlay");

	ABP_ShopEventManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopNoBuy
// (BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::FinishShopNoBuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.FinishShopNoBuy");

	ABP_ShopEventManager_C_FinishShopNoBuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Shop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::SwitchDoBuy_Shop(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Shop");

	ABP_ShopEventManager_C_SwitchDoBuy_Shop_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Pawnsh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::SwitchDoBuy_Pawnsh(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Pawnsh");

	ABP_ShopEventManager_C_SwitchDoBuy_Pawnsh_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Exchange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::SwitchDoBuy_Exchange(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_Exchange");

	ABP_ShopEventManager_C_SwitchDoBuy_Exchange_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.buyEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::buyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.buyEnd");

	ABP_ShopEventManager_C_buyEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.noBuyEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::noBuyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.noBuyEnd");

	ABP_ShopEventManager_C_noBuyEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_SetEchange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopEventManager_C::SwitchDoBuy_SetEchange(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.SwitchDoBuy_SetEchange");

	ABP_ShopEventManager_C_SwitchDoBuy_SetEchange_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.ExecuteUbergraph_BP_ShopEventManager
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::endBuy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.endBuy__DelegateSignature");

	ABP_ShopEventManager_C_endBuy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.endNoBuy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ShopEventManager_C::endNoBuy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopEventManager.BP_ShopEventManager_C.endNoBuy__DelegateSignature");

	ABP_ShopEventManager_C_endNoBuy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopEventManager.BP_ShopEventManager_C.EndShopping__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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
