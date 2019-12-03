
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

// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetEnabledPushVisible
// (Exec, Event, Static, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::STATIC_SetEnabledPushVisible(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetEnabledPushVisible");

	UWBP_SkipSceneIcon_C_SetEnabledPushVisible_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetRate
// (Exec, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Native, Event, NetResponse, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_SkipSceneIcon_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Reset");

	UWBP_SkipSceneIcon_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetTimeGaugeRate
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.SetTimeGaugeRate");

	UWBP_SkipSceneIcon_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Construct
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_SkipSceneIcon_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.Construct");

	UWBP_SkipSceneIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkipSceneIcon.WBP_SkipSceneIcon_C.ExecuteUbergraph_WBP_SkipSceneIcon
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, NetClient)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkipSceneIcon_C::STATIC_ExecuteUbergraph_WBP_SkipSceneIcon(int EntryPoint)
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
