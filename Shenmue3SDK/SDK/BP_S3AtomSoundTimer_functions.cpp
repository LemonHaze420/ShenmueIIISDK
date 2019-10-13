
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.IsDisable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundTimer_C::IsDisable(bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.IsDisable");

	ABP_S3AtomSoundTimer_C_IsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetSelectorLabel
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::SetSelectorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetSelectorLabel");

	ABP_S3AtomSoundTimer_C_SetSelectorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StopForbid
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::StopForbid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StopForbid");

	ABP_S3AtomSoundTimer_C_StopForbid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetSystemVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundTimer_C::SetSystemVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetSystemVolume");

	ABP_S3AtomSoundTimer_C_SetSystemVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.PermitPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::PermitPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.PermitPlay");

	ABP_S3AtomSoundTimer_C_PermitPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StartPlay
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::StartPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StartPlay");

	ABP_S3AtomSoundTimer_C_StartPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetParam
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS3SoundTimerParam      newParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AtomSoundTimer_C::SetParam(const struct FS3SoundTimerParam& newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.SetParam");

	ABP_S3AtomSoundTimer_C_SetParam_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.UpdateInterval
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::UpdateInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.UpdateInterval");

	ABP_S3AtomSoundTimer_C_UpdateInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.Initialize");

	ABP_S3AtomSoundTimer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StopSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.StopSound");

	ABP_S3AtomSoundTimer_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.PlaySound");

	ABP_S3AtomSoundTimer_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.CheckInterval
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::CheckInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.CheckInterval");

	ABP_S3AtomSoundTimer_C_CheckInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.CheckStartTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::CheckStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.CheckStartTime");

	ABP_S3AtomSoundTimer_C_CheckStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.UserConstructionScript");

	ABP_S3AtomSoundTimer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3AtomSoundTimer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveBeginPlay");

	ABP_S3AtomSoundTimer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundTimer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveTick");

	ABP_S3AtomSoundTimer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundTimer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ReceiveEndPlay");

	ABP_S3AtomSoundTimer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature
// (BlueprintEvent)

void ABP_S3AtomSoundTimer_C::BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundTimer_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature
// (BlueprintEvent)

void ABP_S3AtomSoundTimer_C::BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundTimer_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ExecuteUbergraph_BP_S3AtomSoundTimer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundTimer_C::ExecuteUbergraph_BP_S3AtomSoundTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundTimer.BP_S3AtomSoundTimer_C.ExecuteUbergraph_BP_S3AtomSoundTimer");

	ABP_S3AtomSoundTimer_C_ExecuteUbergraph_BP_S3AtomSoundTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
