
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

// Function BPC_FollowFSM.BPC_FollowFSM_C.TryClearPathFailure
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::STATIC_TryClearPathFailure(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.TryClearPathFailure");

	UBPC_FollowFSM_C_TryClearPathFailure_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.FailedPath
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, NetServer, HasOutParms, Const)

void UBPC_FollowFSM_C::STATIC_FailedPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.FailedPath");

	UBPC_FollowFSM_C_FailedPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.GetPathFollowingComponent
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3PathFollowingComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3PathFollowingComponent* UBPC_FollowFSM_C::STATIC_GetPathFollowingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.GetPathFollowingComponent");

	UBPC_FollowFSM_C_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.EnablePathMassaging
// (Net, Native, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::EnablePathMassaging(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.EnablePathMassaging");

	UBPC_FollowFSM_C_EnablePathMassaging_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.IsFollowEnabled
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABP_NPC_Lead_C*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_NPC_Lead_C* UBPC_FollowFSM_C::STATIC_GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.GetPawn");

	UBPC_FollowFSM_C_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.Reset
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPC_FollowFSM_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.Reset");

	UBPC_FollowFSM_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.UpdateLeaderData
// (NetRequest, Exec, Native, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, Const)

void UBPC_FollowFSM_C::UpdateLeaderData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.UpdateLeaderData");

	UBPC_FollowFSM_C_UpdateLeaderData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.UpdatePOIData
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)

void UBPC_FollowFSM_C::UpdatePOIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.UpdatePOIData");

	UBPC_FollowFSM_C_UpdatePOIData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.Update
// (Native, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.Update");

	UBPC_FollowFSM_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_FollowFSM_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.ReceiveBeginPlay");

	UBPC_FollowFSM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_FollowFSM.BPC_FollowFSM_C.ExecuteUbergraph_BPC_FollowFSM
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_FollowFSM_C::STATIC_ExecuteUbergraph_BPC_FollowFSM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_FollowFSM.BPC_FollowFSM_C.ExecuteUbergraph_BPC_FollowFSM");

	UBPC_FollowFSM_C_ExecuteUbergraph_BPC_FollowFSM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
