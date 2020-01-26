
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

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGamblePrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::GetGameGamblePrice(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGamblePrice");

	UBPC_MiniGameContainer_C_GetGameGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsGambleMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_MiniGameContainer_C::IsGambleMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsGambleMiniGame");

	UBPC_MiniGameContainer_C_IsGambleMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGambleSuccessPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::GetGameGambleSuccessPrice(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGambleSuccessPrice");

	UBPC_MiniGameContainer_C_GetGameGambleSuccessPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::GetGameMaxPrice(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPrice");

	UBPC_MiniGameContainer_C_GetGameMaxPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverrideMaxPlayCount
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContainer_C::ResetScriptOverrideMaxPlayCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverrideMaxPlayCount");

	UBPC_MiniGameContainer_C_ResetScriptOverrideMaxPlayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPlayCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MaxPlayCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::GetGameMaxPlayCount(int* MaxPlayCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPlayCount");

	UBPC_MiniGameContainer_C_GetGameMaxPlayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxPlayCount != nullptr)
		*MaxPlayCount = params.MaxPlayCount;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsPlayMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_MiniGameContainer_C::IsPlayMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsPlayMiniGame");

	UBPC_MiniGameContainer_C_IsPlayMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.RemainingGamePlayCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::RemainingGamePlayCount(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.RemainingGamePlayCount");

	UBPC_MiniGameContainer_C_RemainingGamePlayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IncrementGamePlayCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::IncrementGamePlayCount(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IncrementGamePlayCount");

	UBPC_MiniGameContainer_C_IncrementGamePlayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContainer_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.Initialize");

	UBPC_MiniGameContainer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverridePrice
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContainer_C::ResetScriptOverridePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverridePrice");

	UBPC_MiniGameContainer_C_ResetScriptOverridePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGamePrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::GetGamePrice(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGamePrice");

	UBPC_MiniGameContainer_C_GetGamePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameContainer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ReceiveBeginPlay");

	UBPC_MiniGameContainer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ExecuteUbergraph_BPC_MiniGameContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::ExecuteUbergraph_BPC_MiniGameContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ExecuteUbergraph_BPC_MiniGameContainer");

	UBPC_MiniGameContainer_C_ExecuteUbergraph_BPC_MiniGameContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
