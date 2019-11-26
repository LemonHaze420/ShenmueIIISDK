
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

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetSpeedInstant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::SetSpeedInstant(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetSpeedInstant");

	UBPC_NPCLeadAccelerator_C_SetSpeedInstant_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.GetTargetSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TargetSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::GetTargetSpeed(float* TargetSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.GetTargetSpeed");

	UBPC_NPCLeadAccelerator_C_GetTargetSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetSpeed != nullptr)
		*TargetSpeed = params.TargetSpeed;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ClampSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_NPCLeadAccelerator_C::ClampSpeed(float Value)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeA                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeB                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_NPCLeadAccelerator_C::MapToSpeedRange(float Value, float InRangeA, float InRangeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.MapToSpeedRange");

	UBPC_NPCLeadAccelerator_C_MapToSpeedRange_Params params;
	params.Value = Value;
	params.InRangeA = InRangeA;
	params.InRangeB = InRangeB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetTargetSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::SetTargetSpeed(float TargetSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetTargetSpeed");

	UBPC_NPCLeadAccelerator_C_SetTargetSpeed_Params params;
	params.TargetSpeed = TargetSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveTick");

	UBPC_NPCLeadAccelerator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_NPCLeadAccelerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveBeginPlay");

	UBPC_NPCLeadAccelerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UBPC_NPCLeadAccelerator_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.Reset");

	UBPC_NPCLeadAccelerator_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ExecuteUbergraph_BPC_NPCLeadAccelerator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_NPCLeadAccelerator_C::ExecuteUbergraph_BPC_NPCLeadAccelerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ExecuteUbergraph_BPC_NPCLeadAccelerator");

	UBPC_NPCLeadAccelerator_C_ExecuteUbergraph_BPC_NPCLeadAccelerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
