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

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFull
struct UTalkCam_BaseTask_C_IsFull_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsClose
struct UTalkCam_BaseTask_C_IsClose_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsBust
struct UTalkCam_BaseTask_C_IsBust_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsShoulderCut
struct UTalkCam_BaseTask_C_IsShoulderCut_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.isPair
struct UTalkCam_BaseTask_C_isPair_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsFar
struct UTalkCam_BaseTask_C_IsFar_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.IsHorizontal
struct UTalkCam_BaseTask_C_IsHorizontal_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.ReceiveTickAI
struct UTalkCam_BaseTask_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TalkCam_BaseTask.TalkCam_BaseTask_C.ExecuteUbergraph_TalkCam_BaseTask
struct UTalkCam_BaseTask_C_ExecuteUbergraph_TalkCam_BaseTask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
