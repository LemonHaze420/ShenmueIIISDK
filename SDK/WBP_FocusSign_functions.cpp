
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

// Function WBP_FocusSign.WBP_FocusSign_C.SetIsReadyVisibleOff
// (NetReliable, Exec, Event, NetResponse, Private, NetServer, BlueprintEvent, BlueprintPure)
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
// (NetRequest, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, Exec, Native, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsOutSide                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::SetOutSide(bool IsOutSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetOutSide");

	UWBP_FocusSign_C_SetOutSide_Params params;
	params.IsOutSide = IsOutSide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.CalcOpacity
// (Net, NetReliable, NetMulticast, Public, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
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


// Function WBP_FocusSign.WBP_FocusSign_C.UpdateOpacity
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_FocusSign_C::STATIC_UpdateOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.UpdateOpacity");

	UWBP_FocusSign_C_UpdateOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.SetInterpOpacity
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, Exec, Native, NetMulticast, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::SetVisibleState(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetVisibleState");

	UWBP_FocusSign_C_SetVisibleState_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.SetCornersPos
// (Net, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, BlueprintPure)

void UWBP_FocusSign_C::SetCornersPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.SetCornersPos");

	UWBP_FocusSign_C_SetCornersPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.UpdateFocusRate
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          FocusRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::UpdateFocusRate(float FocusRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.UpdateFocusRate");

	UWBP_FocusSign_C_UpdateFocusRate_Params params;
	params.FocusRate = FocusRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.Tick
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.PreConstruct
// (NetReliable, Exec, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FocusSign_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FocusSign.WBP_FocusSign_C.PreConstruct");

	UWBP_FocusSign_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FocusSign.WBP_FocusSign_C.ExecuteUbergraph_WBP_FocusSign
// (Event, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
