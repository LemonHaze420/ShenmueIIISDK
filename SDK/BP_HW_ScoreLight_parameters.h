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

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.SetEmissivePower
struct ABP_HW_ScoreLight_C_SetEmissivePower_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispScoreLight
struct ABP_HW_ScoreLight_C_DispScoreLight_Params
{
	bool                                               Disp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              EmissivePowerOnTrace;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ChangeTarget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispEnemyScoreLight
struct ABP_HW_ScoreLight_C_DispEnemyScoreLight_Params
{
	bool                                               ArgDisp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArgBlinkIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.RegisterScoreLightArray
struct ABP_HW_ScoreLight_C_RegisterScoreLightArray_Params
{
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.DispMyScoreLight
struct ABP_HW_ScoreLight_C_DispMyScoreLight_Params
{
	bool                                               ArgDisp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArgBlinkIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ScoreLightAllOff
struct ABP_HW_ScoreLight_C_ScoreLightAllOff_Params
{
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.UserConstructionScript
struct ABP_HW_ScoreLight_C_UserConstructionScript_Params
{
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ReceiveBeginPlay
struct ABP_HW_ScoreLight_C_ReceiveBeginPlay_Params
{
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.ExecuteUbergraph_BP_HW_ScoreLight
struct ABP_HW_ScoreLight_C_ExecuteUbergraph_BP_HW_ScoreLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HW_ScoreLight.BP_HW_ScoreLight_C.OnChangeLightDispacher__DelegateSignature
struct ABP_HW_ScoreLight_C_OnChangeLightDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
