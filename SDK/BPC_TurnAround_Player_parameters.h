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

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TryPreTalkJump
struct UBPC_TurnAround_Player_C_TryPreTalkJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.GetTalkedMinigame
struct UBPC_TurnAround_Player_C_GetTalkedMinigame_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.CanTurnAround
struct UBPC_TurnAround_Player_C_CanTurnAround_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReturnPreTalkRotationActor
struct UBPC_TurnAround_Player_C_ReturnPreTalkRotationActor_Params
{
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReceiveBeginPlay
struct UBPC_TurnAround_Player_C_ReceiveBeginPlay_Params
{
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ForceFinishTurnAround
struct UBPC_TurnAround_Player_C_ForceFinishTurnAround_Params
{
	bool                                               bUpdateRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TurnAroundTickFinish
struct UBPC_TurnAround_Player_C_TurnAroundTickFinish_Params
{
};

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ExecuteUbergraph_BPC_TurnAround_Player
struct UBPC_TurnAround_Player_C_ExecuteUbergraph_BPC_TurnAround_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
