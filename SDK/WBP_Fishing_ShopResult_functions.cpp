
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

// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetLocalizeInfoText
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ExploitsText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EarningsText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_Fishing_ShopResult_C::STATIC_SetLocalizeInfoText(const struct FString& ExploitsText, const struct FString& EarningsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetLocalizeInfoText");

	UWBP_Fishing_ShopResult_C_SetLocalizeInfoText_Params params;
	params.ExploitsText = ExploitsText;
	params.EarningsText = EarningsText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.DeleteAllFishData
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void UWBP_Fishing_ShopResult_C::STATIC_DeleteAllFishData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.DeleteAllFishData");

	UWBP_Fishing_ShopResult_C_DeleteAllFishData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.AddFishData
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// struct FString                 ArgMainName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ArgSubName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ArgCm                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArgGram0                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::STATIC_AddFishData(const struct FString& ArgMainName, const struct FString& ArgSubName, int ArgCm, int ArgGram0)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.AddFishData");

	UWBP_Fishing_ShopResult_C_AddFishData_Params params;
	params.ArgMainName = ArgMainName;
	params.ArgSubName = ArgSubName;
	params.ArgCm = ArgCm;
	params.ArgGram0 = ArgGram0;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetLocalizeFishNameText
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishGramText");

	UWBP_Fishing_ShopResult_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetImagePositionY
// (Exec, Native, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::STATIC_SetImagePositionY(class UImage* ArgImage, float ArgPosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.SetImagePositionY");

	UWBP_Fishing_ShopResult_C_SetImagePositionY_Params params;
	params.ArgImage = ArgImage;
	params.ArgPosY = ArgPosY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.GetFishScaleText
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UWBP_Fishing_ShopResult_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Construct");

	UWBP_Fishing_ShopResult_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.Tick
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
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
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_C::STATIC_ExecuteUbergraph_WBP_Fishing_ShopResult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult.WBP_Fishing_ShopResult_C.ExecuteUbergraph_WBP_Fishing_ShopResult");

	UWBP_Fishing_ShopResult_C_ExecuteUbergraph_WBP_Fishing_ShopResult_Params params;
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
