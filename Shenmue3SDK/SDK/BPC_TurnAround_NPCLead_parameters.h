#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.SetEnableBodyLookAt
struct UBPC_TurnAround_NPCLead_C_SetEnableBodyLookAt_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.CanTurnAround
struct UBPC_TurnAround_NPCLead_C_CanTurnAround_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.IsPlayingSitAnimation
struct UBPC_TurnAround_NPCLead_C_IsPlayingSitAnimation_Params
{
	bool                                               bPlaying;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.OnLoaded_F7D60CF146905F4918060D8140E96419
struct UBPC_TurnAround_NPCLead_C_OnLoaded_F7D60CF146905F4918060D8140E96419_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReturnPreTalkRotationActor
struct UBPC_TurnAround_NPCLead_C_ReturnPreTalkRotationActor_Params
{
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ForceFinishTurnAround
struct UBPC_TurnAround_NPCLead_C_ForceFinishTurnAround_Params
{
	bool*                                              bUpdateRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TrySitMotation
struct UBPC_TurnAround_NPCLead_C_TrySitMotation_Params
{
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReceiveBeginPlay
struct UBPC_TurnAround_NPCLead_C_ReceiveBeginPlay_Params
{
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TurnAroundTickFinish
struct UBPC_TurnAround_NPCLead_C_TurnAroundTickFinish_Params
{
};

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ExecuteUbergraph_BPC_TurnAround_NPCLead
struct UBPC_TurnAround_NPCLead_C_ExecuteUbergraph_BPC_TurnAround_NPCLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
