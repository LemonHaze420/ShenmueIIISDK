
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

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.ClearOverrideState
// (Net, NetReliable, NetRequest, Event, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void UBPC_LookAtFSM_C::ClearOverrideState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.ClearOverrideState");

	UBPC_LookAtFSM_C_ClearOverrideState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.SetOverrideState
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::SetOverrideState(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.SetOverrideState");

	UBPC_LookAtFSM_C_SetOverrideState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetIdealLookAtTargetLocation
// (Native, NetResponse, Static, Protected, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 OutTargetLocation              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_LookAtFSM_C::STATIC_GetIdealLookAtTargetLocation(struct FVector* OutTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetIdealLookAtTargetLocation");

	UBPC_LookAtFSM_C_GetIdealLookAtTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetLocation != nullptr)
		*OutTargetLocation = params.OutTargetLocation;

	return params.ReturnValue;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.TryCacheTargetLocation
// (Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Output                         (Parm, OutParm, IsPlainOldData)

void UBPC_LookAtFSM_C::STATIC_TryCacheTargetLocation(const struct FVector& Target, struct FVector* Output)
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
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutTargetLocation              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_LookAtFSM_C::STATIC_GetLookAtTargetLocation(struct FVector* OutTargetLocation)
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
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.ReceiveTick");

	UBPC_LookAtFSM_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.Init
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class US3FaceAnimDataAsset*    FaceAnimData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::STATIC_Init(class US3FaceAnimDataAsset* FaceAnimData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_LookAtFSM.BPC_LookAtFSM_C.Init");

	UBPC_LookAtFSM_C_Init_Params params;
	params.FaceAnimData = FaceAnimData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_LookAtFSM.BPC_LookAtFSM_C.ExecuteUbergraph_BPC_LookAtFSM
// (Net, NetRequest, Exec, NetResponse, Static, Protected, Delegate, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_LookAtFSM_C::STATIC_ExecuteUbergraph_BPC_LookAtFSM(int EntryPoint)
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
