
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

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::ButtonSelect(bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ButtonSelect");

	Uwgt_SkillEditor_SetPanel_C_ButtonSelect_Params params;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetButtonImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           auto                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::SetButtonImage(bool Auto)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetButtonImage");

	Uwgt_SkillEditor_SetPanel_C_SetButtonImage_Params params;
	params.Auto = Auto;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Int)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemIntID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::GetSelectedSkillItem_Int_(int* ItemIntID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Int)");

	Uwgt_SkillEditor_SetPanel_C_GetSelectedSkillItem_Int__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIntID != nullptr)
		*ItemIntID = params.ItemIntID;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::SetFocus(bool Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetFocus");

	Uwgt_SkillEditor_SetPanel_C_SetFocus_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Name)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemLabel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::GetSelectedSkillItem_Name_(struct FName* ItemLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Name)");

	Uwgt_SkillEditor_SetPanel_C_GetSelectedSkillItem_Name__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLabel != nullptr)
		*ItemLabel = params.ItemLabel;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedIndex");

	Uwgt_SkillEditor_SetPanel_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetItemDisplayNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Skills                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_SkillEditor_SetPanel_C::SetItemDisplayNames(TArray<struct FName>* Skills)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetItemDisplayNames");

	Uwgt_SkillEditor_SetPanel_C_SetItemDisplayNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skills != nullptr)
		*Skills = params.Skills;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_SkillEditor_SetPanel_C::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ClearSelection");

	Uwgt_SkillEditor_SetPanel_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.MoveSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::MoveSelection(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.MoveSelection");

	Uwgt_SkillEditor_SetPanel_C_MoveSelection_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SelectSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::SelectSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SelectSlot");

	Uwgt_SkillEditor_SetPanel_C_SelectSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.PreConstruct");

	Uwgt_SkillEditor_SetPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_SkillEditor_SetPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.Construct");

	Uwgt_SkillEditor_SetPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ExecuteUbergraph_wgt_SkillEditor_SetPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::ExecuteUbergraph_wgt_SkillEditor_SetPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ExecuteUbergraph_wgt_SkillEditor_SetPanel");

	Uwgt_SkillEditor_SetPanel_C_ExecuteUbergraph_wgt_SkillEditor_SetPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
