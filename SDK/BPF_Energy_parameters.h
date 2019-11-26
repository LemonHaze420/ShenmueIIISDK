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

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenMax(Ratio)
struct UBPF_Energy_C_BPF_GetPlayerEnergyRegenMax_Ratio__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutEnergy;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_ReducePlayerEnergy(Orbs)
struct UBPF_Energy_C_BPF_ReducePlayerEnergy_Orbs__Params
{
	float                                              Orbs;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_DrainEnergyByDeltaTime
struct UBPF_Energy_C_BPF_DrainEnergyByDeltaTime_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyDrainMinPoints
struct UBPF_Energy_C_BPF_GetPlayerEnergyDrainMinPoints_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerMaxEnergyPoints
struct UBPF_Energy_C_BPF_GetPlayerMaxEnergyPoints_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergy(Ratio)
struct UBPF_Energy_C_BPF_SetPlayerEnergy_Ratio__Params
{
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergy(Points)
struct UBPF_Energy_C_BPF_SetPlayerEnergy_Points__Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyMultiplier
struct UBPF_Energy_C_BPF_GetPlayerEnergyMultiplier_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_IsEnergySystemValid
struct UBPF_Energy_C_BPF_IsEnergySystemValid_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenRate
struct UBPF_Energy_C_BPF_GetPlayerEnergyRegenRate_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyPoints
struct UBPF_Energy_C_BPF_GetPlayerEnergyPoints_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Points;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRegenMax(Points)
struct UBPF_Energy_C_BPF_GetPlayerEnergyRegenMax_Points__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutEnergy;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_SetPlayerEnergyToMax
struct UBPF_Energy_C_BPF_SetPlayerEnergyToMax_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRange(Ratio)
struct UBPF_Energy_C_BPF_GetPlayerEnergyRange_Ratio__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Range;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_ReducePlayerEnergy
struct UBPF_Energy_C_BPF_ReducePlayerEnergy_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRange(Points)
struct UBPF_Energy_C_BPF_GetPlayerEnergyRange_Points__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Range;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_AddPlayerEnergy(float)
struct UBPF_Energy_C_BPF_AddPlayerEnergy_float__Params
{
	float                                              Amt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerEnergyRatio
struct UBPF_Energy_C_BPF_GetPlayerEnergyRatio_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_IsPlayerEnergyMax
struct UBPF_Energy_C_BPF_IsPlayerEnergyMax_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_AddPlayerEnergy(Int)
struct UBPF_Energy_C_BPF_AddPlayerEnergy_Int__Params
{
	int                                                Amt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Energy.BPF_Energy_C.BPF_GetPlayerBaseMaxEnergy
struct UBPF_Energy_C_BPF_GetPlayerBaseMaxEnergy_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
