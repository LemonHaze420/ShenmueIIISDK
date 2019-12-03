
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

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetSpeedInstant
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::SetSpeedInstant(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetSpeedInstant");

	UBPC_NPCLeadAccelerator_C_SetSpeedInstant_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.GetTargetSpeed
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          TargetSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::STATIC_GetTargetSpeed(float* TargetSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.GetTargetSpeed");

	UBPC_NPCLeadAccelerator_C_GetTargetSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetSpeed != nullptr)
		*TargetSpeed = params.TargetSpeed;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ClampSpeed
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_NPCLeadAccelerator_C::STATIC_ClampSpeed(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ClampSpeed");

	UBPC_NPCLeadAccelerator_C_ClampSpeed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.MapToSpeedRange
// (NetReliable, NetRequest, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeA                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeB                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_NPCLeadAccelerator_C::STATIC_MapToSpeedRange(float Value, float InRangeA, float InRangeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.MapToSpeedRange");

	UBPC_NPCLeadAccelerator_C_MapToSpeedRange_Params params;
	params.Value = Value;
	params.InRangeA = InRangeA;
	params.InRangeB = InRangeB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetTargetSpeed
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          TargetSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::STATIC_SetTargetSpeed(float TargetSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetTargetSpeed");

	UBPC_NPCLeadAccelerator_C_SetTargetSpeed_Params params;
	params.TargetSpeed = TargetSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveTick
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveTick");

	UBPC_NPCLeadAccelerator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveBeginPlay
// (Net, NetRequest, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_NPCLeadAccelerator_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveBeginPlay");

	UBPC_NPCLeadAccelerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.Reset
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_NPCLeadAccelerator_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.Reset");

	UBPC_NPCLeadAccelerator_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ExecuteUbergraph_BPC_NPCLeadAccelerator
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::ExecuteUbergraph_BPC_NPCLeadAccelerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ExecuteUbergraph_BPC_NPCLeadAccelerator");

	UBPC_NPCLeadAccelerator_C_ExecuteUbergraph_BPC_NPCLeadAccelerator_Params params;
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
