
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

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetForegroundVisible
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::STATIC_SetForegroundVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetForegroundVisible");

	Uwgt_OrbRingMeter_C_SetForegroundVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetColorByEnum
// (NetReliable, Event, NetResponse, Private, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              Background                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::SetBackgroundTexture(class UTexture2D* Background)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetBackgroundTexture");

	Uwgt_OrbRingMeter_C_SetBackgroundTexture_Params params;
	params.Background = Background;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.PreConstruct
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.PreConstruct");

	Uwgt_OrbRingMeter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.ExecuteUbergraph_wgt_OrbRingMeter
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_OrbRingMeter_C::ExecuteUbergraph_wgt_OrbRingMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.ExecuteUbergraph_wgt_OrbRingMeter");

	Uwgt_OrbRingMeter_C_ExecuteUbergraph_wgt_OrbRingMeter_Params params;
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
