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

// Function BPF_PlayerCtrlAdventure.BPF_PlayerCtrlAdventure_C.getS3PlayerControllerAdventure
struct UBPF_PlayerCtrlAdventure_C_getS3PlayerControllerAdventure_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3AdventurePlayerController_C*           S3PlayerControllerAdventure;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
