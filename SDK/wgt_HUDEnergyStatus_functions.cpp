
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MiniMap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::SetMinimapMode(bool MiniMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetMinimapMode");

	Uwgt_HUDEnergyStatus_C_SetMinimapMode_Params params;
	params.MiniMap = MiniMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_HUDEnergyStatus_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeOut");

	Uwgt_HUDEnergyStatus_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_HUDEnergyStatus_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.FadeIn");

	Uwgt_HUDEnergyStatus_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.PreConstruct");

	Uwgt_HUDEnergyStatus_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.ExecuteUbergraph_wgt_HUDEnergyStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HUDEnergyStatus_C::ExecuteUbergraph_wgt_HUDEnergyStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HUDEnergyStatus.wgt_HUDEnergyStatus_C.ExecuteUbergraph_wgt_HUDEnergyStatus");

	Uwgt_HUDEnergyStatus_C_ExecuteUbergraph_wgt_HUDEnergyStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
