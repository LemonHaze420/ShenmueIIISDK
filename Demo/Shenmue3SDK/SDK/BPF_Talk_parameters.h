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

// Function BPF_Talk.BPF_Talk_C.IsCharacterReadyAC
struct UBPF_Talk_C_IsCharacterReadyAC_Params
{
	class AActor*                                      TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Talk.BPF_Talk_C.IsCharacterReadyTalk
struct UBPF_Talk_C_IsCharacterReadyTalk_Params
{
	class AActor*                                      TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TalkTo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Talk.BPF_Talk_C.getS3TalkEventManager
struct UBPF_Talk_C_getS3TalkEventManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_TalkEventManager_C*                      TalkEventManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
