
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

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.AddAcquiredMoney
// (NetRequest, Event, MulticastDelegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Acquired                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::AddAcquiredMoney(int Acquired)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.AddAcquiredMoney");

	UBPC_MiniGameTalkTemporaryStorage_C_AddAcquiredMoney_Params params;
	params.Acquired = Acquired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalMoney
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int                            Money                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::STATIC_GetTotalMoney(int* Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalMoney");

	UBPC_MiniGameTalkTemporaryStorage_C_GetTotalMoney_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Money != nullptr)
		*Money = params.Money;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetPreGameResult
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Private, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGameResult>  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::GetPreGameResult(bool* bSuccess, TEnumAsByte<E_MiniGameResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetPreGameResult");

	UBPC_MiniGameTalkTemporaryStorage_C_GetPreGameResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalNumberOfResult
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::STATIC_GetTotalNumberOfResult(TEnumAsByte<E_MiniGameResult> Result, int* TotalCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalNumberOfResult");

	UBPC_MiniGameTalkTemporaryStorage_C_GetTotalNumberOfResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalCount != nullptr)
		*TotalCount = params.TotalCount;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousResultNumber
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::STATIC_GetContinuousResultNumber(TEnumAsByte<E_MiniGameResult> Result, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousResultNumber");

	UBPC_MiniGameTalkTemporaryStorage_C_GetContinuousResultNumber_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousPlayCount
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int                            PlayCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::STATIC_GetContinuousPlayCount(int* PlayCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousPlayCount");

	UBPC_MiniGameTalkTemporaryStorage_C_GetContinuousPlayCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayCount != nullptr)
		*PlayCount = params.PlayCount;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Finalize
// (Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_MiniGameTalkTemporaryStorage_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Finalize");

	UBPC_MiniGameTalkTemporaryStorage_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Initialize
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, Const)

void UBPC_MiniGameTalkTemporaryStorage_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Initialize");

	UBPC_MiniGameTalkTemporaryStorage_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.BindMiniGameEvents
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::BindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.BindMiniGameEvents");

	UBPC_MiniGameTalkTemporaryStorage_C_BindMiniGameEvents_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.UnbindMiniGameEvents
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::UnbindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.UnbindMiniGameEvents");

	UBPC_MiniGameTalkTemporaryStorage_C_UnbindMiniGameEvents_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnEndMiniGame
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnEndMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnEndMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnEndMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnWinMiniGame
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnWinMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnWinMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnWinMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnLoseMiniGame
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnLoseMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnLoseMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnLoseMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnDrawMiniGame
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnDrawMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnDrawMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnDrawMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnStartMiniGame
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnStartMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnStartMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnStartMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnRestartMiniGame
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnRestartMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnRestartMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnRestartMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, DLLImport, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::STATIC_ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage");

	UBPC_MiniGameTalkTemporaryStorage_C_ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage_Params params;
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
