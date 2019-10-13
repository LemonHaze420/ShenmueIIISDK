
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

// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetEnabledPushVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::SetEnabledPushVisible(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetEnabledPushVisible");

	UWBP_SkipSceneIcon_C_SetEnabledPushVisible_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetRate");

	UWBP_SkipSceneIcon_C_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SkipSceneIcon_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Reset");

	UWBP_SkipSceneIcon_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetTimeGaugeRate");

	UWBP_SkipSceneIcon_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SkipSceneIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Construct");

	UWBP_SkipSceneIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.ExecuteUbergraph_WBP_SkipSceneIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::ExecuteUbergraph_WBP_SkipSceneIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.ExecuteUbergraph_WBP_SkipSceneIcon");

	UWBP_SkipSceneIcon_C_ExecuteUbergraph_WBP_SkipSceneIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
