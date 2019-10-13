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

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasStatProgressChange
struct UBP_TrainingLevelUpRecorder_C_HasStatProgressChange_Params
{
	struct FST_SparringResultLevelUpData               Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedProgressChange
struct UBP_TrainingLevelUpRecorder_C_HasRecordedProgressChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.GetLevelUpData
struct UBP_TrainingLevelUpRecorder_C_GetLevelUpData_Params
{
	struct FST_SparringResultLevelUpData               Player;                                                   // (Parm, OutParm)
	struct FST_SparringResultLevelUpData               ATK;                                                      // (Parm, OutParm)
	struct FST_SparringResultLevelUpData               VIT;                                                      // (Parm, OutParm)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedStatLevelUp
struct UBP_TrainingLevelUpRecorder_C_HasRecordedStatLevelUp_Params
{
	struct FST_SparringResultLevelUpData               Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedLevelUp
struct UBP_TrainingLevelUpRecorder_C_HasRecordedLevelUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.UpdateStatData
struct UBP_TrainingLevelUpRecorder_C_UpdateStatData_Params
{
	class US3DerivedPlayerLevel*                       Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_SparringResultLevelUpData               Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.RecordCurrentState
struct UBP_TrainingLevelUpRecorder_C_RecordCurrentState_Params
{
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.GetInitialStatState
struct UBP_TrainingLevelUpRecorder_C_GetInitialStatState_Params
{
	class US3DerivedPlayerLevel*                       Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_SparringResultLevelUpData               Data;                                                     // (Parm, OutParm)
};

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.RecordInitialState
struct UBP_TrainingLevelUpRecorder_C_RecordInitialState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
