
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetNextCutChangeTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CutChangeTIme                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::GetNextCutChangeTime(float* CutChangeTIme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetNextCutChangeTime");

	ABP_AutoTalkCameraDirector_C_GetNextCutChangeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutChangeTIme != nullptr)
		*CutChangeTIme = params.CutChangeTIme;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.PrintCameraInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_AutoCameraAnalizedInfo CameraInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_AutoTalkCameraDirector_C::PrintCameraInfo(const struct FST_AutoCameraAnalizedInfo& CameraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.PrintCameraInfo");

	ABP_AutoTalkCameraDirector_C_PrintCameraInfo_Params params;
	params.CameraInfo = CameraInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.SetCurrentCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_AutoCameraAnalizedInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_AutoTalkCameraDirector_C::SetCurrentCamera(const struct FST_AutoCameraAnalizedInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.SetCurrentCamera");

	ABP_AutoTalkCameraDirector_C_SetCurrentCamera_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetCurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_AutoCameraAnalizedInfo ret                            (Parm, OutParm)

void ABP_AutoTalkCameraDirector_C::GetCurrentCamera(struct FST_AutoCameraAnalizedInfo* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetCurrentCamera");

	ABP_AutoTalkCameraDirector_C_GetCurrentCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetAllCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_AutoCameraAnalizedInfo> AnalizedInfo                   (Parm, OutParm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::GetAllCamera(TArray<struct FST_AutoCameraAnalizedInfo>* AnalizedInfo, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetAllCamera");

	ABP_AutoTalkCameraDirector_C_GetAllCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnalizedInfo != nullptr)
		*AnalizedInfo = params.AnalizedInfo;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.CalcNextCameraCut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::CalcNextCameraCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.CalcNextCameraCut");

	ABP_AutoTalkCameraDirector_C_CalcNextCameraCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.IsSimilarToCurrentCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_AutoCameraAnalizedInfo CameraInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::IsSimilarToCurrentCamera(const struct FST_AutoCameraAnalizedInfo& CameraInfo, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.IsSimilarToCurrentCamera");

	ABP_AutoTalkCameraDirector_C_IsSimilarToCurrentCamera_Params params;
	params.CameraInfo = CameraInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.WhetherToChangeCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LookTargetCharacterID          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::WhetherToChangeCamera(const struct FName& LookTargetCharacterID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.WhetherToChangeCamera");

	ABP_AutoTalkCameraDirector_C_WhetherToChangeCamera_Params params;
	params.LookTargetCharacterID = LookTargetCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetSelectedCameras
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_AutoCameraSelectedResult> SelectedCameras                (Parm, OutParm, ZeroConstructor)

void ABP_AutoTalkCameraDirector_C::GetSelectedCameras(bool* Result, TArray<struct FST_AutoCameraSelectedResult>* SelectedCameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetSelectedCameras");

	ABP_AutoTalkCameraDirector_C_GetSelectedCameras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SelectedCameras != nullptr)
		*SelectedCameras = params.SelectedCameras;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.UserConstructionScript");

	ABP_AutoTalkCameraDirector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveBeginPlay");

	ABP_AutoTalkCameraDirector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveTick");

	ABP_AutoTalkCameraDirector_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnCameraChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::OnCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnCameraChanged");

	ABP_AutoTalkCameraDirector_C_OnCameraChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnBeginTalkEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::OnBeginTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnBeginTalkEvent");

	ABP_AutoTalkCameraDirector_C_OnBeginTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnEndTalkEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::OnEndTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnEndTalkEvent");

	ABP_AutoTalkCameraDirector_C_OnEndTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnSkipTalkTask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkipTaskDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::OnSkipTalkTask(float SkipTaskDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnSkipTalkTask");

	ABP_AutoTalkCameraDirector_C_OnSkipTalkTask_Params params;
	params.SkipTaskDuration = SkipTaskDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnInputQuestDebugKey
// (BlueprintCallable, BlueprintEvent)

void ABP_AutoTalkCameraDirector_C::OnInputQuestDebugKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnInputQuestDebugKey");

	ABP_AutoTalkCameraDirector_C_OnInputQuestDebugKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ExecuteUbergraph_BP_AutoTalkCameraDirector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::ExecuteUbergraph_BP_AutoTalkCameraDirector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ExecuteUbergraph_BP_AutoTalkCameraDirector");

	ABP_AutoTalkCameraDirector_C_ExecuteUbergraph_BP_AutoTalkCameraDirector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
