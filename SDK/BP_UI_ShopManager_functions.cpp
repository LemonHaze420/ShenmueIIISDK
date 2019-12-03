
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

// Function BP_UI_ShopManager.BP_UI_ShopManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_UI_ShopManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopManager.BP_UI_ShopManager_C.UserConstructionScript");

	ABP_UI_ShopManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopManager.BP_UI_ShopManager_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer)

void ABP_UI_ShopManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopManager.BP_UI_ShopManager_C.ReceiveBeginPlay");

	ABP_UI_ShopManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopManager.BP_UI_ShopManager_C.ExecuteUbergraph_BP_UI_ShopManager
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopManager_C::STATIC_ExecuteUbergraph_BP_UI_ShopManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopManager.BP_UI_ShopManager_C.ExecuteUbergraph_BP_UI_ShopManager");

	ABP_UI_ShopManager_C_ExecuteUbergraph_BP_UI_ShopManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
