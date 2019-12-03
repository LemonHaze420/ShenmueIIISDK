
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetNormalizedOutsideRange
// (Net, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Normalized                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::BPF_GetNormalizedOutsideRange(float InAngle, float RangeCenter, float RangePlusMinus, class UObject* __WorldContext, float* Normalized)
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
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          AngleDeg                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenterDeg                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinusDeg              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::BPF_GetInAngleRange(float AngleDeg, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, bool* bInRange)
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
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normalized != nullptr)
		*Normalized = params.Normalized;
}


// Function BPF_AngleRange.BPF_AngleRange_C.BPF_GetAngleOutsideRange
// (NetReliable, Event, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeCenterDeg                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePlusMinusDeg              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleFromRange                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::BPF_GetAngleOutsideRange(float InAngle, float RangeCenterDeg, float RangePlusMinusDeg, class UObject* __WorldContext, float* AngleFromRange)
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
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Range                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Center                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PlusMinus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_AngleRange_C::ConvertAngleRange_LimitsToCenter(const struct FVector2D& Range, class UObject* __WorldContext, float* Center, float* PlusMinus)
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
