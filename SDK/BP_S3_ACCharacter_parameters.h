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

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.LoadSkeletalMesh
struct ABP_S3_ACCharacter_C_LoadSkeletalMesh_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.GetNPCMesh
struct ABP_S3_ACCharacter_C_GetNPCMesh_Params
{
	struct FName                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3NPCDefinition*                            Definition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Detach
struct ABP_S3_ACCharacter_C_Detach_Params
{
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.AttachSetting
struct ABP_S3_ACCharacter_C_AttachSetting_Params
{
	class US3NPCDefinition*                            Definition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.IsTalking
struct ABP_S3_ACCharacter_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.InitCharacter
struct ABP_S3_ACCharacter_C_InitCharacter_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.UserConstructionScript
struct ABP_S3_ACCharacter_C_UserConstructionScript_Params
{
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Init
struct ABP_S3_ACCharacter_C_Init_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Finalize
struct ABP_S3_ACCharacter_C_Finalize_Params
{
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ReceiveBeginPlay
struct ABP_S3_ACCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ReceiveTick
struct ABP_S3_ACCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.OnTalkStart
struct ABP_S3_ACCharacter_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.OnTalkFinished
struct ABP_S3_ACCharacter_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Screen_Player
struct ABP_S3_ACCharacter_C_Screen_Player_Params
{
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.Screen_NPC
struct ABP_S3_ACCharacter_C_Screen_NPC_Params
{
};

// Function BP_S3_ACCharacter.BP_S3_ACCharacter_C.ExecuteUbergraph_BP_S3_ACCharacter
struct ABP_S3_ACCharacter_C_ExecuteUbergraph_BP_S3_ACCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
