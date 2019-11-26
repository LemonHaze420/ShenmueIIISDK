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

// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.InitializeData
struct UWBP_MiniGame_JobResult_C_InitializeData_Params
{
	struct FText                                       JobTargetOriginalText;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       JobTargetLocalize;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EarningsOriginalText;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EarningsLocalize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                JobTargetNum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EarningsNum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TargetTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               JobSE;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               ResultSE;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayAppearJob
struct UWBP_MiniGame_JobResult_C_Event_PlayAppearJob_Params
{
};

// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayAppearResult
struct UWBP_MiniGame_JobResult_C_Event_PlayAppearResult_Params
{
};

// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayToneDown
struct UWBP_MiniGame_JobResult_C_Event_PlayToneDown_Params
{
};

// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.ExecuteUbergraph_WBP_MiniGame_JobResult
struct UWBP_MiniGame_JobResult_C_ExecuteUbergraph_WBP_MiniGame_JobResult_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
