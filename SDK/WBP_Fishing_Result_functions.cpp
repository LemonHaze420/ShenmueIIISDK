
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

// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetFishNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FishName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocalizeFishName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_Fishing_Result_C::SetFishNameText(const struct FString& FishName, const struct FString& LocalizeFishName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetFishNameText");

	UWBP_Fishing_Result_C_SetFishNameText_Params params;
	params.FishName = FishName;
	params.LocalizeFishName = LocalizeFishName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetLocalizeFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetLocalizeFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetLocalizeFishNameText");

	UWBP_Fishing_Result_C_GetLocalizeFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishGramText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishGramText");

	UWBP_Fishing_Result_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetImagePositionY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_Result_C::SetImagePositionY(class UImage* ArgImage, float ArgPosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetImagePositionY");

	UWBP_Fishing_Result_C_SetImagePositionY_Params params;
	params.ArgImage = ArgImage;
	params.ArgPosY = ArgPosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishScaleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishScaleText");

	UWBP_Fishing_Result_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishNameText");

	UWBP_Fishing_Result_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetResultVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsException                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_Result_C::SetResultVisible(ESlateVisibility InVisibility, bool IsException)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetResultVisible");

	UWBP_Fishing_Result_C_SetResultVisible_Params params;
	params.InVisibility = InVisibility;
	params.IsException = IsException;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Fishing_Result_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.Construct");

	UWBP_Fishing_Result_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.ExecuteUbergraph_WBP_Fishing_Result
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_Result_C::ExecuteUbergraph_WBP_Fishing_Result(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.ExecuteUbergraph_WBP_Fishing_Result");

	UWBP_Fishing_Result_C_ExecuteUbergraph_WBP_Fishing_Result_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
