
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

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetLocalizeInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ExploitsText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EarningsText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_Fishing_ShopResult_C::SetLocalizeInfoText(const struct FString& ExploitsText, const struct FString& EarningsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetLocalizeInfoText");

	UWBP_Fishing_ShopResult_C_SetLocalizeInfoText_Params params;
	params.ExploitsText = ExploitsText;
	params.EarningsText = EarningsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.DeleteAllFishData
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Fishing_ShopResult_C::DeleteAllFishData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.DeleteAllFishData");

	UWBP_Fishing_ShopResult_C_DeleteAllFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.AddFishData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ArgMainName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ArgSubName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ArgCm                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArgGram0                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::AddFishData(const struct FString& ArgMainName, const struct FString& ArgSubName, int ArgCm, int ArgGram0)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.AddFishData");

	UWBP_Fishing_ShopResult_C_AddFishData_Params params;
	params.ArgMainName = ArgMainName;
	params.ArgSubName = ArgSubName;
	params.ArgCm = ArgCm;
	params.ArgGram0 = ArgGram0;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetLocalizeFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_C::GetLocalizeFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetLocalizeFishNameText");

	UWBP_Fishing_ShopResult_C_GetLocalizeFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishGramText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishGramText");

	UWBP_Fishing_ShopResult_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetImagePositionY
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::SetImagePositionY(class UImage* ArgImage, float ArgPosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetImagePositionY");

	UWBP_Fishing_ShopResult_C_SetImagePositionY_Params params;
	params.ArgImage = ArgImage;
	params.ArgPosY = ArgPosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishScaleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_C::GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishScaleText");

	UWBP_Fishing_ShopResult_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_C::GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishNameText");

	UWBP_Fishing_ShopResult_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Fishing_ShopResult_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Construct");

	UWBP_Fishing_ShopResult_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Tick");

	UWBP_Fishing_ShopResult_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.ExecuteUbergraph_WBP_Fishing_ShopResult
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::ExecuteUbergraph_WBP_Fishing_ShopResult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.ExecuteUbergraph_WBP_Fishing_ShopResult");

	UWBP_Fishing_ShopResult_C_ExecuteUbergraph_WBP_Fishing_ShopResult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
