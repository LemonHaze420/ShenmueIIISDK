
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

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.UpdateLocalizeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Fishing_ShopResult_LineData_C::UpdateLocalizeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.UpdateLocalizeText");

	UWBP_Fishing_ShopResult_LineData_C_UpdateLocalizeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetLocalizeFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::GetLocalizeFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetLocalizeFishNameText");

	UWBP_Fishing_ShopResult_LineData_C_GetLocalizeFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishGramText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishGramText");

	UWBP_Fishing_ShopResult_LineData_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetImagePositionY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_LineData_C::SetImagePositionY(class UImage* ArgImage, float ArgPosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetImagePositionY");

	UWBP_Fishing_ShopResult_LineData_C_SetImagePositionY_Params params;
	params.ArgImage = ArgImage;
	params.ArgPosY = ArgPosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishScaleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishScaleText");

	UWBP_Fishing_ShopResult_LineData_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishNameText");

	UWBP_Fishing_ShopResult_LineData_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Fishing_ShopResult_LineData_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.Construct");

	UWBP_Fishing_ShopResult_LineData_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetCaptcherVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_LineData_C::SetCaptcherVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetCaptcherVisible");

	UWBP_Fishing_ShopResult_LineData_C_SetCaptcherVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.ExecuteUbergraph_WBP_Fishing_ShopResult_LineData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_LineData_C::ExecuteUbergraph_WBP_Fishing_ShopResult_LineData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.ExecuteUbergraph_WBP_Fishing_ShopResult_LineData");

	UWBP_Fishing_ShopResult_LineData_C_ExecuteUbergraph_WBP_Fishing_ShopResult_LineData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
