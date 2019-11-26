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

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimInRaceFlag
struct ABP_AR_Animal_Base_C_SetAnimInRaceFlag_Params
{
	bool                                               InRace;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimNotRaceStartPos
struct ABP_AR_Animal_Base_C_SetAnimNotRaceStartPos_Params
{
	float                                              Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimDelayUpdateTime
struct ABP_AR_Animal_Base_C_SetAnimDelayUpdateTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeStateOnFree
struct ABP_AR_Animal_Base_C_ChangeStateOnFree_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Finalize
struct ABP_AR_Animal_Base_C_Finalize_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncTurtle
struct ABP_AR_Animal_Base_C_TestSumFuncTurtle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpeed
struct ABP_AR_Animal_Base_C_GetMoveSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.TestSumFuncToad
struct ABP_AR_Animal_Base_C_TestSumFuncToad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.IsUsingSpecialData
struct ABP_AR_Animal_Base_C_IsUsingSpecialData_Params
{
	bool                                               UseSpecial;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CanCancelDelay
struct ABP_AR_Animal_Base_C_CanCancelDelay_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bComplete;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetResultControl
struct ABP_AR_Animal_Base_C_SetResultControl_Params
{
	bool                                               IsWin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetCourseMaterial
struct ABP_AR_Animal_Base_C_GetCourseMaterial_Params
{
	int                                                ShapeType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayerBetAction
struct ABP_AR_Animal_Base_C_PlayerBetAction_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkRate
struct ABP_AR_Animal_Base_C_SetWalkRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetSpeedListFromTableIndex
struct ABP_AR_Animal_Base_C_SetSpeedListFromTableIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecialSpeed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SettingSelectAnimal
struct ABP_AR_Animal_Base_C_SettingSelectAnimal_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Initialize
struct ABP_AR_Animal_Base_C_Initialize_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetFortuneEnabled
struct ABP_AR_Animal_Base_C_SetFortuneEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.CheerAnimalBoost
struct ABP_AR_Animal_Base_C_CheerAnimalBoost_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetWalkSE
struct ABP_AR_Animal_Base_C_SetWalkSE_Params
{
	class USoundAtomCue*                               RefWalkCue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.PlayCrySE
struct ABP_AR_Animal_Base_C_PlayCrySE_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCrySE
struct ABP_AR_Animal_Base_C_SetCrySE_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetUseSpline
struct ABP_AR_Animal_Base_C_SetUseSpline_Params
{
	bool                                               bUseSpline;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetMoveSpline
struct ABP_AR_Animal_Base_C_GetMoveSpline_Params
{
	class USplineComponent*                            MoveSpline;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMoveSpline
struct ABP_AR_Animal_Base_C_SetMoveSpline_Params
{
	class USplineComponent*                            MoveSpline;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetSplineLocationAndRotation
struct ABP_AR_Animal_Base_C_GetSplineLocationAndRotation_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateRotate
struct ABP_AR_Animal_Base_C_UpdateRotate_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ChangeShape
struct ABP_AR_Animal_Base_C_ChangeShape_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.InitializeInfo
struct ABP_AR_Animal_Base_C_InitializeInfo_Params
{
	struct FST_AR_AnimalInfo                           table_offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetMotion
struct ABP_AR_Animal_Base_C_SetMotion_Params
{
	TEnumAsByte<E_AR_Motion_Type>                      mot_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetDeathTime
struct ABP_AR_Animal_Base_C_GetDeathTime_Params
{
	float                                              death_time;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetDeath
struct ABP_AR_Animal_Base_C_SetDeath_Params
{
	bool                                               is_death;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UpdateWalkRate
struct ABP_AR_Animal_Base_C_UpdateWalkRate_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SelectMotion
struct ABP_AR_Animal_Base_C_SelectMotion_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetStop
struct ABP_AR_Animal_Base_C_SetStop_Params
{
	bool                                               is_stop;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Reset
struct ABP_AR_Animal_Base_C_Reset_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.GetRandomSpeedFromTable
struct ABP_AR_Animal_Base_C_GetRandomSpeedFromTable_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.UserConstructionScript
struct ABP_AR_Animal_Base_C_UserConstructionScript_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveBeginPlay
struct ABP_AR_Animal_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ReceiveTick
struct ABP_AR_Animal_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.AnimStop
struct ABP_AR_Animal_Base_C_AnimStop_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit Begin
struct ABP_AR_Animal_Base_C_Right_Hit_Begin_Params
{
	class UObject*                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit Begin
struct ABP_AR_Animal_Base_C_Left_Hit_Begin_Params
{
	class UObject*                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Right Hit End
struct ABP_AR_Animal_Base_C_Right_Hit_End_Params
{
	class UObject*                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Left Hit End
struct ABP_AR_Animal_Base_C_Left_Hit_End_Params
{
	class UObject*                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.MoveUpdate
struct ABP_AR_Animal_Base_C_MoveUpdate_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Idle Reset
struct ABP_AR_Animal_Base_C_Idle_Reset_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Set Tick Enable
struct ABP_AR_Animal_Base_C_Set_Tick_Enable_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetCurrentMoveSpeedTimingFromUpdate
struct ABP_AR_Animal_Base_C_SetCurrentMoveSpeedTimingFromUpdate_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySECry
struct ABP_AR_Animal_Base_C_Event_PlaySECry_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_PlaySEWalk
struct ABP_AR_Animal_Base_C_Event_PlaySEWalk_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.Event_EnabledCheer
struct ABP_AR_Animal_Base_C_Event_EnabledCheer_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetDelayTime
struct ABP_AR_Animal_Base_C_ResetDelayTime_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ResetIdleTime
struct ABP_AR_Animal_Base_C_ResetIdleTime_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.SetAnimUpdateEnabled
struct ABP_AR_Animal_Base_C_SetAnimUpdateEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateOnFree
struct ABP_AR_Animal_Base_C_DelayedChangeStateOnFree_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedChangeStateToWait
struct ABP_AR_Animal_Base_C_DelayedChangeStateToWait_Params
{
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.DelayedInitialize
struct ABP_AR_Animal_Base_C_DelayedInitialize_Params
{
	float                                              DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.ExecuteUbergraph_BP_AR_Animal_Base
struct ABP_AR_Animal_Base_C_ExecuteUbergraph_BP_AR_Animal_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Animal_Base.BP_AR_Animal_Base_C.OnEndCheerBoostDispacher__DelegateSignature
struct ABP_AR_Animal_Base_C_OnEndCheerBoostDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
