
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

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.InstantiateProgram
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::InstantiateProgram(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.InstantiateProgram");

	UBPC_CCBattleCabinet_C_InstantiateProgram_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.FetchRenderTexture
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::FetchRenderTexture(class UTextureRenderTarget2D** Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.FetchRenderTexture");

	UBPC_CCBattleCabinet_C_FetchRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SwitchToStaticTexture
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::SwitchToStaticTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SwitchToStaticTexture");

	UBPC_CCBattleCabinet_C_SwitchToStaticTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SwitchToRenderTexture
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  RT                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::SwitchToRenderTexture(class UTextureRenderTarget2D** RT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SwitchToRenderTexture");

	UBPC_CCBattleCabinet_C_SwitchToRenderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RT != nullptr)
		*RT = params.RT;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnLoaded_F996630945A905E3751F229F1698409F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::OnLoaded_F996630945A905E3751F229F1698409F(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnLoaded_F996630945A905E3751F229F1698409F");

	UBPC_CCBattleCabinet_C_OnLoaded_F996630945A905E3751F229F1698409F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SetScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            MatIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::SetScreen(class UStaticMeshComponent* Mesh, int MatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SetScreen");

	UBPC_CCBattleCabinet_C_SetScreen_Params params;
	params.Mesh = Mesh;
	params.MatIndex = MatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_CCBattleCabinet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ReceiveBeginPlay");

	UBPC_CCBattleCabinet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.StartRetry
// (BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::StartRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.StartRetry");

	UBPC_CCBattleCabinet_C_StartRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::OnGameEnd(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameEnd");

	UBPC_CCBattleCabinet_C_OnGameEnd_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.EndGame
// (BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.EndGame");

	UBPC_CCBattleCabinet_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.StartGame");

	UBPC_CCBattleCabinet_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ReceiveEndPlay");

	UBPC_CCBattleCabinet_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.DisableInput
// (BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::DisableInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.DisableInput");

	UBPC_CCBattleCabinet_C_DisableInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.EnableInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::EnableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.EnableInput");

	UBPC_CCBattleCabinet_C_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ExecuteUbergraph_BPC_CCBattleCabinet
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CCBattleCabinet_C::ExecuteUbergraph_BPC_CCBattleCabinet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ExecuteUbergraph_BPC_CCBattleCabinet");

	UBPC_CCBattleCabinet_C_ExecuteUbergraph_BPC_CCBattleCabinet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameCritialError__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::OnGameCritialError__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameCritialError__DelegateSignature");

	UBPC_CCBattleCabinet_C_OnGameCritialError__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameShutdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::OnGameShutdown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameShutdown__DelegateSignature");

	UBPC_CCBattleCabinet_C_OnGameShutdown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::OnGameOver__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameOver__DelegateSignature");

	UBPC_CCBattleCabinet_C_OnGameOver__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameClear__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_CCBattleCabinet_C::OnGameClear__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameClear__DelegateSignature");

	UBPC_CCBattleCabinet_C_OnGameClear__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
