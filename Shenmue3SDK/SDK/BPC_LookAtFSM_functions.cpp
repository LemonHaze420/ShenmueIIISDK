
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

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetIdealLookAtTargetLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutTargetLocation              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_LookAtFSM_C::GetIdealLookAtTargetLocation(struct FVector* OutTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetIdealLookAtTargetLocation");

	UBPC_LookAtFSM_C_GetIdealLookAtTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetLocation != nullptr)
		*OutTargetLocation = params.OutTargetLocation;

	return params.ReturnValue;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.TryCacheTargetLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Output                         (Parm, OutParm, IsPlainOldData)

void UBPC_LookAtFSM_C::TryCacheTargetLocation(const struct FVector& Target, struct FVector* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.TryCacheTargetLocation");

	UBPC_LookAtFSM_C_TryCacheTargetLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetLookAtTargetLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutTargetLocation              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_LookAtFSM_C::GetLookAtTargetLocation(struct FVector* OutTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetLookAtTargetLocation");

	UBPC_LookAtFSM_C_GetLookAtTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetLocation != nullptr)
		*OutTargetLocation = params.OutTargetLocation;

	return params.ReturnValue;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.ReceiveTick");

	UBPC_LookAtFSM_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3FaceAnimDataAsset*    FaceAnimData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::Init(class US3FaceAnimDataAsset* FaceAnimData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.Init");

	UBPC_LookAtFSM_C_Init_Params params;
	params.FaceAnimData = FaceAnimData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.ExecuteUbergraph_BPC_LookAtFSM
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::ExecuteUbergraph_BPC_LookAtFSM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.ExecuteUbergraph_BPC_LookAtFSM");

	UBPC_LookAtFSM_C_ExecuteUbergraph_BPC_LookAtFSM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
