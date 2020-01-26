
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

// Function BP_S3BgmManager.BP_S3BgmManager_C.PauseLevelBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRequest                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::PauseLevelBGM(bool bRequest, class UObject* Requester)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PauseLevelBGM");

	ABP_S3BgmManager_C_PauseLevelBGM_Params params;
	params.bRequest = bRequest;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ShouldBePaused
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3BgmManager_C::ShouldBePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ShouldBePaused");

	ABP_S3BgmManager_C_ShouldBePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.GetHighestPriority
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// EBgmPriority                   OutPriority                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_S3BgmManager_C::GetHighestPriority(EBgmPriority* OutPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.GetHighestPriority");

	ABP_S3BgmManager_C_GetHighestPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPriority != nullptr)
		*OutPriority = params.OutPriority;

	return params.ReturnValue;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.StopForceBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::StopForceBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.StopForceBGM");

	ABP_S3BgmManager_C_StopForceBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.IsForceBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Force                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::IsForceBGM(bool* Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.IsForceBGM");

	ABP_S3BgmManager_C_IsForceBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Force != nullptr)
		*Force = params.Force;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayForceBGM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::PlayForceBGM(class USoundAtomCue* Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PlayForceBGM");

	ABP_S3BgmManager_C_PlayForceBGM_Params params;
	params.Cue = Cue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PauseSimple
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::PauseSimple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PauseSimple");

	ABP_S3BgmManager_C_PauseSimple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.Stop
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3BgmManager_C::Stop(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.Stop");

	ABP_S3BgmManager_C_Stop_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ResetVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::ResetVolume(class AActor* Executor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ResetVolume");

	ABP_S3BgmManager_C_ResetVolume_Params params;
	params.Executor = Executor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.GetCurrentVolume
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::GetCurrentVolume(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.GetCurrentVolume");

	ABP_S3BgmManager_C_GetCurrentVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.SetVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::SetVolume(class AActor* Executor, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.SetVolume");

	ABP_S3BgmManager_C_SetVolume_Params params;
	params.Executor = Executor;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.SetSystemVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::SetSystemVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.SetSystemVolume");

	ABP_S3BgmManager_C_SetSystemVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.StopWithDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::StopWithDestroy(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.StopWithDestroy");

	ABP_S3BgmManager_C_StopWithDestroy_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.RestartFromCutscene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::RestartFromCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.RestartFromCutscene");

	ABP_S3BgmManager_C_RestartFromCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.RestartSimple
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::RestartSimple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.RestartSimple");

	ABP_S3BgmManager_C_RestartSimple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.CanUpdatePlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3BgmPlayer_C*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::CanUpdatePlay(class ABP_S3BgmPlayer_C* Player, bool Pause, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.CanUpdatePlay");

	ABP_S3BgmManager_C_CanUpdatePlay_Params params;
	params.Player = Player;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PauseFromCutscene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::PauseFromCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PauseFromCutscene");

	ABP_S3BgmManager_C_PauseFromCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayingBgm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::GetPlayingBgm(class USoundAtomCue** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayingBgm");

	ABP_S3BgmManager_C_GetPlayingBgm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromCue
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBgmPriority                   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3BgmPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AS3BgmPlayer* ABP_S3BgmManager_C::PlayFromCue(class UObject* Cue, const struct FName& ID, EBgmPriority Priority, bool AutoDestroy, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromCue");

	ABP_S3BgmManager_C_PlayFromCue_Params params;
	params.Cue = Cue;
	params.ID = ID;
	params.Priority = Priority;
	params.AutoDestroy = AutoDestroy;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.StopCutsceneBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::StopCutsceneBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.StopCutsceneBGM");

	ABP_S3BgmManager_C_StopCutsceneBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayerByPriority
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBgmPriority                   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3BgmPlayer_C*       Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::GetPlayerByPriority(EBgmPriority Priority, class ABP_S3BgmPlayer_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayerByPriority");

	ABP_S3BgmManager_C_GetPlayerByPriority_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromSequencer_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::PlayFromSequencer_Impl(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromSequencer_Impl");

	ABP_S3BgmManager_C_PlayFromSequencer_Impl_Params params;
	params.Cue = Cue;
	params.SoundId = SoundId;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayerById
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3BgmPlayer_C*       Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::GetPlayerById(const struct FName& ID, class ABP_S3BgmPlayer_C** Player, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayerById");

	ABP_S3BgmManager_C_GetPlayerById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS3BgmAreaSourceInfo    SourceInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BgmManager_C::PlayFromInfo(const struct FS3BgmAreaSourceInfo& SourceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromInfo");

	ABP_S3BgmManager_C_PlayFromInfo_Params params;
	params.SourceInfo = SourceInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.AddPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3BgmPlayer_C*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::AddPlayer(class ABP_S3BgmPlayer_C* Player, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.AddPlayer");

	ABP_S3BgmManager_C_AddPlayer_Params params;
	params.Player = Player;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.UpdateBGM
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::UpdateBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.UpdateBGM");

	ABP_S3BgmManager_C_UpdateBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ChangeBgm
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::ChangeBgm(class UObject* Sound, const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ChangeBgm");

	ABP_S3BgmManager_C_ChangeBgm_Params params;
	params.Sound = Sound;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.UserConstructionScript");

	ABP_S3BgmManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BgmManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveBeginPlay");

	ABP_S3BgmManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.OnBeginTouchArea
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3BgmArea*              AreaActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::OnBeginTouchArea(class AS3BgmArea* AreaActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.OnBeginTouchArea");

	ABP_S3BgmManager_C_OnBeginTouchArea_Params params;
	params.AreaActor = AreaActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.OnEndTouchArea
// (Event, Public, BlueprintEvent)
// Parameters:
// class AS3BgmArea*              AreaActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::OnEndTouchArea(class AS3BgmArea* AreaActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.OnEndTouchArea");

	ABP_S3BgmManager_C_OnEndTouchArea_Params params;
	params.AreaActor = AreaActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.OnAreaBgmChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3BgmArea*              area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::OnAreaBgmChanged(class AS3BgmArea* area)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.OnAreaBgmChanged");

	ABP_S3BgmManager_C_OnAreaBgmChanged_Params params;
	params.area = area;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3BgmPlayer*            BgmPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::PlayFromPlayer(class AS3BgmPlayer* BgmPlayer, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromPlayer");

	ABP_S3BgmManager_C_PlayFromPlayer_Params params;
	params.BgmPlayer = BgmPlayer;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.Pause
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.Pause");

	ABP_S3BgmManager_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.Restart
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.Restart");

	ABP_S3BgmManager_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromSequencer");

	ABP_S3BgmManager_C_PlayFromSequencer_Params params;
	params.Cue = Cue;
	params.SoundId = SoundId;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveEndPlay");

	ABP_S3BgmManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveTick");

	ABP_S3BgmManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.StartFadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::StartFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.StartFadeIn");

	ABP_S3BgmManager_C_StartFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.StartFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.StartFadeOut");

	ABP_S3BgmManager_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.SwitchController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::SwitchController(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.SwitchController");

	ABP_S3BgmManager_C_SwitchController_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ShowEyecatch
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::ShowEyecatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ShowEyecatch");

	ABP_S3BgmManager_C_ShowEyecatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.HideEyecatch
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BgmManager_C::HideEyecatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.HideEyecatch");

	ABP_S3BgmManager_C_HideEyecatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ChangeSystemVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3SoundVolume                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::ChangeSystemVolume(ES3SoundVolume Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ChangeSystemVolume");

	ABP_S3BgmManager_C_ChangeSystemVolume_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.SetTalkVolume
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::SetTalkVolume(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.SetTalkVolume");

	ABP_S3BgmManager_C_SetTalkVolume_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmManager.BP_S3BgmManager_C.ExecuteUbergraph_BP_S3BgmManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmManager_C::ExecuteUbergraph_BP_S3BgmManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmManager.BP_S3BgmManager_C.ExecuteUbergraph_BP_S3BgmManager");

	ABP_S3BgmManager_C_ExecuteUbergraph_BP_S3BgmManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
