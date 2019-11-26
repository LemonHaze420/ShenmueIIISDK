
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

// Function BPC_LookAt.BPC_LookAt_C.GetRandomAnimEyesTarget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAt_C::GetRandomAnimEyesTarget(float* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.GetRandomAnimEyesTarget");

	UBPC_LookAt_C_GetRandomAnimEyesTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BPC_LookAt.BPC_LookAt_C.UpdateAnimEyeRotation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_LookAt_C::UpdateAnimEyeRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.UpdateAnimEyeRotation");

	UBPC_LookAt_C_UpdateAnimEyeRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAt.BPC_LookAt_C.IsDebugLog
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_LookAt_C::IsDebugLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.IsDebugLog");

	UBPC_LookAt_C_IsDebugLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_LookAt.BPC_LookAt_C.IsWasRecentlyRenderedOwner
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_LookAt_C::IsWasRecentlyRenderedOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.IsWasRecentlyRenderedOwner");

	UBPC_LookAt_C_IsWasRecentlyRenderedOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_LookAt.BPC_LookAt_C.IsProcessingLookAt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsProcessing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAt_C::IsProcessingLookAt(bool* IsProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.IsProcessingLookAt");

	UBPC_LookAt_C_IsProcessingLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsProcessing != nullptr)
		*IsProcessing = params.IsProcessing;
}


// Function BPC_LookAt.BPC_LookAt_C.GetLookAtEyesLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 R                              (Parm, OutParm, IsPlainOldData)
// struct FVector                 L                              (Parm, OutParm, IsPlainOldData)

void UBPC_LookAt_C::GetLookAtEyesLocation(struct FVector* R, struct FVector* L)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.GetLookAtEyesLocation");

	UBPC_LookAt_C_GetLookAtEyesLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (R != nullptr)
		*R = params.R;
	if (L != nullptr)
		*L = params.L;
}


// Function BPC_LookAt.BPC_LookAt_C.GetTargetLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void UBPC_LookAt_C::GetTargetLocation(bool* bSuccess, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.GetTargetLocation");

	UBPC_LookAt_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function BPC_LookAt.BPC_LookAt_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_LookAt_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.Update");

	UBPC_LookAt_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAt.BPC_LookAt_C.GetTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAt_C::GetTarget(class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.GetTarget");

	UBPC_LookAt_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;
}


// Function BPC_LookAt.BPC_LookAt_C.SetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAt_C::SetTarget(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.SetTarget");

	UBPC_LookAt_C_SetTarget_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAt.BPC_LookAt_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_LookAt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.ReceiveBeginPlay");

	UBPC_LookAt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAt.BPC_LookAt_C.Init
// (BlueprintCallable, BlueprintEvent)

void UBPC_LookAt_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.Init");

	UBPC_LookAt_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAt.BPC_LookAt_C.ExecuteUbergraph_BPC_LookAt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAt_C::ExecuteUbergraph_BPC_LookAt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAt.BPC_LookAt_C.ExecuteUbergraph_BPC_LookAt");

	UBPC_LookAt_C_ExecuteUbergraph_BPC_LookAt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
