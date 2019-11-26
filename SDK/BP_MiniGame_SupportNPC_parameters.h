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

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.FlatteningMorph
struct ABP_MiniGame_SupportNPC_C_FlatteningMorph_Params
{
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.IsPlayingLabelVoice
struct ABP_MiniGame_SupportNPC_C_IsPlayingLabelVoice_Params
{
	bool                                               Playing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.GetActionData
struct ABP_MiniGame_SupportNPC_C_GetActionData_Params
{
	bool                                               IsSuccess;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Just;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unbeli;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MG_SupportNPCAction                     Data;                                                     // (Parm, OutParm)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetLookAtLocation
struct ABP_MiniGame_SupportNPC_C_SetLookAtLocation_Params
{
	struct FVector                                     LookAtLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UpdateClipper
struct ABP_MiniGame_SupportNPC_C_UpdateClipper_Params
{
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.PlayScript
struct ABP_MiniGame_SupportNPC_C_PlayScript_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetMesh
struct ABP_MiniGame_SupportNPC_C_SetMesh_Params
{
	class USkeletalMesh*                               NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ChangeState
struct ABP_MiniGame_SupportNPC_C_ChangeState_Params
{
	bool                                               IsSuccess;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsJust;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnbeli;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetEnabled
struct ABP_MiniGame_SupportNPC_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UserConstructionScript
struct ABP_MiniGame_SupportNPC_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ReceiveBeginPlay
struct ABP_MiniGame_SupportNPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ReceiveTick
struct ABP_MiniGame_SupportNPC_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.Event_ChangeState
struct ABP_MiniGame_SupportNPC_C_Event_ChangeState_Params
{
	bool                                               IsSuccess;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsJust;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnbeli;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ExecuteUbergraph_BP_MiniGame_SupportNPC
struct ABP_MiniGame_SupportNPC_C_ExecuteUbergraph_BP_MiniGame_SupportNPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
