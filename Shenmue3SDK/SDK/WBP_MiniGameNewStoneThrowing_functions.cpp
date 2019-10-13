
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

// Function WBP_MiniGameNewStoneThrowing.WBP_MiniGameNewStoneThrowing_C.SetVisibleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameNewStoneThrowing_C::SetVisibleButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameNewStoneThrowing.WBP_MiniGameNewStoneThrowing_C.SetVisibleButton");

	UWBP_MiniGameNewStoneThrowing_C_SetVisibleButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameNewStoneThrowing.WBP_MiniGameNewStoneThrowing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameNewStoneThrowing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameNewStoneThrowing.WBP_MiniGameNewStoneThrowing_C.Construct");

	UWBP_MiniGameNewStoneThrowing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameNewStoneThrowing.WBP_MiniGameNewStoneThrowing_C.ExecuteUbergraph_WBP_MiniGameNewStoneThrowing
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameNewStoneThrowing_C::ExecuteUbergraph_WBP_MiniGameNewStoneThrowing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameNewStoneThrowing.WBP_MiniGameNewStoneThrowing_C.ExecuteUbergraph_WBP_MiniGameNewStoneThrowing");

	UWBP_MiniGameNewStoneThrowing_C_ExecuteUbergraph_WBP_MiniGameNewStoneThrowing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
