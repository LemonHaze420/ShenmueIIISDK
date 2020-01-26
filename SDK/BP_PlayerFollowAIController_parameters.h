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

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.SkipCurrentAutoMove
struct ABP_PlayerFollowAIController_C_SkipCurrentAutoMove_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.StopAutoMove
struct ABP_PlayerFollowAIController_C_StopAutoMove_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnPause
struct ABP_PlayerFollowAIController_C_UnPause_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Pause
struct ABP_PlayerFollowAIController_C_Pause_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.RequestAutoMove
struct ABP_PlayerFollowAIController_C_RequestAutoMove_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UserConstructionScript
struct ABP_PlayerFollowAIController_C_UserConstructionScript_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ReceiveEndPlay
struct ABP_PlayerFollowAIController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.Initialize
struct ABP_PlayerFollowAIController_C_Initialize_Params
{
	class ABP_NPCLeadManager_C*                        LeadNPCAI;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3_Character_Adventure_C*                PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.UnpossessAndDestroy
struct ABP_PlayerFollowAIController_C_UnpossessAndDestroy_Params
{
};

// Function BP_PlayerFollowAIController.BP_PlayerFollowAIController_C.ExecuteUbergraph_BP_PlayerFollowAIController
struct ABP_PlayerFollowAIController_C_ExecuteUbergraph_BP_PlayerFollowAIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
