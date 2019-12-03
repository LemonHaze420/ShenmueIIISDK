
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

// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.SetEnableBodyLookAt
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::STATIC_SetEnableBodyLookAt(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.SetEnableBodyLookAt");

	UBPC_TurnAround_NPCLead_C_SetEnableBodyLookAt_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.CanTurnAround
// (Net, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::STATIC_CanTurnAround(bool* bCan)
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
// (Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bPlaying                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::STATIC_IsPlayingSitAnimation(bool* bPlaying)
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
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::OnLoaded_F7D60CF146905F4918060D8140E96419(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.OnLoaded_F7D60CF146905F4918060D8140E96419");

	UBPC_TurnAround_NPCLead_C_OnLoaded_F7D60CF146905F4918060D8140E96419_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReturnPreTalkRotationActor
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetServer)

void UBPC_TurnAround_NPCLead_C::STATIC_ReturnPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReturnPreTalkRotationActor");

	UBPC_TurnAround_NPCLead_C_ReturnPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ForceFinishTurnAround
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           bUpdateRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::STATIC_ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ForceFinishTurnAround");

	UBPC_TurnAround_NPCLead_C_ForceFinishTurnAround_Params params;
	params.bUpdateRotation = bUpdateRotation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TrySitMotation
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetServer)

void UBPC_TurnAround_NPCLead_C::STATIC_TrySitMotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TrySitMotation");

	UBPC_TurnAround_NPCLead_C_TrySitMotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, NetResponse, Static, NetServer)

void UBPC_TurnAround_NPCLead_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ReceiveBeginPlay");

	UBPC_TurnAround_NPCLead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TurnAroundTickFinish
// (Exec, NetResponse, Static, NetServer)

void UBPC_TurnAround_NPCLead_C::STATIC_TurnAroundTickFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.TurnAroundTickFinish");

	UBPC_TurnAround_NPCLead_C_TurnAroundTickFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_NPCLead.BPC_TurnAround_NPCLead_C.ExecuteUbergraph_BPC_TurnAround_NPCLead
// (NetReliable, NetRequest, Static, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_NPCLead_C::STATIC_ExecuteUbergraph_BPC_TurnAround_NPCLead(int EntryPoint)
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
