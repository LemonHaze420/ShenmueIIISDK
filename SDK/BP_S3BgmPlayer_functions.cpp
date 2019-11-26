
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::GetVolume(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetVolume");

	ABP_S3BgmPlayer_C_GetVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSystemVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetSystemVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSystemVolume");

	ABP_S3BgmPlayer_C_SetSystemVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetStartTime
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Restart");

	ABP_S3BgmPlayer_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void ABP_S3BgmPlayer_C::GetCueName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.GetCueName");

	ABP_S3BgmPlayer_C_GetCueName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetPitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetPitch");

	ABP_S3BgmPlayer_C_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.StopOnly
// (Private, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Pause");

	ABP_S3BgmPlayer_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Stop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::Stop(bool Reset, bool* Destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Stop");

	ABP_S3BgmPlayer_C_Stop_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroy != nullptr)
		*Destroy = params.Destroy;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.PlayFromStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.PlayFromStart");

	ABP_S3BgmPlayer_C_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Destroy
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Destroy");

	ABP_S3BgmPlayer_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsValidCue
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::IsPlaying(bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.IsPlaying");

	ABP_S3BgmPlayer_C_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Play
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.Play");

	ABP_S3BgmPlayer_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetVolume");

	ABP_S3BgmPlayer_C_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::SetSound(class USoundAtomCue* Sound, bool* succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.SetSound");

	ABP_S3BgmPlayer_C_SetSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succes != nullptr)
		*succes = params.succes;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.UserConstructionScript");

	ABP_S3BgmPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BgmPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveBeginPlay");

	ABP_S3BgmPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ReceiveTick");

	ABP_S3BgmPlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmPlayer.BP_S3BgmPlayer_C.ExecuteUbergraph_BP_S3BgmPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmPlayer_C::ExecuteUbergraph_BP_S3BgmPlayer(int EntryPoint)
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
