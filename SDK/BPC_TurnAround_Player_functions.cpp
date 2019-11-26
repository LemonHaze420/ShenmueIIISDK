
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

// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TryPreTalkJump
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TurnAround_Player_C::TryPreTalkJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TryPreTalkJump");

	UBPC_TurnAround_Player_C_TryPreTalkJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.GetTalkedMinigame
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPC_TurnAround_Player_C::GetTalkedMinigame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.GetTalkedMinigame");

	UBPC_TurnAround_Player_C_GetTalkedMinigame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.CanTurnAround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_Player_C::CanTurnAround(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.CanTurnAround");

	UBPC_TurnAround_Player_C_CanTurnAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReturnPreTalkRotationActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_Player_C::ReturnPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReturnPreTalkRotationActor");

	UBPC_TurnAround_Player_C_ReturnPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_TurnAround_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReceiveBeginPlay");

	UBPC_TurnAround_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ForceFinishTurnAround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUpdateRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_Player_C::ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ForceFinishTurnAround");

	UBPC_TurnAround_Player_C_ForceFinishTurnAround_Params params;
	params.bUpdateRotation = bUpdateRotation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TurnAroundTickFinish
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_Player_C::TurnAroundTickFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TurnAroundTickFinish");

	UBPC_TurnAround_Player_C_TurnAroundTickFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ExecuteUbergraph_BPC_TurnAround_Player
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_Player_C::ExecuteUbergraph_BPC_TurnAround_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ExecuteUbergraph_BPC_TurnAround_Player");

	UBPC_TurnAround_Player_C_ExecuteUbergraph_BPC_TurnAround_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
