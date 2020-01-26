
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

// Function WBP_Fishing_test.WBP_Fishing_test_C.SetRotateAnimMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHighSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetRotateAnimMode(bool IsHighSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetRotateAnimMode");

	UWBP_Fishing_test_C_SetRotateAnimMode_Params params;
	params.IsHighSpeed = IsHighSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetDistanceMax
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishGramText");

	UWBP_Fishing_test_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetImagePositionY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetImagePositionY(class UImage* ArgImage, float ArgPosY)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Fishing_test_C::StartFishGaugeAnime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.StartFishGaugeAnime");

	UWBP_Fishing_test_C_StartFishGaugeAnime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.UpdateFishGauge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUpdate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::UpdateFishGauge(bool* IsUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.UpdateFishGauge");

	UWBP_Fishing_test_C_UpdateFishGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUpdate != nullptr)
		*IsUpdate = params.IsUpdate;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetDispFishGaugeAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArgDisp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetDispFishGaugeAll(bool ArgDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetDispFishGaugeAll");

	UWBP_Fishing_test_C_SetDispFishGaugeAll_Params params;
	params.ArgDisp = ArgDisp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.GetDistanceText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishScaleText");

	UWBP_Fishing_test_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_test_C::GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.GetFishNameText");

	UWBP_Fishing_test_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Fishing_test_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.Construct");

	UWBP_Fishing_test_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetCaptcherVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetCaptcherVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetCaptcherVisible");

	UWBP_Fishing_test_C_SetCaptcherVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.SetResultVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::SetResultVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.SetResultVisible");

	UWBP_Fishing_test_C_SetResultVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_test.WBP_Fishing_test_C.ExecuteUbergraph_WBP_Fishing_test
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_test_C::ExecuteUbergraph_WBP_Fishing_test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_test.WBP_Fishing_test_C.ExecuteUbergraph_WBP_Fishing_test");

	UWBP_Fishing_test_C_ExecuteUbergraph_WBP_Fishing_test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
