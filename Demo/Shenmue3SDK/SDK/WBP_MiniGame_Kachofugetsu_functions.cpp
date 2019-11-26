
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

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetTextures
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Flower                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Bird                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Wind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Moon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Back                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::SetTextures(class UTexture2D* Flower, class UTexture2D* Bird, class UTexture2D* Wind, class UTexture2D* Moon, class UTexture2D* Back)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetTextures");

	UWBP_MiniGame_Kachofugetsu_C_SetTextures_Params params;
	params.Flower = Flower;
	params.Bird = Bird;
	params.Wind = Wind;
	params.Moon = Moon;
	params.Back = Back;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::SetVisibleImage(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleImage");

	UWBP_MiniGame_Kachofugetsu_C_SetVisibleImage_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleViewText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::SetVisibleViewText(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleViewText");

	UWBP_MiniGame_Kachofugetsu_C_SetVisibleViewText_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetViewText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_MiniGame_Kachofugetsu_C::SetViewText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetViewText");

	UWBP_MiniGame_Kachofugetsu_C_SetViewText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::SetVisibleButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleButton");

	UWBP_MiniGame_Kachofugetsu_C_SetVisibleButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MiniGame_Kachofugetsu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.Construct");

	UWBP_MiniGame_Kachofugetsu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayStartFadeAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Kachofugetsu_C::PlayStartFadeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayStartFadeAnim");

	UWBP_MiniGame_Kachofugetsu_C_PlayStartFadeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayEndFadeAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_MiniGame_Kachofugetsu_C::PlayEndFadeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayEndFadeAnim");

	UWBP_MiniGame_Kachofugetsu_C_PlayEndFadeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayAppearAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMiniGameKFTypeEnum> AppearType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::PlayAppearAnim(float PlayRate, TEnumAsByte<EMiniGameKFTypeEnum> AppearType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayAppearAnim");

	UWBP_MiniGame_Kachofugetsu_C_PlayAppearAnim_Params params;
	params.PlayRate = PlayRate;
	params.AppearType = AppearType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.ExecuteUbergraph_WBP_MiniGame_Kachofugetsu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::ExecuteUbergraph_WBP_MiniGame_Kachofugetsu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.ExecuteUbergraph_WBP_MiniGame_Kachofugetsu");

	UWBP_MiniGame_Kachofugetsu_C_ExecuteUbergraph_WBP_MiniGame_Kachofugetsu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
