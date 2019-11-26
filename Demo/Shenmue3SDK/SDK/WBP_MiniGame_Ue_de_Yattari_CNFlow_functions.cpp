
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayShowResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::PlayShowResult(int Num1, int Num2)
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
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::PlayFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeOut");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeIn
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::PlayFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.PlayFadeIn");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_PlayFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Ue_de_Yattari_CNFlow_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.Reset");

	UWBP_MiniGame_Ue_de_Yattari_CNFlow_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Ue_de_Yattari_CNFlow.WBP_MiniGame_Ue_de_Yattari_CNFlow_C.ExecuteUbergraph_WBP_MiniGame_Ue_de_Yattari_CNFlow
// ()
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
