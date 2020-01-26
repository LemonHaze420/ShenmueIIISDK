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

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsInitializeVariables
struct UBPC_MiniGameThrowArmAnimation_C_IsInitializeVariables_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.AllStopAnimation
struct UBPC_MiniGameThrowArmAnimation_C_AllStopAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.UpdateArmRotation
struct UBPC_MiniGameThrowArmAnimation_C_UpdateArmRotation_Params
{
	struct FRotator                                    Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.IsAligned
struct UBPC_MiniGameThrowArmAnimation_C_IsAligned_Params
{
	bool                                               bAligned;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayTakeOutAnimation
struct UBPC_MiniGameThrowArmAnimation_C_PlayTakeOutAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopTakeOutAnimation
struct UBPC_MiniGameThrowArmAnimation_C_StopTakeOutAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowAnimation
struct UBPC_MiniGameThrowArmAnimation_C_PlayThrowAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowAnimation
struct UBPC_MiniGameThrowArmAnimation_C_StopThrowAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.PlayThrowEndAnimation
struct UBPC_MiniGameThrowArmAnimation_C_PlayThrowEndAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.StopThrowEndAnimation
struct UBPC_MiniGameThrowArmAnimation_C_StopThrowEndAnimation_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ReceiveTick
struct UBPC_MiniGameThrowArmAnimation_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.InitializeVariables
struct UBPC_MiniGameThrowArmAnimation_C_InitializeVariables_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ResetVariables
struct UBPC_MiniGameThrowArmAnimation_C_ResetVariables_Params
{
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.ExecuteUbergraph_BPC_MiniGameThrowArmAnimation
struct UBPC_MiniGameThrowArmAnimation_C_ExecuteUbergraph_BPC_MiniGameThrowArmAnimation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameThrowArmAnimation.BPC_MiniGameThrowArmAnimation_C.OnFinishedTakeOutDispatcher__DelegateSignature
struct UBPC_MiniGameThrowArmAnimation_C_OnFinishedTakeOutDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
