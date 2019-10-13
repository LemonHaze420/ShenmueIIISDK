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

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetNextCutChangeTime
struct ABP_AutoTalkCameraDirector_C_GetNextCutChangeTime_Params
{
	float                                              CutChangeTIme;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.PrintCameraInfo
struct ABP_AutoTalkCameraDirector_C_PrintCameraInfo_Params
{
	struct FST_AutoCameraAnalizedInfo                  CameraInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.SetCurrentCamera
struct ABP_AutoTalkCameraDirector_C_SetCurrentCamera_Params
{
	struct FST_AutoCameraAnalizedInfo                  Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetCurrentCamera
struct ABP_AutoTalkCameraDirector_C_GetCurrentCamera_Params
{
	struct FST_AutoCameraAnalizedInfo                  ret;                                                      // (Parm, OutParm)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetAllCamera
struct ABP_AutoTalkCameraDirector_C_GetAllCamera_Params
{
	TArray<struct FST_AutoCameraAnalizedInfo>          AnalizedInfo;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.CalcNextCameraCut
struct ABP_AutoTalkCameraDirector_C_CalcNextCameraCut_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.IsSimilarToCurrentCamera
struct ABP_AutoTalkCameraDirector_C_IsSimilarToCurrentCamera_Params
{
	struct FST_AutoCameraAnalizedInfo                  CameraInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.WhetherToChangeCamera
struct ABP_AutoTalkCameraDirector_C_WhetherToChangeCamera_Params
{
	struct FName                                       LookTargetCharacterID;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetSelectedCameras
struct ABP_AutoTalkCameraDirector_C_GetSelectedCameras_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_AutoCameraSelectedResult>        SelectedCameras;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.UserConstructionScript
struct ABP_AutoTalkCameraDirector_C_UserConstructionScript_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveBeginPlay
struct ABP_AutoTalkCameraDirector_C_ReceiveBeginPlay_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveTick
struct ABP_AutoTalkCameraDirector_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnCameraChanged
struct ABP_AutoTalkCameraDirector_C_OnCameraChanged_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnBeginTalkEvent
struct ABP_AutoTalkCameraDirector_C_OnBeginTalkEvent_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnEndTalkEvent
struct ABP_AutoTalkCameraDirector_C_OnEndTalkEvent_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnSkipTalkTask
struct ABP_AutoTalkCameraDirector_C_OnSkipTalkTask_Params
{
	float                                              SkipTaskDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnInputQuestDebugKey
struct ABP_AutoTalkCameraDirector_C_OnInputQuestDebugKey_Params
{
};

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ExecuteUbergraph_BP_AutoTalkCameraDirector
struct ABP_AutoTalkCameraDirector_C_ExecuteUbergraph_BP_AutoTalkCameraDirector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
