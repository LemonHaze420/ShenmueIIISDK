#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetSpeedInstant
struct UBPC_NPCLeadAccelerator_C_SetSpeedInstant_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.GetTargetSpeed
struct UBPC_NPCLeadAccelerator_C_GetTargetSpeed_Params
{
	float                                              TargetSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ClampSpeed
struct UBPC_NPCLeadAccelerator_C_ClampSpeed_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.MapToSpeedRange
struct UBPC_NPCLeadAccelerator_C_MapToSpeedRange_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeA;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeB;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.SetTargetSpeed
struct UBPC_NPCLeadAccelerator_C_SetTargetSpeed_Params
{
	float                                              TargetSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveTick
struct UBPC_NPCLeadAccelerator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ReceiveBeginPlay
struct UBPC_NPCLeadAccelerator_C_ReceiveBeginPlay_Params
{
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.Reset
struct UBPC_NPCLeadAccelerator_C_Reset_Params
{
};

// Function BPC_NPCLeadAccelerator.BPC_NPCLeadAccelerator_C.ExecuteUbergraph_BPC_NPCLeadAccelerator
struct UBPC_NPCLeadAccelerator_C_ExecuteUbergraph_BPC_NPCLeadAccelerator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
