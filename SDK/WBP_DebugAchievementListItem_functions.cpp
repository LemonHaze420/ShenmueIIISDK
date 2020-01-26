
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

// Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.SetFocusToButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugAchievementListItem_C::SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.SetFocusToButton");

	UWBP_DebugAchievementListItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugAchievementListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.Construct");

	UWBP_DebugAchievementListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAchievementListItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UWBP_DebugAchievementListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.ExecuteUbergraph_WBP_DebugAchievementListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugAchievementListItem_C::ExecuteUbergraph_WBP_DebugAchievementListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievementListItem.WBP_DebugAchievementListItem_C.ExecuteUbergraph_WBP_DebugAchievementListItem");

	UWBP_DebugAchievementListItem_C_ExecuteUbergraph_WBP_DebugAchievementListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
