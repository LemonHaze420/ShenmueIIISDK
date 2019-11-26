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

// Function BP_PoleWithCable.BP_PoleWithCable_C.UpdateTimezone
struct ABP_PoleWithCable_C_UpdateTimezone_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.TurnOnPower
struct ABP_PoleWithCable_C_TurnOnPower_Params
{
	bool                                               bTurnOn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.ConditionalInitialize
struct ABP_PoleWithCable_C_ConditionalInitialize_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.setBaseIntensities
struct ABP_PoleWithCable_C_setBaseIntensities_Params
{
	class ULightComponentBase*                         SpotLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULightComponentBase*                         PointLight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.setShow
struct ABP_PoleWithCable_C_setShow_Params
{
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.UserConstructionScript
struct ABP_PoleWithCable_C_UserConstructionScript_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.Timeline__FinishedFunc
struct ABP_PoleWithCable_C_Timeline__FinishedFunc_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.Timeline__UpdateFunc
struct ABP_PoleWithCable_C_Timeline__UpdateFunc_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.Flicker__FinishedFunc
struct ABP_PoleWithCable_C_Flicker__FinishedFunc_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.Flicker__UpdateFunc
struct ABP_PoleWithCable_C_Flicker__UpdateFunc_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.ReceiveTick
struct ABP_PoleWithCable_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.SlowlyLight
struct ABP_PoleWithCable_C_SlowlyLight_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.toggle
struct ABP_PoleWithCable_C_toggle_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.StartFlicker
struct ABP_PoleWithCable_C_StartFlicker_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.StopFlicker
struct ABP_PoleWithCable_C_StopFlicker_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.Manual_Stop
struct ABP_PoleWithCable_C_Manual_Stop_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.Manual_Start
struct ABP_PoleWithCable_C_Manual_Start_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.catch_onTimeJump
struct ABP_PoleWithCable_C_catch_onTimeJump_Params
{
	float                                              jumpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature
struct ABP_PoleWithCable_C_BndEvt__Area_01_K2Node_ComponentBoundEvent_153_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.DayTimeEventDispatcher_Event_1
struct ABP_PoleWithCable_C_DayTimeEventDispatcher_Event_1_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_PoleWithCable_C_BndEvt__Area_01_K2Node_ComponentBoundEvent_149_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature
struct ABP_PoleWithCable_C_BndEvt__Area_00_K2Node_ComponentBoundEvent_146_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_PoleWithCable_C_BndEvt__Area_00_K2Node_ComponentBoundEvent_144_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.firstBeginArea01
struct ABP_PoleWithCable_C_firstBeginArea01_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.firstBeginArea00
struct ABP_PoleWithCable_C_firstBeginArea00_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.ReceiveBeginPlay
struct ABP_PoleWithCable_C_ReceiveBeginPlay_Params
{
};

// Function BP_PoleWithCable.BP_PoleWithCable_C.ExecuteUbergraph_BP_PoleWithCable
struct ABP_PoleWithCable_C_ExecuteUbergraph_BP_PoleWithCable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
