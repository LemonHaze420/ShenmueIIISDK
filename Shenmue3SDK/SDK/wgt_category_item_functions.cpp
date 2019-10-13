
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

// Function wgt_category_item.wgt_category_item_C.Selected
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_category_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.Construct");

	Uwgt_category_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.Tick");

	Uwgt_category_item_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_category_item.wgt_category_item_C.ExecuteUbergraph_wgt_category_item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_category_item_C::ExecuteUbergraph_wgt_category_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_item.wgt_category_item_C.ExecuteUbergraph_wgt_category_item");

	Uwgt_category_item_C_ExecuteUbergraph_wgt_category_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
