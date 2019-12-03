
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

// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetVolume
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::GetVolume(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetVolume");

	ABP_S3BgmPlayer_C_GetVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSystemVolume
// (Net, Native, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetSystemVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSystemVolume");

	ABP_S3BgmPlayer_C_SetSystemVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetStartTime
// (Net, NetReliable, NetRequest, Exec, MulticastDelegate, Public, Private, BlueprintCallable)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetStartTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetStartTime");

	ABP_S3BgmPlayer_C_SetStartTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Restart
// (Net, NetReliable, NetResponse, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Restart");

	ABP_S3BgmPlayer_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetSound
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)
// Parameters:
// class USoundAtomCue*           AtomCue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::GetSound(class USoundAtomCue** AtomCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetSound");

	ABP_S3BgmPlayer_C_GetSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AtomCue != nullptr)
		*AtomCue = params.AtomCue;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetCueName
// (Net, Exec, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void ABP_S3BgmPlayer_C::GetCueName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetCueName");

	ABP_S3BgmPlayer_C_GetCueName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetPitch
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::STATIC_SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetPitch");

	ABP_S3BgmPlayer_C_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.StopOnly
// (Net, NetReliable, NetRequest, Public, Private, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::StopOnly(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.StopOnly");

	ABP_S3BgmPlayer_C_StopOnly_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Pause
// (Exec, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)

void ABP_S3BgmPlayer_C::STATIC_Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Pause");

	ABP_S3BgmPlayer_C_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Stop
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::STATIC_Stop(bool Reset, bool* Destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Stop");

	ABP_S3BgmPlayer_C_Stop_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroy != nullptr)
		*Destroy = params.Destroy;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.PlayFromStart
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)

void ABP_S3BgmPlayer_C::STATIC_PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.PlayFromStart");

	ABP_S3BgmPlayer_C_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Destroy
// (NetRequest, Exec, Event, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Destroy");

	ABP_S3BgmPlayer_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsValidCue
// (NetResponse, NetMulticast, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::IsValidCue(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsValidCue");

	ABP_S3BgmPlayer_C_IsValidCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsPlaying
// (Net, NetReliable, Native, Public, Private, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::IsPlaying(bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsPlaying");

	ABP_S3BgmPlayer_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Play
// (Net, NetRequest, Native, Event, NetMulticast, Public, NetServer, HasDefaults, DLLImport, BlueprintEvent)

void ABP_S3BgmPlayer_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Play");

	ABP_S3BgmPlayer_C_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetVolume
// (Exec, Native, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetVolume");

	ABP_S3BgmPlayer_C_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSound
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Protected, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::STATIC_SetSound(class USoundAtomCue* Sound, bool* succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSound");

	ABP_S3BgmPlayer_C_SetSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succes != nullptr)
		*succes = params.succes;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.UserConstructionScript
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport)

void ABP_S3BgmPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.UserConstructionScript");

	ABP_S3BgmPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveBeginPlay
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, BlueprintCallable)

void ABP_S3BgmPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveBeginPlay");

	ABP_S3BgmPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveTick
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveTick");

	ABP_S3BgmPlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ExecuteUbergraph_BP_S3BgmPlayer
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::STATIC_ExecuteUbergraph_BP_S3BgmPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ExecuteUbergraph_BP_S3BgmPlayer");

	ABP_S3BgmPlayer_C_ExecuteUbergraph_BP_S3BgmPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
