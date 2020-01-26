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

// Function BP_Clipper.BP_Clipper_C.SetCharaName
struct ABP_Clipper_C_SetCharaName_Params
{
	struct FName                                       NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Clipper.BP_Clipper_C.SetTalkClipperInternal
struct ABP_Clipper_C_SetTalkClipperInternal_Params
{
	struct FString                                     TalkClipperString;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVoice;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3SoundPlayer*                              VoicePlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Clipper.BP_Clipper_C.UpdateElapsedTime
struct ABP_Clipper_C_UpdateElapsedTime_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Clipper.BP_Clipper_C.DebugLogMultiSample
struct ABP_Clipper_C_DebugLogMultiSample_Params
{
};

// Function BP_Clipper.BP_Clipper_C.CalcDeltaTime
struct ABP_Clipper_C_CalcDeltaTime_Params
{
};

// Function BP_Clipper.BP_Clipper_C.TalkClipperStop
struct ABP_Clipper_C_TalkClipperStop_Params
{
};

// Function BP_Clipper.BP_Clipper_C.Init
struct ABP_Clipper_C_Init_Params
{
};

// Function BP_Clipper.BP_Clipper_C.UserConstructionScript
struct ABP_Clipper_C_UserConstructionScript_Params
{
};

// Function BP_Clipper.BP_Clipper_C.ClearFaceId
struct ABP_Clipper_C_ClearFaceId_Params
{
};

// Function BP_Clipper.BP_Clipper_C.SetPlayRate
struct ABP_Clipper_C_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Clipper.BP_Clipper_C.EndPause
struct ABP_Clipper_C_EndPause_Params
{
};

// Function BP_Clipper.BP_Clipper_C.ReceiveTick
struct ABP_Clipper_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Clipper.BP_Clipper_C.ReceiveBeginPlay
struct ABP_Clipper_C_ReceiveBeginPlay_Params
{
};

// Function BP_Clipper.BP_Clipper_C.ExecuteUbergraph_BP_Clipper
struct ABP_Clipper_C_ExecuteUbergraph_BP_Clipper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
