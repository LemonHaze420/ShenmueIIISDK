
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.InitializeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   JobTargetOriginalText          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   JobTargetLocalize              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EarningsOriginalText           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EarningsLocalize               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            JobTargetNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EarningsNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              TargetTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           JobSE                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           ResultSE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_JobResult_C::InitializeData(const struct FText& JobTargetOriginalText, const struct FText& JobTargetLocalize, const struct FText& EarningsOriginalText, const struct FText& EarningsLocalize, int JobTargetNum, int EarningsNum, class UTexture2D* TargetTexture, class USoundAtomCue* JobSE, class USoundAtomCue* ResultSE)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.InitializeData");

	UWBP_MiniGame_JobResult_C_InitializeData_Params params;
	params.JobTargetOriginalText = JobTargetOriginalText;
	params.JobTargetLocalize = JobTargetLocalize;
	params.EarningsOriginalText = EarningsOriginalText;
	params.EarningsLocalize = EarningsLocalize;
	params.JobTargetNum = JobTargetNum;
	params.EarningsNum = EarningsNum;
	params.TargetTexture = TargetTexture;
	params.JobSE = JobSE;
	params.ResultSE = ResultSE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayAppearJob
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_JobResult_C::Event_PlayAppearJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayAppearJob");

	UWBP_MiniGame_JobResult_C_Event_PlayAppearJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayAppearResult
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_JobResult_C::Event_PlayAppearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayAppearResult");

	UWBP_MiniGame_JobResult_C_Event_PlayAppearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayToneDown
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_JobResult_C::Event_PlayToneDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.Event_PlayToneDown");

	UWBP_MiniGame_JobResult_C_Event_PlayToneDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.ExecuteUbergraph_WBP_MiniGame_JobResult
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_JobResult_C::ExecuteUbergraph_WBP_MiniGame_JobResult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_JobResult.WBP_MiniGame_JobResult_C.ExecuteUbergraph_WBP_MiniGame_JobResult");

	UWBP_MiniGame_JobResult_C_ExecuteUbergraph_WBP_MiniGame_JobResult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
