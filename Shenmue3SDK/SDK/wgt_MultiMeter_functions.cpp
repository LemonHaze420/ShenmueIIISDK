
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_MultiMeter.wgt_MultiMeter_C.CalcMeterRatio
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_MultiMeter_C::CalcMeterRatio(float Min, float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.CalcMeterRatio");

	Uwgt_MultiMeter_C_CalcMeterRatio_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.GetMaxDisplayableRatio
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_MultiMeter_C::GetMaxDisplayableRatio(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.GetMaxDisplayableRatio");

	Uwgt_MultiMeter_C_GetMaxDisplayableRatio_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.GetOrbTresholds
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::GetOrbTresholds(int Index, float* Min, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.GetOrbTresholds");

	Uwgt_MultiMeter_C_GetOrbTresholds_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubScaleRatios
// (Protected, BlueprintCallable, BlueprintEvent)

void Uwgt_MultiMeter_C::UpdateSubScaleRatios()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubScaleRatios");

	Uwgt_MultiMeter_C_UpdateSubScaleRatios_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubFillRatios
// (Protected, BlueprintCallable, BlueprintEvent)

void Uwgt_MultiMeter_C::UpdateSubFillRatios()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubFillRatios");

	Uwgt_MultiMeter_C_UpdateSubFillRatios_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.SetFillRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::SetFillRatio(float* FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.SetFillRatio");

	Uwgt_MultiMeter_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.SetScaleRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::SetScaleRatio(float* ScaleRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.SetScaleRatio");

	Uwgt_MultiMeter_C_SetScaleRatio_Params params;
	params.ScaleRatio = ScaleRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.FindChildOrbs
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::FindChildOrbs(class UPanelWidget* InputPin, bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.FindChildOrbs");

	Uwgt_MultiMeter_C_FindChildOrbs_Params params;
	params.InputPin = InputPin;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_MultiMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.Construct");

	Uwgt_MultiMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.ExecuteUbergraph_wgt_MultiMeter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::ExecuteUbergraph_wgt_MultiMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.ExecuteUbergraph_wgt_MultiMeter");

	Uwgt_MultiMeter_C_ExecuteUbergraph_wgt_MultiMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
