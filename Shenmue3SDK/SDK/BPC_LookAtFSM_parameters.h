#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetIdealLookAtTargetLocation
struct UBPC_LookAtFSM_C_GetIdealLookAtTargetLocation_Params
{
	struct FVector                                     OutTargetLocation;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.TryCacheTargetLocation
struct UBPC_LookAtFSM_C_TryCacheTargetLocation_Params
{
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Output;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.GetLookAtTargetLocation
struct UBPC_LookAtFSM_C_GetLookAtTargetLocation_Params
{
	struct FVector                                     OutTargetLocation;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.ReceiveTick
struct UBPC_LookAtFSM_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.Init
struct UBPC_LookAtFSM_C_Init_Params
{
	class US3FaceAnimDataAsset*                        FaceAnimData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_LookAtFSM.BPC_LookAtFSM_C.ExecuteUbergraph_BPC_LookAtFSM
struct UBPC_LookAtFSM_C_ExecuteUbergraph_BPC_LookAtFSM_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
