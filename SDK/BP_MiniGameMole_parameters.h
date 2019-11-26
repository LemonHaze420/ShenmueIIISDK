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

// Function BP_MiniGameMole.BP_MiniGameMole_C.SetAppearWaitTime
struct ABP_MiniGameMole_C_SetAppearWaitTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.Initialize
struct ABP_MiniGameMole_C_Initialize_Params
{
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppearWait
struct ABP_MiniGameMole_C_UpdateAppearWait_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.CheckWhack
struct ABP_MiniGameMole_C_CheckWhack_Params
{
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.ChangeToNextState
struct ABP_MiniGameMole_C_ChangeToNextState_Params
{
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.ClearValue
struct ABP_MiniGameMole_C_ClearValue_Params
{
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateWhacked
struct ABP_MiniGameMole_C_UpdateWhacked_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateReverse
struct ABP_MiniGameMole_C_UpdateReverse_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.UpdateAppear
struct ABP_MiniGameMole_C_UpdateAppear_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.UpDown
struct ABP_MiniGameMole_C_UpDown_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              moveSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DownLimit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reached;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.UserConstructionScript
struct ABP_MiniGameMole_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveBeginPlay
struct ABP_MiniGameMole_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.ReceiveTick
struct ABP_MiniGameMole_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.Appear
struct ABP_MiniGameMole_C_Appear_Params
{
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.OnEndLoad
struct ABP_MiniGameMole_C_OnEndLoad_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.ExecuteUbergraph_BP_MiniGameMole
struct ABP_MiniGameMole_C_ExecuteUbergraph_BP_MiniGameMole_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameMole.BP_MiniGameMole_C.MissDispacher__DelegateSignature
struct ABP_MiniGameMole_C_MissDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
