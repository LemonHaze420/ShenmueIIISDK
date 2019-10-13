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

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.SetMiniGameMode
struct ABP_MiniGame_CC_Chicken_C_SetMiniGameMode_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.IsReSpawnable
struct ABP_MiniGame_CC_Chicken_C_IsReSpawnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateRunningSE
struct ABP_MiniGame_CC_Chicken_C_UpdateRunningSE_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableUpdateSerchCatch
struct ABP_MiniGame_CC_Chicken_C_EnableUpdateSerchCatch_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateEnableSearchCatch
struct ABP_MiniGame_CC_Chicken_C_UpdateEnableSearchCatch_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UnEnableChicken
struct ABP_MiniGame_CC_Chicken_C_UnEnableChicken_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.EnableChicken
struct ABP_MiniGame_CC_Chicken_C_EnableChicken_Params
{
	bool                                               RunStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetPlayRate
struct ABP_MiniGame_CC_Chicken_C_GetPlayRate_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetFarMoveIdFromPlayer
struct ABP_MiniGame_CC_Chicken_C_GetFarMoveIdFromPlayer_Params
{
	int                                                MoveId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetCurrentState
struct ABP_MiniGame_CC_Chicken_C_GetCurrentState_Params
{
	TEnumAsByte<E_MiniGame_CC_ChickenState>            State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeWalk
struct ABP_MiniGame_CC_Chicken_C_InitializeWalk_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeRun
struct ABP_MiniGame_CC_Chicken_C_InitializeRun_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetNearMoveId
struct ABP_MiniGame_CC_Chicken_C_GetNearMoveId_Params
{
	int                                                MoveId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UpdateDebug
struct ABP_MiniGame_CC_Chicken_C_UpdateDebug_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.GetEnableMoveId
struct ABP_MiniGame_CC_Chicken_C_GetEnableMoveId_Params
{
	TArray<int>                                        IdList;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.InitializeMove
struct ABP_MiniGame_CC_Chicken_C_InitializeMove_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.UserConstructionScript
struct ABP_MiniGame_CC_Chicken_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_CC_Chicken_C_BndEvt__SearchPlayerCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.BndEvt__SearchCatchCollision_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_CC_Chicken_C_BndEvt__SearchCatchCollision_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveTick
struct ABP_MiniGame_CC_Chicken_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveBeginPlay
struct ABP_MiniGame_CC_Chicken_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ReceiveEndPlay
struct ABP_MiniGame_CC_Chicken_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ChangeGameTimeEvent
struct ABP_MiniGame_CC_Chicken_C_ChangeGameTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Chicken.BP_MiniGame_CC_Chicken_C.ExecuteUbergraph_BP_MiniGame_CC_Chicken
struct ABP_MiniGame_CC_Chicken_C_ExecuteUbergraph_BP_MiniGame_CC_Chicken_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
