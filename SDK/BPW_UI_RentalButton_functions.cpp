
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

// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.SetNameAndPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Price                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_RentalButton_C::SetNameAndPrice(const struct FText& Name, const struct FText& Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.SetNameAndPrice");

	UBPW_UI_RentalButton_C_SetNameAndPrice_Params params;
	params.Name = Name;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RentalButton_C::SelectButton(bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.SelectButton");

	UBPW_UI_RentalButton_C_SelectButton_Params params;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.FocusButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RentalButton_C::FocusButton(bool Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.FocusButton");

	UBPW_UI_RentalButton_C_FocusButton_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_RentalButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.Construct");

	UBPW_UI_RentalButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.ExecuteUbergraph_BPW_UI_RentalButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_RentalButton_C::ExecuteUbergraph_BPW_UI_RentalButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_RentalButton.BPW_UI_RentalButton_C.ExecuteUbergraph_BPW_UI_RentalButton");

	UBPW_UI_RentalButton_C_ExecuteUbergraph_BPW_UI_RentalButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
