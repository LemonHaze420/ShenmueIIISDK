
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

// Function BPC_SplineMovement.BPC_SplineMovement_C.UpdateSpline
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bArrived                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::UpdateSpline(float Delta, bool* bArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.UpdateSpline");

	UBPC_SplineMovement_C_UpdateSpline_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bArrived != nullptr)
		*bArrived = params.bArrived;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.GetSplineCurrentLocationAndRotation
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void UBPC_SplineMovement_C::GetSplineCurrentLocationAndRotation(float Length, bool Loop, struct FVector* Location, struct FVector* Direction, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.GetSplineCurrentLocationAndRotation");

	UBPC_SplineMovement_C_GetSplineCurrentLocationAndRotation_Params params;
	params.Length = Length;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.ForceMoveSpline
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_SplineMovement_C::STATIC_ForceMoveSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.ForceMoveSpline");

	UBPC_SplineMovement_C_ForceMoveSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.SetSpline
// (Net, NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// class USplineComponent*        RefSpline                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartForceMove                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::SetSpline(class USplineComponent* RefSpline, float Speed, bool StartForceMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.SetSpline");

	UBPC_SplineMovement_C_SetSpline_Params params;
	params.RefSpline = RefSpline;
	params.Speed = Speed;
	params.StartForceMove = StartForceMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.PauseSpline
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           IsPause                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::PauseSpline(bool IsPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.PauseSpline");

	UBPC_SplineMovement_C_PauseSpline_Params params;
	params.IsPause = IsPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.SplineMovingProcess
// (NetRequest, Exec, Native, NetResponse, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::SplineMovingProcess(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.SplineMovingProcess");

	UBPC_SplineMovement_C_SplineMovingProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.AddSplineMoveDistance
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          AddDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::AddSplineMoveDistance(float AddDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.AddSplineMoveDistance");

	UBPC_SplineMovement_C_AddSplineMoveDistance_Params params;
	params.AddDistance = AddDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.SetSplineMoveDistance
// (Net, Native, Event, Static, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::STATIC_SetSplineMoveDistance(float NewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.SetSplineMoveDistance");

	UBPC_SplineMovement_C_SetSplineMoveDistance_Params params;
	params.NewDistance = NewDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.GetSplineLength
// (Net, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::GetSplineLength(float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.GetSplineLength");

	UBPC_SplineMovement_C_GetSplineLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.IsArrivedSpline
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsArrived                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::STATIC_IsArrivedSpline(bool* IsArrived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.IsArrivedSpline");

	UBPC_SplineMovement_C_IsArrivedSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsArrived != nullptr)
		*IsArrived = params.IsArrived;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.ReceiveTick
// (Event, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.ReceiveTick");

	UBPC_SplineMovement_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.ExecuteUbergraph_BPC_SplineMovement
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SplineMovement_C::ExecuteUbergraph_BPC_SplineMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.ExecuteUbergraph_BPC_SplineMovement");

	UBPC_SplineMovement_C_ExecuteUbergraph_BPC_SplineMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SplineMovement.BPC_SplineMovement_C.ArrivedEvent__DelegateSignature
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable)

void UBPC_SplineMovement_C::STATIC_ArrivedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SplineMovement.BPC_SplineMovement_C.ArrivedEvent__DelegateSignature");

	UBPC_SplineMovement_C_ArrivedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
