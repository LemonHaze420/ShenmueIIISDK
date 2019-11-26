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

// Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetAdventureBarColorEnum
struct UBPF_EnergyWgt_C_GetAdventureBarColorEnum_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthOrbColor>                       AsEnum;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetAdventureBarColor
struct UBPF_EnergyWgt_C_GetAdventureBarColor_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AsColor;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_EnergyWgt.BPF_EnergyWgt_C.GetFormattedEnergyStrings
struct UBPF_EnergyWgt_C_GetFormattedEnergyStrings_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HP;                                                       // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MaxHP;                                                    // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
