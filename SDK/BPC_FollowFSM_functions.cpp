
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

// Function BPC_FollowFSM.BPC_FollowFSM_C.TryClearPathFailure
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::TryClearPathFailure(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.TryClearPathFailure");

	UBPC_FollowFSM_C_TryClearPathFailure_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.FailedPath
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_FollowFSM_C::FailedPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.FailedPath");

	UBPC_FollowFSM_C_FailedPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.GetPathFollowingComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class US3PathFollowingComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3PathFollowingComponent* UBPC_FollowFSM_C::GetPathFollowingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.GetPathFollowingComponent");

	UBPC_FollowFSM_C_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.EnablePathMassaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::EnablePathMassaging(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.EnablePathMassaging");

	UBPC_FollowFSM_C_EnablePathMassaging_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.IsFollowEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           EnableFollow                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::IsFollowEnabled(bool* EnableFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.IsFollowEnabled");

	UBPC_FollowFSM_C_IsFollowEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnableFollow != nullptr)
		*EnableFollow = params.EnableFollow;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.GetPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_NPC_Lead_C*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_NPC_Lead_C* UBPC_FollowFSM_C::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.GetPawn");

	UBPC_FollowFSM_C_GetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_FollowFSM_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.Reset");

	UBPC_FollowFSM_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.UpdateLeaderData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_FollowFSM_C::UpdateLeaderData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.UpdateLeaderData");

	UBPC_FollowFSM_C_UpdateLeaderData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.UpdatePOIData
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_FollowFSM_C::UpdatePOIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.UpdatePOIData");

	UBPC_FollowFSM_C_UpdatePOIData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.Update");

	UBPC_FollowFSM_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_FollowFSM_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.ReceiveBeginPlay");

	UBPC_FollowFSM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.ExecuteUbergraph_BPC_FollowFSM
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::ExecuteUbergraph_BPC_FollowFSM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.ExecuteUbergraph_BPC_FollowFSM");

	UBPC_FollowFSM_C_ExecuteUbergraph_BPC_FollowFSM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
