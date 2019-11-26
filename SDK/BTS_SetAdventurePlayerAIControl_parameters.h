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

// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveDeactivationAI
struct UBTS_SetAdventurePlayerAIControl_C_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveActivationAI
struct UBTS_SetAdventurePlayerAIControl_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ExecuteUbergraph_BTS_SetAdventurePlayerAIControl
struct UBTS_SetAdventurePlayerAIControl_C_ExecuteUbergraph_BTS_SetAdventurePlayerAIControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
