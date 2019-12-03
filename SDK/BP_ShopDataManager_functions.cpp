
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

// Function BP_ShopDataManager.BP_ShopDataManager_C.GetProductList
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ShopID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ItemIDs                        (Parm, OutParm, ZeroConstructor)

void ABP_ShopDataManager_C::GetProductList(int ShopID, TArray<int>* ItemIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopDataManager.BP_ShopDataManager_C.GetProductList");

	ABP_ShopDataManager_C_GetProductList_Params params;
	params.ShopID = ShopID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIDs != nullptr)
		*ItemIDs = params.ItemIDs;
}


// Function BP_ShopDataManager.BP_ShopDataManager_C.UserConstructionScript
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ShopDataManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopDataManager.BP_ShopDataManager_C.UserConstructionScript");

	ABP_ShopDataManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopDataManager.BP_ShopDataManager_C.ReceiveBeginPlay
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_ShopDataManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopDataManager.BP_ShopDataManager_C.ReceiveBeginPlay");

	ABP_ShopDataManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShopDataManager.BP_ShopDataManager_C.ExecuteUbergraph_BP_ShopDataManager
// (NetRequest, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShopDataManager_C::STATIC_ExecuteUbergraph_BP_ShopDataManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShopDataManager.BP_ShopDataManager_C.ExecuteUbergraph_BP_ShopDataManager");

	ABP_ShopDataManager_C_ExecuteUbergraph_BP_ShopDataManager_Params params;
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
