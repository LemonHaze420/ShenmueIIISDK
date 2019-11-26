
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

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetForegroundVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::SetForegroundVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetForegroundVisible");

	Uwgt_OrbRingMeter_C_SetForegroundVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetColorByEnum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHealthOrbColor>   Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::SetColorByEnum(TEnumAsByte<EHealthOrbColor> Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetColorByEnum");

	Uwgt_OrbRingMeter_C_SetColorByEnum_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetBackgroundTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Background                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::SetBackgroundTexture(class UTexture2D* Background)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetBackgroundTexture");

	Uwgt_OrbRingMeter_C_SetBackgroundTexture_Params params;
	params.Background = Background;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.PreConstruct");

	Uwgt_OrbRingMeter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.ExecuteUbergraph_wgt_OrbRingMeter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::ExecuteUbergraph_wgt_OrbRingMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.ExecuteUbergraph_wgt_OrbRingMeter");

	Uwgt_OrbRingMeter_C_ExecuteUbergraph_wgt_OrbRingMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
