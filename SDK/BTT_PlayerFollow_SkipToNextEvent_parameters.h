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

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.CalcTeleportLocation
struct UBTT_PlayerFollow_SkipToNextEvent_C_CalcTeleportLocation_Params
{
	class AActor*                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_NPCLeadManager_C*                        LeaderAI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestLocation;                                             // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.CalcNextMoveLocation
struct UBTT_PlayerFollow_SkipToNextEvent_C_CalcNextMoveLocation_Params
{
	class AActor*                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_NPCLeadManager_C*                        LeaderAI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestLocation;                                             // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               IsEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ReceiveExecuteAI
struct UBTT_PlayerFollow_SkipToNextEvent_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.EndFailure
struct UBTT_PlayerFollow_SkipToNextEvent_C_EndFailure_Params
{
};

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.StartPanicTeleport
struct UBTT_PlayerFollow_SkipToNextEvent_C_StartPanicTeleport_Params
{
};

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ReceiveAbortAI
struct UBTT_PlayerFollow_SkipToNextEvent_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_SkipToNextEvent.BTT_PlayerFollow_SkipToNextEvent_C.ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent
struct UBTT_PlayerFollow_SkipToNextEvent_C_ExecuteUbergraph_BTT_PlayerFollow_SkipToNextEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
