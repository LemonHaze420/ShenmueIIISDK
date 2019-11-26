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

// Function BPF_Calc.BPF_Calc_C.CalculateVerticalFOV
struct UBPF_Calc_C_CalculateVerticalFOV_Params
{
	float                                              HFOV;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              VFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Calc.BPF_Calc_C.distanceVector
struct UBPF_Calc_C_distanceVector_Params
{
	struct FVector                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Is_Distance_2D;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
