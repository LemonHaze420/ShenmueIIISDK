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

// Function BPF_NPC.BPF_NPC_C.BPF_TeleportFollowSHE
struct UBPF_NPC_C_BPF_TeleportFollowSHE_Params
{
	float                                              Back;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Rotate_to_players;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_IsLeadActive
struct UBPF_NPC_C_BPF_IsLeadActive_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_IsLeadCompleted
struct UBPF_NPC_C_BPF_IsLeadCompleted_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_StartNPCLeadEvent
struct UBPF_NPC_C_BPF_StartNPCLeadEvent_Params
{
	struct FDataTableRowHandle                         TableRow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_SpawnFollowSHE
struct UBPF_NPC_C_BPF_SpawnFollowSHE_Params
{
	float                                              Back;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Rotate_to_players;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_QueryTagCharaName2NpcActorNew
struct UBPF_NPC_C_BPF_QueryTagCharaName2NpcActorNew_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3Character*                                Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_QueryPlayerNearNpcNew
struct UBPF_NPC_C_BPF_QueryPlayerNearNpcNew_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NpcActorRef;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetMiniGameIdsTable
struct UBPF_NPC_C_BPF_NPC_GetMiniGameIdsTable_Params
{
	int                                                RowIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FNPCMiniGameManagerIds                      Out_Row;                                                  // (Parm, OutParm)
};

// Function BPF_NPC.BPF_NPC_C.BPF_NPC_ConvertScriptStateIDFromName
struct UBPF_NPC_C_BPF_NPC_ConvertScriptStateIDFromName_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetVisibleTalkIconStates
struct UBPF_NPC_C_BPF_NPC_GetVisibleTalkIconStates_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ELocomotionState>>              States;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetCanNotTalkTurnAcoundStates
struct UBPF_NPC_C_BPF_NPC_GetCanNotTalkTurnAcoundStates_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ELocomotionState>>              States;                                                   // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
