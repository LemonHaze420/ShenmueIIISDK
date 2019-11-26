
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

// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.BuildMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugPerfMenu_C::BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.BuildMenu");

	UBW_DebugPerfMenu_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.SetInitialFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugPerfMenu_C::SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.SetInitialFocus");

	UBW_DebugPerfMenu_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.OnLevelClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelStreaming*         Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugPerfMenu_C::OnLevelClicked(class ULevelStreaming* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.OnLevelClicked");

	UBW_DebugPerfMenu_C_OnLevelClicked_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenu.BW_DebugPerfMenu_C.ExecuteUbergraph_BW_DebugPerfMenu
// ()
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
