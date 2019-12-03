
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

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.CachePawnData
// (NetRequest, Native, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::CachePawnData(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.CachePawnData");

	UBPC_PlayerTargetSwitcher_C_CachePawnData_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.DoPlayerRequestedSwitch
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::STATIC_DoPlayerRequestedSwitch(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.DoPlayerRequestedSwitch");

	UBPC_PlayerTargetSwitcher_C_DoPlayerRequestedSwitch_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.UpdateDetectAction
// (NetReliable, Exec, Native, Event, Protected, NetServer, HasOutParms, NetClient, DLLImport)

void UBPC_PlayerTargetSwitcher_C::UpdateDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.UpdateDetectAction");

	UBPC_PlayerTargetSwitcher_C_UpdateDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Reset
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPC_PlayerTargetSwitcher_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Reset");

	UBPC_PlayerTargetSwitcher_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.FaceDirection
// (NetRequest, Exec, Native, Event, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::FaceDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.FaceDirection");

	UBPC_PlayerTargetSwitcher_C_FaceDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.IsNPCTalkative
// (Net, NetReliable, Event, Static, NetMulticast, MulticastDelegate, Private, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_PlayerTargetSwitcher_C::STATIC_IsNPCTalkative(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.IsNPCTalkative");

	UBPC_PlayerTargetSwitcher_C_IsNPCTalkative_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestManualDirection
// (NetRequest, Exec, Native, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::RequestManualDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestManualDirection");

	UBPC_PlayerTargetSwitcher_C_RequestManualDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.GetTargetCandidates
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetClient, Const)
// Parameters:
// TArray<class AS3Character*>    OutNPCs                        (Parm, OutParm, ZeroConstructor)
// TArray<float>                  OutScores                      (Parm, OutParm, ZeroConstructor)

void UBPC_PlayerTargetSwitcher_C::GetTargetCandidates(TArray<class AS3Character*>* OutNPCs, TArray<float>* OutScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.GetTargetCandidates");

	UBPC_PlayerTargetSwitcher_C_GetTargetCandidates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNPCs != nullptr)
		*OutNPCs = params.OutNPCs;
	if (OutScores != nullptr)
		*OutScores = params.OutScores;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestSwitchTarget
// (NetReliable, Exec, Native, Event, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_PlayerTargetSwitcher_C::RequestSwitchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestSwitchTarget");

	UBPC_PlayerTargetSwitcher_C_RequestSwitchTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Update
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, Const)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::STATIC_Update(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Update");

	UBPC_PlayerTargetSwitcher_C_Update_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.OnFaceDirection__DelegateSignature
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::STATIC_OnFaceDirection__DelegateSignature(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.OnFaceDirection__DelegateSignature");

	UBPC_PlayerTargetSwitcher_C_OnFaceDirection__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
