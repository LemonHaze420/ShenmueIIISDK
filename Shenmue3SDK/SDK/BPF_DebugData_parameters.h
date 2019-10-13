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

// Function BPF_DebugData.BPF_DebugData_C.GetSubmissionConfig
struct UBPF_DebugData_C_GetSubmissionConfig_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3SubmissionConfig*                         Config;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DebugData.BPF_DebugData_C.IsDebugStepInRange
struct UBPF_DebugData_C_IsDebugStepInRange_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InRange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableCutscene
struct UBPF_DebugData_C_IsDebugDisableCutscene_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableMainFlow
struct UBPF_DebugData_C_IsDebugDisableMainFlow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableNPC
struct UBPF_DebugData_C_IsDebugDisableNPC_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DebugData.BPF_DebugData_C.GetDebugData
struct UBPF_DebugData_C_GetDebugData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3DebugDataAsset*                           Debug_Data_Asset;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
