
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

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ButtonSelect
// (NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_ButtonSelect(bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ButtonSelect");

	Uwgt_SkillEditor_SetPanel_C_ButtonSelect_Params params;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetButtonImage
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           auto                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_SetButtonImage(bool Auto)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetButtonImage");

	Uwgt_SkillEditor_SetPanel_C_SetButtonImage_Params params;
	params.Auto = Auto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Int)
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemIntID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_GetSelectedSkillItem_Int_(int* ItemIntID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Int)");

	Uwgt_SkillEditor_SetPanel_C_GetSelectedSkillItem_Int__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIntID != nullptr)
		*ItemIntID = params.ItemIntID;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetFocus
// (Net, NetReliable, NetRequest, Static, NetMulticast, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_SetFocus(bool Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetFocus");

	Uwgt_SkillEditor_SetPanel_C_SetFocus_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Name)
// (Net, Exec, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, Exec, Native, NetResponse, Static, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedIndex");

	Uwgt_SkillEditor_SetPanel_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetItemDisplayNames
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           Skills                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_SkillEditor_SetPanel_C::SetItemDisplayNames(TArray<struct FName>* Skills)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetItemDisplayNames");

	Uwgt_SkillEditor_SetPanel_C_SetItemDisplayNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skills != nullptr)
		*Skills = params.Skills;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ClearSelection
// (NetRequest, Exec, Native, NetResponse, Static, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_SkillEditor_SetPanel_C::STATIC_ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ClearSelection");

	Uwgt_SkillEditor_SetPanel_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.MoveSelection
// (Exec, Static, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_MoveSelection(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.MoveSelection");

	Uwgt_SkillEditor_SetPanel_C_MoveSelection_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SelectSlot
// (Net, Native, Event, NetResponse, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::SelectSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SelectSlot");

	Uwgt_SkillEditor_SetPanel_C_SelectSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.PreConstruct
// (NetReliable, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.PreConstruct");

	Uwgt_SkillEditor_SetPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.Construct
// (Net, NetReliable, Exec, Native, NetResponse, Static, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_SkillEditor_SetPanel_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.Construct");

	Uwgt_SkillEditor_SetPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ExecuteUbergraph_wgt_SkillEditor_SetPanel
// (NetRequest, Native, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_SetPanel_C::STATIC_ExecuteUbergraph_wgt_SkillEditor_SetPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ExecuteUbergraph_wgt_SkillEditor_SetPanel");

	Uwgt_SkillEditor_SetPanel_C_ExecuteUbergraph_wgt_SkillEditor_SetPanel_Params params;
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
