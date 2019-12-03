
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

// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetMinimapMode
// (Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Minimap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::STATIC_SetMinimapMode(bool Minimap)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetMinimapMode");

	Uwgt_HUDEnergyStatus_C_SetMinimapMode_Params params;
	params.Minimap = Minimap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetVisible
// (Net, NetReliable, Event, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetVisible");

	Uwgt_HUDEnergyStatus_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeOut
// (NetReliable, NetRequest, Native, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_HUDEnergyStatus_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeOut");

	Uwgt_HUDEnergyStatus_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeIn
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_HUDEnergyStatus_C::STATIC_FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeIn");

	Uwgt_HUDEnergyStatus_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.Tick
// (Net, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.Tick");

	Uwgt_HUDEnergyStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.PreConstruct
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.PreConstruct");

	Uwgt_HUDEnergyStatus_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.ExecuteUbergraph_wgt_HUDEnergyStatus
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::ExecuteUbergraph_wgt_HUDEnergyStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.ExecuteUbergraph_wgt_HUDEnergyStatus");

	Uwgt_HUDEnergyStatus_C_ExecuteUbergraph_wgt_HUDEnergyStatus_Params params;
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
