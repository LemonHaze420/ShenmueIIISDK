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

// Function BP_AR_Toad.BP_AR_Toad_C.IsUsingSpecialData
struct ABP_AR_Toad_C_IsUsingSpecialData_Params
{
	bool                                               UseSpecial;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.PlayerBetAction
struct ABP_AR_Toad_C_PlayerBetAction_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.GetJumpDistance
struct ABP_AR_Toad_C_GetJumpDistance_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.getSettingInfo
struct ABP_AR_Toad_C_getSettingInfo_Params
{
	float                                              motion_rate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              jump_height;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              jump_distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.UserConstructionScript
struct ABP_AR_Toad_C_UserConstructionScript_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.ReceiveTick
struct ABP_AR_Toad_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.ReceiveBeginPlay
struct ABP_AR_Toad_C_ReceiveBeginPlay_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.UpdateWalkRate
struct ABP_AR_Toad_C_UpdateWalkRate_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.Reset
struct ABP_AR_Toad_C_Reset_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.SetMotion
struct ABP_AR_Toad_C_SetMotion_Params
{
	TEnumAsByte<E_AR_Motion_Type>                      mot_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.ChangeShape
struct ABP_AR_Toad_C_ChangeShape_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.MoveUpdate
struct ABP_AR_Toad_C_MoveUpdate_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.IdleEnd
struct ABP_AR_Toad_C_IdleEnd_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.MoveAnimEnd
struct ABP_AR_Toad_C_MoveAnimEnd_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.SetSideRate
struct ABP_AR_Toad_C_SetSideRate_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.MoveZero
struct ABP_AR_Toad_C_MoveZero_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.MaxJump
struct ABP_AR_Toad_C_MaxJump_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.ResetLocation
struct ABP_AR_Toad_C_ResetLocation_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.Jump Start
struct ABP_AR_Toad_C_Jump_Start_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.walk Start
struct ABP_AR_Toad_C_walk_Start_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.WalkStEnd
struct ABP_AR_Toad_C_WalkStEnd_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySEWalk
struct ABP_AR_Toad_C_Event_PlaySEWalk_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.Event_PlaySECry
struct ABP_AR_Toad_C_Event_PlaySECry_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.CheerAnimalBoost
struct ABP_AR_Toad_C_CheerAnimalBoost_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.DoubleJump
struct ABP_AR_Toad_C_DoubleJump_Params
{
};

// Function BP_AR_Toad.BP_AR_Toad_C.SetAnimNotRaceStartPos
struct ABP_AR_Toad_C_SetAnimNotRaceStartPos_Params
{
	float                                              Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Toad.BP_AR_Toad_C.ExecuteUbergraph_BP_AR_Toad
struct ABP_AR_Toad_C_ExecuteUbergraph_BP_AR_Toad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
