
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

// Function WBP_MiniGameMoveIcon.WBP_MiniGameMoveIcon_C.SetVisibleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameMoveIcon_C::SetVisibleIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameMoveIcon.WBP_MiniGameMoveIcon_C.SetVisibleIcon");

	UWBP_MiniGameMoveIcon_C_SetVisibleIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameMoveIcon.WBP_MiniGameMoveIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameMoveIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameMoveIcon.WBP_MiniGameMoveIcon_C.Construct");

	UWBP_MiniGameMoveIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameMoveIcon.WBP_MiniGameMoveIcon_C.ExecuteUbergraph_WBP_MiniGameMoveIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameMoveIcon_C::ExecuteUbergraph_WBP_MiniGameMoveIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameMoveIcon.WBP_MiniGameMoveIcon_C.ExecuteUbergraph_WBP_MiniGameMoveIcon");

	UWBP_MiniGameMoveIcon_C_ExecuteUbergraph_WBP_MiniGameMoveIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
