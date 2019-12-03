
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

// Function BP_SoundManager.BP_SoundManager_C.EndSystemPause
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintPure)

void ABP_SoundManager_C::STATIC_EndSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.EndSystemPause");

	ABP_SoundManager_C_EndSystemPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.BeginSystemPause
// (Net, NetRequest, Native, Event, NetMulticast, Protected, NetServer, BlueprintCallable)

void ABP_SoundManager_C::BeginSystemPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.BeginSystemPause");

	ABP_SoundManager_C_BeginSystemPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ForbidStopAll
// (NetReliable, NetMulticast, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)

void ABP_SoundManager_C::ForbidStopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ForbidStopAll");

	ABP_SoundManager_C_ForbidStopAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetTalkVolume_Impl
// (NetReliable, Exec, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::SetTalkVolume_Impl(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetTalkVolume_Impl");

	ABP_SoundManager_C_SetTalkVolume_Impl_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.StopWithDestroy
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_StopWithDestroy(const struct FName& ID, bool* Destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.StopWithDestroy");

	ABP_SoundManager_C_StopWithDestroy_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroy != nullptr)
		*Destroy = params.Destroy;
}


// Function BP_SoundManager.BP_SoundManager_C.EndCutscene_Impl
// (Net, Event, NetResponse, NetMulticast, Protected, NetServer, BlueprintCallable)

void ABP_SoundManager_C::EndCutscene_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.EndCutscene_Impl");

	ABP_SoundManager_C_EndCutscene_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.InitCutsceneSetting
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class ABP_S3SoundPlayer_C*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESequenceSelectorType          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_InitCutsceneSetting(class ABP_S3SoundPlayer_C* Player, class USoundAtomCue* Cue, const struct FName& ID, ESequenceSelectorType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.InitCutsceneSetting");

	ABP_SoundManager_C_InitCutsceneSetting_Params params;
	params.Player = Player;
	params.Cue = Cue;
	params.ID = ID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ForceGC
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, DLLImport, BlueprintEvent)

void ABP_SoundManager_C::STATIC_ForceGC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ForceGC");

	ABP_SoundManager_C_ForceGC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetSelector
// (NetReliable, Exec, Event, NetResponse, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class ABP_S3SoundPlayer_C*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESequenceSelectorType          Selector                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::SetSelector(class ABP_S3SoundPlayer_C* Player, ESequenceSelectorType Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetSelector");

	ABP_SoundManager_C_SetSelector_Params params;
	params.Player = Player;
	params.Selector = Selector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.CreateNewPlayer
// (Static, NetMulticast, MulticastDelegate, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3SoundPlayer_C*     Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_CreateNewPlayer(class USoundAtomCue* Sound, bool AutoDestroy, bool AutoPlay, class ABP_S3SoundPlayer_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.CreateNewPlayer");

	ABP_SoundManager_C_CreateNewPlayer_Params params;
	params.Sound = Sound;
	params.AutoDestroy = AutoDestroy;
	params.AutoPlay = AutoPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_SoundManager.BP_SoundManager_C.DebugPrint
// (Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, DLLImport, BlueprintEvent)

void ABP_SoundManager_C::STATIC_DebugPrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.DebugPrint");

	ABP_SoundManager_C_DebugPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetSystemVolume
// (Net, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3SoundVolume                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::SetSystemVolume(ES3SoundVolume Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetSystemVolume");

	ABP_SoundManager_C_SetSystemVolume_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.CreatePlayerWithTransform
// (NetRequest, Exec, Event, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABP_S3SoundPlayer_C*     Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::CreatePlayerWithTransform(class USoundAtomCue* Sound, class USoundAttenuation* Attenuation, bool AutoDestroy, bool AutoPlay, const struct FTransform& Location, class ABP_S3SoundPlayer_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.CreatePlayerWithTransform");

	ABP_SoundManager_C_CreatePlayerWithTransform_Params params;
	params.Sound = Sound;
	params.Attenuation = Attenuation;
	params.AutoDestroy = AutoDestroy;
	params.AutoPlay = AutoPlay;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_SoundManager.BP_SoundManager_C.StopAll
// (Net, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)

void ABP_SoundManager_C::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.StopAll");

	ABP_SoundManager_C_StopAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.PlayFromSequencer_Impl
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESequenceSelectorType          Selector                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OneShot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_PlayFromSequencer_Impl(class USoundAtomCue* Cue, const struct FName& SoundId, ESequenceSelectorType Selector, float StartTime, bool OneShot, float Volume, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.PlayFromSequencer_Impl");

	ABP_SoundManager_C_PlayFromSequencer_Impl_Params params;
	params.Cue = Cue;
	params.SoundId = SoundId;
	params.Selector = Selector;
	params.StartTime = StartTime;
	params.OneShot = OneShot;
	params.Volume = Volume;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.PermitPlayAll
// (NetRequest, Native, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::STATIC_PermitPlayAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.PermitPlayAll");

	ABP_SoundManager_C_PermitPlayAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.GarbageCollection
// (Net, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)

void ABP_SoundManager_C::GarbageCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.GarbageCollection");

	ABP_SoundManager_C_GarbageCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetAtomSound
// (Exec, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class ABP_S3AtomSound_C*       Atom                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::SetAtomSound(class ABP_S3AtomSound_C* Atom, bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetAtomSound");

	ABP_SoundManager_C_SetAtomSound_Params params;
	params.Atom = Atom;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.StopTimerSound
// (Native, Static, NetMulticast, MulticastDelegate, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_StopTimerSound(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.StopTimerSound");

	ABP_SoundManager_C_StopTimerSound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetTimerSound
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class ABP_S3AtomSoundTimer_C*  Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_SetTimerSound(class ABP_S3AtomSoundTimer_C* Timer, bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetTimerSound");

	ABP_SoundManager_C_SetTimerSound_Params params;
	params.Timer = Timer;
	params.Register = Register;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.CreatePlayer
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3SoundPlayer_C*     Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_CreatePlayer(class USoundAtomCue* Sound, bool AutoDestroy, bool AutoPlay, class ABP_S3SoundPlayer_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.CreatePlayer");

	ABP_SoundManager_C_CreatePlayer_Params params;
	params.Sound = Sound;
	params.AutoDestroy = AutoDestroy;
	params.AutoPlay = AutoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_SoundManager.BP_SoundManager_C.SetPlayer
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class AS3SoundPlayer*          Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_SetPlayer(class AS3SoundPlayer* Player, bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetPlayer");

	ABP_SoundManager_C_SetPlayer_Params params;
	params.Player = Player;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.PlayTimerSound
// (Exec, Static, NetMulticast, MulticastDelegate, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3SoundTimerParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SoundManager_C::STATIC_PlayTimerSound(const struct FName& ID, const struct FS3SoundTimerParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.PlayTimerSound");

	ABP_SoundManager_C_PlayTimerSound_Params params;
	params.ID = ID;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.GetAvailableComponent
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Protected, NetServer, BlueprintCallable)
// Parameters:
// class UAtomComponent*          Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SoundManager_C::GetAvailableComponent(class UAtomComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.GetAvailableComponent");

	ABP_SoundManager_C_GetAvailableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_SoundManager.BP_SoundManager_C.Play_Impl
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::Play_Impl(class USoundAtomCue* Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.Play_Impl");

	ABP_SoundManager_C_Play_Impl_Params params;
	params.Cue = Cue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.UserConstructionScript
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.UserConstructionScript");

	ABP_SoundManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ReceiveBeginPlay");

	ABP_SoundManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ReceiveTick
// (Net, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ReceiveTick");

	ABP_SoundManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.Play
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_Play(class USoundAtomCue* Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.Play");

	ABP_SoundManager_C_Play_Params params;
	params.Cue = Cue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.PlayFromSequencer
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESequenceSelectorType          Selector                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOneShot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, ESequenceSelectorType Selector, bool bOneShot, float StartTime, float Volume, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.PlayFromSequencer");

	ABP_SoundManager_C_PlayFromSequencer_Params params;
	params.Cue = Cue;
	params.SoundId = SoundId;
	params.Selector = Selector;
	params.bOneShot = bOneShot;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ReceiveEndPlay
// (Net, NetRequest, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ReceiveEndPlay");

	ABP_SoundManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ChangeVolume
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// ES3SoundVolume                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_ChangeVolume(ES3SoundVolume Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ChangeVolume");

	ABP_SoundManager_C_ChangeVolume_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.StartFadeIn
// (Net, NetReliable, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::StartFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.StartFadeIn");

	ABP_SoundManager_C_StartFadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.EndSequenser
// (NetReliable, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::EndSequenser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.EndSequenser");

	ABP_SoundManager_C_EndSequenser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetTalkVolume
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_SetTalkVolume(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetTalkVolume");

	ABP_SoundManager_C_SetTalkVolume_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.BindFade
// (Net, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::BindFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.BindFade");

	ABP_SoundManager_C_BindFade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ChangePlayer
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_ChangePlayer(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ChangePlayer");

	ABP_SoundManager_C_ChangePlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.FinishFadeOut
// (Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::FinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.FinishFadeOut");

	ABP_SoundManager_C_FinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.BeginPause
// (Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::BeginPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.BeginPause");

	ABP_SoundManager_C_BeginPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.EndPause
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_SoundManager_C::EndPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.EndPause");

	ABP_SoundManager_C_EndPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.SetEnableFadePause
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, DLLImport, BlueprintPure)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::STATIC_SetEnableFadePause(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.SetEnableFadePause");

	ABP_SoundManager_C_SetEnableFadePause_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundManager.BP_SoundManager_C.ExecuteUbergraph_BP_SoundManager
// (Net, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundManager_C::ExecuteUbergraph_BP_SoundManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundManager.BP_SoundManager_C.ExecuteUbergraph_BP_SoundManager");

	ABP_SoundManager_C_ExecuteUbergraph_BP_SoundManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
