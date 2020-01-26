
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

// Function BP_UI_ShopManager.BP_UI_ShopManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopManager.BP_UI_ShopManager_C.UserConstructionScript");

	ABP_UI_ShopManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopManager.BP_UI_ShopManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_ShopManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopManager.BP_UI_ShopManager_C.ReceiveBeginPlay");

	ABP_UI_ShopManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopManager.BP_UI_ShopManager_C.ExecuteUbergraph_BP_UI_ShopManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopManager_C::ExecuteUbergraph_BP_UI_ShopManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopManager.BP_UI_ShopManager_C.ExecuteUbergraph_BP_UI_ShopManager");

	ABP_UI_ShopManager_C_ExecuteUbergraph_BP_UI_ShopManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
