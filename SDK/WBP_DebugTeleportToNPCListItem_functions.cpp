
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

// Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.SetFocusToButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugTeleportToNPCListItem_C::SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.SetFocusToButton");

	UWBP_DebugTeleportToNPCListItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugTeleportToNPCListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.Construct");

	UWBP_DebugTeleportToNPCListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugTeleportToNPCListItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UWBP_DebugTeleportToNPCListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.ExecuteUbergraph_WBP_DebugTeleportToNPCListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugTeleportToNPCListItem_C::ExecuteUbergraph_WBP_DebugTeleportToNPCListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugTeleportToNPCListItem.WBP_DebugTeleportToNPCListItem_C.ExecuteUbergraph_WBP_DebugTeleportToNPCListItem");

	UWBP_DebugTeleportToNPCListItem_C_ExecuteUbergraph_WBP_DebugTeleportToNPCListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
