
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

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ConvertDisplayTextArray
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure)
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
// (NetReliable, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_SecondarySubtitlePlayer_C::STATIC_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Stop");

	ABP_SecondarySubtitlePlayer_C_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Play
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::STATIC_Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Play");

	ABP_SecondarySubtitlePlayer_C_Play_Params params;
	params.Label = Label;
	params.Type = Type;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.SetSubtitlesWidgetVisible
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::SetSubtitlesWidgetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.SetSubtitlesWidgetVisible");

	ABP_SecondarySubtitlePlayer_C_SetSubtitlesWidgetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.FinalizeSubtitlesWidget
// (NetReliable, NetResponse, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_SecondarySubtitlePlayer_C::FinalizeSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.FinalizeSubtitlesWidget");

	ABP_SecondarySubtitlePlayer_C_FinalizeSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.CreateSubtitlesWidget
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_SecondarySubtitlePlayer_C::STATIC_CreateSubtitlesWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.CreateSubtitlesWidget");

	ABP_SecondarySubtitlePlayer_C_CreateSubtitlesWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.UserConstructionScript
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_SecondarySubtitlePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.UserConstructionScript");

	ABP_SecondarySubtitlePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveBeginPlay
// (Net, Exec, Event, NetResponse, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_SecondarySubtitlePlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveBeginPlay");

	ABP_SecondarySubtitlePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveEndPlay
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SecondarySubtitlePlayer_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveEndPlay");

	ABP_SecondarySubtitlePlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ExecuteUbergraph_BP_SecondarySubtitlePlayer
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
