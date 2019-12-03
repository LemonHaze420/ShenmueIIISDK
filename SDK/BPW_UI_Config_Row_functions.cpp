
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

// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetSubtitles
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::STATIC_SetSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetSubtitles");

	UBPW_UI_Config_Row_C_SetSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitSubtitles
// (Exec, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UBPW_UI_Config_Row_C::InitSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitSubtitles");

	UBPW_UI_Config_Row_C_InitSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitTextBlock_3
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::STATIC_InitTextBlock_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitTextBlock_3");

	UBPW_UI_Config_Row_C_InitTextBlock_3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetZoomFinder
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::SetZoomFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetZoomFinder");

	UBPW_UI_Config_Row_C_SetZoomFinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitZoomFinder
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::STATIC_InitZoomFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitZoomFinder");

	UBPW_UI_Config_Row_C_InitZoomFinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDisable
// (Net, NetReliable, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Disabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::SetDisable(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDisable");

	UBPW_UI_Config_Row_C_SetDisable_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.AssignDressMode
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::STATIC_AssignDressMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.AssignDressMode");

	UBPW_UI_Config_Row_C_AssignDressMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.GetParam
// (NetReliable, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EN_ConfigParam>    Param                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::GetParam(TEnumAsByte<EN_ConfigParam>* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.GetParam");

	UBPW_UI_Config_Row_C_GetParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ParseResolution
// (NetRequest, Native, Static, NetMulticast, Private, Delegate, Const)
// Parameters:
// struct FString                 Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntPoint UBPW_UI_Config_Row_C::STATIC_ParseResolution(const struct FString& Resolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ParseResolution");

	UBPW_UI_Config_Row_C_ParseResolution_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitVibration
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void UBPW_UI_Config_Row_C::STATIC_InitVibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitVibration");

	UBPW_UI_Config_Row_C_InitVibration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.CheckReLoadTitle
// (Event, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReLoadTitle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_CheckReLoadTitle(bool* ReLoadTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.CheckReLoadTitle");

	UBPW_UI_Config_Row_C_CheckReLoadTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReLoadTitle != nullptr)
		*ReLoadTitle = params.ReLoadTitle;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetHorizontalKey
// (Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::STATIC_SetHorizontalKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetHorizontalKey");

	UBPW_UI_Config_Row_C_SetHorizontalKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVerticalKey
// (NetReliable, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::STATIC_SetVerticalKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVerticalKey");

	UBPW_UI_Config_Row_C_SetVerticalKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDecideKey
// (Net, Exec, Event, Static, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::STATIC_SetDecideKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDecideKey");

	UBPW_UI_Config_Row_C_SetDecideKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ChangeKey
// (Net, Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// ES3KeyConfigType               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_ChangeKey(ES3KeyConfigType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ChangeKey");

	UBPW_UI_Config_Row_C_ChangeKey_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDifficulty
// (NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<EBattleDifficulty> Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_SetDifficulty(TEnumAsByte<EBattleDifficulty> Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetDifficulty");

	UBPW_UI_Config_Row_C_SetDifficulty_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetGamma
// (Net, NetRequest, Native, Event, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          Gamma                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::SetGamma(float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetGamma");

	UBPW_UI_Config_Row_C_SetGamma_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitVsync
// (NetRequest, Exec, NetMulticast, Private, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::InitVsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitVsync");

	UBPW_UI_Config_Row_C_InitVsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitResolution
// (Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_Config_Row_C::InitResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitResolution");

	UBPW_UI_Config_Row_C_InitResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.MakeResolutionList
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Protected, NetClient, Const)
// Parameters:
// int                            InBorderIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_MakeResolutionList(int InBorderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.MakeResolutionList");

	UBPW_UI_Config_Row_C_MakeResolutionList_Params params;
	params.InBorderIndex = InBorderIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.GetBorderlessValue
// (Net, NetRequest, Exec, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FIntPoint               Output                         (Parm, OutParm, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_GetBorderlessValue(struct FIntPoint* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.GetBorderlessValue");

	UBPW_UI_Config_Row_C_GetBorderlessValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetGraphic
// (NetRequest, Exec, Event, Static, Private, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3GraphicPreset               InGraphicPreset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_SetGraphic(ES3GraphicPreset InGraphicPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetGraphic");

	UBPW_UI_Config_Row_C_SetGraphic_Params params;
	params.InGraphicPreset = InGraphicPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PushRightButton
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::PushRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PushRightButton");

	UBPW_UI_Config_Row_C_PushRightButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetName
// (NetRequest, Exec, Native, NetResponse, NetClient, Const)

void UBPW_UI_Config_Row_C::SetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetName");

	UBPW_UI_Config_Row_C_SetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetLocale
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// ES3Locale                      Locale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_SetLocale(ES3Locale Locale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetLocale");

	UBPW_UI_Config_Row_C_SetLocale_Params params;
	params.Locale = Locale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVoiceLanguage
// (Exec, Native, Event, NetResponse, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3VoiceLanguage               VoiceLanguage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_SetVoiceLanguage(ES3VoiceLanguage VoiceLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVoiceLanguage");

	UBPW_UI_Config_Row_C_SetVoiceLanguage_Params params;
	params.VoiceLanguage = VoiceLanguage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVolume
// (Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SetVolume");

	UBPW_UI_Config_Row_C_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.HiddenChoice
// (NetReliable, Exec, Native, NetResponse, NetClient, Const)

void UBPW_UI_Config_Row_C::HiddenChoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.HiddenChoice");

	UBPW_UI_Config_Row_C_HiddenChoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PushLeftRightCursor
// (Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::PushLeftRightCursor(int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PushLeftRightCursor");

	UBPW_UI_Config_Row_C_PushLeftRightCursor_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitChoiceList
// (NetReliable, NetRequest, Event, Delegate, NetClient, Const)
// Parameters:
// TArray<struct FString>         ChoiceList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_Config_Row_C::InitChoiceList(TArray<struct FString>* ChoiceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.InitChoiceList");

	UBPW_UI_Config_Row_C_InitChoiceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChoiceList != nullptr)
		*ChoiceList = params.ChoiceList;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FocusButton
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsForcus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::FocusButton(bool IsForcus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FocusButton");

	UBPW_UI_Config_Row_C_FocusButton_Params params;
	params.IsForcus = IsForcus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnLoaded_5B1B81D442FCD483358473950A373374
// (NetReliable, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_OnLoaded_5B1B81D442FCD483358473950A373374(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnLoaded_5B1B81D442FCD483358473950A373374");

	UBPW_UI_Config_Row_C_OnLoaded_5B1B81D442FCD483358473950A373374_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnLoaded_58EFD7524DB327D54C6CCE8DF255007C
// (Net, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_OnLoaded_58EFD7524DB327D54C6CCE8DF255007C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnLoaded_58EFD7524DB327D54C6CCE8DF255007C");

	UBPW_UI_Config_Row_C_OnLoaded_58EFD7524DB327D54C6CCE8DF255007C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.Construct
// (NetReliable, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.Construct");

	UBPW_UI_Config_Row_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.Destruct
// (Net, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.Destruct");

	UBPW_UI_Config_Row_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.BindVoicePlayer
// (Net, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::BindVoicePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.BindVoicePlayer");

	UBPW_UI_Config_Row_C_BindVoicePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FinishPlayer
// (Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class ABP_S3SoundPlayer_C*     SoundPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_FinishPlayer(class ABP_S3SoundPlayer_C* SoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FinishPlayer");

	UBPW_UI_Config_Row_C_FinishPlayer_Params params;
	params.SoundPlayer = SoundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.BindSEPlayer
// (Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::BindSEPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.BindSEPlayer");

	UBPW_UI_Config_Row_C_BindSEPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnSaveLoad
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::OnSaveLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.OnSaveLoad");

	UBPW_UI_Config_Row_C_OnSaveLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FinishSaveLoad
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::FinishSaveLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.FinishSaveLoad");

	UBPW_UI_Config_Row_C_FinishSaveLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SelectTitleBack
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::SelectTitleBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.SelectTitleBack");

	UBPW_UI_Config_Row_C_SelectTitleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.DecideTitleBack
// (Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_DecideTitleBack(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.DecideTitleBack");

	UBPW_UI_Config_Row_C_DecideTitleBack_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.CancelTitleBack
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_CancelTitleBack(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.CancelTitleBack");

	UBPW_UI_Config_Row_C_CancelTitleBack_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.TransitionTitle
// (Net, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::TransitionTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.TransitionTitle");

	UBPW_UI_Config_Row_C_TransitionTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PlayTestVoice
// (NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_Config_Row_C::PlayTestVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.PlayTestVoice");

	UBPW_UI_Config_Row_C_PlayTestVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ExecuteUbergraph_BPW_UI_Config_Row
// (NetResponse, Static, NetMulticast, Public, Protected, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Config_Row_C::STATIC_ExecuteUbergraph_BPW_UI_Config_Row(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Config_Row.BPW_UI_Config_Row_C.ExecuteUbergraph_BPW_UI_Config_Row");

	UBPW_UI_Config_Row_C_ExecuteUbergraph_BPW_UI_Config_Row_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
