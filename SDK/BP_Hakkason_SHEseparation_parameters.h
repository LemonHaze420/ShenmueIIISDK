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

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeLead_New
struct ABP_Hakkason_SHEseparation_C_MakeLead_New_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeFlwOrNpc_New
struct ABP_Hakkason_SHEseparation_C_MakeFlwOrNpc_New_Params
{
	bool                                               Set_ExspPos;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_ExspPos_B;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.CheckSHEhouseIn
struct ABP_Hakkason_SHEseparation_C_CheckSHEhouseIn_Params
{
	bool                                               house_in;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.CheckWaitCondtion
struct ABP_Hakkason_SHEseparation_C_CheckWaitCondtion_Params
{
	bool                                               Wait_On;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeFlwOrNpc
struct ABP_Hakkason_SHEseparation_C_MakeFlwOrNpc_Params
{
	bool                                               Set_ExspPos;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_ExspPos_B;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.InitSet
struct ABP_Hakkason_SHEseparation_C_InitSet_Params
{
	class UPrimitiveComponent*                         HouseAreaIn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         JoinEnableCollision;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Door1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Door2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Forced;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TypeFollow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HouseOutJoinArea;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.UserConstructionScript
struct ABP_Hakkason_SHEseparation_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.Test_MsgEvent
struct ABP_Hakkason_SHEseparation_C_Test_MsgEvent_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Current_Destination_ID;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.KillSHEseparation
struct ABP_Hakkason_SHEseparation_C_KillSHEseparation_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnBeginOverlap_JoinArea
struct ABP_Hakkason_SHEseparation_C_OnBeginOverlap_JoinArea_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnEndOverlap_JoinArea
struct ABP_Hakkason_SHEseparation_C_OnEndOverlap_JoinArea_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.ReceiveTick
struct ABP_Hakkason_SHEseparation_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.BeginOvarLap_JionEnable
struct ABP_Hakkason_SHEseparation_C_BeginOvarLap_JionEnable_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnCutsceneEnd_M03_S0089
struct ABP_Hakkason_SHEseparation_C_OnCutsceneEnd_M03_S0089_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnStartCutscenePlayer_M03_S0089
struct ABP_Hakkason_SHEseparation_C_OnStartCutscenePlayer_M03_S0089_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnEndOverlap
struct ABP_Hakkason_SHEseparation_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.RenewalActorCount
struct ABP_Hakkason_SHEseparation_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnBeginOverlap
struct ABP_Hakkason_SHEseparation_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnCutsceneEnd_M03_S0090
struct ABP_Hakkason_SHEseparation_C_OnCutsceneEnd_M03_S0090_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnStartCutscenePlayer_M03_S0090
struct ABP_Hakkason_SHEseparation_C_OnStartCutscenePlayer_M03_S0090_Params
{
};

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.ExecuteUbergraph_BP_Hakkason_SHEseparation
struct ABP_Hakkason_SHEseparation_C_ExecuteUbergraph_BP_Hakkason_SHEseparation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
