
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

// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.IsItemSet
// (Net, Native, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_S3ItemListViewerWindow_C::IsItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.IsItemSet");

	Uwgt_S3ItemListViewerWindow_C_IsItemSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetVisible
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetVisible");

	Uwgt_S3ItemListViewerWindow_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCursorVisibility
// (NetReliable, NetRequest, Native, Event, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           SelectCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemListMenuType            MenuType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDialog                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetCursorVisibility(bool SelectCategory, ES3ItemListMenuType MenuType, bool IsDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCursorVisibility");

	Uwgt_S3ItemListViewerWindow_C_SetCursorVisibility_Params params;
	params.SelectCategory = SelectCategory;
	params.MenuType = MenuType;
	params.IsDialog = IsDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCursor_ItemSetRightWindow
// (Net, NetReliable, Exec, Event, NetMulticast, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetCursor_ItemSetRightWindow(int Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCursor_ItemSetRightWindow");

	Uwgt_S3ItemListViewerWindow_C_SetCursor_ItemSetRightWindow_Params params;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.DescriptionWindowVisibility
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_Inventory_CategoryType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::DescriptionWindowVisibility(TEnumAsByte<EN_Inventory_CategoryType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.DescriptionWindowVisibility");

	Uwgt_S3ItemListViewerWindow_C_DescriptionWindowVisibility_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.InputAxis_Left
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisiValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_InputAxis_Left(float AxisiValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.InputAxis_Left");

	Uwgt_S3ItemListViewerWindow_C_InputAxis_Left_Params params;
	params.AxisiValue = AxisiValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.EndViewMode
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3ItemListViewerWindow_C::STATIC_EndViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.EndViewMode");

	Uwgt_S3ItemListViewerWindow_C_EndViewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.StartViewMode
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::StartViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.StartViewMode");

	Uwgt_S3ItemListViewerWindow_C_StartViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetHealthBarVisibility
// (NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetHealthBarVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetHealthBarVisibility");

	Uwgt_S3ItemListViewerWindow_C_SetHealthBarVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.GetItemMesh
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_GetItemMesh(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.GetItemMesh");

	Uwgt_S3ItemListViewerWindow_C_GetItemMesh_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetItemCursor
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetItemCursor(int X, int Y, bool Visibility, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetItemCursor");

	Uwgt_S3ItemListViewerWindow_C_SetItemCursor_Params params;
	params.X = X;
	params.Y = Y;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.GetRowColumn
// (Net, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Row                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Column                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::GetRowColumn(int* Row, int* Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.GetRowColumn");

	Uwgt_S3ItemListViewerWindow_C_GetRowColumn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Row != nullptr)
		*Row = params.Row;
	if (Column != nullptr)
		*Column = params.Column;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SelectedCategory
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_SelectedCategory(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SelectedCategory");

	Uwgt_S3ItemListViewerWindow_C_SelectedCategory_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.UpdRowColumn
// (NetRequest, Exec, Native, Event, Static, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            col                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_UpdRowColumn(int col, int Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.UpdRowColumn");

	Uwgt_S3ItemListViewerWindow_C_UpdRowColumn_Params params;
	params.col = col;
	params.Row = Row;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCurPos
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_SetCurPos(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetCurPos");

	Uwgt_S3ItemListViewerWindow_C_SetCurPos_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.AddCategoryLine
// (NetRequest, Native, Event, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3ItemListViewerWindow_C::AddCategoryLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.AddCategoryLine");

	Uwgt_S3ItemListViewerWindow_C_AddCategoryLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ResetSelectItemList
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3ItemListViewerWindow_C::STATIC_ResetSelectItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ResetSelectItemList");

	Uwgt_S3ItemListViewerWindow_C_ResetSelectItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetDispSelectItem
// (Net, NetReliable, NetRequest, Exec, Event, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetDispSelectItem(int Index, bool isOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetDispSelectItem");

	Uwgt_S3ItemListViewerWindow_C_SetDispSelectItem_Params params;
	params.Index = Index;
	params.isOn = isOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.AddCategory
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 name_jp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 name_eng                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FColor                  str_color                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::AddCategory(const struct FString& name_jp, const struct FString& name_eng, const struct FColor& str_color)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.AddCategory");

	Uwgt_S3ItemListViewerWindow_C_AddCategory_Params params;
	params.name_jp = name_jp;
	params.name_eng = name_eng;
	params.str_color = str_color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetPageCurrent
// (NetRequest, NetResponse, Static, NetMulticast, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Now                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_SetPageCurrent(int Now)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetPageCurrent");

	Uwgt_S3ItemListViewerWindow_C_SetPageCurrent_Params params;
	params.Now = Now;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetPageMax
// (NetReliable, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::SetPageMax(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.SetPageMax");

	Uwgt_S3ItemListViewerWindow_C_SetPageMax_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PrevScroll
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NextScrollVal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_PrevScroll(float NextScrollVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PrevScroll");

	Uwgt_S3ItemListViewerWindow_C_PrevScroll_Params params;
	params.NextScrollVal = NextScrollVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.NextScroll
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NextScrollVal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_NextScroll(float NextScrollVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.NextScroll");

	Uwgt_S3ItemListViewerWindow_C_NextScroll_Params params;
	params.NextScrollVal = NextScrollVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PlayCloseAnime
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::PlayCloseAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PlayCloseAnime");

	Uwgt_S3ItemListViewerWindow_C_PlayCloseAnime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PlayOpenAnime
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::PlayOpenAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PlayOpenAnime");

	Uwgt_S3ItemListViewerWindow_C_PlayOpenAnime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PreConstruct
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.PreConstruct");

	Uwgt_S3ItemListViewerWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.Construct
// (Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.Construct");

	Uwgt_S3ItemListViewerWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.Tick
// (Net, NetReliable, Native, NetResponse, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.Tick");

	Uwgt_S3ItemListViewerWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::STATIC_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3ItemListViewerWindow_C_BndEvt__Open_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::STATIC_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3ItemListViewerWindow_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Start_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::STATIC_BndEvt__Start_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.BndEvt__Start_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3ItemListViewerWindow_C_BndEvt__Start_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ExecuteUbergraph_wgt_S3ItemListViewerWindow
// (Net, NetReliable, Exec, Event, Static, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3ItemListViewerWindow_C::STATIC_ExecuteUbergraph_wgt_S3ItemListViewerWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ExecuteUbergraph_wgt_S3ItemListViewerWindow");

	Uwgt_S3ItemListViewerWindow_C_ExecuteUbergraph_wgt_S3ItemListViewerWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ED_StartAnim__DelegateSignature
// (Net, Native, NetResponse, NetMulticast, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3ItemListViewerWindow_C::ED_StartAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3ItemListViewerWindow.wgt_S3ItemListViewerWindow_C.ED_StartAnim__DelegateSignature");

	Uwgt_S3ItemListViewerWindow_C_ED_StartAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
