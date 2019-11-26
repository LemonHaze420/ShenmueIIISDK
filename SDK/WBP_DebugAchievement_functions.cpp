
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

// Function WBP_DebugAchievement.WBP_DebugAchievement_C.SetFocusToTypeSelector
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugAchievement_C::SetFocusToTypeSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.SetFocusToTypeSelector");

	UWBP_DebugAchievement_C_SetFocusToTypeSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.UpdateFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugAchievement_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.UpdateFocus");

	UWBP_DebugAchievement_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.SetFocusToItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugAchievement_C::SetFocusToItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.SetFocusToItem");

	UWBP_DebugAchievement_C_SetFocusToItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DebugAchievement_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.OnPreviewKeyDown");

	UWBP_DebugAchievement_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.BuildAchievementList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DebugAchievement_C::BuildAchievementList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.BuildAchievementList");

	UWBP_DebugAchievement_C_BuildAchievementList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DebugAchievement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.Construct");

	UWBP_DebugAchievement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.PropertyChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_DebugAchievement_C::PropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.PropertyChanged");

	UWBP_DebugAchievement_C_PropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugAchievement.WBP_DebugAchievement_C.ExecuteUbergraph_WBP_DebugAchievement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugAchievement_C::ExecuteUbergraph_WBP_DebugAchievement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugAchievement.WBP_DebugAchievement_C.ExecuteUbergraph_WBP_DebugAchievement");

	UWBP_DebugAchievement_C_ExecuteUbergraph_WBP_DebugAchievement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
