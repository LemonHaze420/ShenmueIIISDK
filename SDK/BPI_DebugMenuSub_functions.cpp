
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

// Function BPI_DebugMenuSub.BPI_DebugMenuSub_C.SetInitialFocus
// (NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPI_DebugMenuSub_C::STATIC_SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DebugMenuSub.BPI_DebugMenuSub_C.SetInitialFocus");

	UBPI_DebugMenuSub_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_DebugMenuSub.BPI_DebugMenuSub_C.BuildMenu
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPI_DebugMenuSub_C::STATIC_BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DebugMenuSub.BPI_DebugMenuSub_C.BuildMenu");

	UBPI_DebugMenuSub_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
