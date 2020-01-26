
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

// Function BPI_SelectBet.BPI_SelectBet_C.DecideCancel
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SelectBet_C::DecideCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.DecideCancel");

	UBPI_SelectBet_C_DecideCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.DecideBet
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SelectBet_C::DecideBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.DecideBet");

	UBPI_SelectBet_C_DecideBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectCancel
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SelectBet_C::SelectCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectCancel");

	UBPI_SelectBet_C_SelectCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectMaxBet
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SelectBet_C::SelectMaxBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectMaxBet");

	UBPI_SelectBet_C_SelectMaxBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectBetDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SelectBet_C::SelectBetDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SelectBet.BPI_SelectBet_C.SelectBetDown");

	UBPI_SelectBet_C_SelectBetDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SelectBet.BPI_SelectBet_C.SelectBetUp
// (Public, BlueprintCallable, BlueprintEvent)

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
