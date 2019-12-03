
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

// Function BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C.GetRewardPrice
// (Exec, Public, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            WoodNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MIniGame_CW_GameScore_C::GetRewardPrice(int WoodNumber, int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C.GetRewardPrice");

	UBPC_MIniGame_CW_GameScore_C_GetRewardPrice_Params params;
	params.WoodNumber = WoodNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C.ExecuteUbergraph_BPC_MIniGame_CW_GameScore
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MIniGame_CW_GameScore_C::STATIC_ExecuteUbergraph_BPC_MIniGame_CW_GameScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C.ExecuteUbergraph_BPC_MIniGame_CW_GameScore");

	UBPC_MIniGame_CW_GameScore_C_ExecuteUbergraph_BPC_MIniGame_CW_GameScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
