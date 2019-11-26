
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

// Function wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C.SetFillRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SimpleWrapperMeter_C::SetFillRatio(float FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C.SetFillRatio");

	Uwgt_SimpleWrapperMeter_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C.SetScaleRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_SimpleWrapperMeter_C::SetScaleRatio(float ScaleRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C.SetScaleRatio");

	Uwgt_SimpleWrapperMeter_C_SetScaleRatio_Params params;
	params.ScaleRatio = ScaleRatio;

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
