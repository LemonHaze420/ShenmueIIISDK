
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

// Function BPI_MiniGame.BPI_MiniGame_C.GetMiniGameValueType
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_MiniGame_C::STATIC_GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.GetMiniGameValueType");

	UBPI_MiniGame_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BPI_MiniGame.BPI_MiniGame_C.FinalizeTalk
// (Net, NetReliable, Exec, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPI_MiniGame_C::STATIC_FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.FinalizeTalk");

	UBPI_MiniGame_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.RestartMiniGame
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPI_MiniGame_C::STATIC_RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.RestartMiniGame");

	UBPI_MiniGame_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.EnterMiniGame
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_MiniGame_C::STATIC_EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.EnterMiniGame");

	UBPI_MiniGame_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.DrawMiniGame
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPI_MiniGame_C::STATIC_DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.DrawMiniGame");

	UBPI_MiniGame_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.LoseMiniGame
// (Exec, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPI_MiniGame_C::STATIC_LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.LoseMiniGame");

	UBPI_MiniGame_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.WinMiniGame
// (Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::STATIC_WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.WinMiniGame");

	UBPI_MiniGame_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.EndMiniGame
// (Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::STATIC_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.EndMiniGame");

	UBPI_MiniGame_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.StartMiniGame
// (Net, Exec, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPI_MiniGame_C::STATIC_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.StartMiniGame");

	UBPI_MiniGame_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
