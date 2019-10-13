
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

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.FindFallbackLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TalkAvoidanceNPCLead_C::FindFallbackLocation(class ACharacter* Player, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.FindFallbackLocation");

	UBPC_TalkAvoidanceNPCLead_C_FindFallbackLocation_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.MakeRotation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3TalkEventManagerBase* TalkEventManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPC_TalkAvoidanceNPCLead_C::MakeRotation(class AS3TalkEventManagerBase* TalkEventManager, const struct FVector& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.MakeRotation");

	UBPC_TalkAvoidanceNPCLead_C_MakeRotation_Params params;
	params.TalkEventManager = TalkEventManager;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.CanAvoidance
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidanceNPCLead_C::CanAvoidance(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.CanAvoidance");

	UBPC_TalkAvoidanceNPCLead_C_CanAvoidance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.ProcessAvoidable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bProcessed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidanceNPCLead_C::ProcessAvoidable(bool* bProcessed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.ProcessAvoidable");

	UBPC_TalkAvoidanceNPCLead_C_ProcessAvoidable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessed != nullptr)
		*bProcessed = params.bProcessed;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.IsAvoiddableDecide
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExecution                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidanceNPCLead_C::IsAvoiddableDecide(bool* bExecution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.IsAvoiddableDecide");

	UBPC_TalkAvoidanceNPCLead_C_IsAvoiddableDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExecution != nullptr)
		*bExecution = params.bExecution;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.DistanceCheckTargetActors
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                TestActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidanceNPCLead_C::DistanceCheckTargetActors(struct FVector* TestActorLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.DistanceCheckTargetActors");

	UBPC_TalkAvoidanceNPCLead_C_DistanceCheckTargetActors_Params params;
	params.TestActorLocation = TestActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.DelayResumePhysics
// (BlueprintCallable, BlueprintEvent)

void UBPC_TalkAvoidanceNPCLead_C::DelayResumePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.DelayResumePhysics");

	UBPC_TalkAvoidanceNPCLead_C_DelayResumePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.ExecuteUbergraph_BPC_TalkAvoidanceNPCLead
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidanceNPCLead_C::ExecuteUbergraph_BPC_TalkAvoidanceNPCLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.ExecuteUbergraph_BPC_TalkAvoidanceNPCLead");

	UBPC_TalkAvoidanceNPCLead_C_ExecuteUbergraph_BPC_TalkAvoidanceNPCLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
