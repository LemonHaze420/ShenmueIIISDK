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

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.CheckNpcDistance
struct ASL_Hakkason_AreaJump_C_CheckNpcDistance_Params
{
	struct FVector                                     CheckPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Threshold;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               in_Threshold;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.TalkEnable
struct ASL_Hakkason_AreaJump_C_TalkEnable_Params
{
	bool                                               enableFlag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ReceiveBeginPlay
struct ASL_Hakkason_AreaJump_C_ReceiveBeginPlay_Params
{
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.RotSetNPC
struct ASL_Hakkason_AreaJump_C_RotSetNPC_Params
{
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.NPCWait
struct ASL_Hakkason_AreaJump_C_NPCWait_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.Event_EndOverLap
struct ASL_Hakkason_AreaJump_C_Event_EndOverLap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.Event_OverLap
struct ASL_Hakkason_AreaJump_C_Event_OverLap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ExspEvent_OnFlagChanged
struct ASL_Hakkason_AreaJump_C_ExspEvent_OnFlagChanged_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ExecuteUbergraph_SL_Hakkason_AreaJump
struct ASL_Hakkason_AreaJump_C_ExecuteUbergraph_SL_Hakkason_AreaJump_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
