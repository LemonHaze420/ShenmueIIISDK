
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

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetColorByEnum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHealthOrbColor>   Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::SetColorByEnum(TEnumAsByte<EHealthOrbColor> Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetColorByEnum");

	Uwgt_OrbRingMeter_Orb_C_SetColorByEnum_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetFillRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::SetFillRatio(float* FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetFillRatio");

	Uwgt_OrbRingMeter_Orb_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetScaleRatio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::SetScaleRatio(float* ScaleRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetScaleRatio");

	Uwgt_OrbRingMeter_Orb_C_SetScaleRatio_Params params;
	params.ScaleRatio = ScaleRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.PreConstruct");

	Uwgt_OrbRingMeter_Orb_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.ExecuteUbergraph_wgt_OrbRingMeter_Orb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::ExecuteUbergraph_wgt_OrbRingMeter_Orb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.ExecuteUbergraph_wgt_OrbRingMeter_Orb");

	Uwgt_OrbRingMeter_Orb_C_ExecuteUbergraph_wgt_OrbRingMeter_Orb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
