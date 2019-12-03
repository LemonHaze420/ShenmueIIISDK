
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

// Function UMG_Subtitles.UMG_Subtitles_C.isLocalizeChina
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           China                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::isLocalizeChina(bool* China)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.isLocalizeChina");

	UUMG_Subtitles_C_isLocalizeChina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (China != nullptr)
		*China = params.China;
}


// Function UMG_Subtitles.UMG_Subtitles_C.ForceAllDisp
// (Net, NetReliable, NetRequest, Exec, NetResponse, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void UUMG_Subtitles_C::ForceAllDisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.ForceAllDisp");

	UUMG_Subtitles_C_ForceAllDisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.SetPlayRate
// (Net, Exec, Native, NetMulticast, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::SetPlayRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.SetPlayRate");

	UUMG_Subtitles_C_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.SetIsVoice
// (Net, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVoice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::SetIsVoice(bool IsVoice)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.SetIsVoice");

	UUMG_Subtitles_C_SetIsVoice_Params params;
	params.IsVoice = IsVoice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.CreateSubtitleWidgetInfo
// (Net, Exec, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// TArray<struct FString>         TextArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FST_RubyInfo>    RubyInfoArray                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalStringNum                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::CreateSubtitleWidgetInfo(float TotalTime, int TotalStringNum, TArray<struct FString>* TextArray, TArray<struct FST_RubyInfo>* RubyInfoArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.CreateSubtitleWidgetInfo");

	UUMG_Subtitles_C_CreateSubtitleWidgetInfo_Params params;
	params.TotalTime = TotalTime;
	params.TotalStringNum = TotalStringNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextArray != nullptr)
		*TextArray = params.TextArray;
	if (RubyInfoArray != nullptr)
		*RubyInfoArray = params.RubyInfoArray;
}


// Function UMG_Subtitles.UMG_Subtitles_C.UpdateDisplay
// (Exec, NetMulticast, Public, Private, NetServer, NetClient, Const)
// Parameters:
// struct FString                 Body0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Body1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FST_RubyInfo            RubyInfo0                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_RubyInfo            RubyInfo1                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            SubtitleColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            OutlineColor                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUMG_Subtitles_C::UpdateDisplay(const struct FString& Body0, const struct FString& Body1, const struct FST_RubyInfo& RubyInfo0, const struct FST_RubyInfo& RubyInfo1, const struct FLinearColor& SubtitleColor, const struct FLinearColor& OutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.UpdateDisplay");

	UUMG_Subtitles_C_UpdateDisplay_Params params;
	params.Body0 = Body0;
	params.Body1 = Body1;
	params.RubyInfo0 = RubyInfo0;
	params.RubyInfo1 = RubyInfo1;
	params.SubtitleColor = SubtitleColor;
	params.OutlineColor = OutlineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.GetClipperElapsedTimeAlpha
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::STATIC_GetClipperElapsedTimeAlpha(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.GetClipperElapsedTimeAlpha");

	UUMG_Subtitles_C_GetClipperElapsedTimeAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function UMG_Subtitles.UMG_Subtitles_C.GetClipperTime
// (Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::STATIC_GetClipperTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.GetClipperTime");

	UUMG_Subtitles_C_GetClipperTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function UMG_Subtitles.UMG_Subtitles_C.Construct
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void UUMG_Subtitles_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.Construct");

	UUMG_Subtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.Tick
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.Tick");

	UUMG_Subtitles_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.DrawSubtitles
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_TalkCharacterType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         TextArray                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FST_RubyInfo>    RubyInfoArray                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUMG_Subtitles_C::DrawSubtitles(TEnumAsByte<EN_TalkCharacterType> Type, TArray<struct FString> TextArray, TArray<struct FST_RubyInfo> RubyInfoArray, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.DrawSubtitles");

	UUMG_Subtitles_C_DrawSubtitles_Params params;
	params.Type = Type;
	params.TextArray = TextArray;
	params.RubyInfoArray = RubyInfoArray;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.Clear
// (NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void UUMG_Subtitles_C::STATIC_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.Clear");

	UUMG_Subtitles_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.UpdateSubtitleFeedingDisplay
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void UUMG_Subtitles_C::STATIC_UpdateSubtitleFeedingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.UpdateSubtitleFeedingDisplay");

	UUMG_Subtitles_C_UpdateSubtitleFeedingDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.SoundPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void UUMG_Subtitles_C::STATIC_SoundPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.SoundPlay");

	UUMG_Subtitles_C_SoundPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.ExecuteUbergraph_UMG_Subtitles
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_Subtitles_C::ExecuteUbergraph_UMG_Subtitles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.ExecuteUbergraph_UMG_Subtitles");

	UUMG_Subtitles_C_ExecuteUbergraph_UMG_Subtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.onPlayTalkSE__DelegateSignature
// (Net, NetResponse, Static, Public, Private, Protected, NetClient, Const)

void UUMG_Subtitles_C::STATIC_onPlayTalkSE__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.onPlayTalkSE__DelegateSignature");

	UUMG_Subtitles_C_onPlayTalkSE__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_Subtitles.UMG_Subtitles_C.onFinishWaitDestructor__DelegateSignature
// (Net, NetResponse, Static, Public, Private, Protected, NetClient, Const)

void UUMG_Subtitles_C::STATIC_onFinishWaitDestructor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.onFinishWaitDestructor__DelegateSignature");

	UUMG_Subtitles_C_onFinishWaitDestructor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
