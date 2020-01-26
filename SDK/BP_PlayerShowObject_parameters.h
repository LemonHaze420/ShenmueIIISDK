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

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.GetClothMeshComponent
struct ABP_PlayerShowObject_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.Zoom
struct ABP_PlayerShowObject_C_Zoom_Params
{
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.SetShowObjeectScale
struct ABP_PlayerShowObject_C_SetShowObjeectScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.CacheFingerLocationAndRotation
struct ABP_PlayerShowObject_C_CacheFingerLocationAndRotation_Params
{
	TArray<struct FVector>                             FingerLocations;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRotator>                            FingerRotations;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     soketName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.UserConstructionScript
struct ABP_PlayerShowObject_C_UserConstructionScript_Params
{
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.SetTargetShowCamera
struct ABP_PlayerShowObject_C_SetTargetShowCamera_Params
{
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.Reset
struct ABP_PlayerShowObject_C_Reset_Params
{
	bool                                               bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.PreviousSetTargetCamera
struct ABP_PlayerShowObject_C_PreviousSetTargetCamera_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOutgoing;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.ReceiveTick
struct ABP_PlayerShowObject_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.ReceiveBeginPlay
struct ABP_PlayerShowObject_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.Input Wait Update
struct ABP_PlayerShowObject_C_Input_Wait_Update_Params
{
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_10
struct ABP_PlayerShowObject_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_10_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_6
struct ABP_PlayerShowObject_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_6_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.ExecuteUbergraph_BP_PlayerShowObject
struct ABP_PlayerShowObject_C_ExecuteUbergraph_BP_PlayerShowObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.OnCalcFinishedDispatcher__DelegateSignature
struct ABP_PlayerShowObject_C_OnCalcFinishedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
