
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

// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.CachePawnData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::CachePawnData(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.CachePawnData");

	UBPC_PlayerTargetSwitcher_C_CachePawnData_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.DoPlayerRequestedSwitch
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::DoPlayerRequestedSwitch(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.DoPlayerRequestedSwitch");

	UBPC_PlayerTargetSwitcher_C_DoPlayerRequestedSwitch_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.UpdateDetectAction
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_PlayerTargetSwitcher_C::UpdateDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.UpdateDetectAction");

	UBPC_PlayerTargetSwitcher_C_UpdateDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_PlayerTargetSwitcher_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Reset");

	UBPC_PlayerTargetSwitcher_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.FaceDirection
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::FaceDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.FaceDirection");

	UBPC_PlayerTargetSwitcher_C_FaceDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.IsNPCTalkative
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_PlayerTargetSwitcher_C::IsNPCTalkative(class AActor* Target)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::RequestManualDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestManualDirection");

	UBPC_PlayerTargetSwitcher_C_RequestManualDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.GetTargetCandidates
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_PlayerTargetSwitcher_C::RequestSwitchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.RequestSwitchTarget");

	UBPC_PlayerTargetSwitcher_C_RequestSwitchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::Update(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.Update");

	UBPC_PlayerTargetSwitcher_C_Update_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.OnFaceDirection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerTargetSwitcher_C::OnFaceDirection__DelegateSignature(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerTargetSwitcher.BPC_PlayerTargetSwitcher_C.OnFaceDirection__DelegateSignature");

	UBPC_PlayerTargetSwitcher_C_OnFaceDirection__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
