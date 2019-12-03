
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

// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.UpdateLocalizeText
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_Fishing_ShopResult_LineData_C::UpdateLocalizeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.UpdateLocalizeText");

	UWBP_Fishing_ShopResult_LineData_C_UpdateLocalizeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetLocalizeFishNameText
// (NetReliable, NetRequest, Exec, Static, Public, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::STATIC_GetLocalizeFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetLocalizeFishNameText");

	UWBP_Fishing_ShopResult_LineData_C_GetLocalizeFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishGramText
// (NetReliable, NetRequest, Native, Event, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::GetFishGramText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishGramText");

	UWBP_Fishing_ShopResult_LineData_C_GetFishGramText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetImagePositionY
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UImage*                  ArgImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ArgPosY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_LineData_C::STATIC_SetImagePositionY(class UImage* ArgImage, float ArgPosY)
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
// (NetRequest, Native, Event, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::GetFishScaleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishScaleText");

	UWBP_Fishing_ShopResult_LineData_C_GetFishScaleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishNameText
// (NetReliable, Exec, Static, Public, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Fishing_ShopResult_LineData_C::STATIC_GetFishNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.GetFishNameText");

	UWBP_Fishing_ShopResult_LineData_C_GetFishNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.Construct
// (NetReliable, NetRequest, Native, Event, Static, Public, Delegate)

void UWBP_Fishing_ShopResult_LineData_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.Construct");

	UWBP_Fishing_ShopResult_LineData_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetCaptcherVisible
// (NetReliable, Native, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_LineData_C::STATIC_SetCaptcherVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.SetCaptcherVisible");

	UWBP_Fishing_ShopResult_LineData_C_SetCaptcherVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Fishing_ShopResult_LineData.WBP_Fishing_ShopResult_LineData_C.ExecuteUbergraph_WBP_Fishing_ShopResult_LineData
// (NetReliable, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Fishing_ShopResult_LineData_C::STATIC_ExecuteUbergraph_WBP_Fishing_ShopResult_LineData(int EntryPoint)
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
