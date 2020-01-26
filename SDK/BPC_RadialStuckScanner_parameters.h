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

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TryDisableTick
struct UBPC_RadialStuckScanner_C_TryDisableTick_Params
{
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.IgnoreCollision
struct UBPC_RadialStuckScanner_C_IgnoreCollision_Params
{
	class AS3Character*                                Char;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ignore;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestBlockedByNPC
struct UBPC_RadialStuckScanner_C_TestBlockedByNPC_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        AddNPCS;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestAngleBlocked
struct UBPC_RadialStuckScanner_C_TestAngleBlocked_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        AddNPCS;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestNavmeshDistance
struct UBPC_RadialStuckScanner_C_TestNavmeshDistance_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceSqr;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ReceiveBeginPlay
struct UBPC_RadialStuckScanner_C_ReceiveBeginPlay_Params
{
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ReceiveTick
struct UBPC_RadialStuckScanner_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StartScan
struct UBPC_RadialStuckScanner_C_StartScan_Params
{
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StartScanning
struct UBPC_RadialStuckScanner_C_StartScanning_Params
{
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StopScanning
struct UBPC_RadialStuckScanner_C_StopScanning_Params
{
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.OnCompletedPositionCollectionWindow
struct UBPC_RadialStuckScanner_C_OnCompletedPositionCollectionWindow_Params
{
};

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ExecuteUbergraph_BPC_RadialStuckScanner
struct UBPC_RadialStuckScanner_C_ExecuteUbergraph_BPC_RadialStuckScanner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
