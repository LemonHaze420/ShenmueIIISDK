
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

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.CheckStreetFight
// (Net, NetReliable, NetRequest, Event, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Bet_C::CheckStreetFight(bool* Success, int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.CheckStreetFight");

	UBP_TalkProcess_Bet_C_CheckStreetFight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Price != nullptr)
		*Price = params.Price;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.OnBetCancel
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Bet_C::OnBetCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.OnBetCancel");

	UBP_TalkProcess_Bet_C_OnBetCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.OnBet
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Bet_C::OnBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.OnBet");

	UBP_TalkProcess_Bet_C_OnBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.WasEnteredBet
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Bet_C::WasEnteredBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.WasEnteredBet");

	UBP_TalkProcess_Bet_C_WasEnteredBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.CreateBetUI
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            bet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            maxbet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FluctuationValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_ValueType>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Bet_C::CreateBetUI(int bet, int maxbet, int FluctuationValue, TEnumAsByte<EN_ValueType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.CreateBetUI");

	UBP_TalkProcess_Bet_C_CreateBetUI_Params params;
	params.bet = bet;
	params.maxbet = maxbet;
	params.FluctuationValue = FluctuationValue;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.Finalize
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Bet_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.Finalize");

	UBP_TalkProcess_Bet_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.Activate
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Bet_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.Activate");

	UBP_TalkProcess_Bet_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.ExecuteUbergraph_BP_TalkProcess_Bet
// (Static, NetMulticast, Private, Delegate, DLLImport, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Bet_C::STATIC_ExecuteUbergraph_BP_TalkProcess_Bet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.ExecuteUbergraph_BP_TalkProcess_Bet");

	UBP_TalkProcess_Bet_C_ExecuteUbergraph_BP_TalkProcess_Bet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
