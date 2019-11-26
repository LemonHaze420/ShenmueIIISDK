
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

// Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_Fishing_RentalEndPop_C::SetText(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.SetText");

	UWBP_Fishing_RentalEndPop_C_SetText_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Fishing_RentalEndPop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.Construct");

	UWBP_Fishing_RentalEndPop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_Fishing_RentalEndPop_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.OnAnimFinished");

	UWBP_Fishing_RentalEndPop_C_OnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.ExecuteUbergraph_WBP_Fishing_RentalEndPop
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_RentalEndPop_C::ExecuteUbergraph_WBP_Fishing_RentalEndPop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_RentalEndPop.WBP_Fishing_RentalEndPop_C.ExecuteUbergraph_WBP_Fishing_RentalEndPop");

	UWBP_Fishing_RentalEndPop_C_ExecuteUbergraph_WBP_Fishing_RentalEndPop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
