
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

// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetBackImageColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameBigWheelType> Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_MiniGameBigWheel_CNFlow_C::SetBackImageColor(TEnumAsByte<E_MiniGameBigWheelType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetBackImageColor");

	UWBP_MiniGameBigWheel_CNFlow_C_SetBackImageColor_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetItemImageVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_CNFlow_C::SetItemImageVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetItemImageVisible");

	UWBP_MiniGameBigWheel_CNFlow_C_SetItemImageVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetItemImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_CNFlow_C::SetItemImage(class UTexture2D* Texture, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.SetItemImage");

	UWBP_MiniGameBigWheel_CNFlow_C_SetItemImage_Params params;
	params.Texture = Texture;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_CNFlow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PreConstruct");

	UWBP_MiniGameBigWheel_CNFlow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGameBigWheel_CNFlow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.Construct");

	UWBP_MiniGameBigWheel_CNFlow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayFadeOut
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameBigWheel_CNFlow_C::PlayFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayFadeOut");

	UWBP_MiniGameBigWheel_CNFlow_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayWhiteOut
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameBigWheel_CNFlow_C::PlayWhiteOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayWhiteOut");

	UWBP_MiniGameBigWheel_CNFlow_C_PlayWhiteOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayWhiteInAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGameBigWheel_CNFlow_C::PlayWhiteInAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.PlayWhiteInAnim");

	UWBP_MiniGameBigWheel_CNFlow_C_PlayWhiteInAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.ExecuteUbergraph_WBP_MiniGameBigWheel_CNFlow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGameBigWheel_CNFlow_C::ExecuteUbergraph_WBP_MiniGameBigWheel_CNFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGameBigWheel_CNFlow.WBP_MiniGameBigWheel_CNFlow_C.ExecuteUbergraph_WBP_MiniGameBigWheel_CNFlow");

	UWBP_MiniGameBigWheel_CNFlow_C_ExecuteUbergraph_WBP_MiniGameBigWheel_CNFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
