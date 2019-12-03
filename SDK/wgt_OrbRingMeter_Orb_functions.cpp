
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

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetColorByEnum
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EHealthOrbColor>   Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::STATIC_SetColorByEnum(TEnumAsByte<EHealthOrbColor> Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetColorByEnum");

	Uwgt_OrbRingMeter_Orb_C_SetColorByEnum_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetFillRatio
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::SetFillRatio(float FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetFillRatio");

	Uwgt_OrbRingMeter_Orb_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetScaleRatio
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::SetScaleRatio(float ScaleRatio, bool* Changed)
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
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.PreConstruct");

	Uwgt_OrbRingMeter_Orb_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.ExecuteUbergraph_wgt_OrbRingMeter_Orb
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_Orb_C::ExecuteUbergraph_wgt_OrbRingMeter_Orb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.ExecuteUbergraph_wgt_OrbRingMeter_Orb");

	Uwgt_OrbRingMeter_Orb_C_ExecuteUbergraph_wgt_OrbRingMeter_Orb_Params params;
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
