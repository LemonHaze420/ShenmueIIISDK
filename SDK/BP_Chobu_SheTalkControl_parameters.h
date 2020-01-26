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

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.SetDoorSystemFlag
struct ABP_Chobu_SheTalkControl_C_SetDoorSystemFlag_Params
{
	bool                                               SetBit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.CheckRyosyaIn
struct ABP_Chobu_SheTalkControl_C_CheckRyosyaIn_Params
{
	bool                                               in_ryosya;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.CheckRyosyaDoor
struct ABP_Chobu_SheTalkControl_C_CheckRyosyaDoor_Params
{
	bool                                               UsePlayer;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.CheckSHEdistance
struct ABP_Chobu_SheTalkControl_C_CheckSHEdistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RangeIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.VarandaTalkEndFlagCheck
struct ABP_Chobu_SheTalkControl_C_VarandaTalkEndFlagCheck_Params
{
	struct FText                                       FlagParameta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.VarandaTalkEndFlagSet
struct ABP_Chobu_SheTalkControl_C_VarandaTalkEndFlagSet_Params
{
	struct FText                                       FlagParameta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SetFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.CheckFlagOn
struct ABP_Chobu_SheTalkControl_C_CheckFlagOn_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlagOn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.GetNowTalkTable
struct ABP_Chobu_SheTalkControl_C_GetNowTalkTable_Params
{
	int                                                CurrentStepTableIndex;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.CheckStapRange
struct ABP_Chobu_SheTalkControl_C_CheckStapRange_Params
{
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RangeIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.CheckSheInTheLobby
struct ABP_Chobu_SheTalkControl_C_CheckSheInTheLobby_Params
{
	float                                              LimitDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               result_distance;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     she_pos;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.InitSet
struct ABP_Chobu_SheTalkControl_C_InitSet_Params
{
	class UPrimitiveComponent*                         Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATriggerBox*                                 SHECheck;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Veranda;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SaveMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.UserConstructionScript
struct ABP_Chobu_SheTalkControl_C_UserConstructionScript_Params
{
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.ReceiveTick
struct ABP_Chobu_SheTalkControl_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.OnBeginOverlap
struct ABP_Chobu_SheTalkControl_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.OnEndOverlap
struct ABP_Chobu_SheTalkControl_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.RenewalActorCount
struct ABP_Chobu_SheTalkControl_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.TickChangeCheckKill
struct ABP_Chobu_SheTalkControl_C_TickChangeCheckKill_Params
{
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.OnBeginOverlap_Veranda
struct ABP_Chobu_SheTalkControl_C_OnBeginOverlap_Veranda_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.OnEndOverlap_Veranda
struct ABP_Chobu_SheTalkControl_C_OnEndOverlap_Veranda_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.OnCutsceneEnd_VerandaTalk
struct ABP_Chobu_SheTalkControl_C_OnCutsceneEnd_VerandaTalk_Params
{
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.OnStartCutscenePlayer_VerandaTalk
struct ABP_Chobu_SheTalkControl_C_OnStartCutscenePlayer_VerandaTalk_Params
{
};

// Function BP_Chobu_SheTalkControl.BP_Chobu_SheTalkControl_C.ExecuteUbergraph_BP_Chobu_SheTalkControl
struct ABP_Chobu_SheTalkControl_C_ExecuteUbergraph_BP_Chobu_SheTalkControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
