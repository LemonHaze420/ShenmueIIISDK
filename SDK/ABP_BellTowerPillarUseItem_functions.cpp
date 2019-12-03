
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

// Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.AnimNotify_ReleasedItem
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UABP_BellTowerPillarUseItem_C::AnimNotify_ReleasedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.AnimNotify_ReleasedItem");

	UABP_BellTowerPillarUseItem_C_AnimNotify_ReleasedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.ExecuteUbergraph_ABP_BellTowerPillarUseItem
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BellTowerPillarUseItem_C::STATIC_ExecuteUbergraph_ABP_BellTowerPillarUseItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.ExecuteUbergraph_ABP_BellTowerPillarUseItem");

	UABP_BellTowerPillarUseItem_C_ExecuteUbergraph_ABP_BellTowerPillarUseItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.OnNotifyReleasedItem__DelegateSignature
// (Net, NetReliable, Exec, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UABP_BellTowerPillarUseItem_C::OnNotifyReleasedItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.OnNotifyReleasedItem__DelegateSignature");

	UABP_BellTowerPillarUseItem_C_OnNotifyReleasedItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
