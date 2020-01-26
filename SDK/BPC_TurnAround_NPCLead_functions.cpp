
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

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.SetEnableBodyLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::SetEnableBodyLookAt(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.SetEnableBodyLookAt");

	UBPC_TurnAround_NPCLead_C_SetEnableBodyLookAt_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.CanTurnAround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::CanTurnAround(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.CanTurnAround");

	UBPC_TurnAround_NPCLead_C_CanTurnAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.IsPlayingSitAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bPlaying                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::IsPlayingSitAnimation(bool* bPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.IsPlayingSitAnimation");

	UBPC_TurnAround_NPCLead_C_IsPlayingSitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlaying != nullptr)
		*bPlaying = params.bPlaying;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.OnLoaded_F7D60CF146905F4918060D8140E96419
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::OnLoaded_F7D60CF146905F4918060D8140E96419(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.OnLoaded_F7D60CF146905F4918060D8140E96419");

	UBPC_TurnAround_NPCLead_C_OnLoaded_F7D60CF146905F4918060D8140E96419_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReturnPreTalkRotationActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_NPCLead_C::ReturnPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReturnPreTalkRotationActor");

	UBPC_TurnAround_NPCLead_C_ReturnPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ForceFinishTurnAround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUpdateRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ForceFinishTurnAround");

	UBPC_TurnAround_NPCLead_C_ForceFinishTurnAround_Params params;
	params.bUpdateRotation = bUpdateRotation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TrySitMotation
// (BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_NPCLead_C::TrySitMotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TrySitMotation");

	UBPC_TurnAround_NPCLead_C_TrySitMotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_TurnAround_NPCLead_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReceiveBeginPlay");

	UBPC_TurnAround_NPCLead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TurnAroundTickFinish
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_NPCLead_C::TurnAroundTickFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TurnAroundTickFinish");

	UBPC_TurnAround_NPCLead_C_TurnAroundTickFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ExecuteUbergraph_BPC_TurnAround_NPCLead
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::ExecuteUbergraph_BPC_TurnAround_NPCLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ExecuteUbergraph_BPC_TurnAround_NPCLead");

	UBPC_TurnAround_NPCLead_C_ExecuteUbergraph_BPC_TurnAround_NPCLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
