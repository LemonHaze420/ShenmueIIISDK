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

// Function BPI_TurnAround.BPI_TurnAround_C.GetTurnAroundComponent
struct UBPI_TurnAround_C_GetTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_TurnAround.BPI_TurnAround_C.RemoveTurnAroundComponent
struct UBPI_TurnAround_C_RemoveTurnAroundComponent_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_TurnAround.BPI_TurnAround_C.AddTurnAroundComponent
struct UBPI_TurnAround_C_AddTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
