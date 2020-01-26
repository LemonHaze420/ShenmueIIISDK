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

// Function BP_AppointKSchild.BP_AppointKSchild_C.isLive
struct ABP_AppointKSchild_C_isLive_Params
{
	bool                                               LIVE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecSelfKill
struct ABP_AppointKSchild_C_ExecSelfKill_Params
{
	bool                                               Forced;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecExspFlagSet
struct ABP_AppointKSchild_C_ExecExspFlagSet_Params
{
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpRot
struct ABP_AppointKSchild_C_GetJumpRot_Params
{
	float                                              Jump_point;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpTime
struct ABP_AppointKSchild_C_GetJumpTime_Params
{
	int                                                Hour;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.SetKSinfo
struct ABP_AppointKSchild_C_SetKSinfo_Params
{
	int                                                EnableTimeMin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnableTimeMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                JumpHour;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                JumpMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    jumprot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       KSlavel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Eyecatch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExspFlagSet;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExspControl;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.GetJumpInfo
struct ABP_AppointKSchild_C_GetJumpInfo_Params
{
	struct FVector                                     Jump_point;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.GetEyeCatchID
struct ABP_AppointKSchild_C_GetEyeCatchID_Params
{
	struct FName                                       eyecatch_id;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.GetKsLabelID
struct ABP_AppointKSchild_C_GetKsLabelID_Params
{
	struct FName                                       ks_id;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.CheckEnableTime
struct ABP_AppointKSchild_C_CheckEnableTime_Params
{
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.UserConstructionScript
struct ABP_AppointKSchild_C_UserConstructionScript_Params
{
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.ReceiveTick
struct ABP_AppointKSchild_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.ExecuteUbergraph_BP_AppointKSchild
struct ABP_AppointKSchild_C_ExecuteUbergraph_BP_AppointKSchild_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointKSchild.BP_AppointKSchild_C.ApsChild_TimeOver__DelegateSignature
struct ABP_AppointKSchild_C_ApsChild_TimeOver__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
