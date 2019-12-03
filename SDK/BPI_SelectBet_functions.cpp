
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

// Function BPI_SelectBet.BPI_SelectBet_C.DecideCancel
// (NetReliable, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPI_SelectBet_C::STATIC_DecideCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.DecideCancel");

	UBPI_SelectBet_C_DecideCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.DecideBet
// (Net, NetReliable, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPI_SelectBet_C::STATIC_DecideBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.DecideBet");

	UBPI_SelectBet_C_DecideBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectCancel
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPI_SelectBet_C::STATIC_SelectCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectCancel");

	UBPI_SelectBet_C_SelectCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectMaxBet
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPI_SelectBet_C::STATIC_SelectMaxBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectMaxBet");

	UBPI_SelectBet_C_SelectMaxBet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectBetDown
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPI_SelectBet_C::SelectBetDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectBetDown");

	UBPI_SelectBet_C_SelectBetDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectBetUp
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPI_SelectBet_C::SelectBetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectBetUp");

	UBPI_SelectBet_C_SelectBetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
