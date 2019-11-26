#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPI_MiniGame.BPI_MiniGame_C.GetMiniGameValueType
struct UBPI_MiniGame_C_GetMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_MiniGame.BPI_MiniGame_C.FinalizeTalk
struct UBPI_MiniGame_C_FinalizeTalk_Params
{
};

// Function BPI_MiniGame.BPI_MiniGame_C.RestartMiniGame
struct UBPI_MiniGame_C_RestartMiniGame_Params
{
};

// Function BPI_MiniGame.BPI_MiniGame_C.EnterMiniGame
struct UBPI_MiniGame_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_MiniGame.BPI_MiniGame_C.DrawMiniGame
struct UBPI_MiniGame_C_DrawMiniGame_Params
{
};

// Function BPI_MiniGame.BPI_MiniGame_C.LoseMiniGame
struct UBPI_MiniGame_C_LoseMiniGame_Params
{
};

// Function BPI_MiniGame.BPI_MiniGame_C.WinMiniGame
struct UBPI_MiniGame_C_WinMiniGame_Params
{
};

// Function BPI_MiniGame.BPI_MiniGame_C.EndMiniGame
struct UBPI_MiniGame_C_EndMiniGame_Params
{
};

// Function BPI_MiniGame.BPI_MiniGame_C.StartMiniGame
struct UBPI_MiniGame_C_StartMiniGame_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
