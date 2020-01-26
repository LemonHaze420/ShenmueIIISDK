
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

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.StartTalkClipper
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClipperData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_SubtitlePlayer_C::StartTalkClipper(const struct FName& CharaName, struct FString* ClipperData)
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::UpdateDelayPlayVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UpdateDelayPlayVoice");

	ABP_SubtitlePlayer_C_UpdateDelayPlayVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.RemoveDelayVoiceData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::RemoveDelayVoiceData(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.RemoveDelayVoiceData");

	ABP_SubtitlePlayer_C_RemoveDelayVoiceData_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.AddDelayVoiceData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::AddDelayVoiceData(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.AddDelayVoiceData");

	ABP_SubtitlePlayer_C_AddDelayVoiceData_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetLeavePreviousVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InLeave                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetLeavePreviousVoice(bool InLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetLeavePreviousVoice");

	ABP_SubtitlePlayer_C_SetLeavePreviousVoice_Params params;
	params.InLeave = InLeave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnSubVoiceAudioFinished
// (Protected, BlueprintCallable, BlueprintEvent)
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
// (Protected, BlueprintCallable, BlueprintEvent)
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
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::OnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnSubVoiceAudioFinished");

	ABP_SubtitlePlayer_C_OnSubVoiceAudioFinished_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndAllVoicePlaying
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::EndAllVoicePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndAllVoicePlaying");

	ABP_SubtitlePlayer_C_EndAllVoicePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndSubVoicePlaying
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3SoundPlayer_C*     InSoundPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::EndSubVoicePlaying(class ABP_S3SoundPlayer_C* InSoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndSubVoicePlaying");

	ABP_SubtitlePlayer_C_EndSubVoicePlaying_Params params;
	params.InSoundPlayer = InSoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ConvertCurrentVoicePlayerToSub
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::ConvertCurrentVoicePlayerToSub()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ConvertCurrentVoicePlayerToSub");

	ABP_SubtitlePlayer_C_ConvertCurrentVoicePlayerToSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayTimeMin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetPlayTimeMin(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayTimeMin");

	ABP_SubtitlePlayer_C_SetPlayTimeMin_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CheckAutoStop
// (Private, BlueprintCallable, BlueprintEvent)
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
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::IsVoicePlaying(bool* Playing)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolume                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetPlayVolume(float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayVolume");

	ABP_SubtitlePlayer_C_SetPlayVolume_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetVoicePlayer
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3SoundPlayer_C*     VoicePlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::GetVoicePlayer(class ABP_S3SoundPlayer_C** VoicePlayer)
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
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPlayingTime             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetCurrentPlayingTime(float CurrentPlayingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetCurrentPlayingTime");

	ABP_SubtitlePlayer_C_SetCurrentPlayingTime_Params params;
	params.CurrentPlayingTime = CurrentPlayingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsAutoStopFlag
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFlag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetIsAutoStopFlag(bool bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsAutoStopFlag");

	ABP_SubtitlePlayer_C_SetIsAutoStopFlag_Params params;
	params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsPlayingFlag
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFlag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetIsPlayingFlag(bool bFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsPlayingFlag");

	ABP_SubtitlePlayer_C_SetIsPlayingFlag_Params params;
	params.bFlag = bFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitlesWidget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_Subtitles_C*        SubtitlesWidget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SubtitlePlayer_C::GetSubtitlesWidget(class UUMG_Subtitles_C** SubtitlesWidget)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_SubtitlePlayer_C::CalcPlayTimeMin(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CalcPlayTimeMin");

	ABP_SubtitlePlayer_C_CalcPlayTimeMin_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SubtitlePlayer_C::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsPlaying");

	ABP_SubtitlePlayer_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleSpeakerID
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::GetSubtitleSpeakerID(const struct FName& CharaName, struct FName* ID)
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
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Stop");

	ABP_SubtitlePlayer_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Play
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoStop                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName, bool IsAutoStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Play");

	ABP_SubtitlePlayer_C_Play_Params params;
	params.Label = Label;
	params.Type = Type;
	params.CharaName = CharaName;
	params.IsAutoStop = IsAutoStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndVoicePlaying
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::EndVoicePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndVoicePlaying");

	ABP_SubtitlePlayer_C_EndVoicePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.PlayVoice
// (Protected, BlueprintCallable, BlueprintEvent)
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
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::CreateVoicePlayer(class USoundAtomCue* Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateVoicePlayer");

	ABP_SubtitlePlayer_C_CreateVoicePlayer_Params params;
	params.Cue = Cue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetSubtitlesWidgetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::SetSubtitlesWidgetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetSubtitlesWidgetVisible");

	ABP_SubtitlePlayer_C_SetSubtitlesWidgetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.FinalizeSubtitlesWidget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::FinalizeSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.FinalizeSubtitlesWidget");

	ABP_SubtitlePlayer_C_FinalizeSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateSubtitlesWidget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::CreateSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateSubtitlesWidget");

	ABP_SubtitlePlayer_C_CreateSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UserConstructionScript");

	ABP_SubtitlePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SubtitlePlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveBeginPlay");

	ABP_SubtitlePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveTick");

	ABP_SubtitlePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnVoiceAudioFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::BindOnVoiceAudioFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnVoiceAudioFinished");

	ABP_SubtitlePlayer_C_BindOnVoiceAudioFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnVoiceAudioFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::UnbindOnVoiceAudioFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnVoiceAudioFinished");

	ABP_SubtitlePlayer_C_UnbindOnVoiceAudioFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnVoiceAudioFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::OnVoiceAudioFinished(class ABP_S3SoundPlayer_C* SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnVoiceAudioFinished");

	ABP_SubtitlePlayer_C_OnVoiceAudioFinished_Params params;
	params.SoundPlayer = SoundPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.sePlay
// (BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::sePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.sePlay");

	ABP_SubtitlePlayer_C_sePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.bindSePlay
// (BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::bindSePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.bindSePlay");

	ABP_SubtitlePlayer_C_bindSePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveEndPlay");

	ABP_SubtitlePlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ExecuteUbergraph_BP_SubtitlePlayer
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_C::OnEndSubtitle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnEndSubtitle__DelegateSignature");

	ABP_SubtitlePlayer_C_OnEndSubtitle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
