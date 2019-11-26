
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

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ConvertDisplayTextArray
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         BaseTextArray                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> ABP_SecondarySubtitlePlayer_C::ConvertDisplayTextArray(const struct FName& CharaName, TArray<struct FString>* BaseTextArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ConvertDisplayTextArray");

	ABP_SecondarySubtitlePlayer_C_ConvertDisplayTextArray_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseTextArray != nullptr)
		*BaseTextArray = params.BaseTextArray;

	return params.ReturnValue;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.GetSubtitleCharaNameString
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InCharaName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_SecondarySubtitlePlayer_C::GetSubtitleCharaNameString(const struct FName& InCharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.GetSubtitleCharaNameString");

	ABP_SecondarySubtitlePlayer_C_GetSubtitleCharaNameString_Params params;
	params.InCharaName = InCharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SecondarySubtitlePlayer_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Stop");

	ABP_SecondarySubtitlePlayer_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Play");

	ABP_SecondarySubtitlePlayer_C_Play_Params params;
	params.Label = Label;
	params.Type = Type;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.SetSubtitlesWidgetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::SetSubtitlesWidgetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.SetSubtitlesWidgetVisible");

	ABP_SecondarySubtitlePlayer_C_SetSubtitlesWidgetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.FinalizeSubtitlesWidget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SecondarySubtitlePlayer_C::FinalizeSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.FinalizeSubtitlesWidget");

	ABP_SecondarySubtitlePlayer_C_FinalizeSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.CreateSubtitlesWidget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_SecondarySubtitlePlayer_C::CreateSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.CreateSubtitlesWidget");

	ABP_SecondarySubtitlePlayer_C_CreateSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SecondarySubtitlePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.UserConstructionScript");

	ABP_SecondarySubtitlePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SecondarySubtitlePlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveBeginPlay");

	ABP_SecondarySubtitlePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveEndPlay");

	ABP_SecondarySubtitlePlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ExecuteUbergraph_BP_SecondarySubtitlePlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::ExecuteUbergraph_BP_SecondarySubtitlePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ExecuteUbergraph_BP_SecondarySubtitlePlayer");

	ABP_SecondarySubtitlePlayer_C_ExecuteUbergraph_BP_SecondarySubtitlePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
