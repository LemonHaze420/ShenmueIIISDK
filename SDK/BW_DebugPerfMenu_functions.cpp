
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

// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.BuildMenu
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugPerfMenu_C::STATIC_BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.BuildMenu");

	UBW_DebugPerfMenu_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.SetInitialFocus
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugPerfMenu_C::STATIC_SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.SetInitialFocus");

	UBW_DebugPerfMenu_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.OnLevelClicked
// (Native, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelStreaming*         Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugPerfMenu_C::OnLevelClicked(class ULevelStreaming* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.OnLevelClicked");

	UBW_DebugPerfMenu_C_OnLevelClicked_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.ExecuteUbergraph_BW_DebugPerfMenu
// (Net, MulticastDelegate, Public, Private, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugPerfMenu_C::ExecuteUbergraph_BW_DebugPerfMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.ExecuteUbergraph_BW_DebugPerfMenu");

	UBW_DebugPerfMenu_C_ExecuteUbergraph_BW_DebugPerfMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
