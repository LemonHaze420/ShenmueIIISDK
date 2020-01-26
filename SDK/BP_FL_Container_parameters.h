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

// Function BP_FL_Container.BP_FL_Container_C.CheckHit
struct ABP_FL_Container_C_CheckHit_Params
{
	float                                              CheckHeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckIgnore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.IsExistUpContainer
struct ABP_FL_Container_C_IsExistUpContainer_Params
{
	bool                                               bExistUpContainer;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.IsCanDown
struct ABP_FL_Container_C_IsCanDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.GetJobType
struct ABP_FL_Container_C_GetJobType_Params
{
	TEnumAsByte<E_MiniGame_ForkJobResult>              JobType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.IsInsideContainerArea
struct ABP_FL_Container_C_IsInsideContainerArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.SetForkReference
struct ABP_FL_Container_C_SetForkReference_Params
{
	class ABP_KartPawnBase_C*                          RefNewFork;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.GetTopHeight
struct ABP_FL_Container_C_GetTopHeight_Params
{
	TEnumAsByte<E_MiniGame_FL_LiftHeight>              TopHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.SetPalletCollisionEnabled
struct ABP_FL_Container_C_SetPalletCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.CheckContainerExist
struct ABP_FL_Container_C_CheckContainerExist_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIgnoreCheck;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.IsMoved
struct ABP_FL_Container_C_IsMoved_Params
{
	bool                                               bMoved;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.SetMoved
struct ABP_FL_Container_C_SetMoved_Params
{
	bool                                               bMoved;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.GetCenterPos
struct ABP_FL_Container_C_GetCenterPos_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.CheckCanMove
struct ABP_FL_Container_C_CheckCanMove_Params
{
	bool                                               CanMove;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.CheckUpDownContainer
struct ABP_FL_Container_C_CheckUpDownContainer_Params
{
};

// Function BP_FL_Container.BP_FL_Container_C.UserConstructionScript
struct ABP_FL_Container_C_UserConstructionScript_Params
{
};

// Function BP_FL_Container.BP_FL_Container_C.ReceiveBeginPlay
struct ABP_FL_Container_C_ReceiveBeginPlay_Params
{
};

// Function BP_FL_Container.BP_FL_Container_C.ReceiveTick
struct ABP_FL_Container_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.OnOverlapSensor
struct ABP_FL_Container_C_OnOverlapSensor_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.OnEndOverlapSensor
struct ABP_FL_Container_C_OnEndOverlapSensor_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FL_Container.BP_FL_Container_C.ExecuteUbergraph_BP_FL_Container
struct ABP_FL_Container_C_ExecuteUbergraph_BP_FL_Container_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
