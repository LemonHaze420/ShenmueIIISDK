#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_LookAt.BPC_LookAt_C.GetRandomAnimEyesTarget
struct UBPC_LookAt_C_GetRandomAnimEyesTarget_Params
{
	float                                              Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.UpdateAnimEyeRotation
struct UBPC_LookAt_C_UpdateAnimEyeRotation_Params
{
};

// Function BPC_LookAt.BPC_LookAt_C.IsDebugLog
struct UBPC_LookAt_C_IsDebugLog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.IsWasRecentlyRenderedOwner
struct UBPC_LookAt_C_IsWasRecentlyRenderedOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.IsProcessingLookAt
struct UBPC_LookAt_C_IsProcessingLookAt_Params
{
	bool                                               IsProcessing;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.GetLookAtEyesLocation
struct UBPC_LookAt_C_GetLookAtEyesLocation_Params
{
	struct FVector                                     R;                                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     L;                                                        // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.GetTargetLocation
struct UBPC_LookAt_C_GetTargetLocation_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.Update
struct UBPC_LookAt_C_Update_Params
{
};

// Function BPC_LookAt.BPC_LookAt_C.GetTarget
struct UBPC_LookAt_C_GetTarget_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.SetTarget
struct UBPC_LookAt_C_SetTarget_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_LookAt.BPC_LookAt_C.ReceiveBeginPlay
struct UBPC_LookAt_C_ReceiveBeginPlay_Params
{
};

// Function BPC_LookAt.BPC_LookAt_C.Init
struct UBPC_LookAt_C_Init_Params
{
};

// Function BPC_LookAt.BPC_LookAt_C.ExecuteUbergraph_BPC_LookAt
struct UBPC_LookAt_C_ExecuteUbergraph_BPC_LookAt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
