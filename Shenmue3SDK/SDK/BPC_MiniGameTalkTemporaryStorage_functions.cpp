
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

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.AddAcquiredMoney
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Money                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::GetTotalMoney(int* Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalMoney");

	UBPC_MiniGameTalkTemporaryStorage_C_GetTotalMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Money != nullptr)
		*Money = params.Money;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetPreGameResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGameResult>  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::GetPreGameResult(bool* bSuccess, TEnumAsByte<E_MiniGameResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetPreGameResult");

	UBPC_MiniGameTalkTemporaryStorage_C_GetPreGameResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalNumberOfResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::GetTotalNumberOfResult(TEnumAsByte<E_MiniGameResult> Result, int* TotalCount)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::GetContinuousResultNumber(TEnumAsByte<E_MiniGameResult> Result, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousResultNumber");

	UBPC_MiniGameTalkTemporaryStorage_C_GetContinuousResultNumber_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousPlayCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::GetContinuousPlayCount(int* PlayCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousPlayCount");

	UBPC_MiniGameTalkTemporaryStorage_C_GetContinuousPlayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayCount != nullptr)
		*PlayCount = params.PlayCount;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameTalkTemporaryStorage_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Finalize");

	UBPC_MiniGameTalkTemporaryStorage_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameTalkTemporaryStorage_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Initialize");

	UBPC_MiniGameTalkTemporaryStorage_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.BindMiniGameEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::BindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.BindMiniGameEvents");

	UBPC_MiniGameTalkTemporaryStorage_C_BindMiniGameEvents_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.UnbindMiniGameEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::UnbindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.UnbindMiniGameEvents");

	UBPC_MiniGameTalkTemporaryStorage_C_UnbindMiniGameEvents_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnEndMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnEndMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnEndMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnEndMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnWinMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnWinMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnWinMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnWinMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnLoseMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnLoseMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnLoseMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnLoseMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnDrawMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnDrawMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnDrawMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnDrawMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnStartMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnStartMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnStartMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnStartMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnRestartMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::OnRestartMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnRestartMiniGame");

	UBPC_MiniGameTalkTemporaryStorage_C_OnRestartMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameTalkTemporaryStorage_C::ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage");

	UBPC_MiniGameTalkTemporaryStorage_C_ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
