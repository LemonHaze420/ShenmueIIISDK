
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

// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsValidTalkTargetNPC
// (Net, NetReliable, NetRequest, Exec, Event, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3Character*            NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_PlayerObstacleSensor_C::IsValidTalkTargetNPC(class AS3Character* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsValidTalkTargetNPC");

	UBPC_PlayerObstacleSensor_C_IsValidTalkTargetNPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.GetCurrentFloor
// (Net, NetRequest, Native, Event, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::GetCurrentFloor(class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.GetCurrentFloor");

	UBPC_PlayerObstacleSensor_C_GetCurrentFloor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdateSurroundTraces
// (NetReliable, NetRequest, Event, Static, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_PlayerObstacleSensor_C::STATIC_UpdateSurroundTraces()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdateSurroundTraces");

	UBPC_PlayerObstacleSensor_C_UpdateSurroundTraces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsValidObstacle
// (Net, NetRequest, Exec, Native, Event, NetResponse, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_PlayerObstacleSensor_C::IsValidObstacle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsValidObstacle");

	UBPC_PlayerObstacleSensor_C_IsValidObstacle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsNPCObstacle
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_PlayerObstacleSensor_C::STATIC_IsNPCObstacle(class UObject* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.IsNPCObstacle");

	UBPC_PlayerObstacleSensor_C_IsNPCObstacle_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ClassifyObstacle
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_PC_ObstacleType> ObstacleType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::STATIC_ClassifyObstacle(TEnumAsByte<EN_PC_ObstacleType>* ObstacleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ClassifyObstacle");

	UBPC_PlayerObstacleSensor_C_ClassifyObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObstacleType != nullptr)
		*ObstacleType = params.ObstacleType;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.SenseNPCs
// (NetReliable, NetRequest, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_PlayerObstacleSensor_C::STATIC_SenseNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.SenseNPCs");

	UBPC_PlayerObstacleSensor_C_SenseNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.CapsuleTrace
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, IsPlainOldData)
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::CapsuleTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, struct FHitResult* Hit, bool* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.CapsuleTrace");

	UBPC_PlayerObstacleSensor_C_CapsuleTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdateAI
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::UpdateAI(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdateAI");

	UBPC_PlayerObstacleSensor_C_UpdateAI_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdatePlayerState
// (Net, NetReliable, Event, MulticastDelegate, Private, Protected, Delegate)
// Parameters:
// class AS3Character*            InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InInputDirectionWS             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::UpdatePlayerState(class AS3Character* InCharacter, const struct FVector& InInputDirectionWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.UpdatePlayerState");

	UBPC_PlayerObstacleSensor_C_UpdatePlayerState_Params params;
	params.InCharacter = InCharacter;
	params.InInputDirectionWS = InInputDirectionWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.Sense
// (MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::Sense(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.Sense");

	UBPC_PlayerObstacleSensor_C_Sense_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Event, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_PlayerObstacleSensor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ReceiveBeginPlay");

	UBPC_PlayerObstacleSensor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ExecuteUbergraph_BPC_PlayerObstacleSensor
// (Net, NetReliable, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PlayerObstacleSensor_C::ExecuteUbergraph_BPC_PlayerObstacleSensor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PlayerObstacleSensor.BPC_PlayerObstacleSensor_C.ExecuteUbergraph_BPC_PlayerObstacleSensor");

	UBPC_PlayerObstacleSensor_C_ExecuteUbergraph_BPC_PlayerObstacleSensor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
