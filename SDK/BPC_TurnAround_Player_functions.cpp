
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
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, Private, Delegate, NetClient, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPC_TurnAround_Player_C::STATIC_GetTalkedMinigame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.GetTalkedMinigame");

	UBPC_TurnAround_Player_C_GetTalkedMinigame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.CanTurnAround
// (NetRequest, Event, NetResponse, MulticastDelegate, Private, NetServer, Const)
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
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_Player_C::STATIC_ReturnPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReturnPreTalkRotationActor");

	UBPC_TurnAround_Player_C_ReturnPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReceiveBeginPlay
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_Player_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ReceiveBeginPlay");

	UBPC_TurnAround_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ForceFinishTurnAround
// (NetReliable, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TurnAroundTickFinish
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_Player_C::STATIC_TurnAroundTickFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.TurnAroundTickFinish");

	UBPC_TurnAround_Player_C_TurnAroundTickFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_Player.BPC_TurnAround_Player_C.ExecuteUbergraph_BPC_TurnAround_Player
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_Player_C::STATIC_ExecuteUbergraph_BPC_TurnAround_Player(int EntryPoint)
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
