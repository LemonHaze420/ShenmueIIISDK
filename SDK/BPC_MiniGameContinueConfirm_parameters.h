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

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.CleanUp
struct UBPC_MiniGameContinueConfirm_C_CleanUp_Params
{
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.StartGameContinueConfirmCheck
struct UBPC_MiniGameContinueConfirm_C_StartGameContinueConfirmCheck_Params
{
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.BindActionSelectEvents
struct UBPC_MiniGameContinueConfirm_C_BindActionSelectEvents_Params
{
	class ABP_S3actionSelect_C*                        Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.onSelected
struct UBPC_MiniGameContinueConfirm_C_onSelected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.UnbindActionSelectEvents
struct UBPC_MiniGameContinueConfirm_C_UnbindActionSelectEvents_Params
{
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.RepayMiniGame
struct UBPC_MiniGameContinueConfirm_C_RepayMiniGame_Params
{
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.ReceiveBeginPlay
struct UBPC_MiniGameContinueConfirm_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.ExecuteUbergraph_BPC_MiniGameContinueConfirm
struct UBPC_MiniGameContinueConfirm_C_ExecuteUbergraph_BPC_MiniGameContinueConfirm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.OnGameFinishedDispatcher__DelegateSignature
struct UBPC_MiniGameContinueConfirm_C_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BPC_MiniGameContinueConfirm.BPC_MiniGameContinueConfirm_C.OnGameContinueDispatcher__DelegateSignature
struct UBPC_MiniGameContinueConfirm_C_OnGameContinueDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
