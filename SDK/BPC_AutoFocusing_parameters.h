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

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.GetDotedDistance
struct UBPC_AutoFocusing_C_GetDotedDistance_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UbpS3CameraComp_C*                           Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.CullActors
struct UBPC_AutoFocusing_C_CullActors_Params
{
	TArray<class AActor*>                              ActorList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UbpS3CameraComp_C*                           Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              CulledActors;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.GetNearestAndFarthestActor
struct UBPC_AutoFocusing_C_GetNearestAndFarthestActor_Params
{
	TArray<class AActor*>                              ActorList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UbpS3CameraComp_C*                           Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      NearestActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FarthestActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.ReceiveBeginPlay
struct UBPC_AutoFocusing_C_ReceiveBeginPlay_Params
{
};

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.ChangeTarget
struct UBPC_AutoFocusing_C_ChangeTarget_Params
{
	TArray<class AActor*>                              NewTarget;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              lerpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.Update
struct UBPC_AutoFocusing_C_Update_Params
{
};

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.ExecuteUbergraph_BPC_AutoFocusing
struct UBPC_AutoFocusing_C_ExecuteUbergraph_BPC_AutoFocusing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
