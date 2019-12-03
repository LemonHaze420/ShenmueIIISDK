
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

// Function wgt_skiledit.wgt_skiledit_C.SetWazeSlotSwitchSel
// (Net, NetRequest, Native, Event, NetResponse, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::STATIC_SetWazeSlotSwitchSel(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.SetWazeSlotSwitchSel");

	Uwgt_skiledit_C_SetWazeSlotSwitchSel_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.SetWazePageSel
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::STATIC_SetWazePageSel(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.SetWazePageSel");

	Uwgt_skiledit_C_SetWazePageSel_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.UpdatePageIcons
// (NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_skiledit_C::UpdatePageIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.UpdatePageIcons");

	Uwgt_skiledit_C_UpdatePageIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.UpdateDetailPanel
// (NetReliable, Native, Event, NetResponse, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_skiledit_C::STATIC_UpdateDetailPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.UpdateDetailPanel");

	Uwgt_skiledit_C_UpdateDetailPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.UpdateBookItem
// (NetReliable, Native, NetMulticast, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::UpdateBookItem(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.UpdateBookItem");

	Uwgt_skiledit_C_UpdateBookItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_skiledit.wgt_skiledit_C.OpenBookToItem(ItemIntID)
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemIntID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetIndexOnInvalid              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::OpenBookToItem_ItemIntID_(int ItemIntID, int SetIndexOnInvalid, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.OpenBookToItem(ItemIntID)");

	Uwgt_skiledit_C_OpenBookToItem_ItemIntID__Params params;
	params.ItemIntID = ItemIntID;
	params.SetIndexOnInvalid = SetIndexOnInvalid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_skiledit.wgt_skiledit_C.UpdateSetSelection
// (NetRequest, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_skiledit_C::STATIC_UpdateSetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.UpdateSetSelection");

	Uwgt_skiledit_C_UpdateSetSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.SetBookPage
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::STATIC_SetBookPage(int InputPin, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.SetBookPage");

	Uwgt_skiledit_C_SetBookPage_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_skiledit.wgt_skiledit_C.PushLR
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            AddPage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::STATIC_PushLR(int AddPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.PushLR");

	Uwgt_skiledit_C_PushLR_Params params;
	params.AddPage = AddPage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.InitPageIcon
// (NetReliable, NetRequest, Native, NetMulticast, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_skiledit_C::InitPageIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.InitPageIcon");

	Uwgt_skiledit_C_InitPageIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.SetCurrentMode
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESkillEditorInnnerModeType> current_mode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::STATIC_SetCurrentMode(TEnumAsByte<ESkillEditorInnnerModeType> current_mode, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.SetCurrentMode");

	Uwgt_skiledit_C_SetCurrentMode_Params params;
	params.current_mode = current_mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_skiledit.wgt_skiledit_C.ExecDialog
// (Net, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_skiledit_C::ExecDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.ExecDialog");

	Uwgt_skiledit_C_ExecDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.InputSelectDirection
// (NetRequest, Native, Event, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Een_skill_key_type> Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActionButton                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::STATIC_InputSelectDirection(TEnumAsByte<Een_skill_key_type> Key, bool* IsActionButton, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.InputSelectDirection");

	Uwgt_skiledit_C_InputSelectDirection_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActionButton != nullptr)
		*IsActionButton = params.IsActionButton;
	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_skiledit.wgt_skiledit_C.InputCancel
// (Native, NetMulticast, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::InputCancel(bool* IsEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.InputCancel");

	Uwgt_skiledit_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnd != nullptr)
		*IsEnd = params.IsEnd;
}


// Function wgt_skiledit.wgt_skiledit_C.InputSelect
// (NetRequest, NetMulticast, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::InputSelect(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.InputSelect");

	Uwgt_skiledit_C_InputSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_skiledit.wgt_skiledit_C.PreConstruct
// (Net, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.PreConstruct");

	Uwgt_skiledit_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.Destruct
// (NetReliable, Native, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_skiledit_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.Destruct");

	Uwgt_skiledit_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.Construct
// (Net, Native, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_skiledit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.Construct");

	Uwgt_skiledit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skiledit.wgt_skiledit_C.ExecuteUbergraph_wgt_skiledit
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skiledit_C::ExecuteUbergraph_wgt_skiledit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skiledit.wgt_skiledit_C.ExecuteUbergraph_wgt_skiledit");

	Uwgt_skiledit_C_ExecuteUbergraph_wgt_skiledit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
