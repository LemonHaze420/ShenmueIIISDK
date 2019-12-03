
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

// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.SetEffectImageTexture
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              EffectImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FreaImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_SetEffectImageTexture(class UTexture2D* EffectImage, class UTexture2D* FreaImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.SetEffectImageTexture");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_SetEffectImageTexture_Params params;
	params.EffectImage = EffectImage;
	params.FreaImage = FreaImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.SetBackImageTexture
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_SetBackImageTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.SetBackImageTexture");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_SetBackImageTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayShowResult
// (Net, NetReliable, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_PlayShowResult(int Num1, int Num2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayShowResult");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_PlayShowResult_Params params;
	params.Num1 = Num1;
	params.Num2 = Num2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeOut
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_PlayFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeOut");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeIn
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_PlayFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeIn");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_PlayFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.Reset
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.Reset");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnAppearNum1
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_OnAppearNum1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnAppearNum1");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_OnAppearNum1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnAppearNum2
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_OnAppearNum2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnAppearNum2");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_OnAppearNum2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnAppearResult
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_OnAppearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnAppearResult");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_OnAppearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnCombineNum
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::STATIC_OnCombineNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.OnCombineNum");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_OnCombineNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari_CNFlow
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari_CNFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari_CNFlow");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari_CNFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
