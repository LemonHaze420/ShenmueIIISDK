
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

// Function wgt_MultiMeter.wgt_MultiMeter_C.CalcMeterRatio
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_MultiMeter_C::STATIC_GetMaxDisplayableRatio(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.GetMaxDisplayableRatio");

	Uwgt_MultiMeter_C_GetMaxDisplayableRatio_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.GetOrbTresholds
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::STATIC_GetOrbTresholds(int Index, float* Min, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.GetOrbTresholds");

	Uwgt_MultiMeter_C_GetOrbTresholds_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubScaleRatios
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_MultiMeter_C::STATIC_UpdateSubScaleRatios()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubScaleRatios");

	Uwgt_MultiMeter_C_UpdateSubScaleRatios_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubFillRatios
// (NetReliable, NetRequest, Native, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_MultiMeter_C::UpdateSubFillRatios()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubFillRatios");

	Uwgt_MultiMeter_C_UpdateSubFillRatios_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.SetFillRatio
// (NetReliable, Exec, Static, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::STATIC_SetFillRatio(float FillRatio, bool* Changed)
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
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// float                          ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::SetScaleRatio(float ScaleRatio, bool* Changed)
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
// (Net, Exec, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::STATIC_FindChildOrbs(class UPanelWidget* InputPin, bool Reverse)
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
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_MultiMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.Construct");

	Uwgt_MultiMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MultiMeter.wgt_MultiMeter_C.ExecuteUbergraph_wgt_MultiMeter
// (Net, Exec, Native, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MultiMeter_C::ExecuteUbergraph_wgt_MultiMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MultiMeter.wgt_MultiMeter_C.ExecuteUbergraph_wgt_MultiMeter");

	Uwgt_MultiMeter_C_ExecuteUbergraph_wgt_MultiMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
