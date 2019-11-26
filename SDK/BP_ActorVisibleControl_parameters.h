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

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.GetFadeTime
struct ABP_ActorVisibleControl_C_GetFadeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.GetCharFadeComponent
struct ABP_ActorVisibleControl_C_GetCharFadeComponent_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBTL_MeshFaderComponent*                     MeshFader;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetFadeTime
struct ABP_ActorVisibleControl_C_SetFadeTime_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.AddIgnoreActor
struct ABP_ActorVisibleControl_C_AddIgnoreActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.CanEndOverlapEvent
struct ABP_ActorVisibleControl_C_CanEndOverlapEvent_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetVisibleControlRadius
struct ABP_ActorVisibleControl_C_SetVisibleControlRadius_Params
{
	float                                              NewRadius;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.SetEnbledVisibleControl
struct ABP_ActorVisibleControl_C_SetEnbledVisibleControl_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ShowNPC
struct ABP_ActorVisibleControl_C_ShowNPC_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.HideNPC
struct ABP_ActorVisibleControl_C_HideNPC_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hide;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.UserConstructionScript
struct ABP_ActorVisibleControl_C_UserConstructionScript_Params
{
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ReceiveBeginPlay
struct ABP_ActorVisibleControl_C_ReceiveBeginPlay_Params
{
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ReceiveEndPlay
struct ABP_ActorVisibleControl_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActorVisibleControl.BP_ActorVisibleControl_C.ExecuteUbergraph_BP_ActorVisibleControl
struct ABP_ActorVisibleControl_C_ExecuteUbergraph_BP_ActorVisibleControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
