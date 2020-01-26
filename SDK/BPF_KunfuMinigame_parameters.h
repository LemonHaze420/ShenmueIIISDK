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

// Function BPF_KunfuMinigame.BPF_KunfuMinigame_C.BPF_GetAllKunFuKeys_Minigame
struct UBPF_KunfuMinigame_C_BPF_GetAllKunFuKeys_Minigame_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuMinigame.BPF_KunfuMinigame_C.BPF_GetKunfuKey_Minigame
struct UBPF_KunfuMinigame_C_BPF_GetKunfuKey_Minigame_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
