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

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ResetValue
struct ABP_MIniGame_WM_Score_C_ResetValue_Params
{
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.SetVisiblity
struct ABP_MIniGame_WM_Score_C_SetVisiblity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.UpdateNumber
struct ABP_MIniGame_WM_Score_C_UpdateNumber_Params
{
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.Initialize
struct ABP_MIniGame_WM_Score_C_Initialize_Params
{
	int                                                DigitsNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.SetNumber
struct ABP_MIniGame_WM_Score_C_SetNumber_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.GetUVs
struct ABP_MIniGame_WM_Score_C_GetUVs_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.UserConstructionScript
struct ABP_MIniGame_WM_Score_C_UserConstructionScript_Params
{
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ReceiveBeginPlay
struct ABP_MIniGame_WM_Score_C_ReceiveBeginPlay_Params
{
};

// Function BP_MIniGame_WM_Score.BP_MIniGame_WM_Score_C.ExecuteUbergraph_BP_MIniGame_WM_Score
struct ABP_MIniGame_WM_Score_C_ExecuteUbergraph_BP_MIniGame_WM_Score_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
