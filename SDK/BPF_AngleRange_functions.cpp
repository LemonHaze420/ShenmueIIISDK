
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedOutsideRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Normalized                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::STATIC_BPF_GetNormalizedOutsideRange(float InAngle, float RangeCenter, float RangePlusMinus, class UObject* __WorldContext, float* Normalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedOutsideRange");

	UBPF_AngleRange_C_BPF_GetNormalizedOutsideRange_Params params;
	params.InAngle = InAngle;
	params.RangeCenter = RangeCenter;
	params.RangePlusMinus = RangePlusMinus;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normalized != nullptr)
		*Normalized = params.Normalized;
}


// Function BPF_AngleRange.BPF_AngleRange_C.BPF_ExpandAngleRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IncludeAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenterDeg                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinusDeg              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewCenter                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NewPlusMinus                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::STATIC_BPF_ExpandAngleRange(float IncludeAngle, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, float* NewCenter, float* NewPlusMinus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AngleRange.BPF_AngleRange_C.BPF_ExpandAngleRange");

	UBPF_AngleRange_C_BPF_ExpandAngleRange_Params params;
	params.IncludeAngle = IncludeAngle;
	params.RangeCenterDeg = RangeCenterDeg;
	params.RangePlusMinusDeg = RangePlusMinusDeg;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCenter != nullptr)
		*NewCenter = params.NewCenter;
	if (NewPlusMinus != nullptr)
		*NewPlusMinus = params.NewPlusMinus;
}


// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetInAngleRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AngleDeg                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenterDeg                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinusDeg              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::STATIC_BPF_GetInAngleRange(float AngleDeg, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, bool* bInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetInAngleRange");

	UBPF_AngleRange_C_BPF_GetInAngleRange_Params params;
	params.AngleDeg = AngleDeg;
	params.RangeCenterDeg = RangeCenterDeg;
	params.RangePlusMinusDeg = RangePlusMinusDeg;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInRange != nullptr)
		*bInRange = params.bInRange;
}


// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedInRange
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Normalized                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::STATIC_BPF_GetNormalizedInRange(float InAngle, float RangeCenter, float RangePlusMinus, class UObject* __WorldContext, float* Normalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedInRange");

	UBPF_AngleRange_C_BPF_GetNormalizedInRange_Params params;
	params.InAngle = InAngle;
	params.RangeCenter = RangeCenter;
	params.RangePlusMinus = RangePlusMinus;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normalized != nullptr)
		*Normalized = params.Normalized;
}


// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetAngleOutsideRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenterDeg                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinusDeg              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleFromRange                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::STATIC_BPF_GetAngleOutsideRange(float InAngle, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, float* AngleFromRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetAngleOutsideRange");

	UBPF_AngleRange_C_BPF_GetAngleOutsideRange_Params params;
	params.InAngle = InAngle;
	params.RangeCenterDeg = RangeCenterDeg;
	params.RangePlusMinusDeg = RangePlusMinusDeg;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleFromRange != nullptr)
		*AngleFromRange = params.AngleFromRange;
}


// Function BPF_AngleRange.BPF_AngleRange_C.ConvertAngleRange_LimitsToCenter
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Range                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Center                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PlusMinus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::STATIC_ConvertAngleRange_LimitsToCenter(const struct FVector2D& Range, class UObject* __WorldContext, float* Center, float* PlusMinus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_AngleRange.BPF_AngleRange_C.ConvertAngleRange_LimitsToCenter");

	UBPF_AngleRange_C_ConvertAngleRange_LimitsToCenter_Params params;
	params.Range = Range;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (PlusMinus != nullptr)
		*PlusMinus = params.PlusMinus;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
