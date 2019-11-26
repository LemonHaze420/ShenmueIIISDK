
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_Cutscene.BPF_Cutscene_C.getS3CutsceneTimeScheduleManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_CutsceneTimeScheduleManager_C* newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Cutscene_C::STATIC_getS3CutsceneTimeScheduleManager(class UObject* __WorldContext, class ABP_CutsceneTimeScheduleManager_C** newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Cutscene.BPF_Cutscene_C.getS3CutsceneTimeScheduleManager");

	UBPF_Cutscene_C_getS3CutsceneTimeScheduleManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPF_Cutscene.BPF_Cutscene_C.getS3CutsceneManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_CutsceneManager_C*   CutsceneManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Cutscene_C::STATIC_getS3CutsceneManager(class UObject* __WorldContext, class ABP_CutsceneManager_C** CutsceneManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Cutscene.BPF_Cutscene_C.getS3CutsceneManager");

	UBPF_Cutscene_C_getS3CutsceneManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutsceneManager != nullptr)
		*CutsceneManager = params.CutsceneManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
