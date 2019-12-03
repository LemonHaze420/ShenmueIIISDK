
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

// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetNextCutChangeTime
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CutChangeTIme                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::STATIC_GetNextCutChangeTime(float* CutChangeTIme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetNextCutChangeTime");

	ABP_AutoTalkCameraDirector_C_GetNextCutChangeTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutChangeTIme != nullptr)
		*CutChangeTIme = params.CutChangeTIme;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.PrintCameraInfo
// (NetRequest, Exec, NetResponse, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
// (Net, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, NetServer)
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
// (Net, NetReliable, Exec, NetResponse, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AutoTalkCameraDirector_C::CalcNextCameraCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.CalcNextCameraCut");

	ABP_AutoTalkCameraDirector_C_CalcNextCameraCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.IsSimilarToCurrentCamera
// (Net, NetReliable, NetMulticast, Public, Delegate, NetServer, NetClient, BlueprintPure)
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
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   LookTargetCharacterID          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::STATIC_WhetherToChangeCamera(const struct FName& LookTargetCharacterID, bool* Result)
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
// (Net, NetRequest, Exec, Native, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_AutoCameraSelectedResult> SelectedCameras                (Parm, OutParm, ZeroConstructor)

void ABP_AutoTalkCameraDirector_C::GetSelectedCameras(bool* Result, TArray<struct FST_AutoCameraSelectedResult>* SelectedCameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.GetSelectedCameras");

	ABP_AutoTalkCameraDirector_C_GetSelectedCameras_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SelectedCameras != nullptr)
		*SelectedCameras = params.SelectedCameras;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.UserConstructionScript
// (NetReliable, Native, Event, NetResponse, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_AutoTalkCameraDirector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.UserConstructionScript");

	ABP_AutoTalkCameraDirector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AutoTalkCameraDirector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveBeginPlay");

	ABP_AutoTalkCameraDirector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveTick
// (Net, NetRequest, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ReceiveTick");

	ABP_AutoTalkCameraDirector_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnCameraChanged
// (Net, NetRequest, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AutoTalkCameraDirector_C::OnCameraChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnCameraChanged");

	ABP_AutoTalkCameraDirector_C_OnCameraChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnBeginTalkEvent
// (Net, NetRequest, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AutoTalkCameraDirector_C::OnBeginTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnBeginTalkEvent");

	ABP_AutoTalkCameraDirector_C_OnBeginTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnEndTalkEvent
// (NetRequest, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AutoTalkCameraDirector_C::OnEndTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnEndTalkEvent");

	ABP_AutoTalkCameraDirector_C_OnEndTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnSkipTalkTask
// (NetReliable, NetRequest, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          SkipTaskDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::STATIC_OnSkipTalkTask(float SkipTaskDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnSkipTalkTask");

	ABP_AutoTalkCameraDirector_C_OnSkipTalkTask_Params params;
	params.SkipTaskDuration = SkipTaskDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnInputQuestDebugKey
// (Net, NetReliable, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_AutoTalkCameraDirector_C::OnInputQuestDebugKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.OnInputQuestDebugKey");

	ABP_AutoTalkCameraDirector_C_OnInputQuestDebugKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C.ExecuteUbergraph_BP_AutoTalkCameraDirector
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AutoTalkCameraDirector_C::STATIC_ExecuteUbergraph_BP_AutoTalkCameraDirector(int EntryPoint)
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
