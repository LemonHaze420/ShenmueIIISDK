
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

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetRotateAnimMode
// (Net, Exec, NetResponse, Static, MulticastDelegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsHighSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::STATIC_SetRotateAnimMode(bool IsHighSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetRotateAnimMode");

	UWBP_Fishing_test_C_SetRotateAnimMode_Params params;
	params.IsHighSpeed = IsHighSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetDistanceMax
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DistanceMax                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetDistanceMax(float DistanceMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetDistanceMax");

	UWBP_Fishing_test_C_SetDistanceMax_Params params;
	params.DistanceMax = DistanceMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetVisibleIcon
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ButtonVisible                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RotateVisible                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LStickVisible                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetVisibleIcon(bool ButtonVisible, bool RotateVisible, bool LStickVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetVisibleIcon");

	UWBP_Fishing_test_C_SetVisibleIcon_Params params;
	params.ButtonVisible = ButtonVisible;
	params.RotateVisible = RotateVisible;
	params.LStickVisible = LStickVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishGramText
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::STATIC_GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishGramText");

	UWBP_Fishing_test_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetImagePositionY
// (NetRequest, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::STATIC_SetImagePositionY(class UImage* ArgImage, float ArgPosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetImagePositionY");

	UWBP_Fishing_test_C_SetImagePositionY_Params params;
	params.ArgImage = ArgImage;
	params.ArgPosY = ArgPosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.StartFishGaugeAnime
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_Fishing_test_C::STATIC_StartFishGaugeAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.StartFishGaugeAnime");

	UWBP_Fishing_test_C_StartFishGaugeAnime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.UpdateFishGauge
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsUpdate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::UpdateFishGauge(bool* IsUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.UpdateFishGauge");

	UWBP_Fishing_test_C_UpdateFishGauge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdate != nullptr)
		*IsUpdate = params.IsUpdate;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetDispFishGaugeAll
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ArgDisp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetDispFishGaugeAll(bool ArgDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetDispFishGaugeAll");

	UWBP_Fishing_test_C_SetDispFishGaugeAll_Params params;
	params.ArgDisp = ArgDisp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.GetDistanceText
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::GetDistanceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetDistanceText");

	UWBP_Fishing_test_C_GetDistanceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishScaleText
// (Net, NetRequest, Native, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::STATIC_GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishScaleText");

	UWBP_Fishing_test_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishNameText
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::STATIC_GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishNameText");

	UWBP_Fishing_test_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.Construct
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_Fishing_test_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.Construct");

	UWBP_Fishing_test_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetCaptcherVisible
// (Net, NetReliable, Exec, Native, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::STATIC_SetCaptcherVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetCaptcherVisible");

	UWBP_Fishing_test_C_SetCaptcherVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetResultVIsible
// (NetReliable, Exec, Native, Event, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::STATIC_SetResultVIsible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetResultVIsible");

	UWBP_Fishing_test_C_SetResultVIsible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.ExecuteUbergraph_WBP_Fishing_test
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::STATIC_ExecuteUbergraph_WBP_Fishing_test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.ExecuteUbergraph_WBP_Fishing_test");

	UWBP_Fishing_test_C_ExecuteUbergraph_WBP_Fishing_test_Params params;
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
