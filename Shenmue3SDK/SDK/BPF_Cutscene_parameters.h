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

// Function BPF_Cutscene.BPF_Cutscene_C.getS3CutsceneTimeScheduleManager
struct UBPF_Cutscene_C_getS3CutsceneTimeScheduleManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_CutsceneTimeScheduleManager_C*           newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Cutscene.BPF_Cutscene_C.getS3CutsceneManager
struct UBPF_Cutscene_C_getS3CutsceneManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_CutsceneManager_C*                       CutsceneManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
