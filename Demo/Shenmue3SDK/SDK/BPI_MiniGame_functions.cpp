
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

// Function BPI_MiniGame.BPI_MiniGame_C.GetMiniGameValueType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_MiniGame_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.GetMiniGameValueType");

	UBPI_MiniGame_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BPI_MiniGame.BPI_MiniGame_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.FinalizeTalk");

	UBPI_MiniGame_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.RestartMiniGame");

	UBPI_MiniGame_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_MiniGame_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.EnterMiniGame");

	UBPI_MiniGame_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.DrawMiniGame");

	UBPI_MiniGame_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.LoseMiniGame");

	UBPI_MiniGame_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.WinMiniGame");

	UBPI_MiniGame_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MiniGame.BPI_MiniGame_C.EndMiniGame");

	UBPI_MiniGame_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_MiniGame.BPI_MiniGame_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_MiniGame_C::StartMiniGame()
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
