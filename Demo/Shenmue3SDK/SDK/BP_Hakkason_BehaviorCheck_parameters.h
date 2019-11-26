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

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.InitSet
struct ABP_Hakkason_BehaviorCheck_C_InitSet_Params
{
	ES3PlayerBehavior                                  Check_Behavior;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Change_Playable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StepLock;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.UserConstructionScript
struct ABP_Hakkason_BehaviorCheck_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.RenewalActorCount
struct ABP_Hakkason_BehaviorCheck_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ReceiveTick
struct ABP_Hakkason_BehaviorCheck_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.TickChangeCheckKill
struct ABP_Hakkason_BehaviorCheck_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ExecuteUbergraph_BP_Hakkason_BehaviorCheck
struct ABP_Hakkason_BehaviorCheck_C_ExecuteUbergraph_BP_Hakkason_BehaviorCheck_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
