
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

// Function wgt_HealthOrb.wgt_HealthOrb_C.SetFullTex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              FullTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HealthOrb_C::SetFullTex(class UTexture2D* FullTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.SetFullTex");

	Uwgt_HealthOrb_C_SetFullTex_Params params;
	params.FullTexture = FullTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HealthOrb.wgt_HealthOrb_C.SetFillRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FillRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_HealthOrb_C::SetFillRatio(float FillRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.SetFillRatio");

	Uwgt_HealthOrb_C_SetFillRatio_Params params;
	params.FillRatio = FillRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_HealthOrb.wgt_HealthOrb_C.SetScaleRatio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScaleRatio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_HealthOrb_C::SetScaleRatio(float ScaleRatio, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.SetScaleRatio");

	Uwgt_HealthOrb_C_SetScaleRatio_Params params;
	params.ScaleRatio = ScaleRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function wgt_HealthOrb.wgt_HealthOrb_C.SetUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Use                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HealthOrb_C::SetUse(bool Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.SetUse");

	Uwgt_HealthOrb_C_SetUse_Params params;
	params.Use = Use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HealthOrb.wgt_HealthOrb_C.UpdateIcon
// (Private, BlueprintCallable, BlueprintEvent)

void Uwgt_HealthOrb_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.UpdateIcon");

	Uwgt_HealthOrb_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HealthOrb.wgt_HealthOrb_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_HealthOrb_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.Construct");

	Uwgt_HealthOrb_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HealthOrb.wgt_HealthOrb_C.ExecuteUbergraph_wgt_HealthOrb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HealthOrb_C::ExecuteUbergraph_wgt_HealthOrb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HealthOrb.wgt_HealthOrb_C.ExecuteUbergraph_wgt_HealthOrb");

	Uwgt_HealthOrb_C_ExecuteUbergraph_wgt_HealthOrb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
