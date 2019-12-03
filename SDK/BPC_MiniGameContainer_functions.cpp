
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

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGamblePrice
// (Exec, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_MiniGameContainer_C::IsGambleMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsGambleMiniGame");

	UBPC_MiniGameContainer_C_IsGambleMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGambleSuccessPrice
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_GetGameGambleSuccessPrice(int* Price)
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
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_GetGameMaxPrice(int* Price)
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
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameContainer_C::ResetScriptOverrideMaxPlayCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverrideMaxPlayCount");

	UBPC_MiniGameContainer_C_ResetScriptOverrideMaxPlayCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPlayCount
// (Net, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            MaxPlayCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_GetGameMaxPlayCount(int* MaxPlayCount)
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
// (NetRequest, Exec, NetResponse, Static, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_MiniGameContainer_C::STATIC_IsPlayMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsPlayMiniGame");

	UBPC_MiniGameContainer_C_IsPlayMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.RemainingGamePlayCount
// (NetReliable, Exec, NetResponse, Static, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_RemainingGamePlayCount(int* Result)
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
// (Exec, NetResponse, Static, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_IncrementGamePlayCount(int* Result)
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
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UBPC_MiniGameContainer_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.Initialize");

	UBPC_MiniGameContainer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverridePrice
// (NetRequest, Exec, Native, Event, NetResponse, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameContainer_C::ResetScriptOverridePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverridePrice");

	UBPC_MiniGameContainer_C_ResetScriptOverridePrice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGamePrice
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_GetGamePrice(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGamePrice");

	UBPC_MiniGameContainer_C_GetGamePrice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, Event, NetResponse, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameContainer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ReceiveBeginPlay");

	UBPC_MiniGameContainer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ExecuteUbergraph_BPC_MiniGameContainer
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContainer_C::STATIC_ExecuteUbergraph_BPC_MiniGameContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ExecuteUbergraph_BPC_MiniGameContainer");

	UBPC_MiniGameContainer_C_ExecuteUbergraph_BPC_MiniGameContainer_Params params;
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
