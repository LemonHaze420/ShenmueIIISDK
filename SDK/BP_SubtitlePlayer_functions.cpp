
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

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.StartTalkClipper
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClipperData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_SubtitlePlayer_C::STATIC_StartTalkClipper(const struct FName& CharaName, struct FString* ClipperData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.StartTalkClipper");

	ABP_SubtitlePlayer_C_StartTalkClipper_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClipperData != nullptr)
		*ClipperData = params.ClipperData;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UpdateDelayPlayVoice
// (Net, NetRequest, Event, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_SubtitlePlayer_C::STATIC_UpdateDelayPlayVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UpdateDelayPlayVoice");

	ABP_SubtitlePlayer_C_UpdateDelayPlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.RemoveDelayVoiceData
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, NetServer, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::RemoveDelayVoiceData(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.RemoveDelayVoiceData");

	ABP_SubtitlePlayer_C_RemoveDelayVoiceData_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.AddDelayVoiceData
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_AddDelayVoiceData(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.AddDelayVoiceData");

	ABP_SubtitlePlayer_C_AddDelayVoiceData_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetLeavePreviousVoice
// (Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           InLeave                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetLeavePreviousVoice(bool InLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetLeavePreviousVoice");

	ABP_SubtitlePlayer_C_SetLeavePreviousVoice_Params params;
	params.InLeave = InLeave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnSubVoiceAudioFinished
// (Net, NetRequest, Event, NetResponse, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::UnbindOnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnSubVoiceAudioFinished");

	ABP_SubtitlePlayer_C_UnbindOnSubVoiceAudioFinished_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnSubVoiceAudioFinished
// (Exec, Event, NetResponse, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::BindOnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnSubVoiceAudioFinished");

	ABP_SubtitlePlayer_C_BindOnSubVoiceAudioFinished_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnSubVoiceAudioFinished
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_OnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnSubVoiceAudioFinished");

	ABP_SubtitlePlayer_C_OnSubVoiceAudioFinished_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndAllVoicePlaying
// (Net, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_EndAllVoicePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndAllVoicePlaying");

	ABP_SubtitlePlayer_C_EndAllVoicePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndSubVoicePlaying
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_EndSubVoicePlaying(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndSubVoicePlaying");

	ABP_SubtitlePlayer_C_EndSubVoicePlaying_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ConvertCurrentVoicePlayerToSub
// (Native, Event, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_ConvertCurrentVoicePlayerToSub()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ConvertCurrentVoicePlayerToSub");

	ABP_SubtitlePlayer_C_ConvertCurrentVoicePlayerToSub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayTimeMin
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetPlayTimeMin(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayTimeMin");

	ABP_SubtitlePlayer_C_SetPlayTimeMin_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CheckAutoStop
// (Net, NetReliable, NetMulticast, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::CheckAutoStop(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CheckAutoStop");

	ABP_SubtitlePlayer_C_CheckAutoStop_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsVoicePlaying
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_IsVoicePlaying(bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsVoicePlaying");

	ABP_SubtitlePlayer_C_IsVoicePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayVolume
// (NetReliable, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetPlayVolume(float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayVolume");

	ABP_SubtitlePlayer_C_SetPlayVolume_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetVoicePlayer
// (Net, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     VoicePlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_GetVoicePlayer(class ABP_S3SoundPlayer_C** VoicePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetVoicePlayer");

	ABP_SubtitlePlayer_C_GetVoicePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VoicePlayer != nullptr)
		*VoicePlayer = params.VoicePlayer;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetCurrentPlayingTime
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// float                          CurrentPlayingTime             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetCurrentPlayingTime(float CurrentPlayingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetCurrentPlayingTime");

	ABP_SubtitlePlayer_C_SetCurrentPlayingTime_Params params;
	params.CurrentPlayingTime = CurrentPlayingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsAutoStopFlag
// (Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           bFlag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetIsAutoStopFlag(bool bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsAutoStopFlag");

	ABP_SubtitlePlayer_C_SetIsAutoStopFlag_Params params;
	params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsPlayingFlag
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           bFlag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetIsPlayingFlag(bool bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsPlayingFlag");

	ABP_SubtitlePlayer_C_SetIsPlayingFlag_Params params;
	params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitlesWidget
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UUMG_Subtitles_C*        SubtitlesWidget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_GetSubtitlesWidget(class UUMG_Subtitles_C** SubtitlesWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitlesWidget");

	ABP_SubtitlePlayer_C_GetSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubtitlesWidget != nullptr)
		*SubtitlesWidget = params.SubtitlesWidget;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CalcPlayTimeMin
// (Exec, Native, Event, NetResponse, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_SubtitlePlayer_C::CalcPlayTimeMin(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CalcPlayTimeMin");

	ABP_SubtitlePlayer_C_CalcPlayTimeMin_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsPlaying
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SubtitlePlayer_C::STATIC_IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsPlaying");

	ABP_SubtitlePlayer_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleSpeakerID
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_GetSubtitleSpeakerID(const struct FName& CharaName, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleSpeakerID");

	ABP_SubtitlePlayer_C_GetSubtitleSpeakerID_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleChara
// (Net, NetRequest, Exec, NetMulticast, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_TalkCharacterType> Chara                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::GetSubtitleChara(const struct FName& CharaName, TEnumAsByte<EN_TalkCharacterType>* Chara)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleChara");

	ABP_SubtitlePlayer_C_GetSubtitleChara_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Chara != nullptr)
		*Chara = params.Chara;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Stop
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_SubtitlePlayer_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Stop");

	ABP_SubtitlePlayer_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Play
// (Exec, Native, Static, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoStop                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName, bool IsAutoStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Play");

	ABP_SubtitlePlayer_C_Play_Params params;
	params.Label = Label;
	params.Type = Type;
	params.CharaName = CharaName;
	params.IsAutoStop = IsAutoStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndVoicePlaying
// (Exec, NetMulticast, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_SubtitlePlayer_C::EndVoicePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndVoicePlaying");

	ABP_SubtitlePlayer_C_EndVoicePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.PlayVoice
// (NetRequest, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, Const)
// Parameters:
// class UObject*                 VoiceData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::PlayVoice(class UObject* VoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.PlayVoice");

	ABP_SubtitlePlayer_C_PlayVoice_Params params;
	params.VoiceData = VoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateVoicePlayer
// (NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_CreateVoicePlayer(class USoundAtomCue* Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateVoicePlayer");

	ABP_SubtitlePlayer_C_CreateVoicePlayer_Params params;
	params.Cue = Cue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetSubtitlesWidgetVisible
// (Net, Exec, Event, Static, Public, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_SetSubtitlesWidgetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetSubtitlesWidgetVisible");

	ABP_SubtitlePlayer_C_SetSubtitlesWidgetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.FinalizeSubtitlesWidget
// (Exec, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_FinalizeSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.FinalizeSubtitlesWidget");

	ABP_SubtitlePlayer_C_FinalizeSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateSubtitlesWidget
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_SubtitlePlayer_C::CreateSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateSubtitlesWidget");

	ABP_SubtitlePlayer_C_CreateSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UserConstructionScript
// (Net, Exec, Event, NetResponse, Static, Private, Delegate, HasDefaults, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UserConstructionScript");

	ABP_SubtitlePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveBeginPlay");

	ABP_SubtitlePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveTick
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveTick");

	ABP_SubtitlePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnVoiceAudioFinished
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_BindOnVoiceAudioFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnVoiceAudioFinished");

	ABP_SubtitlePlayer_C_BindOnVoiceAudioFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnVoiceAudioFinished
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_UnbindOnVoiceAudioFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnVoiceAudioFinished");

	ABP_SubtitlePlayer_C_UnbindOnVoiceAudioFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnVoiceAudioFinished
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_OnVoiceAudioFinished(class ABP_S3SoundPlayer_C* SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnVoiceAudioFinished");

	ABP_SubtitlePlayer_C_OnVoiceAudioFinished_Params params;
	params.SoundPlayer = SoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.sePlay
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_sePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.sePlay");

	ABP_SubtitlePlayer_C_sePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.bindSePlay
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_SubtitlePlayer_C::STATIC_bindSePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.bindSePlay");

	ABP_SubtitlePlayer_C_bindSePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveEndPlay
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveEndPlay");

	ABP_SubtitlePlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ExecuteUbergraph_BP_SubtitlePlayer
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::ExecuteUbergraph_BP_SubtitlePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ExecuteUbergraph_BP_SubtitlePlayer");

	ABP_SubtitlePlayer_C_ExecuteUbergraph_BP_SubtitlePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnEndSubtitle__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::OnEndSubtitle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnEndSubtitle__DelegateSignature");

	ABP_SubtitlePlayer_C_OnEndSubtitle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
