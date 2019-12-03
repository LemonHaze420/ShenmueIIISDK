
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

// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetTextures
// (Native, NetMulticast, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleImage
// (Net, Native, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::SetVisibleImage(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleImage");

	UWBP_MiniGame_Kachofugetsu_C_SetVisibleImage_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleViewText
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::STATIC_SetVisibleViewText(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleViewText");

	UWBP_MiniGame_Kachofugetsu_C_SetVisibleViewText_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetViewText
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniGame_Kachofugetsu_C::STATIC_SetVisibleButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.SetVisibleButton");

	UWBP_MiniGame_Kachofugetsu_C_SetVisibleButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.Construct
// (Net, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_MiniGame_Kachofugetsu_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.Construct");

	UWBP_MiniGame_Kachofugetsu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayStartFadeAnim
// (Net, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_MiniGame_Kachofugetsu_C::STATIC_PlayStartFadeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayStartFadeAnim");

	UWBP_MiniGame_Kachofugetsu_C_PlayStartFadeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayEndFadeAnim
// (Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_MiniGame_Kachofugetsu_C::STATIC_PlayEndFadeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayEndFadeAnim");

	UWBP_MiniGame_Kachofugetsu_C_PlayEndFadeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniGame_Kachofugetsu.WBP_MiniGame_Kachofugetsu_C.PlayAppearAnim
// (NetReliable, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
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
