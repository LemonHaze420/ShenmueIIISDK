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

// Function BPF_StreetFight.BPF_StreetFight_C.GetStreetFightManager
struct UBPF_StreetFight_C_GetStreetFightManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_StreetFightManager_C*                    Manager;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_StreetFight.BPF_StreetFight_C.GetStreetFightTrigger
struct UBPF_StreetFight_C_GetStreetFightTrigger_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3StreetFightTrigger*                       Manager;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
