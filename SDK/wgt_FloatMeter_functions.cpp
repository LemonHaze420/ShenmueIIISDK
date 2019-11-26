
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

// Function wgt_FloatMeter.wgt_FloatMeter_C.SetScaleRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_FloatMeter_C::SetScaleRatio(float ScaleRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FloatMeter.wgt_FloatMeter_C.SetScaleRatio");

	Uwgt_FloatMeter_C_SetScaleRatio_Params params;
	params.ScaleRatio = ScaleRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_FloatMeter.wgt_FloatMeter_C.SetFillRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_FloatMeter_C::SetFillRatio(float FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_FloatMeter.wgt_FloatMeter_C.SetFillRatio");

	Uwgt_FloatMeter_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
