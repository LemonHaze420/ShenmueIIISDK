
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.AnimNotify_ReleasedItem
// (BlueprintCallable, BlueprintEvent)

void UABP_BellTowerPillarUseItem_C::AnimNotify_ReleasedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.AnimNotify_ReleasedItem");

	UABP_BellTowerPillarUseItem_C_AnimNotify_ReleasedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.ExecuteUbergraph_ABP_BellTowerPillarUseItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BellTowerPillarUseItem_C::ExecuteUbergraph_ABP_BellTowerPillarUseItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.ExecuteUbergraph_ABP_BellTowerPillarUseItem");

	UABP_BellTowerPillarUseItem_C_ExecuteUbergraph_ABP_BellTowerPillarUseItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C.OnNotifyReleasedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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
