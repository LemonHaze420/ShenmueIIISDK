
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

// Function BPF_Sound.BPF_Sound_C.IsVoiceCue
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Voice                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_IsVoiceCue(class USoundAtomCue* Cue, class UObject* __WorldContext, bool* Voice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.IsVoiceCue");

	UBPF_Sound_C_IsVoiceCue_Params params;
	params.Cue = Cue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voice != nullptr)
		*Voice = params.Voice;
}


// Function BPF_Sound.BPF_Sound_C.GetLanguageLabel
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Selector                       (Parm, OutParm, ZeroConstructor)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UBPF_Sound_C::STATIC_GetLanguageLabel(class UObject* __WorldContext, struct FString* Selector, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetLanguageLabel");

	UBPF_Sound_C_GetLanguageLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selector != nullptr)
		*Selector = params.Selector;
	if (Label != nullptr)
		*Label = params.Label;
}


// Function BPF_Sound.BPF_Sound_C.GetVoiceVolume
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_GetVoiceVolume(class UObject* __WorldContext, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetVoiceVolume");

	UBPF_Sound_C_GetVoiceVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BPF_Sound.BPF_Sound_C.GetBGMVolume
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_GetBGMVolume(class UObject* __WorldContext, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetBGMVolume");

	UBPF_Sound_C_GetBGMVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BPF_Sound.BPF_Sound_C.GetVolumeAdjustValue
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Private, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_GetVolumeAdjustValue(class UObject* __WorldContext, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetVolumeAdjustValue");

	UBPF_Sound_C_GetVolumeAdjustValue_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BPF_Sound.BPF_Sound_C.GetSEVolume
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_GetSEVolume(class UObject* __WorldContext, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetSEVolume");

	UBPF_Sound_C_GetSEVolume_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BPF_Sound.BPF_Sound_C.GetWeatherLabel
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Selector                       (Parm, OutParm, ZeroConstructor)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UBPF_Sound_C::STATIC_GetWeatherLabel(class UObject* __WorldContext, struct FString* Selector, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetWeatherLabel");

	UBPF_Sound_C_GetWeatherLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selector != nullptr)
		*Selector = params.Selector;
	if (Label != nullptr)
		*Label = params.Label;
}


// Function BPF_Sound.BPF_Sound_C.GetBGMbyID
// (NetReliable, NetRequest, Event, MulticastDelegate, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FName                   InId                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3BgmTable             Data                           (Parm, OutParm)

void UBPF_Sound_C::GetBGMbyID(const struct FName& InId, class UObject* __WorldContext, struct FS3BgmTable* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetBGMbyID");

	UBPF_Sound_C_GetBGMbyID_Params params;
	params.InId = InId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BPF_Sound.BPF_Sound_C.PlayCommonSound
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// ECommonSEType                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_PlayCommonSound(ECommonSEType Type, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.PlayCommonSound");

	UBPF_Sound_C_PlayCommonSound_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Sound.BPF_Sound_C.PlaySoundWithVolume
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_PlaySoundWithVolume(class USoundAtomCue* Sound, float Volume, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.PlaySoundWithVolume");

	UBPF_Sound_C_PlaySoundWithVolume_Params params;
	params.Sound = Sound;
	params.Volume = Volume;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Sound.BPF_Sound_C.ChoiceTimeEventBGM
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// ES3DayTimeEvent                CurrentEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           CurrentCue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           DefaultCue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3BgmChangeInfo> InfoArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Cue                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_ChoiceTimeEventBGM(ES3DayTimeEvent CurrentEvent, class USoundAtomCue* CurrentCue, class USoundAtomCue* DefaultCue, class UObject* __WorldContext, TArray<struct FS3BgmChangeInfo>* InfoArray, class USoundAtomCue** Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.ChoiceTimeEventBGM");

	UBPF_Sound_C_ChoiceTimeEventBGM_Params params;
	params.CurrentEvent = CurrentEvent;
	params.CurrentCue = CurrentCue;
	params.DefaultCue = DefaultCue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InfoArray != nullptr)
		*InfoArray = params.InfoArray;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function BPF_Sound.BPF_Sound_C.PlaySoundAttachedComponent
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_PlaySoundAttachedComponent(class USoundAtomCue* Sound, class USceneComponent* Component, const struct FName& SocketName, class USoundAttenuation* Attenuation, bool AutoDestroy, class UObject* __WorldContext, class ABP_S3SoundPlayer_C** SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.PlaySoundAttachedComponent");

	UBPF_Sound_C_PlaySoundAttachedComponent_Params params;
	params.Sound = Sound;
	params.Component = Component;
	params.SocketName = SocketName;
	params.Attenuation = Attenuation;
	params.AutoDestroy = AutoDestroy;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundPlayer != nullptr)
		*SoundPlayer = params.SoundPlayer;
}


// Function BPF_Sound.BPF_Sound_C.PlaySoundAttached
// (Exec, Event, NetResponse, Static, MulticastDelegate, Protected, DLLImport, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_PlaySoundAttached(class USoundAtomCue* Sound, class AActor* Actor, class USoundAttenuation* Attenuation, bool AutoDestroy, class UObject* __WorldContext, class ABP_S3SoundPlayer_C** SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.PlaySoundAttached");

	UBPF_Sound_C_PlaySoundAttached_Params params;
	params.Sound = Sound;
	params.Actor = Actor;
	params.Attenuation = Attenuation;
	params.AutoDestroy = AutoDestroy;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundPlayer != nullptr)
		*SoundPlayer = params.SoundPlayer;
}


// Function BPF_Sound.BPF_Sound_C.PlaySoundAtLocation
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USoundAttenuation*       Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_PlaySoundAtLocation(class USoundAtomCue* Sound, const struct FVector& Location, class USoundAttenuation* Attenuation, bool AutoDestroy, bool AutoPlay, class UObject* __WorldContext, class ABP_S3SoundPlayer_C** SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.PlaySoundAtLocation");

	UBPF_Sound_C_PlaySoundAtLocation_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Attenuation = Attenuation;
	params.AutoDestroy = AutoDestroy;
	params.AutoPlay = AutoPlay;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundPlayer != nullptr)
		*SoundPlayer = params.SoundPlayer;
}


// Function BPF_Sound.BPF_Sound_C.GetDuration
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::GetDuration(class USoundAtomCue* Cue, class UObject* __WorldContext, float* Duration, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetDuration");

	UBPF_Sound_C_GetDuration_Params params;
	params.Cue = Cue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPF_Sound.BPF_Sound_C.GetS3SoundManager
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SoundManager_C*      BP_SoundManager                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Sound_C::STATIC_GetS3SoundManager(class UObject* __WorldContext, class ABP_SoundManager_C** BP_SoundManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Sound.BPF_Sound_C.GetS3SoundManager");

	UBPF_Sound_C_GetS3SoundManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_SoundManager != nullptr)
		*BP_SoundManager = params.BP_SoundManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
