
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

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.GetPathfindTarget
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// class AActor*                  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_FollowLeader_C::STATIC_GetPathfindTarget(struct FVector* OutLocation, class AActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.GetPathfindTarget");

	UBP_State_Follow_FollowLeader_C_GetPathfindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutActor != nullptr)
		*OutActor = params.OutActor;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.MoveStateEnter
// (NetReliable, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_FollowLeader_C::STATIC_MoveStateEnter(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.MoveStateEnter");

	UBP_State_Follow_FollowLeader_C_MoveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.StateEnter
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, NetClient)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_FollowLeader_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.StateEnter");

	UBP_State_Follow_FollowLeader_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.StateUpdate
// (Net, NetReliable, Native, Event, Static, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_FollowLeader_C::STATIC_StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.StateUpdate");

	UBP_State_Follow_FollowLeader_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.UpdateTransitions
// (Net, NetReliable, Exec, Native, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_FollowLeader_C::UpdateTransitions(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.UpdateTransitions");

	UBP_State_Follow_FollowLeader_C_UpdateTransitions_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.CancelPath
// (Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_State_Follow_FollowLeader_C::STATIC_CancelPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.CancelPath");

	UBP_State_Follow_FollowLeader_C_CancelPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.FinishPath
// (Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_State_Follow_FollowLeader_C::STATIC_FinishPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.FinishPath");

	UBP_State_Follow_FollowLeader_C_FinishPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.ExecuteUbergraph_BP_State_Follow_FollowLeader
// (NetReliable, NetResponse, Static, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_FollowLeader_C::STATIC_ExecuteUbergraph_BP_State_Follow_FollowLeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.ExecuteUbergraph_BP_State_Follow_FollowLeader");

	UBP_State_Follow_FollowLeader_C_ExecuteUbergraph_BP_State_Follow_FollowLeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
