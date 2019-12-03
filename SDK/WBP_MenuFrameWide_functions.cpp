
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

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetInsideVisible
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrameWide_C::STATIC_SetInsideVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetInsideVisible");

	UWBP_MenuFrameWide_C_SetInsideVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetGridScale
// (Exec, Native, NetResponse, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_MenuFrameWide_C::SetGridScale(const struct FVector2D& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetGridScale");

	UWBP_MenuFrameWide_C_SetGridScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.InitializeGrid
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWBP_MenuFrameWide_C::InitializeGrid(bool Condition, const struct FVector2D& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.InitializeGrid");

	UWBP_MenuFrameWide_C_InitializeGrid_Params params;
	params.Condition = Condition;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetEnabledGrid
// (NetReliable, Native, Static, Public, NetServer)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrameWide_C::STATIC_SetEnabledGrid(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetEnabledGrid");

	UWBP_MenuFrameWide_C_SetEnabledGrid_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.PreConstruct
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrameWide_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.PreConstruct");

	UWBP_MenuFrameWide_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.ExecuteUbergraph_WBP_MenuFrameWide
// (Net, NetReliable, Event, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuFrameWide_C::STATIC_ExecuteUbergraph_WBP_MenuFrameWide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.ExecuteUbergraph_WBP_MenuFrameWide");

	UWBP_MenuFrameWide_C_ExecuteUbergraph_WBP_MenuFrameWide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
