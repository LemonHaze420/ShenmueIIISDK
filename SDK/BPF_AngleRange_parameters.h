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

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedOutsideRange
struct UBPF_AngleRange_C_BPF_GetNormalizedOutsideRange_Params
{
	float                                              InAngle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeCenter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangePlusMinus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Normalized;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_ExpandAngleRange
struct UBPF_AngleRange_C_BPF_ExpandAngleRange_Params
{
	float                                              IncludeAngle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeCenterDeg;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangePlusMinusDeg;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewCenter;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NewPlusMinus;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetInAngleRange
struct UBPF_AngleRange_C_BPF_GetInAngleRange_Params
{
	float                                              AngleDeg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeCenterDeg;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangePlusMinusDeg;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedInRange
struct UBPF_AngleRange_C_BPF_GetNormalizedInRange_Params
{
	float                                              InAngle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeCenter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangePlusMinus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Normalized;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetAngleOutsideRange
struct UBPF_AngleRange_C_BPF_GetAngleOutsideRange_Params
{
	float                                              InAngle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeCenterDeg;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangePlusMinusDeg;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleFromRange;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_AngleRange.BPF_AngleRange_C.ConvertAngleRange_LimitsToCenter
struct UBPF_AngleRange_C_ConvertAngleRange_LimitsToCenter_Params
{
	struct FVector2D                                   Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Center;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PlusMinus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
