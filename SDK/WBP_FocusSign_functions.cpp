
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_FocusSign.WBP_FocusSign_C.SetIsReadyVisibleOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::SetIsReadyVisibleOff(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetIsReadyVisibleOff");

	UWBP_FocusSign_C_SetIsReadyVisibleOff_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.IsEnabledOff
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::IsEnabledOff(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.IsEnabledOff");

	UWBP_FocusSign_C_IsEnabledOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function WBP_FocusSign.WBP_FocusSign_C.SetOutSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOutSide                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::SetOutSide(bool IsOutSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetOutSide");

	UWBP_FocusSign_C_SetOutSide_Params params;
	params.IsOutSide = IsOutSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.CalcOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::CalcOpacity(float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.CalcOpacity");

	UWBP_FocusSign_C_CalcOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Opacity != nullptr)
		*Opacity = params.Opacity;
}


// Function WBP_FocusSign.WBP_FocusSign_C.updateOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FocusSign_C::updateOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.updateOpacity");

	UWBP_FocusSign_C_updateOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.SetInterpOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Reach                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::SetInterpOpacity(float Target, class UImage* Image, bool* Reach)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetInterpOpacity");

	UWBP_FocusSign_C_SetInterpOpacity_Params params;
	params.Target = Target;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reach != nullptr)
		*Reach = params.Reach;
}


// Function WBP_FocusSign.WBP_FocusSign_C.SetVisibleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::SetVisibleState(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetVisibleState");

	UWBP_FocusSign_C_SetVisibleState_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.SetCornersPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_FocusSign_C::SetCornersPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetCornersPos");

	UWBP_FocusSign_C_SetCornersPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.UpdateFocusRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FocusRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::UpdateFocusRate(float FocusRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.UpdateFocusRate");

	UWBP_FocusSign_C_UpdateFocusRate_Params params;
	params.FocusRate = FocusRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.Tick");

	UWBP_FocusSign_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.PreConstruct");

	UWBP_FocusSign_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.ExecuteUbergraph_WBP_FocusSign
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::ExecuteUbergraph_WBP_FocusSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.ExecuteUbergraph_WBP_FocusSign");

	UWBP_FocusSign_C_ExecuteUbergraph_WBP_FocusSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
