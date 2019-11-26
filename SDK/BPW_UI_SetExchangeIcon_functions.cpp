
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

// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ResetScroll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_SetExchangeIcon_C::ResetScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ResetScroll");

	UBPW_UI_SetExchangeIcon_C_ResetScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ScrollSetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_SetExchangeIcon_C::ScrollSetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ScrollSetName");

	UBPW_UI_SetExchangeIcon_C_ScrollSetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ChangeInventoryType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_SetExchangeIcon_C::ChangeInventoryType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ChangeInventoryType");

	UBPW_UI_SetExchangeIcon_C_ChangeInventoryType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.CanExchange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Exchange                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_SetExchangeIcon_C::CanExchange(bool Exchange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.CanExchange");

	UBPW_UI_SetExchangeIcon_C_CanExchange_Params params;
	params.Exchange = Exchange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_SetExchangeIcon_C::GetItemID(int* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetItemID");

	UBPW_UI_SetExchangeIcon_C_GetItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UBPW_UI_SetExchangeIcon_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetName");

	UBPW_UI_SetExchangeIcon_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.FocusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_SetExchangeIcon_C::FocusIcon(bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.FocusIcon");

	UBPW_UI_SetExchangeIcon_C_FocusIcon_Params params;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetDescription
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Description                    (Parm, OutParm, ZeroConstructor)

void UBPW_UI_SetExchangeIcon_C::GetDescription(struct FString* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.GetDescription");

	UBPW_UI_SetExchangeIcon_C_GetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Description != nullptr)
		*Description = params.Description;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_UI_SetExchangeIcon_C::SetData(int ItemId, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.SetData");

	UBPW_UI_SetExchangeIcon_C_SetData_Params params;
	params.ItemId = ItemId;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_SetExchangeIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.Tick");

	UBPW_UI_SetExchangeIcon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_SetExchangeIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.PreConstruct");

	UBPW_UI_SetExchangeIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ExecuteUbergraph_BPW_UI_SetExchangeIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_SetExchangeIcon_C::ExecuteUbergraph_BPW_UI_SetExchangeIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_SetExchangeIcon.BPW_UI_SetExchangeIcon_C.ExecuteUbergraph_BPW_UI_SetExchangeIcon");

	UBPW_UI_SetExchangeIcon_C_ExecuteUbergraph_BPW_UI_SetExchangeIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
