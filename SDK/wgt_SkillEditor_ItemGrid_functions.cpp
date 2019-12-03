
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

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetSkillLibrary
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_SetSkillLibrary(class UBTL_CommandLibrary_C* SkillLibrary)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetSkillLibrary");

	Uwgt_SkillEditor_ItemGrid_C_SetSkillLibrary_Params params;
	params.SkillLibrary = SkillLibrary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetSelectionItemLabel
// (Net, NetRequest, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_GetSelectionItemLabel(struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetSelectionItemLabel");

	Uwgt_SkillEditor_ItemGrid_C_GetSelectionItemLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.UpdateWidgetFocusing
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_UpdateWidgetFocusing(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.UpdateWidgetFocusing");

	Uwgt_SkillEditor_ItemGrid_C_UpdateWidgetFocusing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetFocus
// (NetReliable, Exec, Static, NetMulticast, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_SetFocus(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetFocus");

	Uwgt_SkillEditor_ItemGrid_C_SetFocus_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SelectItem(WidgetIndex)
// (Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::SelectItem_WidgetIndex_(int Index, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SelectItem(WidgetIndex)");

	Uwgt_SkillEditor_ItemGrid_C_SelectItem_WidgetIndex__Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SelectItem(ItemIntID)
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::SelectItem_ItemIntID_(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SelectItem(ItemIntID)");

	Uwgt_SkillEditor_ItemGrid_C_SelectItem_ItemIntID__Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.ClearSelection
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.ClearSelection");

	Uwgt_SkillEditor_ItemGrid_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetItems
// (NetReliable, NetRequest, NetResponse, Static, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AllItems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_SetItems(int StartIndex, TArray<int> AllItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetItems");

	Uwgt_SkillEditor_ItemGrid_C_SetItems_Params params;
	params.StartIndex = StartIndex;
	params.AllItems = AllItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetSelectionItemID
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemIntID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_GetSelectionItemID(int* ItemIntID)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetSelectionItemID");

	Uwgt_SkillEditor_ItemGrid_C_GetSelectionItemID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIntID != nullptr)
		*ItemIntID = params.ItemIntID;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GridLocationToWidgetIndex
// (NetMulticast, Public, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::GridLocationToWidgetIndex(int X, int Y, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GridLocationToWidgetIndex");

	Uwgt_SkillEditor_ItemGrid_C_GridLocationToWidgetIndex_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.MoveSelection
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// TEnumAsByte<Een_skill_key_type> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_MoveSelection(TEnumAsByte<Een_skill_key_type> Direction, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.MoveSelection");

	Uwgt_SkillEditor_ItemGrid_C_MoveSelection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.WidgetIndexToGridLocation
// (NetReliable, Event, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Column                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Row                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::WidgetIndexToGridLocation(int Index, int* Column, int* Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.WidgetIndexToGridLocation");

	Uwgt_SkillEditor_ItemGrid_C_WidgetIndexToGridLocation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Column != nullptr)
		*Column = params.Column;
	if (Row != nullptr)
		*Row = params.Row;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetGridItemCount
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::GetGridItemCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetGridItemCount");

	Uwgt_SkillEditor_ItemGrid_C_GetGridItemCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.Construct
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_SkillEditor_ItemGrid_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.Construct");

	Uwgt_SkillEditor_ItemGrid_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.ExecuteUbergraph_wgt_SkillEditor_ItemGrid
// (Exec, Native, Event, Static, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_ItemGrid_C::STATIC_ExecuteUbergraph_wgt_SkillEditor_ItemGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.ExecuteUbergraph_wgt_SkillEditor_ItemGrid");

	Uwgt_SkillEditor_ItemGrid_C_ExecuteUbergraph_wgt_SkillEditor_ItemGrid_Params params;
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
