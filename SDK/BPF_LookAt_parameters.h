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

// Function BPF_LookAt.BPF_LookAt_C.TryGetLookAtFSMComponent
struct UBPF_LookAt_C_TryGetLookAtFSMComponent_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPC_LookAtFSM_C*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPF_LookAt.BPF_LookAt_C.IsWithinASpecifiedAngle180
struct UBPF_LookAt_C_IsWithinASpecifiedAngle180_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWithin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LookAtRotation;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              TargetAngle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LookAt.BPF_LookAt_C.LookAtSetup_Initialize
struct UBPF_LookAt_C_LookAtSetup_Initialize_Params
{
	class UBPC_LookAt_C*                               LookAt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_LookAt.BPF_LookAt_C.LookAtSetup_ParamaterDefault
struct UBPF_LookAt_C_LookAtSetup_ParamaterDefault_Params
{
	class UBPC_LookAt_C*                               LookAt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
