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

// Function BPC_AutoFraming.BPC_AutoFraming_C.SetLookRotation
struct UBPC_AutoFraming_C_SetLookRotation_Params
{
	struct FRotator                                    StartRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_AutoFraming.BPC_AutoFraming_C.SetTargetSocket
struct UBPC_AutoFraming_C_SetTargetSocket_Params
{
	struct FName                                       Socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PanSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AutoFraming.BPC_AutoFraming_C.SetTargetActor
struct UBPC_AutoFraming_C_SetTargetActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PanTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AutoFraming.BPC_AutoFraming_C.ReceiveBeginPlay
struct UBPC_AutoFraming_C_ReceiveBeginPlay_Params
{
};

// Function BPC_AutoFraming.BPC_AutoFraming_C.Update
struct UBPC_AutoFraming_C_Update_Params
{
};

// Function BPC_AutoFraming.BPC_AutoFraming_C.ExecuteUbergraph_BPC_AutoFraming
struct UBPC_AutoFraming_C_ExecuteUbergraph_BPC_AutoFraming_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
