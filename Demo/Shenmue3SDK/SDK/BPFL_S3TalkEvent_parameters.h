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

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.GetEventStartIndex
struct UBPFL_S3TalkEvent_C_GetEventStartIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.InRange
struct UBPFL_S3TalkEvent_C_InRange_Params
{
	int                                                InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInt32Range                                 intRange;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInRange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.SetBsEnable
struct UBPFL_S3TalkEvent_C_SetBsEnable_Params
{
	struct FName                                       TargetCharaId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.SetBsCount
struct UBPFL_S3TalkEvent_C_SetBsCount_Params
{
	struct FName                                       TargetCharaId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsCheckTalkSitMotion
struct UBPFL_S3TalkEvent_C_IsCheckTalkSitMotion_Params
{
	class AActor*                                      SitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputLog;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaySit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.GetTalkStartIndex
struct UBPFL_S3TalkEvent_C_GetTalkStartIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.HintTalkStart
struct UBPFL_S3TalkEvent_C_HintTalkStart_Params
{
	class AActor*                                      TalkTargetNPC;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 TalkScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CurrentTargetActor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Error;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.AC_StartFromScript
struct UBPFL_S3TalkEvent_C_AC_StartFromScript_Params
{
	class UTalkScript*                                 TalkScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.TryTalkStartByActor
struct UBPFL_S3TalkEvent_C_TryTalkStartByActor_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsLineSight
struct UBPFL_S3TalkEvent_C_IsLineSight_Params
{
	class ACharacter*                                  Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsEjectFromTalkCamera
struct UBPFL_S3TalkEvent_C_IsEjectFromTalkCamera_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.PossessTalkCamera
struct UBPFL_S3TalkEvent_C_PossessTalkCamera_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.EjectFromTalkCamera
struct UBPFL_S3TalkEvent_C_EjectFromTalkCamera_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.RunTalkEvent
struct UBPFL_S3TalkEvent_C_RunTalkEvent_Params
{
	class AActor*                                      NpcActors;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isBS;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 TalkScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPC_S3_TalkComponent_C*                     TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENPCTalkState                                      TalkState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
