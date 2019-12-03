
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

// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.UpdateLocalizeText
// (Exec, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_Fishing_ShopResult_Result_C::STATIC_UpdateLocalizeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.UpdateLocalizeText");

	UWBP_Fishing_ShopResult_Result_C_UpdateLocalizeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Get_EarningsText
// (NetReliable, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_Result_C::Get_EarningsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Get_EarningsText");

	UWBP_Fishing_ShopResult_Result_C_Get_EarningsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Get_ExploitsText
// (NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_Result_C::Get_ExploitsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Get_ExploitsText");

	UWBP_Fishing_ShopResult_Result_C_Get_ExploitsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetLocalizeFishNameText
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_Result_C::GetLocalizeFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetLocalizeFishNameText");

	UWBP_Fishing_ShopResult_Result_C_GetLocalizeFishNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetFishGramText
// (Net, NetRequest, Exec, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_Result_C::STATIC_GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetFishGramText");

	UWBP_Fishing_ShopResult_Result_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.SetImagePositionY
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_Result_C::STATIC_SetImagePositionY(class UImage* ArgImage, float ArgPosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.SetImagePositionY");

	UWBP_Fishing_ShopResult_Result_C_SetImagePositionY_Params params;
	params.ArgImage = ArgImage;
	params.ArgPosY = ArgPosY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetGenText
// (NetReliable, Exec, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_Result_C::STATIC_GetGenText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetGenText");

	UWBP_Fishing_ShopResult_Result_C_GetGenText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetFishNameText
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_Result_C::GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.GetFishNameText");

	UWBP_Fishing_ShopResult_Result_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Construct
// (NetReliable, Exec, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_Fishing_ShopResult_Result_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.Construct");

	UWBP_Fishing_ShopResult_Result_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.ExecuteUbergraph_WBP_Fishing_ShopResult_Result
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_Result_C::ExecuteUbergraph_WBP_Fishing_ShopResult_Result(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_Result.WBP_Fishing_ShopResult_Result_C.ExecuteUbergraph_WBP_Fishing_ShopResult_Result");

	UWBP_Fishing_ShopResult_Result_C_ExecuteUbergraph_WBP_Fishing_ShopResult_Result_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
