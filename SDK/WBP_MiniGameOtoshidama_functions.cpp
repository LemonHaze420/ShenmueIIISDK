
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

// Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.SetVisibleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameOtoshidama_C::SetVisibleButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.SetVisibleButton");

	UWBP_MiniGameOtoshidama_C_SetVisibleButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameOtoshidama_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.Construct");

	UWBP_MiniGameOtoshidama_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.ExecuteUbergraph_WBP_MiniGameOtoshidama
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameOtoshidama_C::ExecuteUbergraph_WBP_MiniGameOtoshidama(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.ExecuteUbergraph_WBP_MiniGameOtoshidama");

	UWBP_MiniGameOtoshidama_C_ExecuteUbergraph_WBP_MiniGameOtoshidama_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
