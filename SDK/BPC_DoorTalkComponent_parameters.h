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

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.getActionType
struct UBPC_DoorTalkComponent_C_getActionType_Params
{
	bool                                               Sight;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3DetectActionParam>                Params;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ReceiveBeginPlay
struct UBPC_DoorTalkComponent_C_ReceiveBeginPlay_Params
{
};

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.RunDoorTalk
struct UBPC_DoorTalkComponent_C_RunDoorTalk_Params
{
};

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.FinishDoorTalk
struct UBPC_DoorTalkComponent_C_FinishDoorTalk_Params
{
};

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.CustomEvent_2
struct UBPC_DoorTalkComponent_C_CustomEvent_2_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_DoorTalkComponent.BPC_DoorTalkComponent_C.ExecuteUbergraph_BPC_DoorTalkComponent
struct UBPC_DoorTalkComponent_C_ExecuteUbergraph_BPC_DoorTalkComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
