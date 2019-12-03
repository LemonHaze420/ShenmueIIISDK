
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
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetLocalizeFishNameText
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Public, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetLocalizeFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetLocalizeFishNameText");

	UWBP_Fishing_Result_C_GetLocalizeFishNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishGramText
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishGramText");

	UWBP_Fishing_Result_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetImagePositionY
// (NetRequest, NetResponse, Public, NetServer, BlueprintEvent, BlueprintPure)
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
// (Net, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishScaleText");

	UWBP_Fishing_Result_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishNameText
// (Net, Exec, Native, Event, NetResponse, Public, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_Result_C::GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.GetFishNameText");

	UWBP_Fishing_Result_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetResultVIsible
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsException                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_Result_C::SetResultVIsible(ESlateVisibility InVisibility, bool IsException)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.SetResultVIsible");

	UWBP_Fishing_Result_C_SetResultVIsible_Params params;
	params.InVisibility = InVisibility;
	params.IsException = IsException;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.Construct
// (NetRequest, Exec, Public, Delegate)

void UWBP_Fishing_Result_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_Result.WBP_Fishing_Result_C.Construct");

	UWBP_Fishing_Result_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_Result.WBP_Fishing_Result_C.ExecuteUbergraph_WBP_Fishing_Result
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_Result_C::STATIC_ExecuteUbergraph_WBP_Fishing_Result(int EntryPoint)
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
