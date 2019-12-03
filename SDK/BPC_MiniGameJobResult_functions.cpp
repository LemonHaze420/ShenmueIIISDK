
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

// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.Finalize
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_MiniGameJobResult_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.Finalize");

	UBPC_MiniGameJobResult_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.StartResult
// (Native, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// struct FText                   JobTargetOriginalText          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   JobTargetLocalizeText          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EarningsOriginalText           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EarningsLocalizeText           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            JobTargetNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EarningsNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              TargetTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           JobSE                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           ResultSE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameJobResult_C::StartResult(const struct FText& JobTargetOriginalText, const struct FText& JobTargetLocalizeText, const struct FText& EarningsOriginalText, const struct FText& EarningsLocalizeText, int JobTargetNum, int EarningsNum, class UTexture2D* TargetTexture, class USoundAtomCue* JobSE, class USoundAtomCue* ResultSE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.StartResult");

	UBPC_MiniGameJobResult_C_StartResult_Params params;
	params.JobTargetOriginalText = JobTargetOriginalText;
	params.JobTargetLocalizeText = JobTargetLocalizeText;
	params.EarningsOriginalText = EarningsOriginalText;
	params.EarningsLocalizeText = EarningsLocalizeText;
	params.JobTargetNum = JobTargetNum;
	params.EarningsNum = EarningsNum;
	params.TargetTexture = TargetTexture;
	params.JobSE = JobSE;
	params.ResultSE = ResultSE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.ReceiveTick
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameJobResult_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.ReceiveTick");

	UBPC_MiniGameJobResult_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.ExecuteUbergraph_BPC_MiniGameJobResult
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameJobResult_C::ExecuteUbergraph_BPC_MiniGameJobResult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.ExecuteUbergraph_BPC_MiniGameJobResult");

	UBPC_MiniGameJobResult_C_ExecuteUbergraph_BPC_MiniGameJobResult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.OnEndResultDispacher__DelegateSignature
// (Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameJobResult_C::STATIC_OnEndResultDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.OnEndResultDispacher__DelegateSignature");

	UBPC_MiniGameJobResult_C_OnEndResultDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
