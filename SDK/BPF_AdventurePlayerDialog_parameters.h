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

// Function BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C.BPF_StopAdventurePlayerDialog
struct UBPF_AdventurePlayerDialog_C_BPF_StopAdventurePlayerDialog_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AdventurePlayerDialog.BPF_AdventurePlayerDialog_C.BPF_GetAdventurePlayerDialogComponent
struct UBPF_AdventurePlayerDialog_C_BPF_GetAdventurePlayerDialogComponent_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class UBPC_CharacterDialogPlayer_C*                Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
