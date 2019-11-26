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

// Function BPC_FootIK.BPC_FootIK_C.InterpSinkingDistance
struct UBPC_FootIK_C_InterpSinkingDistance_Params
{
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SinkingDistance;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.UpdateRightFootRotaion
struct UBPC_FootIK_C_UpdateRightFootRotaion_Params
{
	bool                                               HitLeft;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.UpdateLeftFootRotaion
struct UBPC_FootIK_C_UpdateLeftFootRotaion_Params
{
	bool                                               HitLeft;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.GetFootRotaion
struct UBPC_FootIK_C_GetFootRotaion_Params
{
	float                                              LeftFootRotaionX;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeftFootRotaionY;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightFootRotaionX;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightFootRotaionY;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.TryGetSinkingDistance
struct UBPC_FootIK_C_TryGetSinkingDistance_Params
{
	struct FName                                       FootSocketName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartLocationZ;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndLocationZ;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SinkingDistance;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.TraceFromLocation
struct UBPC_FootIK_C_TraceFromLocation_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bHit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.TryGetFootSinkingOffset
struct UBPC_FootIK_C_TryGetFootSinkingOffset_Params
{
	float                                              LocationX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartLocationZ;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndLocationZ;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SinkingOffsetZ;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.UpdateActorLocalOffsetZ
struct UBPC_FootIK_C_UpdateActorLocalOffsetZ_Params
{
	bool                                               bHitFootLeft;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHitFootRight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.UpdateFootIKOffset
struct UBPC_FootIK_C_UpdateFootIKOffset_Params
{
	bool                                               bHitFootLeft;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHitFootRight;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.GetFootOffset
struct UBPC_FootIK_C_GetFootOffset_Params
{
	float                                              LeftFootOffsetZ;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightFootOffsetZ;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.Update
struct UBPC_FootIK_C_Update_Params
{
};

// Function BPC_FootIK.BPC_FootIK_C.ReceiveBeginPlay
struct UBPC_FootIK_C_ReceiveBeginPlay_Params
{
};

// Function BPC_FootIK.BPC_FootIK_C.ExecuteUbergraph_BPC_FootIK
struct UBPC_FootIK_C_ExecuteUbergraph_BPC_FootIK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FootIK.BPC_FootIK_C.OnFootIanding__DelegateSignature
struct UBPC_FootIK_C_OnFootIanding__DelegateSignature_Params
{
	float                                              SinkingDistance_Z;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
