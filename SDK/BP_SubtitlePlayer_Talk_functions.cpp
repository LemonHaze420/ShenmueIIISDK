
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

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.GetVoiceDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::GetVoiceDuration(bool* Result, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.GetVoiceDuration");

	ABP_SubtitlePlayer_Talk_C_GetVoiceDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Play_HintTalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           IsAutoStop                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::Play_HintTalk(bool IsAutoStop, struct FName* Label, struct FName* CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Play_HintTalk");

	ABP_SubtitlePlayer_Talk_C_Play_HintTalk_Params params;
	params.IsAutoStop = IsAutoStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
	if (CharaName != nullptr)
		*CharaName = params.CharaName;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_Talk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.UserConstructionScript");

	ABP_SubtitlePlayer_Talk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.PlayVoice
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 VoiceData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::PlayVoice(class UObject* VoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.PlayVoice");

	ABP_SubtitlePlayer_Talk_C_PlayVoice_Params params;
	params.VoiceData = VoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.OnPlaySound
// (BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_Talk_C::OnPlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.OnPlaySound");

	ABP_SubtitlePlayer_Talk_C_OnPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_Talk_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Stop");

	ABP_SubtitlePlayer_Talk_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ClearSubtitle
// (BlueprintCallable, BlueprintEvent)

void ABP_SubtitlePlayer_Talk_C::ClearSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ClearSubtitle");

	ABP_SubtitlePlayer_Talk_C_ClearSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Skip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalkTask*               SkippedTask                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::Skip(class UTalkTask* SkippedTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Skip");

	ABP_SubtitlePlayer_Talk_C_Skip_Params params;
	params.SkippedTask = SkippedTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ExecuteUbergraph_BP_SubtitlePlayer_Talk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::ExecuteUbergraph_BP_SubtitlePlayer_Talk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ExecuteUbergraph_BP_SubtitlePlayer_Talk");

	ABP_SubtitlePlayer_Talk_C_ExecuteUbergraph_BP_SubtitlePlayer_Talk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
