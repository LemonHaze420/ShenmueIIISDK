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

// Function BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C.ChangeBattleCommandLibrary
struct UBPF_BattleCommandLibrary_C_ChangeBattleCommandLibrary_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_BattleCommandLibrary.BPF_BattleCommandLibrary_C.GetS3BattleCommandLibrary
struct UBPF_BattleCommandLibrary_C_GetS3BattleCommandLibrary_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTL_CommandLibrary_C*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
