
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

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetPlaybackTime
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_S3SoundPlayer_C::STATIC_GetPlaybackTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetPlaybackTime");

	ABP_S3SoundPlayer_C_GetPlaybackTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StopForbid
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::StopForbid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StopForbid");

	ABP_S3SoundPlayer_C_StopForbid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Stop
// (Net, NetReliable, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3SoundPlayer_C::STATIC_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Stop");

	ABP_S3SoundPlayer_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StopOnly
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::STATIC_StopOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StopOnly");

	ABP_S3SoundPlayer_C_StopOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.JudgeVolume
// (Net, NetReliable, Exec, Native, NetResponse, Public, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::JudgeVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.JudgeVolume");

	ABP_S3SoundPlayer_C_JudgeVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSound
// (NetRequest, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent)

void ABP_S3SoundPlayer_C::SetSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSound");

	ABP_S3SoundPlayer_C_SetSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSoundPitch
// (Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::SetSoundPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSoundPitch");

	ABP_S3SoundPlayer_C_SetSoundPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetAISAC
// (Exec, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FString                 ControlName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          ControlValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_SetAISAC(const struct FString& ControlName, float ControlValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetAISAC");

	ABP_S3SoundPlayer_C_SetAISAC_Params params;
	params.ControlName = ControlName;
	params.ControlValue = ControlValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetAttenuation
// (Net, NetReliable, Native, NetResponse, Public, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class USoundAttenuation*       Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::SetAttenuation(class USoundAttenuation* Attenuation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetAttenuation");

	ABP_S3SoundPlayer_C_SetAttenuation_Params params;
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSelector
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FString                 Selector                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3SoundPlayer_C::SetSelector(const struct FString& Selector, const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSelector");

	ABP_S3SoundPlayer_C_SetSelector_Params params;
	params.Selector = Selector;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSoundVolume
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_SetSoundVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSoundVolume");

	ABP_S3SoundPlayer_C_SetSoundVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetSource
// (Native, NetResponse, Protected, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 Cue                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::GetSource(class UObject** Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetSource");

	ABP_S3SoundPlayer_C_GetSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetSourceType
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<ESoundSourceType>  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::GetSourceType(TEnumAsByte<ESoundSourceType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetSourceType");

	ABP_S3SoundPlayer_C_GetSourceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetDuration
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration_sec_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_GetDuration(bool* Result, float* Duration_sec_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetDuration");

	ABP_S3SoundPlayer_C_GetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Duration_sec_ != nullptr)
		*Duration_sec_ = params.Duration_sec_;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.IsPlaying
// (Exec, Native, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::IsPlaying(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.IsPlaying");

	ABP_S3SoundPlayer_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSource
// (NetRequest, Native, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::SetSource(class UObject* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSource");

	ABP_S3SoundPlayer_C_SetSource_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.EndCheck
// (NetReliable, NetRequest, Native, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Destroy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::EndCheck(bool* Destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.EndCheck");

	ABP_S3SoundPlayer_C_EndCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroy != nullptr)
		*Destroy = params.Destroy;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Play
// (Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Play");

	ABP_S3SoundPlayer_C_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.UserConstructionScript
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.UserConstructionScript");

	ABP_S3SoundPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ReceiveBeginPlay");

	ABP_S3SoundPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ReceiveEndPlay
// (Net, Exec, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ReceiveEndPlay");

	ABP_S3SoundPlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.PermitPlay
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::PermitPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.PermitPlay");

	ABP_S3SoundPlayer_C_PermitPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StartReuse
// (NetRequest, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::StartReuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StartReuse");

	ABP_S3SoundPlayer_C_StartReuse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetVoiceFlag
// (Exec, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// bool                           bNewFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_SetVoiceFlag(bool bNewFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetVoiceFlag");

	ABP_S3SoundPlayer_C_SetVoiceFlag_Params params;
	params.bNewFlag = bNewFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSystemVolume
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_SetSystemVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSystemVolume");

	ABP_S3SoundPlayer_C_SetSystemVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.AudioFinished
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::AudioFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.AudioFinished");

	ABP_S3SoundPlayer_C_AudioFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.CriAudioFInished
// (NetReliable, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::CriAudioFInished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.CriAudioFInished");

	ABP_S3SoundPlayer_C_CriAudioFInished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.BindFinishEvent
// (NetReliable, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::BindFinishEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.BindFinishEvent");

	ABP_S3SoundPlayer_C_BindFinishEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.UnbindFinishEvent
// (Net, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::UnbindFinishEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.UnbindFinishEvent");

	ABP_S3SoundPlayer_C_UnbindFinishEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Pause
// (Net, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Pause");

	ABP_S3SoundPlayer_C_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Restart
// (Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3SoundPlayer_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Restart");

	ABP_S3SoundPlayer_C_Restart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ExecuteUbergraph_BP_S3SoundPlayer
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::ExecuteUbergraph_BP_S3SoundPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ExecuteUbergraph_BP_S3SoundPlayer");

	ABP_S3SoundPlayer_C_ExecuteUbergraph_BP_S3SoundPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.OnAudioFinished__DelegateSignature
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3SoundPlayer_C::STATIC_OnAudioFinished__DelegateSignature(class ABP_S3SoundPlayer_C* SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.OnAudioFinished__DelegateSignature");

	ABP_S3SoundPlayer_C_OnAudioFinished__DelegateSignature_Params params;
	params.SoundPlayer = SoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
