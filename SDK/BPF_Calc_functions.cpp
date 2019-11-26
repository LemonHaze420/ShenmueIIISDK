
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

// Function BPF_Calc.BPF_Calc_C.CalculateVerticalFOV
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          HFOV                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AspectRatio                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          VFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Calc_C::STATIC_CalculateVerticalFOV(float HFOV, float AspectRatio, class UObject* __WorldContext, float* VFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Calc.BPF_Calc_C.CalculateVerticalFOV");

	UBPF_Calc_C_CalculateVerticalFOV_Params params;
	params.HFOV = HFOV;
	params.AspectRatio = AspectRatio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VFOV != nullptr)
		*VFOV = params.VFOV;
}


// Function BPF_Calc.BPF_Calc_C.distanceVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Is_Distance_2D                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Calc_C::STATIC_distanceVector(const struct FVector& A, const struct FVector& B, bool Is_Distance_2D, class UObject* __WorldContext, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Calc.BPF_Calc_C.distanceVector");

	UBPF_Calc_C_distanceVector_Params params;
	params.A = A;
	params.B = B;
	params.Is_Distance_2D = Is_Distance_2D;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
