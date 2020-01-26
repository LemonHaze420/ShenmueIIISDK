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

// Function BPF_NPCLead.BPF_NPCLead_C.GetNPCLeadCharacter
struct UBPF_NPCLead_C_GetNPCLeadCharacter_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_NPC_Lead_C*                              newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPCLead.BPF_NPCLead_C.DestroyNPCLeadActor
struct UBPF_NPCLead_C_DestroyNPCLeadActor_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPCLead.BPF_NPCLead_C.SpawnNPCLeadActor
struct UBPF_NPCLead_C_SpawnNPCLeadActor_Params
{
	struct FVector                                     SpawnPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              SpawnRot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ANPC_SplineMoveActor_C*                      SplineActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPCLead.BPF_NPCLead_C.GetNPCLeadManager
struct UBPF_NPCLead_C_GetNPCLeadManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_NPCLeadManager_C*                        newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
