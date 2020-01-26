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

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.CachePawnData
struct UBPC_PlayerTargetSwitcher_C_CachePawnData_Params
{
	class AActor*                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.DoPlayerRequestedSwitch
struct UBPC_PlayerTargetSwitcher_C_DoPlayerRequestedSwitch_Params
{
	class AActor*                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.UpdateDetectAction
struct UBPC_PlayerTargetSwitcher_C_UpdateDetectAction_Params
{
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Reset
struct UBPC_PlayerTargetSwitcher_C_Reset_Params
{
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.FaceDirection
struct UBPC_PlayerTargetSwitcher_C_FaceDirection_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.IsNPCTalkative
struct UBPC_PlayerTargetSwitcher_C_IsNPCTalkative_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestManualDirection
struct UBPC_PlayerTargetSwitcher_C_RequestManualDirection_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.GetTargetCandidates
struct UBPC_PlayerTargetSwitcher_C_GetTargetCandidates_Params
{
	TArray<class AS3Character*>                        OutNPCs;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      OutScores;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestSwitchTarget
struct UBPC_PlayerTargetSwitcher_C_RequestSwitchTarget_Params
{
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Update
struct UBPC_PlayerTargetSwitcher_C_Update_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.OnFaceDirection__DelegateSignature
struct UBPC_PlayerTargetSwitcher_C_OnFaceDirection__DelegateSignature_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
