#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.CheckBingo
struct ABP_MiniGame_SmartBall_SimpleBingoC_C_CheckBingo_Params
{
	int                                                BingoNum;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.UserConstructionScript
struct ABP_MiniGame_SmartBall_SimpleBingoC_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ReceiveBeginPlay
struct ABP_MiniGame_SmartBall_SimpleBingoC_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ReceiveTick
struct ABP_MiniGame_SmartBall_SimpleBingoC_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC
struct ABP_MiniGame_SmartBall_SimpleBingoC_C_ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
