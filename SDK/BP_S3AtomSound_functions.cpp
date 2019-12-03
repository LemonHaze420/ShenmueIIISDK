
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

// Function BP_S3AtomSound.BP_S3AtomSound_C.SetLanguageSelector
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, DLLImport, BlueprintEvent)

void ABP_S3AtomSound_C::SetLanguageSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.SetLanguageSelector");

	ABP_S3AtomSound_C_SetLanguageSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.SetSystemVolume
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::SetSystemVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.SetSystemVolume");

	ABP_S3AtomSound_C_SetSystemVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.Stop
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::STATIC_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.Stop");

	ABP_S3AtomSound_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.PlayOrActivate
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::STATIC_PlayOrActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.PlayOrActivate");

	ABP_S3AtomSound_C_PlayOrActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.SetDisableSound
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::STATIC_SetDisableSound(bool Disable, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.SetDisableSound");

	ABP_S3AtomSound_C_SetDisableSound_Params params;
	params.Disable = Disable;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.IsDisable
// (NetReliable, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::IsDisable(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.IsDisable");

	ABP_S3AtomSound_C_IsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.PermitPlay
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::PermitPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.PermitPlay");

	ABP_S3AtomSound_C_PermitPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.SetGameTimeSelector
// (NetRequest, Native, NetResponse, Static, Private, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::STATIC_SetGameTimeSelector(bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.SetGameTimeSelector");

	ABP_S3AtomSound_C_SetGameTimeSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.Replay
// (Net, Event, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::Replay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.Replay");

	ABP_S3AtomSound_C_Replay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.SetWeatherSelector
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           Bind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::SetWeatherSelector(bool Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.SetWeatherSelector");

	ABP_S3AtomSound_C_SetWeatherSelector_Params params;
	params.Bind = Bind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.SetSelectorLabel
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::STATIC_SetSelectorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.SetSelectorLabel");

	ABP_S3AtomSound_C_SetSelectorLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.UserConstructionScript
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.UserConstructionScript");

	ABP_S3AtomSound_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.ChangeWeather
// (Net, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::ChangeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.ChangeWeather");

	ABP_S3AtomSound_C_ChangeWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveTick
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveTick");

	ABP_S3AtomSound_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveBeginPlay
// (Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_S3AtomSound_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveBeginPlay");

	ABP_S3AtomSound_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.ReceiveEndPlay");

	ABP_S3AtomSound_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSound.BP_S3AtomSound_C.ExecuteUbergraph_BP_S3AtomSound
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSound_C::STATIC_ExecuteUbergraph_BP_S3AtomSound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSound.BP_S3AtomSound_C.ExecuteUbergraph_BP_S3AtomSound");

	ABP_S3AtomSound_C_ExecuteUbergraph_BP_S3AtomSound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
