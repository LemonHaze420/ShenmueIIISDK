
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

// Function BW_DebugBattle.BW_DebugBattle_C.BuildMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattle_C::BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattle.BW_DebugBattle_C.BuildMenu");

	UBW_DebugBattle_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattle.BW_DebugBattle_C.SetInitialFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattle_C::SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattle.BW_DebugBattle_C.SetInitialFocus");

	UBW_DebugBattle_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattle.BW_DebugBattle_C.ExecuteUbergraph_BW_DebugBattle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattle_C::ExecuteUbergraph_BW_DebugBattle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattle.BW_DebugBattle_C.ExecuteUbergraph_BW_DebugBattle");

	UBW_DebugBattle_C_ExecuteUbergraph_BW_DebugBattle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
