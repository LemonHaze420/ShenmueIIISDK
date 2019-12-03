
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

// Function wgt_category_item.wgt_category_item_C.Selected
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::Selected(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.Selected");

	Uwgt_category_item_C_Selected_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.SetEnabledCursor
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::SetEnabledCursor(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.SetEnabledCursor");

	Uwgt_category_item_C_SetEnabledCursor_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.SetName
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 name_jp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 name_eng                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FColor                  str_col                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_category_item_C::SetName(const struct FString& name_jp, const struct FString& name_eng, const struct FColor& str_col)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.SetName");

	Uwgt_category_item_C_SetName_Params params;
	params.name_jp = name_jp;
	params.name_eng = name_eng;
	params.str_col = str_col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.Construct
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void Uwgt_category_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.Construct");

	Uwgt_category_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.Tick
// (NetReliable, NetRequest, Exec, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.Tick");

	Uwgt_category_item_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.SetButtonSelected
// (Net, NetReliable, Exec, Native, Event, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::SetButtonSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.SetButtonSelected");

	Uwgt_category_item_C_SetButtonSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.SetCursorEnabled
// (Net, Exec, Native, Event, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::SetCursorEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.SetCursorEnabled");

	Uwgt_category_item_C_SetCursorEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.SetText
// (NetReliable, Exec, Native, Event, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_category_item_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.SetText");

	Uwgt_category_item_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.ExecuteUbergraph_wgt_category_item
// (Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::STATIC_ExecuteUbergraph_wgt_category_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.ExecuteUbergraph_wgt_category_item");

	Uwgt_category_item_C_ExecuteUbergraph_wgt_category_item_Params params;
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
