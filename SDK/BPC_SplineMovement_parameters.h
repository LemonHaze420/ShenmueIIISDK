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

// Function BPC_SplineMovement.BPC_SplineMovement_C.UpdateSpline
struct UBPC_SplineMovement_C_UpdateSpline_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bArrived;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.GetSplineCurrentLocationAndRotation
struct UBPC_SplineMovement_C_GetSplineCurrentLocationAndRotation_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.ForceMoveSpline
struct UBPC_SplineMovement_C_ForceMoveSpline_Params
{
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.SetSpline
struct UBPC_SplineMovement_C_SetSpline_Params
{
	class USplineComponent*                            RefSpline;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartForceMove;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.PauseSpline
struct UBPC_SplineMovement_C_PauseSpline_Params
{
	bool                                               IsPause;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.SplineMovingProcess
struct UBPC_SplineMovement_C_SplineMovingProcess_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.AddSplineMoveDistance
struct UBPC_SplineMovement_C_AddSplineMoveDistance_Params
{
	float                                              AddDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.SetSplineMoveDistance
struct UBPC_SplineMovement_C_SetSplineMoveDistance_Params
{
	float                                              NewDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.GetSplineLength
struct UBPC_SplineMovement_C_GetSplineLength_Params
{
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.IsArrivedSpline
struct UBPC_SplineMovement_C_IsArrivedSpline_Params
{
	bool                                               IsArrived;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.ReceiveTick
struct UBPC_SplineMovement_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.ExecuteUbergraph_BPC_SplineMovement
struct UBPC_SplineMovement_C_ExecuteUbergraph_BPC_SplineMovement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SplineMovement.BPC_SplineMovement_C.ArrivedEvent__DelegateSignature
struct UBPC_SplineMovement_C_ArrivedEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
