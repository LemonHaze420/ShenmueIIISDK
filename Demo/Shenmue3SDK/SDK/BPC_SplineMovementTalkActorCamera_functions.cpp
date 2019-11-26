
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

// Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.SplineMovingProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovementTalkActorCamera_C::SplineMovingProcess(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.SplineMovingProcess");

	UBPC_SplineMovementTalkActorCamera_C_SplineMovingProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_SplineMovementTalkActorCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.ReceiveBeginPlay");

	UBPC_SplineMovementTalkActorCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.ForceMoveSpline
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_SplineMovementTalkActorCamera_C::ForceMoveSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.ForceMoveSpline");

	UBPC_SplineMovementTalkActorCamera_C_ForceMoveSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.ExecuteUbergraph_BPC_SplineMovementTalkActorCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovementTalkActorCamera_C::ExecuteUbergraph_BPC_SplineMovementTalkActorCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovementTalkActorCamera.BPC_SplineMovementTalkActorCamera_C.ExecuteUbergraph_BPC_SplineMovementTalkActorCamera");

	UBPC_SplineMovementTalkActorCamera_C_ExecuteUbergraph_BPC_SplineMovementTalkActorCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
