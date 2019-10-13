
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

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.CleanUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContinueConfirm_C::CleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.CleanUp");

	UBPC_MiniGameContinueConfirm_C_CleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.StartGameContinueConfirmCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContinueConfirm_C::StartGameContinueConfirmCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.StartGameContinueConfirmCheck");

	UBPC_MiniGameContinueConfirm_C_StartGameContinueConfirmCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.BindActionSelectEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3actionSelect_C*    Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContinueConfirm_C::BindActionSelectEvents(class ABP_S3actionSelect_C* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.BindActionSelectEvents");

	UBPC_MiniGameContinueConfirm_C_BindActionSelectEvents_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.onSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContinueConfirm_C::onSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.onSelected");

	UBPC_MiniGameContinueConfirm_C_onSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.UnbindActionSelectEvents
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContinueConfirm_C::UnbindActionSelectEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.UnbindActionSelectEvents");

	UBPC_MiniGameContinueConfirm_C_UnbindActionSelectEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.RepayMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContinueConfirm_C::RepayMiniGame(float WaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.RepayMiniGame");

	UBPC_MiniGameContinueConfirm_C_RepayMiniGame_Params params;
	params.WaitTime = WaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameContinueConfirm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.ReceiveBeginPlay");

	UBPC_MiniGameContinueConfirm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.ExecuteUbergraph_BPC_MiniGameContinueConfirm
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameContinueConfirm_C::ExecuteUbergraph_BPC_MiniGameContinueConfirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.ExecuteUbergraph_BPC_MiniGameContinueConfirm");

	UBPC_MiniGameContinueConfirm_C_ExecuteUbergraph_BPC_MiniGameContinueConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.OnGameFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContinueConfirm_C::OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.OnGameFinishedDispatcher__DelegateSignature");

	UBPC_MiniGameContinueConfirm_C_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.OnGameContinueDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameContinueConfirm_C::OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.OnGameContinueDispatcher__DelegateSignature");

	UBPC_MiniGameContinueConfirm_C_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
