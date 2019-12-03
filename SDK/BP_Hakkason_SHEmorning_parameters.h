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

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.CheckHouseIn_SHE
struct ABP_Hakkason_SHEmorning_C_CheckHouseIn_SHE_Params
{
	bool                                               in_house;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.TalkACSelect
struct ABP_Hakkason_SHEmorning_C_TalkACSelect_Params
{
	class UTalkScript*                                 select_ac;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.InitSet
struct ABP_Hakkason_SHEmorning_C_InitSet_Params
{
	class UPrimitiveComponent*                         AreaIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_DirectionCheck_C*                        CheckVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.UserConstructionScript
struct ABP_Hakkason_SHEmorning_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.OnBeginOverlap
struct ABP_Hakkason_SHEmorning_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.RenewalActorCount
struct ABP_Hakkason_SHEmorning_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.OnEndOverlap
struct ABP_Hakkason_SHEmorning_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ReceiveTick
struct ABP_Hakkason_SHEmorning_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ChangeDirection_AreaTrg
struct ABP_Hakkason_SHEmorning_C_ChangeDirection_AreaTrg_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.TickChangeCheckKill
struct ABP_Hakkason_SHEmorning_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ExecuteUbergraph_BP_Hakkason_SHEmorning
struct ABP_Hakkason_SHEmorning_C_ExecuteUbergraph_BP_Hakkason_SHEmorning_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
